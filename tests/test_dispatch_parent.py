"""dispatch_parent stays a candidate until SHC emits in-range BSR itself."""
import shutil
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from build import compile_unit
from core import ROOT, compare, load, number, verify_rom


class DispatchParentTests(unittest.TestCase):
    def test_dispatch_parent_is_uncredited_candidate(self):
        flags = load(ROOT / 'config/compiler.json')['flags']
        work = ROOT / 'build' / 'work-dispatch-parent'
        if work.exists():
            shutil.rmtree(work)
        shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
        unit = {u['id']: u for u in load(ROOT / 'config/units.json')}['dispatch_parent']
        self.assertEqual(unit['mode'], 'candidate')
        self.assertNotIn('bsr_imports', unit)
        target = load(ROOT / 'config/target.json')
        main = verify_rom(target)[number(target['main']['rom_offset']):]
        elf, link = compile_unit(unit, work, flags)
        proof, _ = compare(unit, elf, link, main, number(target['main']['address']))
        self.assertFalse(proof['exact'], 'do not credit a rewrite-shaped match')
        shutil.rmtree(work)
