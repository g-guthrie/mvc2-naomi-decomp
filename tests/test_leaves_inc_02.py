"""New p[4]++ leaves must compile to retail at their original addresses."""
import shutil
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from build import compile_unit
from core import ROOT, compare, load, number, verify_rom


class LeavesInc02Tests(unittest.TestCase):
    def test_increment_leaves_match_retail(self):
        flags = load(ROOT / 'config/compiler.json')['flags']
        target = load(ROOT / 'config/target.json')
        main = verify_rom(target)[number(target['main']['rom_offset']):]
        base = number(target['main']['address'])
        units = {u['id']: u for u in load(ROOT / 'config/units.json')}
        for uid in ('leaves_inc_02', 'leaves_inc_03', 'leaves_inc_04', 'leaves_inc_05'):
            work = ROOT / 'build' / f'work-{uid}'
            if work.exists():
                shutil.rmtree(work)
            shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
            unit = units[uid]
            self.assertEqual(unit['mode'], 'verified')
            elf, link = compile_unit(unit, work, flags)
            proof, _ = compare(unit, elf, link, main, base)
            self.assertTrue(proof['exact'], (uid, proof['problems']))
            self.assertEqual(sum(part['equal_bytes'] for part in proof['sections']), 64)
            shutil.rmtree(work)
