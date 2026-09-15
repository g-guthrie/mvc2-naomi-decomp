"""CFG mapper must match reviewed boot-init boundaries and not swallow tail-call targets."""
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from core import ROOT, load, number, verify_rom
from flow_map import Image, recover_indexed_tables, walk_function


def image():
    target = load(ROOT / 'config/target.json')
    main = target['main']
    base = number(main['address'])
    blob = verify_rom(target)[number(main['rom_offset']):number(main['rom_offset']) + number(main['size'])]
    return Image(blob, base)


class FlowMapTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.img = image()

    def test_boot_init_splits_pool_and_keeps_loop_delay_slot(self):
        fn = walk_function(self.img, 0x0c028394)
        self.assertFalse(fn['issues'], fn['issues'])
        self.assertEqual(fn['code'], [(0x0c028394, 152)])
        self.assertEqual(fn['data'], [(0x0c02842c, 96)])
        self.assertIn(0x0c02842a, set(range(0x0c028394, 0x0c028394 + 152, 2)))

    def test_leaf_includes_rts_delay_and_stops(self):
        fn = walk_function(self.img, 0x0c02156c)
        self.assertFalse(fn['issues'], fn['issues'])
        self.assertEqual(fn['code'], [(0x0c02156c, 64)])
        self.assertEqual(fn['data'], [])

    def test_backward_bra_past_entry_is_tail_not_same_function(self):
        fn = walk_function(self.img, 0x0c034288)
        self.assertFalse(fn['issues'], fn['issues'])
        self.assertEqual(fn['code'], [(0x0c034288, 26)])
        tails = [c for c in fn['calls'] if c[0] == 'bra_tail']
        self.assertEqual(tails[0][2], 0x0c033f28)

    def test_indexed_jmp_table_is_data_and_seeds_in_image_pointers(self):
        fn = walk_function(self.img, 0x0c1fb794)
        self.assertFalse(fn['issues'], fn['issues'])
        self.assertIn((0x0c1fb7f4, 68), fn['tables'])
        self.assertIn(0x0c1fb7f0, fn['table_seeds'])
        self.assertTrue(all(self.img.contains(p) and p % 2 == 0 for p in fn['table_seeds']))

    def test_ledger_records_indexed_jump_table_as_data(self):
        by = {number(p['address']): p for p in load(ROOT / 'config/mapping.json')['ranges']}
        part = by[0x0c1fb7f4]
        self.assertEqual(part['kind'], 'data')
        self.assertEqual(part['size'], 68)

    def test_jump_table_words_are_not_kept_as_code(self):
        pcs = list(range(0x0c1fb794, 0x0c1fb794 + 24, 2))
        tables, seeds = recover_indexed_tables(self.img, pcs)
        self.assertEqual(tables, [(0x0c1fb7f4, 68)])
        self.assertGreaterEqual(len(seeds), 2)


if __name__ == '__main__':
    unittest.main()
