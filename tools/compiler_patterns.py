#!/usr/bin/env python3
"""Reproduce the switch discovery against retail; never register anything."""
import hashlib
import json
from pathlib import Path
import shutil
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
import core
import diff_unit
from build import compile_unit

SOURCE = ROOT / 'tests/fixtures/compiler_patterns/ud2_12_recovered.c'
TARGETS = {'_func_0c0d6afa', '_func_0c0d6b1e'}


def main():
    proof, unit = diff_unit.evaluate(str(SOURCE.relative_to(ROOT)))
    rows = [f for f in proof['functions'] if f['symbol'] in TARGETS]
    assert len(rows) == 2 and all(f['exact'] and f['size'] == 36 for f in rows), rows
    section = proof['sections'][0]
    assert section['size'] == section['linked_size'] == 620, section
    assert section['equal_bytes'] == 616 and not proof['exact'], section

    # Equivalent grouped labels must not be mistaken for the recovered shape.
    old = 'switch((signed char)a->b4c9){case 0:a->b1e9=8;break;case 1:a->b1e9=8;break;case 2:a->b1e9=8;break;}'
    new = 'switch((signed char)a->b4c9){case 0:case 1:case 2:a->b1e9=8;break;}'
    text = SOURCE.read_text()
    assert text.count(old) == 2
    with tempfile.TemporaryDirectory(prefix='pattern-control-', dir=ROOT / 'build') as directory:
        path = Path(directory) / 'grouped.c'
        path.write_text(text.replace(old, new))
        control, _ = diff_unit.evaluate(str(path.relative_to(ROOT)))
    controls = [f for f in control['functions'] if f['symbol'] in TARGETS]
    assert len(controls) == 2 and not any(f['exact'] for f in controls), controls

    float_source = SOURCE.with_name('float_context.c')
    float_unit = {
        'id': 'float_context', 'source': str(float_source.relative_to(ROOT)),
        'sections': [{'section': 'P', 'kind': 'code', 'address': 0x1000, 'size': 80}],
        'imports': {'_use': 0x0c025900}, 'options': 'game',
    }
    with tempfile.TemporaryDirectory(prefix='pattern-float-', dir=ROOT / 'build') as directory:
        work = Path(directory)
        shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work, dirs_exist_ok=True)
        elf, link = compile_unit(float_unit, work, [])
        compiled = core.memory_bytes(core.elf_segments(elf), 0x1000, 80)
        assembly = (work / 'float_context.src').read_text()
    target = core.load(ROOT / 'config/target.json')
    rom = core.verify_rom(target)
    start = core.number(target['main']['rom_offset']) + 0x0c10f1e8 - core.number(target['main']['address'])
    retail_block = rom[start:start + 20]
    # Both functions have five prologue/call instructions before the block.
    assert compiled[10:30] == retail_block
    assert compiled[46:66] != retail_block
    assert assembly.count('FLDI1') == 1 and assembly.count("H'40000000") == 1
    print(json.dumps({
        'source_sha256': hashlib.sha256(SOURCE.read_bytes()).hexdigest(),
        'input_sha256': core.input_fingerprint(),
        'options': core.load(ROOT / 'config/compiler.json')['sets']['game'],
        'retail_proof': proof,
        'grouped_case_negative_control': controls,
        'float_context': {
            'source_sha256': hashlib.sha256(float_source.read_bytes()).hexdigest(),
            'retail_start': '0x0c10f1e8', 'retail_end_exclusive': '0x0c10f1fc',
            'matching_bytes': 20, 'bytes_hex': retail_block.hex(),
            'literal_control_differs': True,
            'scope': 'Ten-instruction block only; no complete retail function match or registration.',
        },
        'credit': 0,
    }, indent=2))


if __name__ == '__main__':
    main()
