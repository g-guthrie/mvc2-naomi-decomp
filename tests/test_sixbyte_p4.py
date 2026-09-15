"""New p[4] six-byte leaves must compile to retail at their original addresses."""
import shutil
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from build import compile_unit
from core import ROOT, compare, load, number, verify_rom


class SixbyteP4Tests(unittest.TestCase):
    def test_sixbyte_p4_matches_retail(self):
        flags = load(ROOT / 'config/compiler.json')['flags']
        work = ROOT / 'build' / 'work-sixbyte-p4'
        if work.exists():
            shutil.rmtree(work)
        shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
        unit = {u['id']: u for u in load(ROOT / 'config/units.json')}['sixbyte_p4']
        self.assertEqual(unit['mode'], 'verified')
        target = load(ROOT / 'config/target.json')
        main = verify_rom(target)[number(target['main']['rom_offset']):]
        elf, link = compile_unit(unit, work, flags)
        proof, _ = compare(unit, elf, link, main, number(target['main']['address']))
        self.assertTrue(proof['exact'], proof['problems'])
        self.assertEqual(sum(part['equal_bytes'] for part in proof['sections']), 42)
        shutil.rmtree(work)
