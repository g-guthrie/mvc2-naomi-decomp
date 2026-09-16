"""A library unit links a prebuilt SDK module; it compiles nothing and claims nothing extra."""
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from core import ROOT, load, number, validate_units


def library_unit(**changes):
    unit = dict(id='lib_x_m', library='toolchain/naomi-sdk/lib/libkamui2.lib', module='km2ver_kamui2_lib_',
                mode='verified', sections=[dict(section='PSG', kind='code', address='0x0c200000', size=64)],
                exports={'_kmGetVersionInfo': '0x0c200000'})
    unit.update(changes)
    return [unit]


class LibraryUnitTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.target = load(ROOT / 'config/target.json')

    def test_a_library_unit_validates(self):
        validate_units(library_unit(), self.target)

    def test_a_library_unit_compiles_nothing(self):
        for extra in ({'source': 'src/verified/x.c'}, {'options': 'game'}):
            with self.assertRaises(ValueError):
                validate_units(library_unit(**extra), self.target)

    def test_a_library_unit_names_a_module_and_its_exports(self):
        for missing in ('module', 'exports'):
            with self.assertRaises(ValueError):
                validate_units(library_unit(**{missing: None}), self.target)

    def test_the_library_comes_from_the_checked_in_sdk(self):
        for path in ('/etc/passwd.lib', '../evil.lib', 'toolchain/naomi-sdk/../x.lib', 'src/libkamui2.lib',
                     'toolchain/naomi-sdk/lib/libkamui2.c'):
            with self.assertRaises(ValueError):
                validate_units(library_unit(library=path), self.target)

    def test_registered_library_units_name_a_checked_in_library_and_module(self):
        seen = 0
        for unit in load(ROOT / 'config/units.json'):
            if 'library' not in unit:
                continue
            seen += 1
            self.assertTrue((ROOT / unit['library']).is_file(), unit['id'])
            self.assertNotIn('source', unit)
            self.assertTrue(unit['exports'], unit['id'])
            for part in unit['sections']:
                self.assertGreater(number(part['size']), 0)
        self.assertGreater(seen, 100)

    def test_library_units_do_not_overlap_each_other(self):
        spans = []
        for unit in load(ROOT / 'config/units.json'):
            for part in unit['sections']:
                if part['kind'] != 'bss':
                    start = number(part['address'])
                    spans.append((start, start + number(part['size']), unit['id']))
        spans.sort()
        for left, right in zip(spans, spans[1:]):
            self.assertLessEqual(left[1], right[0], f'{left[2]} overlaps {right[2]}')


if __name__ == '__main__':
    unittest.main()
