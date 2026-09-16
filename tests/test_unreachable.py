"""Runs proposed as unentered must really have no entry anywhere in the image."""
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import unreachable
from core import ROOT, load, number, verify_rom


class UnreachableTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        target = load(ROOT / 'config/target.json')
        main = target['main']
        cls.base, offset, size = (number(main[k]) for k in ('address', 'rom_offset', 'size'))
        cls.image = verify_rom(target)[offset:offset + size]
        cls.entries = set(unreachable.entry_candidates(cls.image, cls.base))
        cls.found = unreachable.proposals(cls.image, cls.base, sorted(cls.entries))

    def test_no_proposed_byte_is_an_entry_candidate(self):
        for start, size in self.found:
            for pc in range(start, start + size, 2):
                self.assertNotIn(pc, self.entries, f'0x{pc:08x} is addressable')

    def test_every_proposal_is_enclosed_by_reviewed_data(self):
        reviewed = sorted(
            (number(p['address']), number(p['address']) + p['size'], p['kind'])
            for p in load(ROOT / 'config/mapping.json')['ranges'])
        before = {end: kind for _lo, end, kind in reviewed}
        after = {start: kind for start, _hi, kind in reviewed}
        for start, size in self.found:
            self.assertEqual(before.get(start), 'data', f'0x{start:08x} not preceded by data')
            self.assertEqual(after.get(start + size), 'data', f'0x{start:08x} not followed by data')

    def test_a_known_branch_target_is_treated_as_an_entry(self):
        """The entry scan must see ordinary bra/bsr destinations."""
        self.assertIn(0x0c1402d0, self.entries)   # bsr from 0x0c14037c
        self.assertIn(0x0c14069c, self.entries)   # bra from 0x0c140380

    def test_proposals_do_not_overlap_reviewed_bytes(self):
        reviewed = sorted(
            (number(p['address']), number(p['address']) + p['size'])
            for p in load(ROOT / 'config/mapping.json')['ranges'])
        for start, size in self.found:
            for lo, hi in reviewed:
                if lo >= start + size:
                    break
                self.assertFalse(start < hi and lo < start + size, f'0x{start:08x} overlaps')


if __name__ == '__main__':
    unittest.main()
