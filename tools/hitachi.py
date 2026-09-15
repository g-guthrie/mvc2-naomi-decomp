#!/usr/bin/env python3
"""Run the bundled Hitachi compiler and assembler in an isolated build directory."""

import argparse
from datetime import datetime, timezone
import hashlib
import json
import os
from pathlib import Path
import platform
import re
import shutil
import struct
import subprocess
import tempfile
import urllib.request

ROOT = Path(__file__).resolve().parents[1]
PACKAGE = ROOT / "toolchain/hitachi-shc-5.0r31"
MANIFEST = ROOT / "toolchain/hitachi-shc-5.0r31.json"
FLAGS = [
    "-comment=nonest", "-cpu=sh4", "-division=cpu", "-fpu=single", "-endian=little",
    "-macsave=0", "-sjis", "-string=const", "-optimize=1", "-speed", "-loop",
    "-inline", "-aggressive=2", "-extra=asm=1800", "-pic=0", "-code=asmcode",
]


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def verify_package(package=PACKAGE, manifest_path=MANIFEST):
    manifest = json.loads(Path(manifest_path).read_text())
    names = {row["name"] for row in manifest["files"]}
    actual_names = {p.name for p in Path(package).iterdir() if p.is_file()}
    if names != actual_names or len(names) != len(manifest["files"]):
        raise ValueError("Hitachi package has missing, duplicate, or unexpected files")
    for row in manifest["files"]:
        if Path(row["name"]).name != row["name"]:
            raise ValueError("invalid Hitachi package filename")
        data = (Path(package) / row["name"]).read_bytes()
        if len(data) != row["size"] or sha256(data) != row["sha256"]:
            raise ValueError(f"Hitachi package checksum mismatch: {row['name']}")
    return manifest


def runtime():
    system, machine = platform.system(), platform.machine().lower()
    if system == "Windows":
        return [], {"name": "native Windows", "host": machine}
    config = json.loads((ROOT / "toolchain/wibo.json").read_text())
    key = "Darwin" if system == "Darwin" else "Linux-x86_64" if system == "Linux" and machine in {"x86_64", "amd64"} else None
    if key is None:
        raise ValueError("Hitachi requires Windows, macOS with x86_64/Rosetta, or Linux x86_64. "
                         "On Apple Silicon run this command on the macOS host; "
                         "for cloud work use a native Linux x86_64 runner.")
    asset = config["assets"][key]
    override = os.environ.get("WIBO")
    path = Path(override).resolve() if override else ROOT / "build/tools" / asset["name"]
    if not path.exists():
        if override:
            raise ValueError(f"WIBO override does not exist: {path}")
        path.parent.mkdir(parents=True, exist_ok=True)
        url = f"https://github.com/decompals/wibo/releases/download/{config['version']}/{asset['name']}"
        print(f"Fetching pinned wibo {config['version']} ({asset['name']}) ...", flush=True)
        with urllib.request.urlopen(url, timeout=60) as response:
            data = response.read()
        if sha256(data) != asset["sha256"]:
            raise ValueError("downloaded wibo checksum mismatch")
        temp = path.with_suffix(".download")
        temp.write_bytes(data)
        temp.chmod(0o755)
        temp.replace(path)
    if sha256(path.read_bytes()) != asset["sha256"]:
        raise ValueError("wibo checksum mismatch; use the pinned release in toolchain/wibo.json")
    return [str(path)], {"name": asset["name"], "version": config["version"], "sha256": asset["sha256"]}


def compile_source(source, verbose=True):
    manifest = verify_package()
    source = Path(source)
    if not source.is_absolute():
        source = ROOT / source
    source = source.resolve()
    try:
        relative = source.relative_to(ROOT)
    except ValueError:
        raise ValueError("source must be inside this checkout") from None
    if source.suffix != ".c" or not source.is_file():
        raise ValueError(f"C source not found: {relative}")
    runner, runtime_info = runtime()
    build = ROOT / "build"
    build.mkdir(exist_ok=True)
    output = build / "shc" / relative.with_suffix("")
    output.mkdir(parents=True, exist_ok=True)
    for name in ("output.src", "output.obj", "output.elf", "evidence.json"):
        (output / name).unlink(missing_ok=True)
    log = []
    with tempfile.TemporaryDirectory(prefix="hitachi-", dir=build) as directory:
        sandbox = Path(directory)
        for row in manifest["files"]:
            shutil.copyfile(PACKAGE / row["name"], sandbox / row["name"])
        for folder in ("src", "include"):
            if (ROOT / folder).is_dir():
                shutil.copytree(ROOT / folder, sandbox / folder)
        copied_source = sandbox / relative
        copied_source.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(source, copied_source)
        for header in source.parent.glob("*.h"):
            shutil.copyfile(header, copied_source.parent / header.name)
        environment = {**os.environ, "SHC_LIB": ".", "SHC_TMP": "."}

        def run(exe, args):
            result = subprocess.run([*runner, str(sandbox / exe), *args], cwd=sandbox,
                                    env=environment, stdout=subprocess.PIPE,
                                    stderr=subprocess.STDOUT, text=True, errors="replace", timeout=120)
            log.append(result.stdout)
            (output / "compile.log").write_text("\n".join(log))
            if verbose:
                print(result.stdout, end="")
            if result.returncode:
                raise ValueError(f"{exe} failed with exit {result.returncode}; see {output.relative_to(ROOT)}/compile.log")

        run("shc.exe", [relative.as_posix(), *FLAGS, "-objectfile=output.src"])
        if manifest["version"] not in log[0]:
            raise ValueError("compiler banner differs from pinned SHC version")
        assembly = sandbox / "output.src"
        if not assembly.is_file() or b".SECTION" not in assembly.read_bytes():
            raise ValueError("SHC did not generate an assembly source file")
        run("asmsh.exe", ["output.src", "-cpu=sh4", "-endian=little", "-object=output.obj"])
        if not re.search(r"TOTAL ERRORS\s+0\b", log[-1]):
            raise ValueError("Hitachi assembler did not report zero errors")
        obj = sandbox / "output.obj"
        if not obj.is_file() or obj.stat().st_size < 32 or obj.read_bytes()[0] != 0x80:
            raise ValueError("Hitachi assembler did not generate a SYSROF object")
        run("elfcnv.exe", ["output.obj", "output.elf"])
        elf = (sandbox / "output.elf").read_bytes()
        if len(elf) < 52 or elf[:7] != b"\x7fELF\x01\x01\x01" or struct.unpack_from("<HH", elf, 16) != (1, 42):
            raise ValueError("Hitachi converter did not generate a little-endian SH relocatable ELF")
        for name in ("output.src", "output.obj", "output.elf"):
            shutil.copyfile(sandbox / name, output / name)
    evidence = {
        "compiler_id": manifest["compiler_id"], "version": manifest["version"],
        "package_files_verified": len(manifest["files"]),
        "package_manifest_sha256": sha256(MANIFEST.read_bytes()),
        "runtime": runtime_info, "flags": FLAGS,
        "source": relative.as_posix(), "source_sha256": sha256(source.read_bytes()),
        "assembly_sha256": sha256((output / "output.src").read_bytes()),
        "object_sha256": sha256((output / "output.obj").read_bytes()),
        "elf_sha256": sha256((output / "output.elf").read_bytes()),
        "assembled": True, "elf_converted": True,
        "object_format": "Hitachi SYSROF plus converted ELF32-SH relocatable object",
        "checked_at": datetime.now(timezone.utc).isoformat(timespec="seconds"),
    }
    (output / "evidence.json").write_text(json.dumps(evidence, indent=2) + "\n")
    print(f"SHC compiled and assembled {relative}: {output.relative_to(ROOT)}", flush=True)
    return evidence


def check():
    path = ROOT / "build/hitachi-check.json"
    path.unlink(missing_ok=True)
    evidence = compile_source("tools/probes/hitachi_smoke.c", verbose=False)
    path.write_text(json.dumps(evidence, indent=2) + "\n")
    print(f"PASS: Hitachi SHC 5.0 Release 31; {evidence['package_files_verified']}/28 package files verified; C compile, assemble, and ELF conversion succeeded.")
    return evidence


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("command", choices=["check", "compile", "verify-package"])
    parser.add_argument("--source")
    args = parser.parse_args()
    try:
        if args.command == "compile":
            if not args.source:
                parser.error("compile requires --source")
            compile_source(args.source)
        elif args.command == "check":
            check()
        else:
            manifest = verify_package()
            print(f"PASS: {manifest['version']}; {len(manifest['files'])} package files verified.")
    except (ValueError, OSError, subprocess.TimeoutExpired) as exc:
        raise SystemExit(str(exc))
