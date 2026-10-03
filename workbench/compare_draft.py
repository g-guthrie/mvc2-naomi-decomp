#!/usr/bin/env python3
"""Compare a portable draft descriptor with the original compiler and verifier.
This diagnostic never registers a unit or changes the mapping/coverage ledger.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
import diff_unit
from core import compare, load, number, verify_rom


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('descriptor', help='portable expected-unit JSON')
    parser.add_argument('--output', help='write the diagnostic JSON here')
    args = parser.parse_args()
    os.chdir(ROOT)
    unit = load(Path(args.descriptor))
    source = (ROOT / unit['source']).resolve()
    source.relative_to(ROOT)
    if not source.is_file():
        raise ValueError('Descriptor source does not exist')
    unit.setdefault('imports', {})
    target = load(ROOT / 'config/target.json')
    program = verify_rom(target)
    offset, base, size = [number(target['main'][key]) for key in ('rom_offset', 'address', 'size')]
    flags = load(ROOT / 'config/compiler.json')['sets'][unit.get('options', 'game')]
    (ROOT / 'build').mkdir(exist_ok=True)
    with tempfile.TemporaryDirectory(prefix='draft-compare-', dir=ROOT / 'build') as directory:
        work = Path(directory) / 'compiler'
        shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
        elf, link = diff_unit.compile_unit(unit, work, flags)
        before = dict(unit['imports'])
        diff_unit.resolve_imports(unit, work, unit['id'])
        if before != unit['imports']:
            elf, link = diff_unit.compile_unit(unit, work, flags)
        proof, _ = compare(unit, elf, link, program[offset:offset + size], base)
    result = {
        'scope': 'Unregistered draft diagnostic; zero coverage credit',
        'source_sha256': hashlib.sha256(source.read_bytes()).hexdigest(),
        'shared_header_sha256': hashlib.sha256((ROOT / 'src/include/objects.h').read_bytes()).hexdigest(),
        'unit': unit,
        'proof': proof,
    }
    if args.output:
        destination = Path(args.output)
        destination.parent.mkdir(parents=True, exist_ok=True)
        destination.write_text(json.dumps(result, indent=2) + '\n')
    for section in proof['sections']:
        print(section['section'], section['equal_bytes'], '/', section['size'], 'linked', section['linked_size'])
    print('EXACT, UNREGISTERED' if proof['exact'] else 'INEXACT, UNREGISTERED')
    return 0 if proof['exact'] else 1


if __name__ == '__main__':
    sys.exit(main())
