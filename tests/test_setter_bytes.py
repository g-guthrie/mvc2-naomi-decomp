"""Byte-slot setters must compile to retail RTS; MOV.B R5,@R4 leaves."""
import shutil
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from build import compile_unit
from core import ROOT, compare, load, number, verify_rom


class SetterBytesTests(unittest.TestCase):
    def test_setter_bytes_match_retail(self):
        flags = load(ROOT / 'config/compiler.json')['flags']
        work = ROOT / 'build' / 'work-setter-bytes'
        if work.exists():
            shutil.rmtree(work)
        shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
        unit = {u['id']: u for u in load(ROOT / 'config/units.json')}['setter_bytes']
        self.assertEqual(unit['mode'], 'verified')
        target = load(ROOT / 'config/target.json')
        main = verify_rom(target)[number(target['main']['rom_offset']):]
        elf, link = compile_unit(unit, work, flags)
        proof, _ = compare(unit, elf, link, main, number(target['main']['address']))
        self.assertTrue(proof['exact'], proof['problems'])
        self.assertEqual(sum(part['equal_bytes'] for part in proof['sections']), 12)
        shutil.rmtree(work)
