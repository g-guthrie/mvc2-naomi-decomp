#!/usr/bin/env python3
"""One Hitachi build path, from checked-in C to address-verified ROM bytes."""
import argparse
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import sys

from core import (ROOT, compare, input_fingerprint, load, memory_bytes, number,
                  preflight, runner, sha, validate_units, verify_rom, verify_tools)


def retarget_pc_word(assembly, func_addr, mapping):
    """Point SHC PC-relative word loads at a verified external pool.

    Hitachi `MOV.W @(H'disp,PC),Rn` takes a byte displacement; (target-pc-4)
    for 0x0c047b4a from 0x0c047b0c is 0x3A and encodes retail 0x1d90.
    """
    for imm, target in mapping.items():
        value, dest = number(imm), number(target)
        disp = dest - (func_addr + 4)
        tag = f"{value:04X}"
        assembly = re.sub(
            rf"MOV\.W\s+L\d+(?:\+\d+)?,\s*R0\s*;\s*H'{tag}",
            f"MOV.W       @(H'{disp:X},PC),R0",
            assembly)
        assembly = re.sub(rf"^.*\.DATA\.W\s+H'{tag}\s*$", "", assembly, flags=re.M)
    return assembly


def extract_named_section(assembly, section, exports=None):
    """Assemble one Hitachi .SECTION; sibling functions stay in the C TU."""
    keep = set(exports or ())
    chunks = re.split(r'(?=^[ \t]*\.SECTION)', assembly, flags=re.M)
    header, body = [], []
    for chunk in chunks:
        if '.SECTION' not in chunk:
            for line in chunk.splitlines():
                if '.EXPORT' in line:
                    if any(name in line for name in keep):
                        header.append(line)
                    continue
                header.append(line)
            continue
        name = re.search(r'\.SECTION\s+(\w+)', chunk)
        if name and name.group(1) == section:
            body.append(chunk.rstrip())
    if not body:
        raise ValueError('emit_section not present in compiler assembly: ' + section)
    text = '\n'.join(header).rstrip() + '\n' + '\n'.join(body) + '\n'
    if '.END' not in text:
        text += '          .END\n'
    return text


def compile_unit(unit, work, flags):
    stem = unit['id']
    shutil.copyfile(ROOT / unit['source'], work / (stem + '.c'))
    env = {**os.environ, 'SHC_LIB': '.', 'SHC_TMP': '.'}
    log = []

    def run(exe, args):
        command = runner() + [str(work / exe)] + args
        result = subprocess.run(command, cwd=work, env=env, stdout=subprocess.PIPE,
                                stderr=subprocess.STDOUT, timeout=120)
        output = result.stdout.decode('utf-8', errors='replace')
        log.append(' '.join([exe] + args) + '\n' + output)
        (work / (stem + '.log')).write_text('\n'.join(log))
        if result.returncode:
            raise ValueError(f'{stem}: {exe} failed; see build/work/{stem}.log\n{output}')

    options = unit.get('flags', flags)
    run('shc.exe', [stem + '.c', *options, '-code=asmcode', '-object=' + stem + '.src'])
    assembly = (work / (stem + '.src')).read_text(errors='replace')
    placed = (assembly.replace('ALIGN=16', 'ALIGN=2').replace('ALIGN=8', 'ALIGN=2')
              .replace('ALIGN=4', 'ALIGN=2'))
    pool = unit.get('pc_rel_imm') or unit.get('pc_word_pool')
    if pool:
        placed = retarget_pc_word(placed, number(unit['sections'][0]['address']), pool)
        placed = re.sub(r'\nL\d+:\s*\n(?=\s*\.END)', '\n', placed)
    if unit.get('emit_section'):
        placed = extract_named_section(placed, unit['emit_section'], unit.get('exports', {}))
    (work / (stem + '.src')).write_text(placed)
    run('asmsh.exe', [stem + '.src', '-cpu=sh4', '-endian=little', '-object=' + stem + '.obj'])
    start, chunk = [], []
    for part in unit['sections']:
        item = f"{part['section']}({number(part['address']):08X})"
        if chunk and sum(len(x) + 1 for x in chunk) + len(item) > 180:
            start.append('START ' + ','.join(chunk))
            chunk = []
        chunk.append(item)
    if chunk:
        start.append('START ' + ','.join(chunk))
    lines = [f'INPUT {stem}.obj', f'OUTPUT {stem}.elf', 'ELF', *start]
    lines += [f'DEFINE {symbol}({number(address):08X})' for symbol, address in unit.get('imports', {}).items()]
    lines += [f'PRINT {stem}.map', 'EXIT']
    (work / (stem + '.lnk')).write_text('\n'.join(lines) + '\n')
    run('lnk.exe', ['-subcommand=' + stem + '.lnk'])
    run('shc.exe', [stem + '.c', *options, '-code=asmcode', '-object=' + stem + '.src'])
    return (work / (stem + '.elf')).read_bytes(), (work / (stem + '.map')).read_text(errors='replace')


def smoke(work, flags):
    unit = {'id': 'link_smoke', 'source': 'tests/fixtures/link_smoke.c',
            'sections': [dict(section=name, kind=kind, address=address, size=size) for name, kind, address, size in
                         [('P', 'code', 0x1000, 4), ('C', 'data', 0x2000, 8), ('D', 'data', 0x4000, 4), ('B', 'bss', 0x5000, 4)]],
            'imports': {'_imported': 0x3000},
            'exports': {'_smoke': 0x1000, '_hook': 0x2000, '_imported_hook': 0x2004, '_value': 0x4000, '_scratch': 0x5000}}
    reference = bytearray(0x5004)
    reference[0x1000:0x1004] = bytes.fromhex('0b000900')
    reference[0x2000:0x2008] = bytes.fromhex('0010000000300000')
    reference[0x4000:0x4004] = bytes.fromhex('78563412')
    elf, link = compile_unit(unit, work, flags)
    proof, _ = compare(unit, elf, link, reference, 0)
    if not proof['exact']:
        raise ValueError('Compiler/linker smoke test failed: ' + repr(proof))
    print('PASS Hitachi code, data, BSS, imported and local pointer relocation', flush=True)


def build(selected=None):
    metadata = verify_tools()
    target, units = load(ROOT / 'config/target.json'), load(ROOT / 'config/units.json')
    validate_units(units, target)
    program = verify_rom(target)
    base, offset, size = (number(target['main'][k]) for k in ('address', 'rom_offset', 'size'))
    main = program[offset:offset + size]
    from mapping import review
    flags = load(ROOT / 'config/compiler.json')['flags']
    output = ROOT / 'build'
    work = output / 'work'
    if work.exists():
        shutil.rmtree(work)
    shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
    smoke(work, flags)
    if selected:
        units = [u for u in units if u['id'] == selected]
        if not units:
            raise ValueError('Unknown unit: ' + selected)
    rows, rebuilt = [], bytearray(main)
    failed = []
    matched_units = matched_sections = matched_bytes = 0
    for unit in units:
        elf, link = compile_unit(unit, work, flags)
        proof, segments = compare(unit, elf, link, main, base)
        credited = unit['mode'] == 'verified' and proof['exact']
        row = {**unit, **proof, 'credited': credited, 'elf_sha256': sha(elf)}
        rows.append(row)
        if unit['mode'] == 'verified' and not proof['exact']:
            failed.append(unit['id'])
        if credited:
            matched_units += 1
            matched_sections += len(unit['sections'])
            matched_bytes += sum(number(part['size']) for part in unit['sections'] if part['kind'] != 'bss')
            for part in unit['sections']:
                if part['kind'] != 'bss':
                    start, count = number(part['address']), number(part['size'])
                    rebuilt[start-base:start-base+count] = memory_bytes(segments, start, count)
        details = ', '.join(f"{p['section']}: {p['equal_bytes']}/{p['size']} equal bytes, linked size {p['linked_size']}" for p in proof['sections'])
        if selected or not credited:
            print(f"{'MATCH' if credited else 'CANDIDATE' if unit['mode'] == 'candidate' else 'FAIL'} {unit['id']} — {details}", flush=True)
    if selected:
        (output / 'unit-proof.json').write_text(json.dumps(rows[0], indent=2) + '\n')
        if failed:
            raise ValueError('Verified unit mismatch: ' + ', '.join(failed))
        return
    print(f'MATCH {matched_units} verified config units, {matched_sections} source ranges, {matched_bytes:,} bytes', flush=True)
    merged = bytearray(program)
    merged[offset:offset+size] = rebuilt
    if rebuilt != main or merged != program:
        raise ValueError('Reconstructed image does not match the reference')
    if failed:
        raise ValueError('Verified unit mismatch: ' + ', '.join(failed))
    mapping = review(main, base, verified=rows)
    proof = {'schema_version': 1, 'input_sha256': input_fingerprint(), 'toolchain': metadata,
             'main_size': size, 'main_address': base, 'main_sha256': sha(rebuilt),
             'program_sha256': sha(merged), 'rom_members_verified': len(target['roms']),
             'units': rows,
             'mapping': {k:v for k,v in mapping.items() if k != 'ranges'},
             'scope': 'Main image source progress only. Untranslated reference bytes preserve the remainder of the image.'}
    (output / 'main.bin').write_bytes(rebuilt)
    (output / target['program_rom']).write_bytes(merged)
    (output / 'mapping.json').write_text(json.dumps(mapping, indent=2) + '\n')
    (output / 'proof.json').write_text(json.dumps(proof, indent=2) + '\n')
    from report import publish
    publish(proof)
    print(f'PASS full main ({size:,} bytes) and program ROM ({len(program):,} bytes) match; original remainder is not decompilation credit.')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('command', nargs='?', default='check', choices=['check', 'unit'])
    parser.add_argument('unit', nargs='?')
    args = parser.parse_args()
    if args.command == 'unit' and not args.unit:
        parser.error('unit requires an id from config/units.json')
    if args.command == 'check':
        # A failed new check must not leave previous successful proof.
        (ROOT / 'build' / 'proof.json').unlink(missing_ok=True)
    preflight()
    if args.command == 'check':
        subprocess.run([sys.executable, '-m', 'unittest', 'discover', '-s', 'tests', '-v'], cwd=ROOT, check=True)
    build(args.unit if args.command == 'unit' else None)


if __name__ == '__main__':
    try:
        main()
    except (ValueError, OSError, subprocess.SubprocessError) as error:
        sys.exit(str(error))
