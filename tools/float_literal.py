#!/usr/bin/env python3
"""Print a decimal spelling that SHC parses to exactly the given float bits.

    python3 tools/float_literal.py 0x41092492 0xbf2b6db6

SHC's decimal parser is off by one ulp for many shortest spellings, so a pool
float that differs from retail in its last hex digit needs a nudged spelling.
This compiles a table of candidates and reports the first that lands.
"""
import math
import os
import re
import shutil
import struct
import subprocess
import sys

from core import ROOT, load, runner


def candidates(bits):
    value = struct.unpack('<f', struct.pack('<I', bits))[0]
    ulp = math.ulp(value)
    seen = []
    for k in range(-16, 17):
        for digits in (7, 8, 9, 10):
            text = format(value + k * ulp / 4, f'.{digits}g')
            if text not in seen:
                seen.append(text)
    return seen


def main():
    targets = [int(arg, 16) for arg in sys.argv[1:]]
    if not targets:
        sys.exit(__doc__)
    table = [(bits, text) for bits in targets for text in candidates(bits)]
    work = ROOT / 'build' / f'work-float-{os.getpid()}'
    shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
    try:
        (work / 'f.c').write_text('const float t[] = {\n' + ',\n'.join(f'{text}f' for _, text in table) + '\n};\n')
        flags = load(ROOT / 'config/compiler.json')['sets']['game']
        env = {**os.environ, 'SHC_LIB': '.', 'SHC_TMP': '.'}
        subprocess.run(runner() + [str(work / 'shc.exe'), 'f.c', *flags, '-code=asmcode', '-object=f.src'],
                       cwd=work, env=env, check=True, capture_output=True, timeout=120)
        values = [int(h, 16) for line in (work / 'f.src').read_text(errors='replace').splitlines()
                  if '.DATA.L' in line for h in re.findall(r"H'([0-9A-F]+)", line)]
    finally:
        shutil.rmtree(work, ignore_errors=True)
    found = {}
    for (bits, text), got in zip(table, values):
        if got == bits and bits not in found:
            found[bits] = text
    for bits in targets:
        print(f'0x{bits:08x} {found[bits] + "f" if bits in found else "no spelling found"}')


if __name__ == '__main__':
    main()
