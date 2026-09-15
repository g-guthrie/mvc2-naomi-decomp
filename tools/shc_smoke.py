#!/usr/bin/env python3
"""Compile tests/shc_return0.c with Hitachi SHC via wibo and check the object."""

import os
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "tests" / "shc_return0.c"
ROF2ELF = ROOT / "tools" / "rof2elf.py"
EXPECTED = bytes.fromhex("0b0000e0")  # rts; mov #0,r0


def require(path, what):
    if not path or not Path(path).exists():
        raise SystemExit(f"{what} not found: {path}")
    return Path(path)


def main():
    wibo = require(os.environ.get("WIBO") or shutil.which("wibo"), "wibo")
    shc_bin = require(os.environ.get("SHC_BIN"), "SHC_BIN directory")
    shc = shc_bin / "shc.exe"
    if not shc.exists():
        raise SystemExit(f"shc.exe missing in {shc_bin}")
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
        cmd = [
            str(wibo), str(tmp / "shc.exe"), "src.c",
            "-comment=nonest", "-cpu=sh4", "-division=cpu", "-endian=little",
            "-macsave=0", "-sjis", "-string=const", "-optimize=1",
            "-object=src.obj",
        ]
        subprocess.check_call(cmd, cwd=tmp, env=env)
        obj = tmp / "src.obj"
        if not obj.exists():
            raise SystemExit("SHC did not create src.obj")
        elf = tmp / "src.elf"
        subprocess.check_call(
            [sys.executable, str(ROF2ELF), str(obj), str(elf), "--isa=sh4"], cwd=tmp)
        data = elf.read_bytes()
        if EXPECTED not in data:
            raise SystemExit("SHC ELF does not contain rts; mov #0,r0")
        print("SHC smoke: wibo compiled tests/shc_return0.c; object contains rts; mov #0,r0")


if __name__ == "__main__":
    try:
        main()
    except subprocess.CalledProcessError as exc:
        raise SystemExit(f"SHC smoke failed: {exc}") from exc
