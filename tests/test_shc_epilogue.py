"""SHC boolean returns: if-return-1 uses MOVT/RTS/NOP (retail mask_helper epilogue)."""
import shutil
import unittest
from pathlib import Path
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from build import compile_unit
from core import ROOT, elf_segments, load


class ShcEpilogueTests(unittest.TestCase):
    def test_if_equal_emits_movt_rts_nop(self):
        flags = load(ROOT / 'config/compiler.json')['flags']
        work = ROOT / 'build' / 'work-epilogue'
        if work.exists():
            shutil.rmtree(work)
        shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
        unit = {
            'id': 'eq_if',
            'source': 'tests/fixtures/eq_if.c',
            'mode': 'candidate',
            'sections': [{'section': 'P', 'kind': 'code', 'address': 0x1000, 'size': 8}],
            'exports': {'_eq_if': 0x1000},
        }
        elf, _ = compile_unit(unit, work, flags)
        data = elf_segments(elf)[0]['data']
        self.assertGreaterEqual(len(data), 6)
        self.assertEqual(data[-6:], bytes.fromhex('29000b000900'))
        shutil.rmtree(work)
