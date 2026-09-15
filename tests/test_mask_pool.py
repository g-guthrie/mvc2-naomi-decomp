"""Shared mask_helper literal pool must compile to retail shorts at 0x0c047b2e."""
import shutil
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from build import compile_unit
from core import ROOT, compare, load, number, verify_rom


class MaskPoolTests(unittest.TestCase):
    def test_field_offset_pool_matches_retail(self):
        flags = load(ROOT / 'config/compiler.json')['flags']
        work = ROOT / 'build' / 'work-mask-pool'
        if work.exists():
            shutil.rmtree(work)
        shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
        units = {u['id']: u for u in load(ROOT / 'config/units.json')}
        unit = units['mask_pool']
        self.assertEqual(unit['mode'], 'verified')
        target = load(ROOT / 'config/target.json')
        main = verify_rom(target)[number(target['main']['rom_offset']):]
        elf, link = compile_unit(unit, work, flags)
        proof, _ = compare(unit, elf, link, main, number(target['main']['address']))
        self.assertTrue(proof['exact'], proof['problems'])
        self.assertEqual(proof['sections'][0]['equal_bytes'], 30)
        shutil.rmtree(work)
