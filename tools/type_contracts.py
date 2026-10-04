"""Check evidence-backed layouts/prototypes with the actual target compiler."""
import argparse
import json
import os
from pathlib import Path
import subprocess
import struct
import tempfile

from core import ROOT, load, runner, elf_segments, memory_bytes
from build_cache import prepare_work
from clone import function_spans


def contract_source(root, contract):
    source = root / contract['source']
    text = source.read_text()
    definitions = function_spans(text)
    if definitions:
        text = text[:definitions[0][1]]
    offsets = []
    for index, item in enumerate(contract.get('members', [])):
        if not item.get('evidence'):
            raise ValueError('Member contract needs native/source evidence')
        expression = f'(unsigned long)&((({item["type"]} *)0)->{item["member"]})'
        offsets.append(expression)
    for item in contract.get('prototypes', []):
        if not item.get('evidence'):
            raise ValueError('Prototype contract needs call-site evidence')
        text += '\n' + item['declaration'] + '\n'
    # SHC does not accept offsetof expressions as integer array bounds. Emit
    # target data instead and inspect the linked values, without host ABI assumptions.
    if offsets:
        text += '\nconst unsigned long contract_offsets[] = {' + ','.join(offsets) + '};\n'
    return text


def check(contract, root=ROOT):
    with tempfile.TemporaryDirectory(prefix='types-', dir=root / 'build') as directory:
        work = Path(directory)
        prepare_work(root, work)
        for header in (root / 'src/include').glob('*.h'):
            (work / header.name).write_bytes(header.read_bytes())
        (work / 'contract.c').write_text(contract_source(root, contract))
        options = load(root / 'config/compiler.json')['sets'][contract.get('options', 'game')]
        result = subprocess.run(runner(root) + [str(work / 'shc.exe'), 'contract.c', *options,
                                               '-code=asmcode', '-object=contract.src'],
                                cwd=work, env={**os.environ, 'SHC_LIB': '.', 'SHC_TMP': '.'},
                                capture_output=True, timeout=120)
        if result.returncode:
            raise ValueError(contract['source'] + ': target type contract failed\n' +
                             (result.stdout + result.stderr).decode(errors='replace'))
        if contract.get('members'):
            commands = [
                ('asmsh.exe', ['contract.src', '-cpu=sh4', '-endian=little', '-object=contract.obj']),
                ('lnk.exe', ['-subcommand=contract.lnk']),
            ]
            (work / 'contract.lnk').write_text('INPUT contract.obj\nOUTPUT contract.elf\nELF\nSTART C(1000)\nEXIT\n')
            for exe, args in commands:
                subprocess.run(runner(root) + [str(work / exe), *args], cwd=work,
                               capture_output=True, timeout=120, check=True)
            members = contract['members']
            data = memory_bytes(elf_segments((work / 'contract.elf').read_bytes()), 0x1000, 4 * len(members))
            actual = struct.unpack('<' + 'I' * len(members), data)
            for item, offset in zip(members, actual):
                expected = int(item['offset'], 0) if isinstance(item['offset'], str) else item['offset']
                if offset != expected:
                    raise ValueError(f"{contract['source']}: target type contract failed: {item['type']}.{item['member']} = {offset:#x}, expected {expected:#x}")
    return {'source': contract['source'], 'members': len(contract.get('members', [])),
            'prototypes': len(contract.get('prototypes', [])), 'status': 'PASS'}


def check_all(source=None):
    contracts = load(ROOT / 'config/type_contracts.json')['contracts']
    return [check(c) for c in contracts if source is None or c['source'] == source]


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source', help='only check the contracts for this source')
    args = parser.parse_args()
    print(json.dumps(check_all(args.source), indent=2))
