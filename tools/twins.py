#!/usr/bin/env python3
"""For each function in a span, find a verified function of the same shape.

    python3 tools/twins.py 0x0c118fc8 276

Two functions have the same shape when their instructions agree once
immediates, displacements, branch targets and pool literals are masked. The
game stamps its state handlers from a few templates, so a verified twin's C
is usually the target's C with other constants, offsets and callees. The tool
prints, per function, the twin's source with its address, and the words that
differ so the constants can be read off the disassembly.
"""
import bisect
import collections
import re
import struct
import sys

from core import ROOT, load, number, verify_rom
from ghidra_draft import function_starts


def shape(image, base, lo, hi):
    out = []
    for pc in range(lo, hi, 2):
        w = struct.unpack_from('<H', image, pc - base)[0]
        top = w >> 12
        if top in (0x9, 0xd, 0xe, 0x7):
            out.append(top << 12 | (w & 0x0f00))
        elif top in (0xa, 0xb, 0xc):
            out.append(top << 12)
        elif top == 0x8:
            out.append(w & 0xff00)
        elif top in (0x1, 0x5):
            out.append(w & 0xfff0)
        else:
            out.append(w)
    return tuple(out)


def main():
    start, size = number(sys.argv[1]), int(sys.argv[2])
    target = load(ROOT / 'config/target.json')
    program = verify_rom(target)
    offset, base, total = (number(target['main'][k]) for k in ('rom_offset', 'address', 'size'))
    image = program[offset:offset + total]
    ranges = [(number(r['address']), number(r['size']), r['kind']) for r in load(ROOT / 'config/mapping.json')['ranges']]
    starts = sorted(function_starts(image, base, ranges))
    code = sorted((lo, lo + n) for lo, n, kind in ranges if kind == 'code')
    heads = [c[0] for c in code]

    def extent(a):
        i = bisect.bisect_right(starts, a)
        nxt = starts[i] if i < len(starts) else None
        j = bisect.bisect_right(heads, a) - 1
        end = code[j][1]
        while j + 1 < len(code) and code[j + 1][0] == end:
            j += 1
            end = code[j][1]
        return min(end, nxt) if nxt else end

    verified = {}
    for unit in load(ROOT / 'config/units.json'):
        if unit['mode'] != 'verified':
            continue
        for symbol, address in unit.get('exports', {}).items():
            if symbol.startswith('_func_'):
                verified[number(address)] = unit['source']
    groups = collections.defaultdict(list)
    for a in starts:
        groups[shape(image, base, a, extent(a))].append(a)
    for a in [s for s in starts if start <= s < start + size]:
        e = extent(a)
        group = groups[shape(image, base, a, e)]
        twins = [t for t in group if t in verified and t != a]
        print(f'func_{a:08x} {e - a} bytes: shape shared by {len(group)} functions, {len(twins)} verified')
        if not twins:
            continue
        t = twins[0]
        text = open(ROOT / verified[t]).read()
        m = re.search(rf'^[^\n]*\bfunc_{t:08x}\s*\(.*?^\}}', text, re.S | re.M)
        if m:
            print(f'  twin func_{t:08x} in {verified[t]}:')
            print('    ' + m.group(0).replace('\n', '\n    '))
        diffs = []
        for i in range(0, min(e - a, extent(t) - t), 2):
            w1 = struct.unpack_from('<H', image, a + i - base)[0]
            w2 = struct.unpack_from('<H', image, t + i - base)[0]
            if w1 != w2:
                diffs.append(f'+{i:#x}: twin {w2:04x} target {w1:04x}')
        print('  differing words: ' + ('; '.join(diffs) if diffs else 'none in code (pool literals may differ)'))
    return 0


if __name__ == '__main__':
    sys.exit(main())
