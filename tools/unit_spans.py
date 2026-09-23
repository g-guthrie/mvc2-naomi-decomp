#!/usr/bin/env python3
"""Propose translation-unit extents: runs of reviewed code and pools that no
branch crosses.

SHC flushes a literal pool mid-file, so one retail unit holds several pools.
A boundary is a pool that code before it does not branch over and that code
after it does not call back across with bsr or bra. Spans between boundaries
that start with a real function start are candidate units.

    python3 tools/unit_spans.py --min 200 --max 1400 --limit 40
"""
import argparse
import bisect
import json
import struct

from core import ROOT, load, number, verify_rom
from pool_clusters import pc_relative_target


def branch_target(word, pc):
    if word >> 12 in (0xa, 0xb):
        d = word & 0xfff
        return pc + 4 + (d - 0x1000 if d & 0x800 else d) * 2
    if word >> 8 in (0x89, 0x8b, 0x8d, 0x8f):
        d = word & 0xff
        return pc + 4 + (d - 0x100 if d & 0x80 else d) * 2
    return None


def spans(image, base, ranges, owned):
    merged = []
    for lo, size, kind in sorted(ranges, key=lambda r: r[0]):
        if merged and kind == 'data' and merged[-1][2] == 'data' and merged[-1][0] + merged[-1][1] == lo:
            merged[-1] = (merged[-1][0], merged[-1][1] + size, kind)
        else:
            merged.append((lo, size, kind))
    ranges = merged
    words = lambda lo, hi: [struct.unpack_from('<H', image, a - base)[0] for a in range(lo, hi, 2)]
    # Branches and PC-relative loads both tie code to bytes across a pool.
    edges = []
    for lo, size, kind in ranges:
        if kind != 'code':
            continue
        for i, w in enumerate(words(lo, lo + size)):
            pc = lo + 2 * i
            t = branch_target(w, pc)
            if t is not None:
                edges.append((pc, t))
            literal = pc_relative_target(w, pc)
            if literal is not None:
                edges.append((pc, literal[0]))
    # boundary candidates: each data range end (pool end) and start
    result = []
    i = 0
    while i < len(ranges):
        lo, size, kind = ranges[i]
        if kind != 'code':
            i += 1
            continue
        # a unit start: previous range is data or previous code ends with rts/delay
        if i and ranges[i - 1][2] == 'code':
            plo, psize, _ = ranges[i - 1]
            tail = words(plo + psize - 4, plo + psize) if psize >= 4 else []
            if 0x000b not in tail and not any(w >> 12 == 0xa for w in tail):
                i += 1
                continue
        start, j = lo, i
        closed = False
        previous_end = lo
        while j < len(ranges):
            rlo, rsize, rkind = ranges[j]
            if rlo != previous_end:
                break  # An unreviewed gap cannot belong to a proposed unit.
            end = rlo + rsize
            previous_end = end
            j += 1
            if rkind != 'data':
                continue
            # pool ends at `end`: does anything cross it?
            crossing = any(((a < end <= t) or (t < end <= a)) for a, t in edges
                           if a >= start and t >= start)
            if not crossing:
                closed = True
                break
        if not closed:
            i = max(j, i + 1)
            continue
        end = ranges[j - 1][0] + ranges[j - 1][1]
        if ranges[j - 1][2] == 'data':
            result.append((start, end - start))
        i = j
    return [(s, n) for s, n in result if not any(o_lo < s + n and o_hi > s for o_lo, o_hi in owned)]


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--min', type=int, default=200)
    parser.add_argument('--max', type=int, default=1400)
    parser.add_argument('--limit', type=int, default=50)
    parser.add_argument('--below', type=number, default=0x0c1e9000, help='only spans below this address (game code)')
    parser.add_argument('--json', action='store_true')
    args = parser.parse_args()
    target = load(ROOT / 'config/target.json')
    program = verify_rom(target)
    offset, base, size = (number(target['main'][k]) for k in ('rom_offset', 'address', 'size'))
    image = program[offset:offset + size]
    ranges = [(number(r['address']), number(r['size']), r['kind']) for r in load(ROOT / 'config/mapping.json')['ranges']]
    owned = [(number(p['address']), number(p['address']) + number(p['size']))
             for u in load(ROOT / 'config/units.json') for p in u['sections']]
    found = [(s, n) for s, n in spans(image, base, ranges, owned) if args.min <= n <= args.max and s < args.below]
    found = found[:args.limit]
    if args.json:
        print(json.dumps([{'start': f'0x{s:08x}', 'size': n} for s, n in found]))
    else:
        for s, n in found:
            print(f'0x{s:08x} size {n}')
    return 0


if __name__ == '__main__':
    main()
