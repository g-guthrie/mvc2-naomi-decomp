#!/usr/bin/env python3
"""Prove SHC can bake retail's 20-byte prefix of func_0c047b0c (disp 1d90)."""

import os
import shutil
import struct
import subprocess
import sys
import tempfile
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "tests" / "shc_b0c_prefix.c"
ROF2ELF = ROOT / "tools" / "rof2elf.py"
PREFIX_LEN = 20  # through and r5,r3; epilogue still differs


def retail_prefix():
    target = json_load(ROOT / "config/target.json")
    with zipfile.ZipFile(ROOT / "orig/mvsc2.zip") as z:
        program = z.read(target["program_rom"])
    main = program[target["main"]["rom_offset"]:
                   target["main"]["rom_offset"] + target["main"]["size"]]
    off = 0x0C047B0C - target["main"]["address"]
    return main[off:off + PREFIX_LEN]


def json_load(path):
    import json
    return json.loads(path.read_text())


def elf_text(blob: bytes) -> bytes:
    shoff = int.from_bytes(blob[32:36], "little")
    shentsize = int.from_bytes(blob[46:48], "little")
    shnum = int.from_bytes(blob[48:50], "little")
    shstrndx = int.from_bytes(blob[50:52], "little")

    def sh(i):
        o = shoff + i * shentsize
        return blob[o:o + shentsize]

    strs = sh(shstrndx)
    strtab = blob[int.from_bytes(strs[16:20], "little"):][
        : int.from_bytes(strs[20:24], "little")]
    for i in range(shnum):
        s = sh(i)
        name = strtab[int.from_bytes(s[0:4], "little"):].split(b"\0", 1)[0]
        if name == b".text":
            off = int.from_bytes(s[16:20], "little")
            size = int.from_bytes(s[20:24], "little")
            return blob[off:off + size]
    raise SystemExit("no .text in SHC ELF")


def main():
    wibo = os.environ.get("WIBO") or shutil.which("wibo")
    shc_bin = os.environ.get("SHC_BIN")
    if not wibo or not shc_bin:
        raise SystemExit("WIBO and SHC_BIN must be set")
    shc_bin = Path(shc_bin)
    expected = retail_prefix()
    src = SOURCE.read_bytes().replace(b"\n", b"\r\n")
    with tempfile.TemporaryDirectory() as tmp:
        tmp = Path(tmp)
        for item in shc_bin.iterdir():
            if item.is_file():
                shutil.copy2(item, tmp / item.name)
        (tmp / "src.c").write_bytes(src)
        env = os.environ.copy()
        env["SHC_LIB"] = str(tmp)
        env["SHC_TMP"] = str(tmp)
        subprocess.check_call([
            wibo, str(tmp / "shc.exe"), "src.c",
            "-comment=nonest", "-cpu=sh4", "-endian=little", "-sjis",
            "-string=const", "-optimize=1", "-object=src.obj",
        ], cwd=tmp, env=env)
        subprocess.check_call(
            [sys.executable, str(ROF2ELF), str(tmp / "src.obj"),
             str(tmp / "src.elf"), "--isa=sh4"], cwd=tmp)
        got = elf_text((tmp / "src.elf").read_bytes())[:PREFIX_LEN]
        if got != expected:
            raise SystemExit(
                f"SHC prefix mismatch\n got {got.hex()}\n want {expected.hex()}")
        print(f"SHC b0c prefix: first {PREFIX_LEN} bytes match retail "
              f"(1d90 pool disp baked by TU padding)")


if __name__ == "__main__":
    try:
        main()
    except subprocess.CalledProcessError as exc:
        raise SystemExit(f"SHC b0c prefix failed: {exc}") from exc
