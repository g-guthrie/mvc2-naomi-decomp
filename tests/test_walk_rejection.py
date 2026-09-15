"""A walk must reject undecodable bytes and must not propose overlapping ranges."""
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import flow_map
from core import number


class WalkRejectionTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.image, _ = flow_map.load_image()

    def test_filler_is_not_accepted_as_code(self):
        # 0x0c22e58c is a run of 0xffff ROM filler reached by a raw BSR hint.
        self.assertEqual(self.image.word(0x0c22e58c), 0xFFFF)
        fn = flow_map.walk_function(self.image, 0x0c22e58c)
        self.assertTrue(fn['issues'], 'a walk over undecodable filler must report issues')
        self.assertIn('undecodable', {kind for kind, *_rest in fn['issues']})

    def test_accepted_walk_has_no_undecodable_word(self):
        fn = flow_map.walk_function(self.image, 0x0c148312)
        self.assertEqual(fn['issues'], [])
        for start, size in fn['code']:
            for pc in range(start, start + size, 2):
                self.assertNotEqual(flow_map.sh4.disasm(self.image.word(pc), pc), 'error')

    def test_proposals_do_not_overlap_each_other(self):
        existing = flow_map.existing_ranges(self.image)
        roots = [0x0c148312, 0x0c148350, 0x0c14838c]
        functions = flow_map.map_from_roots(self.image, roots, existing)
        props = flow_map.proposals_from_functions(self.image, functions, existing)
        spans = sorted((number(p['address']), number(p['address']) + p['size']) for p in props)
        for (_a, b), (c, _d) in zip(spans, spans[1:]):
            self.assertLessEqual(b, c, 'proposals must not overlap each other')


if __name__ == '__main__':
    unittest.main()
