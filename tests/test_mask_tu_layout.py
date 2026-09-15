"""-fpu=single combined TU places mask_helper at 0x0c047b0c; a8c matches retail."""
import shutil
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from build import compile_unit
from core import ROOT, elf_segments, load, number, verify_rom


class MaskTuLayoutTests(unittest.TestCase):
    def test_fpu_single_lands_helper_and_matches_a8c(self):
        flags = ['-cpu=sh4', '-endian=little', '-optimize=1', '-fpu=single']
        work = ROOT / 'build' / 'work-mask-tu'
        if work.exists():
            shutil.rmtree(work)
        shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
        unit = {
            'id': 'mask_tu',
            'source': 'src/candidates/mask_tu.c',
            'mode': 'candidate',
            'flags': flags,
            'sections': [{'section': 'P', 'kind': 'code', 'address': '0x0c047a40', 'size': 288}],
            'exports': {
                '_func_0c047a40': '0x0c047a40',
                '_func_0c047a8c': '0x0c047a8c',
                '_func_0c047aac': '0x0c047aac',
                '_func_0c047b0c': '0x0c047b0c',
            },
            'imports': {
                '_dat_0c2d9300': '0x0c2d9300',
                '_dat_0c23bf64': '0x0c23bf64',
                '_dat_0c23bf87': '0x0c23bf87',
                '_func_0c02849a': '0x0c02849a',
            },
        }
        elf, link = compile_unit(unit, work, flags)
        self.assertIn('_func_0c047a8c', link)
        self.assertIn("H'0C047A8C", link)
        data = elf_segments(elf)[0]['data']
        target = load(ROOT / 'config/target.json')
        main = verify_rom(target)[number(target['main']['rom_offset']):]
        base = number(target['main']['address'])
        off = 0x0c047a8c - 0x0c047a40
        retail = main[0x0c047a8c - base:0x0c047a8c - base + 32]
        self.assertEqual(len(data) > off + 32, True)
        self.assertEqual(data[off:off + 32], retail)
        shutil.rmtree(work)
