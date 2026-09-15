"""Unsigned short increment leaf must compile to retail at 0x0c03771e."""
import shutil
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from build import compile_unit
from core import ROOT, compare, load, number, verify_rom


class LeavesIncSTests(unittest.TestCase):
    def test_ushort_increment_matches_retail(self):
        flags = load(ROOT / 'config/compiler.json')['flags']
        work = ROOT / 'build' / 'work-inc-s'
        if work.exists():
            shutil.rmtree(work)
        shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
        unit = {u['id']: u for u in load(ROOT / 'config/units.json')}['leaves_inc_s']
        self.assertEqual(unit['mode'], 'verified')
        target = load(ROOT / 'config/target.json')
        main = verify_rom(target)[number(target['main']['rom_offset']):]
        elf, link = compile_unit(unit, work, flags)
        proof, _ = compare(unit, elf, link, main, number(target['main']['address']))
        self.assertTrue(proof['exact'], proof['problems'])
        self.assertEqual(proof['sections'][0]['equal_bytes'], 8)
        shutil.rmtree(work)
