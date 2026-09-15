"""mask_helper stays a candidate until SHC emits the 34 retail bytes unaided."""
import shutil
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from build import compile_unit
from core import ROOT, compare, load, number, verify_rom


class MaskHelperTests(unittest.TestCase):
    def test_mask_helper_is_uncredited_candidate(self):
        flags = load(ROOT / 'config/compiler.json')['flags']
        work = ROOT / 'build' / 'work-mask-helper'
        if work.exists():
            shutil.rmtree(work)
        shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
        unit = {u['id']: u for u in load(ROOT / 'config/units.json')}['mask_helper']
        self.assertEqual(unit['mode'], 'candidate')
        self.assertNotIn('pc_word_pool', unit)
        self.assertNotIn('pc_rel_imm', unit)
        target = load(ROOT / 'config/target.json')
        main = verify_rom(target)[number(target['main']['rom_offset']):]
        elf, link = compile_unit(unit, work, flags)
        proof, _ = compare(unit, elf, link, main, number(target['main']['address']))
        self.assertFalse(proof['exact'], 'do not credit a rewrite-shaped match')
        shutil.rmtree(work)
