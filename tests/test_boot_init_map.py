"""Boot-init mapping must keep the literal pool out of code and include delay slots."""
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from core import ROOT, load, number, sha, verify_rom
from mapping import review


def image():
    target = load(ROOT / 'config/target.json')
    main = target['main']
    base = number(main['address'])
    rom = verify_rom(target)
    return rom[number(main['rom_offset']):number(main['rom_offset']) + number(main['size'])], base


class BootInitMappingTests(unittest.TestCase):
    def setUp(self):
        self.img, self.base = image()
        self.reviewed = {number(p['address']): p for p in load(ROOT / 'config/mapping.json')['ranges']}

    def test_boot_init_code_excludes_pool_and_includes_loop_delay_slot(self):
        part = self.reviewed[0x0c028394]
        self.assertEqual(part['kind'], 'code')
        self.assertEqual(part['size'], 152)
        end = 0x0c028394 + 152
        self.assertEqual(end, 0x0c02842c)
        self.assertEqual(part['sha256'], sha(self.img[0x0c028394 - self.base:end - self.base]))
        pool = self.reviewed[0x0c02842c]
        self.assertEqual(pool['kind'], 'data')
        self.assertEqual(pool['size'], 96)

    def test_leaf_rts_delay_slot_is_inside_reviewed_code(self):
        part = self.reviewed[0x0c02156c]
        self.assertGreaterEqual(0x0c0215aa, number(part['address']))
        self.assertLess(0x0c0215aa, number(part['address']) + part['size'])
        word = int.from_bytes(self.img[0x0c0215aa - self.base:0x0c0215ac - self.base], 'little')
        self.assertEqual(word, 0x0009)

    def test_wait_loop_pool_does_not_absorb_unreferenced_words(self):
        self.assertIn(0x0c0272e8, self.reviewed)
        self.assertNotIn(0x0c0272ec, self.reviewed)
        self.assertEqual(self.reviewed[0x0c0272e8]['size'], 4)
        self.assertEqual(self.reviewed[0x0c0272f8]['size'], 16)
        result = review(self.img, self.base)
        self.assertGreater(result['unknown_bytes'], 0)


if __name__ == '__main__':
    unittest.main()
