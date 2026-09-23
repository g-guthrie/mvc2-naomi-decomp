"""A proposed unit must contain the literal pools its code reads."""
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from unit_spans import spans


class UnitSpanTests(unittest.TestCase):
    def test_literal_load_crosses_earlier_pool_boundary(self):
        base = 0x1000
        image = bytearray(0x30)
        image[:4] = bytes.fromhex('0ad10900')  # MOV.L at 0x1000 reads 0x102c.
        ranges = [(base, 4, 'code'), (base + 4, 4, 'data'),
                  (base + 8, 0x24, 'code'), (base + 0x2c, 4, 'data')]
        self.assertEqual(spans(image, base, ranges, []), [(base, 0x30)])

    def test_long_branch_crosses_pool_boundary(self):
        base = 0x1000
        image = bytearray(0x908)
        image[:4] = bytes.fromhex('7ea40900')  # BRA from 0x1000 to 0x1900; NOP delay.
        ranges = [(base, 4, 'code'), (base + 4, 4, 'data'),
                  (base + 8, 0x8fc, 'code'), (base + 0x904, 4, 'data')]
        self.assertEqual(spans(image, base, ranges, []), [(base, 0x908)])


if __name__ == '__main__':
    unittest.main()
