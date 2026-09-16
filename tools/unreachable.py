#!/usr/bin/env python3
"""Propose unknown runs no instruction stream can enter as data.

A run enclosed by reviewed data on both sides has no instruction falling
through into it, so it can only execute if something addresses it. Entry
candidates are collected as widely as the image allows: every in-image even
value read at any offset, and the destination of every PC-relative branch
decoded at any position, including positions inside data. Over-collecting
entries can only withhold a run, never admit one.
"""
import argparse
import array
import bisect
import json

from core import ROOT, load, number, sha, verify_rom

BRANCH_DISPLACEMENT = {0x9, 0xB, 0xD, 0xF}


def entry_candidates(image, base):
    end = base + len(image)
    found = set()
    words = array.array('H')
    words.frombytes(image[:len(image) & ~1])
    if array.array('H', b'\x01\x00')[0] != 1:
        words.byteswap()
    for index, word in enumerate(words):
        pc, op = base + index * 2, word >> 12
        if op in (0xA, 0xB):
            displacement = word & 0xFFF
            if displacement & 0x800:
                displacement -= 0x1000
        elif op == 0x8 and (word >> 8) & 0xF in BRANCH_DISPLACEMENT:
            displacement = word & 0xFF
            if displacement & 0x80:
                displacement -= 0x100
        else:
            continue
        target = pc + 4 + displacement * 2
        if base <= target < end:
            found.add(target)
    for shift in (0, 1):
        longs = array.array('I')
        longs.frombytes(image[shift * 2:(shift * 2) + ((len(image) - shift * 2) & ~3)])
        if array.array('I', b'\x01\x00\x00\x00')[0] != 1:
            longs.byteswap()
        for index, value in enumerate(longs):
            if base <= value < end and value % 2 == 0:
                found.add(value)
    return sorted(found)


def enclosed_gaps(base, size):
    reviewed = sorted(
        (number(p['address']), number(p['address']) + p['size'], p['kind'])
        for p in load(ROOT / 'config/mapping.json')['ranges'])
    gaps = []
    for index in range(len(reviewed) - 1):
        _lo, end, kind = reviewed[index]
        start, _hi, after = reviewed[index + 1]
        if end < start and kind == 'data' and after == 'data':
            gaps.append((end, start - end))
    return gaps


def proposals(image, base, entries=None):
    entries = entry_candidates(image, base) if entries is None else entries
    out = []
    for start, length in enclosed_gaps(base, len(image)):
        low = bisect.bisect_left(entries, start)
        if low < len(entries) and entries[low] < start + length:
            continue
        out.append((start, length))
    return out


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--json', action='store_true')
    args = parser.parse_args()
    target = load(ROOT / 'config/target.json')
    main_image = target['main']
    base, offset, size = (number(main_image[k]) for k in ('address', 'rom_offset', 'size'))
    image = verify_rom(target)[offset:offset + size]
    found = proposals(image, base)
    rows = [{
        'address': f'0x{start:08x}',
        'size': length,
        'kind': 'data',
        'sha256': sha(image[start - base:start - base + length]),
        'evidence': (
            'Reviewed data encloses this range, so no instruction falls through into '
            'it, and no in-image value or decoded branch destination anywhere in the '
            'image addresses any byte of it; nothing enters it.'
        ),
    } for start, length in found]
    if args.json:
        print(json.dumps(rows, indent=2))
    else:
        print(f'{len(rows)} runs, {sum(r["size"] for r in rows):,} bytes')


if __name__ == '__main__':
    main()
