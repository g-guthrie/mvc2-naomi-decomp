#!/usr/bin/env python3
"""Search source spellings that move a candidate closer to retail.

    python3 tools/permute.py src/candidates/unit.c [--rounds 6]

Applies the mechanical rewrites from docs/MATCHING.md one site at a time,
compiles each variant with the diff tool, keeps the variant with the most
equal bytes, and repeats. Byte equality is the score and an exact match is
the only accepted end state, so a rewrite never has to preserve meaning on
its own: retail decides. The file is rewritten in place only when a variant
improves on it; the original is kept as FILE.orig until the run ends.
"""
import argparse
import re
import shutil
import sys

from core import ROOT
from diff_unit import evaluate

FIELD = r'[A-Za-z_]\w*(?:->\w+|\.\w+|\[[^\]]*\])+'

REWRITES = [
    ('not-vs-eq0', rf'if \(({FIELD}) == 0\)', lambda m: f'if (!{m.group(1)})'),
    ('eq0-vs-not', rf'if \(!({FIELD})\)', lambda m: f'if ({m.group(1)} == 0)'),
    ('ne0-vs-plain', rf'if \(({FIELD}) != 0\)', lambda m: f'if ({m.group(1)})'),
    ('plain-vs-ne0', rf'if \(({FIELD})\)', lambda m: f'if ({m.group(1)} != 0)'),
    ('inc-vs-add', rf'({FIELD})\+\+;', lambda m: f'{m.group(1)} = {m.group(1)} + 1;'),
    ('add-vs-inc', rf'({FIELD}) = \1 \+ 1;', lambda m: f'{m.group(1)}++;'),
    ('dec-vs-sub', rf'({FIELD})--;', lambda m: f'{m.group(1)} = {m.group(1)} - 1;'),
    ('sub-vs-dec', rf'({FIELD}) = \1 - 1;', lambda m: f'{m.group(1)}--;'),
    ('pluseq-vs-long', rf'({FIELD}) \+= ({FIELD}|[-\w.]+);', lambda m: f'{m.group(1)} = {m.group(1)} + {m.group(2)};'),
    ('long-vs-pluseq', rf'({FIELD}) = \1 \+ ({FIELD}|[-\w.]+);', lambda m: f'{m.group(1)} += {m.group(2)};'),
    ('chain-const', rf'({FIELD}) = (-?\w+);\n(\s*)({FIELD}) = \2;', lambda m: f'{m.group(1)} = {m.group(4)} = {m.group(2)};'),
    ('assign-in-cond', rf'(\w+) = (\w+\([^;]*\));\n(\s*)if \(\1\)', lambda m: f'if (({m.group(1)} = {m.group(2)}) != 0)'),
    ('uchar-vs-char', r'\bunsigned char (\w+);', lambda m: f'char {m.group(1)};'),
    ('char-vs-uchar', r'(?<!unsigned )\bchar (\w+);', lambda m: f'unsigned char {m.group(1)};'),
    ('ushort-vs-short', r'\bunsigned short (\w+);', lambda m: f'short {m.group(1)};'),
    ('short-vs-ushort', r'(?<!unsigned )\bshort (\w+);', lambda m: f'unsigned short {m.group(1)};'),
    ('uint-vs-int', r'\bunsigned int (\w+);', lambda m: f'int {m.group(1)};'),
    ('int-vs-uint', r'(?<!unsigned )\bint (\w+);', lambda m: f'unsigned int {m.group(1)};'),
    ('swap-stmts', r'^(\s*)([^\n;{}]+;)\n\1([^\n;{}]+;)\n', lambda m: f'{m.group(1)}{m.group(3)}\n{m.group(1)}{m.group(2)}\n'),
]


def score(path):
    proof, _ = evaluate(path)
    equal = sum(p['equal_bytes'] for p in proof['sections'])
    return equal, proof['exact']


def variants(text):
    for name, pattern, repl in REWRITES:
        regex = re.compile(pattern, re.M)
        sites = list(regex.finditer(text))
        for i, m in enumerate(sites):
            new = text[:m.start()] + repl(m) + text[m.end():]
            if new != text:
                yield f'{name}@{i}', new


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('path')
    parser.add_argument('--rounds', type=int, default=6)
    parser.add_argument('--budget', type=int, default=400, help='most variants compiled in total')
    args = parser.parse_args()
    path = ROOT / args.path
    backup = path.with_suffix('.c.orig')
    shutil.copyfile(path, backup)
    best_text = path.read_text()
    best, exact = score(args.path)
    print(f'start {best} equal bytes', flush=True)
    compiled = 0
    try:
        for round_ in range(args.rounds):
            if exact:
                break
            improved = None
            for name, text in variants(best_text):
                if compiled >= args.budget:
                    break
                path.write_text(text)
                try:
                    equal, is_exact = score(args.path)
                except Exception:
                    continue
                finally:
                    compiled += 1
                if equal > best or is_exact:
                    best, exact, improved, best_text = equal, is_exact, name, text
                    print(f'  {name}: {equal} equal bytes{" EXACT" if is_exact else ""}', flush=True)
                    if is_exact:
                        break
            if improved is None:
                break
        path.write_text(best_text)
    finally:
        if not exact and best_text == backup.read_text():
            path.write_text(backup.read_text())
        backup.unlink(missing_ok=True)
    print(f'end {best} equal bytes, {compiled} variants compiled, {"EXACT" if exact else "not exact"}')
    return 0 if exact else 1


if __name__ == '__main__':
    sys.exit(main())
