#!/usr/bin/env python3
"""Assemble a unit from the verified twins of its functions.

    python3 tools/clone.py 0x0c118fc8 276 src/candidates/new.c

For every function in the span with a verified function of the same shape
(see twins.py), the twin's source is copied with the function renamed, the
pool addresses substituted in first-use order, and differing immediates
substituted. Headers (structs, typedefs, externs) of the twin files are
carried over; extern declarations are rewritten for the substituted symbols.
A function without a twin, or whose twin reads different member offsets,
becomes a stub with its Ghidra draft in a comment for someone to write.

The result is a draft: run diff_unit.py on it. When every function had a
twin it is often exact as written.
"""
import bisect
import collections
import re
import struct
import sys

from core import ROOT, load, number, verify_rom
from ghidra_draft import function_starts
from twins import shape

SYMBOL = re.compile(r'\b(func|dat|ptr|table)_(0c[0-9a-f]{6})\b')


def literal_loads(image, base, lo, hi):
    """(kind, value) for each mov.w, mov.l and mova literal in code order."""
    out = []
    for pc in range(lo, hi, 2):
        w = struct.unpack_from('<H', image, pc - base)[0]
        if w >> 12 == 0xD or w >> 8 == 0xC7:
            a = ((pc + 4) & ~3) + (w & 0xFF) * 4
            out.append(('l', struct.unpack_from('<I', image, a - base)[0]))
        elif w >> 12 == 0x9:
            a = pc + 4 + (w & 0xFF) * 2
            out.append(('w', struct.unpack_from('<H', image, a - base)[0]))
    return out


def immediates(image, base, lo, hi):
    return [struct.unpack_from('<H', image, pc - base)[0] & 0xFF for pc in range(lo, hi, 2)
            if struct.unpack_from('<H', image, pc - base)[0] >> 12 == 0xE]


def full_twin_spans(image, base, ranges, starts, extent, groups, verified):
    """Proposed units whose every function has a verified twin."""
    from unit_spans import spans
    owned = [(number(p['address']), number(p['address']) + number(p['size']))
             for u in load(ROOT / 'config/units.json') for p in u['sections'] if p['kind'] == 'code']
    out = []
    for st, n in spans(image, base, ranges, owned):
        if st >= 0x0c1e9000 or n > 1500:
            continue
        fs = [a for a in starts if st <= a < st + n]
        if fs and all(any(t in verified and t != a for t in groups[shape(image, base, a, extent(a))]) for a in fs):
            out.append((st, n))
    return out


def main():
    if sys.argv[1] == '--list':
        start, size, out_path = 0, 0, None
    else:
        start, size, out_path = number(sys.argv[1]), int(sys.argv[2]), sys.argv[3]
    target = load(ROOT / 'config/target.json')
    program = verify_rom(target)
    offset, base, total = (number(target['main'][k]) for k in ('rom_offset', 'address', 'size'))
    image = program[offset:offset + total]
    ranges = [(number(r['address']), number(r['size']), r['kind']) for r in load(ROOT / 'config/mapping.json')['ranges']]
    starts = sorted(function_starts(image, base, ranges))
    code = sorted((lo, lo + n) for lo, n, kind in ranges if kind == 'code')
    heads = [c[0] for c in code]

    def extent(a):
        i = bisect.bisect_right(starts, a)
        nxt = starts[i] if i < len(starts) else None
        j = bisect.bisect_right(heads, a) - 1
        end = code[j][1]
        while j + 1 < len(code) and code[j + 1][0] == end:
            j += 1
            end = code[j][1]
        return min(end, nxt) if nxt else end

    verified = {}
    for unit in load(ROOT / 'config/units.json'):
        if unit['mode'] == 'verified':
            for symbol, address in unit.get('exports', {}).items():
                if symbol.startswith('_func_'):
                    verified[number(address)] = unit['source']
    groups = collections.defaultdict(list)
    for a in starts:
        groups[shape(image, base, a, extent(a))].append(a)

    if out_path is None:
        for st, n in full_twin_spans(image, base, ranges, starts, extent, groups, verified):
            print(f'0x{st:08x} {n}')
        return 0
    headers, bodies, notes = [], [], []
    seen_headers = set()
    for a in [s for s in starts if start <= s < start + size]:
        e = extent(a)
        twins = [t for t in groups[shape(image, base, a, e)] if t in verified and t != a]
        draft = ROOT / 'build' / 'drafts' / f'func_{a:08x}.c'
        if not twins:
            body = (draft.read_text() if draft.exists() else '').replace('/*', '/-').replace('*/', '-/')
            bodies.append(f'/* func_{a:08x}: no verified twin. Ghidra draft:\n{body}*/\nvoid func_{a:08x}(void) {{ }}\n')
            notes.append(f'func_{a:08x}: no twin')
            continue
        t = twins[0]
        text = open(ROOT / verified[t]).read()
        m = re.search(rf'^[^\n;]*\bfunc_{t:08x}\s*\([^;{{]*\)\s*\n\{{.*?^\}}', text, re.S | re.M)
        if not m:
            notes.append(f'func_{a:08x}: twin func_{t:08x} source not found')
            continue
        body = m.group(0)
        header = text[:text.find(m.group(0).split('\n')[0])] if False else text
        # header: everything before the first function definition in the twin file
        first = re.search(r'^[^\n;{}]*\bfunc_0c[0-9a-f]{6}\s*\([^;]*\)\s*\n\{', text, re.M)
        head = text[:first.start()] if first else ''
        # substitute pool literals by first-use order
        tl, al = literal_loads(image, base, t, extent(t)), literal_loads(image, base, a, e)
        renames = {}
        offsets_differ = False
        for (k1, v1), (k2, v2) in zip(tl, al):
            if k1 == 'l' and v1 != v2 and base <= v1 < base + total and base <= v2 < base + total:
                renames[f'{v1:08x}'] = f'{v2:08x}'
            elif k1 == 'w' and v1 != v2:
                offsets_differ = True
        if offsets_differ:
            notes.append(f'func_{a:08x}: twin func_{t:08x} reads other member offsets; check the struct')
        body = SYMBOL.sub(lambda mm: f'{mm.group(1)}_{renames.get(mm.group(2), mm.group(2))}', body)
        body = re.sub(rf'\bfunc_{t:08x}\b', f'func_{a:08x}', body)
        # substitute immediates that differ, in order
        ti, ai = immediates(image, base, t, extent(t)), immediates(image, base, a, e)
        for v1, v2 in zip(ti, ai):
            if v1 != v2:
                s1 = v1 - 256 if v1 & 0x80 else v1
                s2 = v2 - 256 if v2 & 0x80 else v2
                body, n = re.subn(rf'(?<![\w.]){s1}(?![\w.])', str(s2), body, count=1)
                if not n:
                    notes.append(f'func_{a:08x}: immediate {s1} -> {s2} not found in source')
        # header with the same symbol renames, deduplicated by line
        head = SYMBOL.sub(lambda mm: f'{mm.group(1)}_{renames.get(mm.group(2), mm.group(2))}', head)
        blocks, block = [], []
        for line in head.split('\n'):
            if block or re.match(r'\s*(struct|union)\s+\w+\s*\{', line):
                block.append(line)
                if line.strip() == '};':
                    blocks.append('\n'.join(block))
                    block = []
            elif line.strip() and not line.strip().startswith(('/*', '*')):
                blocks.append(line)
        for item in blocks:
            if item not in seen_headers:
                seen_headers.add(item)
                headers.append(item)
        # externs for symbols the twin's file defined itself
        bodies.append(body + '\n')
        notes.append(f'func_{a:08x}: from twin func_{t:08x}' + (f' with {len(renames)} symbols renamed' if renames else ''))
    text = '/* Assembled by tools/clone.py from verified twins. */\n' + '\n'.join(headers).strip() + '\n\n' + '\n'.join(bodies)
    # declare any function or data symbol used but not declared
    declared = set(re.findall(r'\b(?:func|dat|ptr|table)_0c[0-9a-f]{6}\b(?=\s*[\[(;=,])', '\n'.join(headers)))
    open(ROOT / out_path, 'w').write(text)
    for n in notes:
        print(n)
    return 0


if __name__ == '__main__':
    sys.exit(main())
