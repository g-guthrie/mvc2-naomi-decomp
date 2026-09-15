#!/usr/bin/env python3
"""Verify the original set, compile source replacements, and prove exact placement."""

import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import struct
import subprocess
import zipfile
import zlib

ROOT = Path(__file__).resolve().parents[1]
CFLAGS = [
    "-m4", "-ml", "-O2", "-std=c11", "-Wall", "-Wextra", "-Werror",
    "-ffreestanding", "-fno-builtin", "-fno-pic", "-fno-pie",
    "-fno-stack-protector", "-fno-asynchronous-unwind-tables",
    "-fno-unwind-tables", "-ffunction-sections", "-fdata-sections",
    "-falign-functions=2", "-falign-jumps=2", "-falign-labels=2",
    "-falign-loops=2", "-fno-ident",
]


def digest(data):
    return hashlib.sha256(data).hexdigest()


def load_json(path):
    return json.loads(Path(path).read_text())


def source_fingerprint(root=ROOT):
    """Bind evidence to build inputs, independently of generated report commits."""
    paths = [root / "Makefile", root / "Dockerfile"]
    for folder in ("src", "config", "tools", "tests"):
        paths.extend(p for p in (root / folder).rglob("*")
                     if p.is_file() and "__pycache__" not in p.parts and p.suffix != ".pyc")
    h = hashlib.sha256()
    for path in sorted(paths):
        h.update(path.relative_to(root).as_posix().encode() + b"\0")
        h.update(path.read_bytes())
    return h.hexdigest()


def validate_units(units, target):
    base, size = target["main"]["address"], target["main"]["size"]
    names = set()
    end = base
    for row in sorted(units, key=lambda r: r["address"]):
        name = row["name"]
        if name in names or not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", name):
            raise ValueError(f"invalid or duplicate unit: {name}")
        names.add(name)
        if row["kind"] not in {"code", "data"}:
            raise ValueError(f"unknown kind: {name}")
        if row["status"] not in {"assembly", "candidate", "matching"}:
            raise ValueError(f"unknown status: {name}")
        if row["size"] <= 0 or row["address"] < base or row["address"] + row["size"] > base + size:
            raise ValueError(f"unit outside main program: {name}")
        if row["address"] < end:
            raise ValueError(f"overlapping unit: {name}")
        end = row["address"] + row["size"]
        if row["status"] == "matching":
            if row.get("representation") != "reconstructed":
                raise ValueError(f"placeholder cannot earn progress: {name}")
            source = row.get("source", "")
            if not source.startswith("src/") or ".." in Path(source).parts:
                raise ValueError(f"invalid source path: {name}")
            if not re.fullmatch(r"\.(text|data|rodata)\.[A-Za-z_][A-Za-z0-9_]*", row.get("section", "")):
                raise ValueError(f"invalid source section: {name}")


def read_verified_roms(archive, target):
    expected = {r["name"]: r for r in target["roms"]}
    data = {}
    with zipfile.ZipFile(archive) as z:
        names = [i.filename for i in z.infolist() if not i.is_dir()]
        if len(names) != len(set(names)) or set(names) != set(expected):
            raise ValueError("ROM archive has missing, duplicate, or unexpected entries")
        for name, row in expected.items():
            blob = z.read(name)  # zipfile also validates the archive CRC.
            actual = (len(blob), f"{zlib.crc32(blob):08x}", hashlib.sha1(blob).hexdigest())
            if actual != (row["size"], row["crc32"], row["sha1"]):
                raise ValueError(f"retail ROM verification failed: {name}")
            data[name] = blob
    return data


def prepare():
    target = load_json(ROOT / "config/target.json")
    roms = read_verified_roms(ROOT / target["archive"], target)
    program = roms[target["program_rom"]]
    for kind in ("main", "test"):
        part = target[kind]
        actual_header = struct.unpack_from("<III", program, part["header_offset"])
        if actual_header != (part["rom_offset"], part["address"], part["size"]):
            raise ValueError(f"{kind} boot descriptor differs from target")
        blob = program[part["rom_offset"]:part["rom_offset"] + part["size"]]
        if digest(blob) != part["sha256"]:
            raise ValueError(f"{kind} program fingerprint differs from target")
        out = ROOT / "orig/unpacked" / f"{kind}.bin"
        out.parent.mkdir(parents=True, exist_ok=True)
        out.write_bytes(blob)
    (ROOT / "orig/unpacked" / target["program_rom"]).write_bytes(program)
    print(f"Verified {len(roms)}/{len(roms)} original ROMs and both boot descriptors.")
    return target, program


def read_elf(path):
    """Minimal ELF32/SH reader; no target emulator or third-party Python package."""
    blob = Path(path).read_bytes()
    if len(blob) < 52 or blob[:7] != b"\x7fELF\x01\x01\x01":
        raise ValueError("expected little-endian ELF32")
    header = struct.unpack_from("<16sHHIIIIIHHHHHH", blob)
    if header[2] != 42 or header[11] != 40:
        raise ValueError("expected SH ELF with standard section headers")
    shoff, shnum, shstrndx = header[6], header[12], header[13]
    raw = [struct.unpack_from("<10I", blob, shoff + i * 40) for i in range(shnum)]
    strings = blob[raw[shstrndx][4]:raw[shstrndx][4] + raw[shstrndx][5]]

    def string(table, offset):
        return table[offset:table.index(b"\0", offset)].decode("ascii")

    sections = []
    for r in raw:
        sections.append({"name": string(strings, r[0]), "type": r[1], "flags": r[2],
                         "address": r[3], "size": r[5], "link": r[6],
                         "data": blob[r[4]:r[4] + r[5]] if r[1] != 8 else b""})
    symbols = {}
    for section in sections:
        if section["type"] != 2:
            continue
        table = sections[section["link"]]["data"]
        for off in range(0, len(section["data"]), 16):
            name, value, size, info, other, index = struct.unpack_from("<IIIBBH", section["data"], off)
            if name:
                symbols[string(table, name)] = {"address": value, "size": size,
                                                "type": info & 15, "section": index}
    return {"sections": sections, "symbols": symbols, "type": header[1]}


def checked_replacements(original, base, units, elf):
    rebuilt = bytearray(original)
    verified = []
    for row in units:
        if row["status"] != "matching":
            continue
        symbol = elf["symbols"].get(row["name"])
        if not symbol or (symbol["address"], symbol["size"], symbol["type"]) != (
                row["address"], row["size"], 2 if row["kind"] == "code" else 1):
            raise ValueError(f"linked symbol/address/size mismatch: {row['name']}")
        section = elf["sections"][symbol["section"]]
        if section["name"] != row["section"] or section["address"] != row["address"]:
            raise ValueError(f"linked section/address mismatch: {row['name']}")
        emitted = section["data"]
        offset = row["address"] - base
        reference = original[offset:offset + row["size"]]
        if len(emitted) != row["size"] or emitted != reference:
            raise ValueError(f"compiled bytes differ from retail: {row['name']}")
        rebuilt[offset:offset + row["size"]] = emitted
        verified.append({"name": row["name"], "kind": row["kind"], "address": row["address"],
                         "size": len(emitted), "sha256": digest(emitted), "linked": True})
    if rebuilt != original:
        raise ValueError("full rebuilt program differs from retail")
    return bytes(rebuilt), verified


def run(args):
    subprocess.run(args, cwd=ROOT, check=True)


def verify():
    evidence = ROOT / "build/evidence.json"
    evidence.unlink(missing_ok=True)  # Failed builds cannot leave reusable success evidence.
    target, program = prepare()
    units = load_json(ROOT / "config/units.json")
    validate_units(units, target)
    main = (ROOT / "orig/unpacked/main.bin").read_bytes()
    for row in units:
        offset = row["address"] - target["main"]["address"]
        if digest(main[offset:offset + row["size"]]) != row["sha256"]:
            raise ValueError(f"catalog fingerprint differs from retail: {row['name']}")
        for ref in row.get("references", []):
            value = struct.unpack_from("<I", program, ref["rom_offset"])[0]
            if value != row["address"]:
                raise ValueError(f"entry-point reference differs: {row['name']}")
    selected = [u for u in units if u["status"] == "matching"]
    if not selected:
        raise ValueError("no matching source units to build")
    cc = os.environ.get("CC_SH", "sh4-linux-gnu-gcc-13")
    ld = os.environ.get("LD_SH", "sh4-linux-gnu-ld")
    objdir = ROOT / "build/obj"
    objdir.mkdir(parents=True, exist_ok=True)
    objects = []
    for source in sorted({u["source"] for u in selected}):
        obj = f"build/obj/{Path(source).stem}_{digest(source.encode())[:8]}.o"
        run([cc, *CFLAGS, "-c", source, "-o", obj])
        allowed = {u["section"] for u in selected if u["source"] == source}
        for section in read_elf(ROOT / obj)["sections"]:
            if section["flags"] & 2 and section["size"] and section["name"] not in allowed:
                raise ValueError(f"unaccounted allocated section: {source}: {section['name']}")
        objects.append(obj)
    script = ['OUTPUT_FORMAT("elf32-sh-linux")', 'OUTPUT_ARCH(sh)',
              'INCLUDE config/symbols.ld', 'SECTIONS {']
    for row in sorted(selected, key=lambda r: r["address"]):
        section = row["section"]
        script.extend([
            f'  {section} 0x{row["address"]:08x} : {{ KEEP(*({section})) }}',
            f'  ASSERT(SIZEOF({section}) == {row["size"]}, "size: {row["name"]}")',
        ])
    script.extend(['  /DISCARD/ : { *(.comment) *(.note.GNU-stack) *(.text) *(.data) *(.bss) }', '}'])
    (ROOT / "build/link.ld").write_text("\n".join(script) + "\n")
    run([ld, "-EL", "-e", "0", "--fatal-warnings", "--orphan-handling=error",
         "-T", "build/link.ld", "-Map=build/link.map", "-o", "build/matching.elf", *objects])
    elf = read_elf(ROOT / "build/matching.elf")
    if elf["type"] != 2:
        raise ValueError("link did not produce an executable ELF")
    rebuilt, verified = checked_replacements(main, target["main"]["address"], units, elf)
    (ROOT / "build/main.rebuilt.bin").write_bytes(rebuilt)
    epr = bytearray(program)
    offset = target["main"]["rom_offset"]
    epr[offset:offset + len(rebuilt)] = rebuilt
    if bytes(epr) != program:
        raise ValueError("full rebuilt program ROM differs from retail")
    (ROOT / "build" / target["program_rom"]).write_bytes(epr)
    result = {
        "schema_version": 1, "source_fingerprint": source_fingerprint(),
        "source_commit": os.environ.get("SOURCE_COMMIT", "local"),
        "roms_verified": len(target["roms"]), "verified_units": verified,
        "compiler": subprocess.check_output([cc, "--version"], text=True).splitlines()[0],
        "cflags": CFLAGS,
        "main_sha256": digest(rebuilt), "program_rom_sha256": digest(epr),
        "full_main_matches": True, "full_program_rom_matches": True,
    }
    evidence.write_text(json.dumps(result, indent=2) + "\n")
    print(f"PASS: {len(verified)} source units / {sum(u['size'] for u in verified)} bytes "
          f"compile, match, and link at original addresses.")
    print(f"PASS: complete {len(rebuilt):,}-byte main image and {len(epr):,}-byte program ROM match retail.")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("command", choices=["prepare", "verify"])
    args = parser.parse_args()
    try:
        {"prepare": prepare, "verify": verify}[args.command]()
    except (ValueError, OSError, zipfile.BadZipFile) as exc:
        raise SystemExit(str(exc))
