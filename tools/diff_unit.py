#!/usr/bin/env python3
"""Compile one unit or C file and show every word that differs from retail.

    python3 tools/diff_unit.py mask_tu
    python3 tools/diff_unit.py src/candidates/mask_tu.c --address 0x0c047a40 \\
        --import _dat_0c2d9300=0x0c2d9300

A registered unit uses its config/units.json entry. A bare C file links one
code section P at --address; its size and exports come from the link map.
"""
import argparse
import shutil
import struct
import sys

from build import compile_unit
from core import ROOT, compare, elf_segments, link_map, load, memory_bytes, number, verify_rom
from vendor.sh4dis import sh4


def unit_for(path, address, imports):
    unit = {'id': 'diff', 'source': path, 'mode': 'candidate',
            'sections': [{'section': 'P', 'kind': 'code', 'address': address, 'size': 2}],
            'exports': {}, 'imports': dict(item.split('=', 1) for item in imports)}
    return unit


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('target', help='unit id from config/units.json, or a C file below src/')
    parser.add_argument('--address', type=number, help='link address for a bare C file')
    parser.add_argument('--import', dest='imports', action='append', default=[], metavar='SYMBOL=ADDRESS')
    parser.add_argument('--context', type=int, default=2, help='matching instructions to show around each difference')
    args = parser.parse_args()
    target = load(ROOT / 'config/target.json')
    program = verify_rom(target)
    offset, base, size = (number(target['main'][k]) for k in ('rom_offset', 'address', 'size'))
    main = program[offset:offset + size]
    flags = load(ROOT / 'config/compiler.json')['flags']
    units = {u['id']: u for u in load(ROOT / 'config/units.json')}
    if args.target in units:
        unit = units[args.target]
    elif args.address is None:
        parser.error('a bare C file needs --address')
    else:
        unit = unit_for(args.target, args.address, args.imports)
    work = ROOT / 'build' / 'work-diff'
    if work.exists():
        shutil.rmtree(work)
    shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
    elf, link = compile_unit(unit, work, flags)
    if unit['id'] == 'diff':
        sections, symbols = link_map(link)
        unit['sections'][0]['size'] = sections['P']['size']
        unit['exports'] = {s: a for s, a in symbols.items() if sections['P']['address'] <= a < sections['P']['address'] + sections['P']['size']}
    proof, segments = compare(unit, elf, link, main, base)
    for part in proof['sections']:
        placed = f"0x{part['linked_address']:08x}" if part['linked_address'] is not None else 'nowhere'
        print(f"{part['section']} 0x{part['address']:08x} {part['size']} bytes: {part['equal_bytes']}/{part['size']} equal, "
              f"linked {part['linked_size']} at {placed}")
    for row in proof['functions']:
        print(f"  {row['symbol']} 0x{row['address']:08x} {row['size']} bytes: {row['equal_bytes']}/{row['size']} equal")
    for part in proof['sections']:
        if part['kind'] != 'code' or part['exact']:
            continue
        try:
            ours = memory_bytes(segments, part['address'], part['size'])
        except ValueError:
            print('  (section did not link at its address; nothing to compare)')
            continue
        retail = main[part['address'] - base:part['address'] - base + part['size']]
        words = list(range(0, part['size'] - 1, 2))
        differing = {i for i in words if ours[i:i + 2] != retail[i:i + 2]}
        show = {j for i in differing for j in words if abs(j - i) <= 2 * args.context}
        last = None
        for i in sorted(show):
            if last is not None and i != last + 2:
                print('    ...')
            pc = part['address'] + i
            r, o = struct.unpack_from('<H', retail, i)[0], struct.unpack_from('<H', ours, i)[0]
            mark = '!' if i in differing else ' '
            print(f"  {mark} {pc:08x}  retail {r:04x}  {sh4.disasm(r, pc):32s} ours {o:04x}  {sh4.disasm(o, pc)}")
            last = i
    for problem in proof['problems']:
        print('PROBLEM ' + problem)
    print('EXACT' if proof['exact'] else 'DIFFERS')
    return 0 if proof['exact'] else 1


if __name__ == '__main__':
    sys.exit(main())
