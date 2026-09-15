#!/usr/bin/env python3
"""Rooted SH-4 control-flow mapper. Candidates still need ledger review."""
from __future__ import annotations

import argparse
import json
from collections import defaultdict

from core import ROOT, load, number, sha, verify_rom


def sext(value, bits):
    sign = 1 << (bits - 1)
    return (value & (sign - 1)) - (value & sign)


def decode(pc, word):
    op = word >> 12
    n = (word >> 8) & 0xF
    info = {
        "kind": "other",
        "delay": False,
        "seq": True,
        "targets": [],
        "call": None,
        "jmp_reg": None,
        "jsr_reg": None,
        "lit": None,
        "lit_reg": None,
    }
    if word == 0x000B:
        info.update(kind="rts", delay=True, seq=False)
        return info
    if word == 0x002B:
        info.update(kind="rte", delay=True, seq=False)
        return info
    if (word & 0xF0FF) == 0x400B:
        info.update(kind="jsr", delay=True, jsr_reg=n)
        return info
    if (word & 0xF0FF) == 0x402B:
        info.update(kind="jmp", delay=True, seq=False, jmp_reg=n)
        return info
    if (word & 0xF0FF) == 0x0003:
        info.update(kind="bsrf", delay=True)
        return info
    if (word & 0xF0FF) == 0x0023:
        info.update(kind="braf", delay=True, seq=False)
        return info
    if op == 0xA:
        target = pc + 4 + sext(word & 0xFFF, 12) * 2
        info.update(kind="bra", delay=True, seq=False, targets=[target])
        return info
    if op == 0xB:
        target = pc + 4 + sext(word & 0xFFF, 12) * 2
        info.update(kind="bsr", delay=True, call=target)
        return info
    if (word & 0xFF00) == 0x8900:
        info.update(kind="bt", targets=[pc + 4 + sext(word & 0xFF, 8) * 2])
        return info
    if (word & 0xFF00) == 0x8B00:
        info.update(kind="bf", targets=[pc + 4 + sext(word & 0xFF, 8) * 2])
        return info
    if (word & 0xFF00) == 0x8D00:
        info.update(kind="bts", delay=True, targets=[pc + 4 + sext(word & 0xFF, 8) * 2])
        return info
    if (word & 0xFF00) == 0x8F00:
        info.update(kind="bfs", delay=True, targets=[pc + 4 + sext(word & 0xFF, 8) * 2])
        return info
    if op == 0x9:
        info["lit"] = (pc + 4 + (word & 0xFF) * 2, 2)
        return info
    if op == 0xD:
        info["lit"] = (((pc + 4) & ~3) + (word & 0xFF) * 4, 4)
        info["lit_reg"] = n
        return info
    if (word & 0xFF00) == 0xC700:
        info["lit"] = (((pc + 4) & ~3) + (word & 0xFF) * 4, 4)
        return info
    return info


def contig(addresses):
    ordered = sorted(addresses)
    if not ordered:
        return []
    runs = []
    start = end = ordered[0]
    for addr in ordered[1:]:
        if addr == end + 2:
            end = addr
        else:
            runs.append((start, end + 2))
            start = end = addr
    runs.append((start, end + 2))
    return runs


class Image:
    def __init__(self, blob, base):
        self.blob = blob
        self.base = base
        self.end = base + len(blob)

    def word(self, pc):
        if pc < self.base or pc + 2 > self.end or pc % 2:
            return None
        off = pc - self.base
        return int.from_bytes(self.blob[off:off + 2], "little")

    def u32(self, addr):
        if addr < self.base or addr + 4 > self.end:
            return None
        off = addr - self.base
        return int.from_bytes(self.blob[off:off + 4], "little")

    def contains(self, addr, size=2):
        return self.base <= addr and addr + size <= self.end


def literal_reg_target(image, pc, reg, lookback=12):
    """Last PC-relative MOV.L into reg in the preceding lookback halfwords."""
    addr = pc - 2
    steps = 0
    while steps < lookback and image.contains(addr):
        word = image.word(addr)
        if word is None:
            break
        info = decode(addr, word)
        if info.get("lit_reg") == reg and info["lit"] and info["lit"][1] == 4:
            return image.u32(info["lit"][0])
        if info["kind"] in {"rts", "rte", "jmp", "bra", "bsr", "jsr", "bt", "bf", "bts", "bfs"}:
            break
        addr -= 2
        steps += 1
    return None


def walk_function(image, entry, max_insns=2048):
    if not image.contains(entry) or entry % 2:
        return None
    visited = set()
    delay = set()
    terminal_delay = set()
    literals = []
    calls = []
    indirect = []
    issues = []
    work = [entry]
    while work:
        pc = work.pop()
        if pc in visited:
            continue
        if not image.contains(pc) or pc % 2:
            issues.append(("oob", pc))
            continue
        word = image.word(pc)
        if word is None:
            issues.append(("noword", pc))
            continue
        visited.add(pc)
        if len(visited) > max_insns:
            issues.append(("too_big", entry))
            break
        info = decode(pc, word)
        if pc in terminal_delay:
            info["seq"] = False
        if info["lit"]:
            literals.append((pc, info["lit"][0], info["lit"][1], info.get("lit_reg")))
        if info["delay"]:
            delay.add(pc + 2)
            if image.contains(pc + 2):
                work.append(pc + 2)
            if info["kind"] in {"rts", "rte", "jmp", "bra", "braf"}:
                terminal_delay.add(pc + 2)
        if info["kind"] in ("bt", "bf", "bts", "bfs"):
            for target in info["targets"]:
                if image.contains(target):
                    work.append(target)
                else:
                    issues.append(("branch_oob", pc, target))
        elif info["kind"] == "bra":
            target = info["targets"][0]
            if not image.contains(target):
                issues.append(("bra_oob", pc, target))
            elif target >= entry:
                work.append(target)
            else:
                calls.append(("bra_tail", pc, target))
        elif info["kind"] == "bsr" and info["call"] is not None:
            calls.append(("bsr", pc, info["call"]))
        elif info["kind"] == "jsr":
            target = literal_reg_target(image, pc, info["jsr_reg"])
            if target is not None:
                calls.append(("jsr", pc, target))
            else:
                indirect.append(("jsr", pc, info["jsr_reg"]))
        elif info["kind"] == "jmp":
            target = literal_reg_target(image, pc, info["jmp_reg"])
            if target is not None:
                calls.append(("jmp", pc, target))
            else:
                indirect.append(("jmp", pc, info["jmp_reg"]))
        if info["seq"] and image.contains(pc + 2):
            work.append(pc + 2)
    code_pcs = visited | {p for p in delay if image.contains(p)}
    # Do not continue a code run into a referenced literal.
    lit_bytes = {}
    for src, addr, width, _reg in literals:
        if addr in code_pcs:
            continue
        if not image.contains(addr, width):
            issues.append(("lit_oob", src, addr))
            continue
        for off in range(width):
            lit_bytes[addr + off] = src
    code_runs = []
    for start, stop in contig(sorted(code_pcs)):
        # trim trailing bytes that are only literals and never executed
        code_runs.append((start, stop - start))
    # split literal bytes into supported contiguous runs, dropping holes
    data_runs = []
    if lit_bytes:
        ordered = sorted(lit_bytes)
        run_s = run_e = ordered[0]
        for addr in ordered[1:]:
            if addr == run_e + 1:
                run_e = addr
            else:
                data_runs.append((run_s, run_e + 1 - run_s))
                run_s = run_e = addr
        data_runs.append((run_s, run_e + 1 - run_s))
    return {
        "entry": entry,
        "code": code_runs,
        "data": data_runs,
        "calls": calls,
        "indirect": indirect,
        "issues": issues,
        "nins": len(visited),
    }


def covered_kind(ranges, addr):
    for lo, hi, kind in ranges:
        if lo <= addr < hi:
            return kind
    return None


def merge_into(existing, start, size, kind):
    end = start + size
    for lo, hi, k in existing:
        if start < hi and lo < end and k != kind:
            return False
    return True


def map_from_roots(image, roots, existing=()):
    reviewed = [(lo, hi, k) for lo, hi, k in existing]
    pending = []
    seen = set()
    for root in roots:
        if root not in seen:
            pending.append(root)
            seen.add(root)
    functions = []
    while pending:
        entry = pending.pop(0)
        already = covered_kind(reviewed, entry) == "code"
        fn = walk_function(image, entry)
        if fn is None:
            continue
        if fn["issues"] and not already:
            continue
        if not already:
            conflict = False
            for start, size in fn["code"]:
                if not merge_into(reviewed, start, size, "code"):
                    conflict = True
                if covered_kind(reviewed, start) == "data":
                    conflict = True
            for start, size in fn["data"]:
                if not merge_into(reviewed, start, size, "data"):
                    conflict = True
                if covered_kind(reviewed, start) == "code":
                    conflict = True
            if not conflict and not fn["issues"]:
                functions.append(fn)
                for start, size in fn["code"]:
                    reviewed.append((start, start + size, "code"))
                for start, size in fn["data"]:
                    reviewed.append((start, start + size, "data"))
        if fn is not None:
            for _kind, _pc, target in fn["calls"]:
                if isinstance(target, int) and image.contains(target) and target not in seen:
                    seen.add(target)
                    pending.append(target)
    return functions


def load_image():
    target = load(ROOT / "config/target.json")
    main = target["main"]
    base = number(main["address"])
    blob = verify_rom(target)[number(main["rom_offset"]):number(main["rom_offset"]) + number(main["size"])]
    return Image(blob, base), target


def existing_ranges(image):
    rows = []
    for part in load(ROOT / "config/mapping.json")["ranges"]:
        lo = number(part["address"])
        rows.append((lo, lo + part["size"], part["kind"]))
    return rows


def proposals_from_functions(image, functions, existing):
    seen = set()
    out = []
    for fn in functions:
        for start, size in fn["code"]:
            if covered_kind(existing, start) == "code":
                continue
            key = (start, size, "code")
            if key in seen:
                continue
            seen.add(key)
            sl = image.blob[start - image.base:start - image.base + size]
            out.append({
                "address": f"0x{start:08x}",
                "size": size,
                "kind": "code",
                "sha256": sha(sl),
                "evidence": (
                    f"CFG walk from 0x{fn['entry']:08x}; delay slots included; "
                    f"direct BSR/JSR/JMP targets recorded; PC-relative pools split."
                ),
            })
        for start, size in fn["data"]:
            if covered_kind(existing, start) == "data":
                continue
            if covered_kind(existing, start) == "code":
                continue
            key = (start, size, "data")
            if key in seen:
                continue
            seen.add(key)
            sl = image.blob[start - image.base:start - image.base + size]
            out.append({
                "address": f"0x{start:08x}",
                "size": size,
                "kind": "data",
                "sha256": sha(sl),
                "evidence": (
                    f"PC-relative consumer in CFG of 0x{fn['entry']:08x}; "
                    f"unreferenced adjacent bytes omitted."
                ),
            })
    out.sort(key=lambda r: int(r["address"], 16))
    return out


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--json", action="store_true")
    args = parser.parse_args()
    image, target = load_image()
    existing = existing_ranges(image)
    roots = [number(target["main"]["entrypoint"])]
    for lo, _hi, kind in existing:
        if kind == "code":
            roots.append(lo)
    functions = map_from_roots(image, roots, existing)
    new_fn = [fn for fn in functions if covered_kind(existing, fn["entry"]) != "code"]
    props = proposals_from_functions(image, new_fn, existing)
    code = sum(p["size"] for p in props if p["kind"] == "code")
    data = sum(p["size"] for p in props if p["kind"] == "data")
    summary = {
        "new_functions": len(new_fn),
        "new_ranges": len(props),
        "proposed_code_bytes": code,
        "proposed_data_bytes": data,
        "ranges": props,
    }
    if args.json:
        print(json.dumps(summary, indent=2))
    else:
        print(f"new functions {summary['new_functions']} ranges {summary['new_ranges']} "
              f"code {code} data {data}")


if __name__ == "__main__":
    main()
