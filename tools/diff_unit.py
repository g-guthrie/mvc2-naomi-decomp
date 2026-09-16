#!/usr/bin/env python3
"""Compile one unit or C file, show every word that differs from retail, and
optionally register the result.

    python3 tools/diff_unit.py mask_tu                      # a registered unit
    python3 tools/diff_unit.py src/candidates/new.c         # a bare file
    python3 tools/diff_unit.py src/verified/new.c --register new_id

A bare file is described by its own text. Functions are named func_0cXXXXXX,
so their addresses are known. A file whose functions each follow a
`#pragma section NAME` line is a set of pool-free leaves: each becomes section
PNAME at its function's address with the size of the reviewed code range there.
Any other file is one translation unit: section P starts at the first function
and runs to the end of the reviewed data that follows the code, which is the
literal pool, declared as interior data. Imports are read off the compiler's
.IMPORT lines; a symbol named func_0cXXXXXX or dat_0cXXXXXX resolves to that
address, anything else needs --import SYMBOL=ADDRESS.

--register writes the unit into config/units.json as verified when exact and
as candidate otherwise. A file under src/verified/ must be exact.
"""
import argparse
import fcntl
import json
import os
import re
import shutil
import struct
import sys

from build import compile_unit
from core import ROOT, compare, link_map, load, memory_bytes, number, verify_rom
from vendor.sh4dis import sh4

FUNCTION = re.compile(r'^\s*(?:[\w\s\*]+?)\b(func_0c[0-9a-f]{6})\s*\(', re.M)
PRAGMA = re.compile(r'^\s*#pragma\s+section\s+(\w+)\s*$', re.M)
SYMBOL = re.compile(r'^_?(?:func|dat)_(0c[0-9a-f]{6})$')


def mapping_ranges():
    return [(number(r['address']), number(r['size']), r['kind']) for r in load(ROOT / 'config/mapping.json')['ranges']]


def describe(path, ranges, imports):
    """Derive the unit entry for a bare C file from its text and the mapping."""
    text = (ROOT / path).read_text()
    definitions = [(m.start(), m.group(1)) for m in FUNCTION.finditer(text)
                   if not text[m.end():].lstrip().startswith(';') and ';' not in text[m.start():text.find('{', m.end())]]
    if not definitions:
        raise ValueError('No func_0cXXXXXX definition in ' + path)
    pragmas = [(m.start(), m.group(1)) for m in PRAGMA.finditer(text)]
    by_start = {lo: (size, kind) for lo, size, kind in ranges}
    unit = {'id': 'diff', 'source': path, 'mode': 'candidate', 'sections': [], 'exports': {}, 'imports': dict(imports)}
    for _, name in definitions:
        unit['exports']['_' + name] = number('0x' + name[5:])
    if pragmas and len(pragmas) == len(definitions):
        for (_, section), (_, name) in zip(pragmas, definitions):
            address = number('0x' + name[5:])
            if address not in by_start or by_start[address][1] != 'code':
                raise ValueError(f'No reviewed code range starts at {name}; map it first')
            unit['sections'].append({'section': 'P' + section, 'kind': 'code', 'address': address, 'size': by_start[address][0]})
        return unit
    start = min(unit['exports'].values())
    holder = [lo for lo, size, kind in ranges if lo <= start < lo + size and kind == 'code']
    if not holder:
        raise ValueError('A translation unit must start on reviewed code')
    cursor, interior, seen_code = holder[0], [], False
    while cursor in by_start:
        size, kind = by_start[cursor]
        if kind == 'code':
            if interior:
                break
            seen_code = True
        else:
            interior.append({'address': cursor, 'size': size, 'kind': 'data'})
        cursor += size
    if not interior:
        raise ValueError('No reviewed pool follows the code; use #pragma section for pool-free leaves')
    lo = min(i['address'] for i in interior)
    hi = max(i['address'] + i['size'] for i in interior)
    unit['sections'].append({'section': 'P', 'kind': 'code', 'address': start, 'size': cursor - start,
                             'interior': [{'address': lo, 'size': hi - lo, 'kind': 'data'}]})
    return unit


def resolve_imports(unit, work, stem):
    assembly = (work / (stem + '.src')).read_text(errors='replace')
    for symbol in re.findall(r'^\s*\.IMPORT\s+(\w+)', assembly, re.M):
        if symbol in unit['imports']:
            continue
        match = SYMBOL.match(symbol)
        if not match:
            raise ValueError(f'Unknown import {symbol}: pass --import {symbol}=ADDRESS')
        unit['imports'][symbol] = number('0x' + match.group(1))


def hexed(unit):
    out = json.loads(json.dumps(unit))
    for part in out['sections']:
        part['address'] = f"0x{number(part['address']):08x}"
        for spare in part.get('interior', ()):
            spare['address'] = f"0x{number(spare['address']):08x}"
    for key in ('exports', 'imports'):
        out[key] = {k: f"0x{number(v):08x}" for k, v in out[key].items()}
        if not out[key]:
            del out[key]
    return out


def register(unit, exact):
    unit = hexed(unit)
    unit['mode'] = 'verified' if exact else 'candidate'
    if unit['source'].startswith('src/verified/') and not exact:
        raise ValueError('A file under src/verified/ must match exactly; put it under src/candidates/')
    path = ROOT / 'config/units.json'
    with open(path, 'r+') as handle:
        fcntl.flock(handle, fcntl.LOCK_EX)
        units = json.load(handle)
        slots = [i for i, u in enumerate(units) if u['id'] == unit['id'] or u['source'] == unit['source']]
        units = [u for i, u in enumerate(units) if i not in slots]
        units.insert(slots[0] if slots else len(units), unit)
        handle.seek(0)
        handle.truncate()
        json.dump(units, handle, indent=2)
        handle.write('\n')
    print(f"REGISTERED {unit['id']} as {unit['mode']} ({len(units)} units)")


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('target', help='unit id from config/units.json, or a C file below src/')
    parser.add_argument('--import', dest='imports', action='append', default=[], metavar='SYMBOL=ADDRESS')
    parser.add_argument('--register', metavar='ID', help='write the unit into config/units.json under this id')
    parser.add_argument('--context', type=int, default=2, help='matching instructions shown around each difference')
    args = parser.parse_args()
    target = load(ROOT / 'config/target.json')
    program = verify_rom(target)
    offset, base, size = (number(target['main'][k]) for k in ('rom_offset', 'address', 'size'))
    main = program[offset:offset + size]
    flags = load(ROOT / 'config/compiler.json')['flags']
    units = {u['id']: u for u in load(ROOT / 'config/units.json')}
    imports = {k: number(v) for k, v in (item.split('=', 1) for item in args.imports)}
    if args.target in units:
        unit = units[args.target]
        unit['imports'] = {**unit.get('imports', {}), **imports}
    else:
        unit = describe(args.target, mapping_ranges(), imports)
    if args.register:
        unit['id'] = args.register
    work = ROOT / 'build' / f'work-diff-{os.getpid()}'
    if work.exists():
        shutil.rmtree(work)
    shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
    try:
        elf, link = compile_unit(unit, work, flags)
        before = len(unit['imports'])
        resolve_imports(unit, work, unit['id'])
        if len(unit['imports']) != before:
            elf, link = compile_unit(unit, work, flags)
        proof, segments = compare(unit, elf, link, main, base)
    finally:
        shutil.rmtree(work, ignore_errors=True)
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
            print(f"  ({part['section']} did not link at its address with its size; nothing to compare)")
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
    if args.register:
        register(unit, proof['exact'])
    return 0 if proof['exact'] else 1


if __name__ == '__main__':
    try:
        sys.exit(main())
    except ValueError as error:
        sys.exit(str(error))
