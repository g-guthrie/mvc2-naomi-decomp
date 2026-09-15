"""Mapped pointer tables must compile to retail addresses."""
import shutil
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from build import compile_unit
from core import ROOT, compare, load, number, verify_rom


class PtrtabTests(unittest.TestCase):
    def test_ptrtab_ends_match_retail(self):
        flags = load(ROOT / 'config/compiler.json')['flags']
        target = load(ROOT / 'config/target.json')
        main = verify_rom(target)[number(target['main']['rom_offset']):]
        base = number(target['main']['address'])
        units = {u['id']: u for u in load(ROOT / 'config/units.json')}
        expected = {'ptrtab_00': 592, 'ptrtab_51': 736}
        for uid, nbytes in expected.items():
            work = ROOT / 'build' / f'work-{uid}'
            if work.exists():
                shutil.rmtree(work)
            shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
            unit = units[uid]
            self.assertEqual(unit['mode'], 'verified')
            elf, link = compile_unit(unit, work, flags)
            proof, _ = compare(unit, elf, link, main, base)
            self.assertTrue(proof['exact'], (uid, proof['problems']))
            self.assertEqual(sum(part['equal_bytes'] for part in proof['sections']), nbytes)
            shutil.rmtree(work)
