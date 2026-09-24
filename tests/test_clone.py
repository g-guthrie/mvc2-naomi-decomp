"""Clone drafts must retain declarations after compact object layouts."""
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from clone import header_blocks


class CloneHeaderTests(unittest.TestCase):
    def test_one_line_struct_does_not_swallow_following_extern(self):
        head = ('struct Global { unsigned char flag; };\n'
                'typedef void (*Handler)(struct Global *);\n'
                'extern Handler table_0c242524[];\n')
        self.assertEqual(header_blocks(head), [
            'struct Global { unsigned char flag; };',
            'typedef void (*Handler)(struct Global *);',
            'extern Handler table_0c242524[];',
        ])

    def test_nested_declaration_stays_whole(self):
        head = ('struct Actor {\n'
                '    union { int count; char bytes[4]; } value;\n'
                '};\n'
                'extern void callback(struct Actor *);\n')
        self.assertEqual(header_blocks(head), [
            'struct Actor {\n    union { int count; char bytes[4]; } value;\n};',
            'extern void callback(struct Actor *);',
        ])


if __name__ == '__main__':
    unittest.main()
