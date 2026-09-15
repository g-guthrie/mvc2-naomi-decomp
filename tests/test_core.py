"""Regression checks for false matching credit and misleading image coverage."""
import copy
from pathlib import Path
import struct
import sys
import unittest
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from core import compare, elf_segments, validate_units
from report import layout, metrics


def executable(address=0x1000, data=b'\x0b\0\x09\0', kind=2):
    header = struct.pack('<16sHHIIIIIHHHHHH', b'\x7fELF\x01\x01\x01'+b'\0'*9,
                         kind, 42, 1, address, 52, 0, 0, 52, 32, 1, 0, 0, 0)
    return header + struct.pack('<8I', 1, 84, address, address, len(data), len(data), 5, 4) + data


def link(address=0x1000, size=4):
    return f"ATTRIBUTE : CODE\nP H'{address:08X} - H'{address+size-1:08X} H'{size:X}\n_func H'{address:08X} ENT\n"


class ProofTests(unittest.TestCase):
    def setUp(self):
        self.unit = dict(id='func', source='src/func.c', mode='verified',
                         exports={'_func':0x1000}, sections=[dict(section='P',kind='code',address=0x1000,size=4)])
        self.original = b'\x0b\0\x09\0'

    def check_match(self, elf=None, map_text=None):
        return compare(self.unit, elf or executable(), map_text or link(), self.original, 0x1000)[0]

    def test_exact_linked_code(self):
        self.assertTrue(self.check_match()['exact'])

    def test_identical_bytes_at_wrong_address_fail(self):
        self.assertFalse(self.check_match(executable(0x2000), link(0x2000))['exact'])

    def test_matching_prefix_with_extra_bytes_fails(self):
        self.assertFalse(self.check_match(executable(data=self.original+b'\0\0'),link(size=6))['exact'])

    def test_changed_byte_fails(self):
        self.assertFalse(self.check_match(executable(data=b'\x0b\0\x08\0'))['exact'])

    def test_relocatable_object_is_not_proof(self):
        with self.assertRaises(ValueError):
            elf_segments(executable(kind=1))

    def test_map_and_elf_cannot_hide_extra_bytes(self):
        self.assertFalse(self.check_match(executable(data=self.original+b'\0\0'))['exact'])

    def test_missing_export_fails(self):
        self.assertFalse(self.check_match(map_text=link().replace('_func','_other'))['exact'])

    def test_overlapping_references_fail(self):
        other = copy.deepcopy(self.unit)
        other['id'] = 'other'
        with self.assertRaisesRegex(ValueError,'Overlapping'):
            validate_units([self.unit,other], {'main':{'address':0x1000,'size':100}})

    def test_candidate_has_no_progress_credit(self):
        proof = {'main_size':100, 'units':[dict(credited=False, sections=[dict(kind='code',size=4)])]}
        self.assertEqual(metrics(proof)['code']['matched_bytes'],0)

    def test_unknown_bytes_stay_in_lower_bound(self):
        proof = {'main_size':100, 'units':[dict(credited=True, sections=[dict(kind='code',size=4)])]}
        self.assertEqual(metrics(proof)['code']['lower_bound_percent'],4)
        self.assertEqual(metrics(proof)['data']['possible_total_bytes'],96)

    def test_treemap_area_and_bounds(self):
        items = [dict(size=s) for s in [4,34,72,1000,2800]]
        boxes = layout(items, 800,400)
        for item,x,y,w,h in boxes:
            self.assertGreater(w,0)
            self.assertGreater(h,0)
            self.assertGreaterEqual(x,0)
            self.assertGreaterEqual(y,0)
            self.assertLessEqual(x+w,800.000001)
            self.assertLessEqual(y+h,400.000001)
            self.assertAlmostEqual(w*h/(800*400),item['size']/3910)
        self.assertAlmostEqual(sum(w*h for _,x,y,w,h in boxes),800*400)


if __name__=='__main__':
    unittest.main()
