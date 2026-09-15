"""dispatch_parent must compile to the 72 retail bytes at 0x0c04701c."""
import shutil
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from build import compile_unit
from core import ROOT, compare, load, number, verify_rom


class DispatchParentTests(unittest.TestCase):
    def test_dispatch_parent_matches_retail(self):
        flags = load(ROOT / 'config/compiler.json')['flags']
        work = ROOT / 'build' / 'work-dispatch-parent'
        if work.exists():
            shutil.rmtree(work)
        shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
        units = {u['id']: u for u in load(ROOT / 'config/units.json')}
        unit = units['dispatch_parent']
        self.assertEqual(unit['mode'], 'verified')
        self.assertEqual(unit['source'], 'src/verified/func_0c04701c.c')
        target = load(ROOT / 'config/target.json')
        main = verify_rom(target)[number(target['main']['rom_offset']):]
        elf, link = compile_unit(unit, work, flags)
        proof, _ = compare(unit, elf, link, main, number(target['main']['address']))
        self.assertTrue(proof['exact'], proof['problems'])
        self.assertEqual(proof['sections'][0]['equal_bytes'], 72)
        self.assertEqual(proof['sections'][0]['linked_size'], 72)
        shutil.rmtree(work)
