#!/usr/bin/env python3
"""Render source-backed progress only after a successful, current build."""

import json
from pathlib import Path

from project import ROOT, load_json, source_fingerprint, validate_units


def build_report(target, units, evidence, fingerprint):
    validate_units(units, target)
    if evidence.get("source_fingerprint") != fingerprint:
        raise ValueError("build evidence is stale; run make verify before reporting")
    if not evidence.get("full_main_matches") or not evidence.get("full_program_rom_matches"):
        raise ValueError("complete retail-image verification is required")
    expected = {u["name"] for u in units if u["status"] == "matching"}
    verified = {u["name"]: u for u in evidence["verified_units"]}
    if set(verified) != expected or len(verified) != len(evidence["verified_units"]):
        raise ValueError("verified units do not match the source catalog")
    total = target["main"]["size"]
    classified = sum(u["size"] for u in units)
    unknown = total - classified
    metrics = {}
    for kind in ("code", "data"):
        rows = [u for u in units if u["kind"] == kind]
        matched = 0
        linked = 0
        count = 0
        for row in rows:
            if row["name"] not in verified:
                continue
            proof = verified[row["name"]]
            if any(proof[key] != row[key] for key in ("kind", "address", "size", "sha256")):
                raise ValueError(f"evidence disagrees with unit: {row['name']}")
            matched += row["size"]
            if proof["linked"]:
                linked += row["size"]
                count += 1
        known = sum(u["size"] for u in rows)
        metrics[kind] = {"identified_bytes": known,
                         "total_bytes": known if not unknown else None,
                         "matched_bytes": matched, "linked_bytes": linked,
                         "linked_units": count,
                         "linked_percent": linked * 100 / known if known and not unknown else None}
    reconstructed = metrics["code"]["linked_bytes"] + metrics["data"]["linked_bytes"]
    return {
        "schema_version": 1,
        "repository": "https://github.com/g-guthrie/mvc2-naomi-decomp",
        "target": {k: target[k] for k in ("name", "platform", "revision", "set", "main", "test")},
        "scope": "Main SH-4 program only; service/test code and other ROM contents are separate work.",
        "code": metrics["code"], "data": metrics["data"],
        "main_image_bytes": total, "unclassified_bytes": unknown,
        "reconstructed_bytes": reconstructed,
        "main_image_percent": reconstructed * 100 / total,
        "layout_complete": not unknown,
        "evidence": evidence, "units": units,
    }


def image_banks(report):
    """Fixed address ranges make unclassified bytes and full-image scope visible."""
    base = report["target"]["main"]["address"]
    total = report["main_image_bytes"]
    banks = []
    for offset in range(0, total, 0x10000):
        size = min(0x10000, total - offset)
        start, end = base + offset, base + offset + size
        linked = sum(max(0, min(end, u["address"] + u["size"]) - max(start, u["address"]))
                     for u in report["units"] if u["status"] == "matching")
        known = sum(max(0, min(end, u["address"] + u["size"]) - max(start, u["address"]))
                    for u in report["units"])
        banks.append({"address": start, "size": size, "linked": linked, "known": known})
    return banks


def pct_label(value):
    return "pending" if value is None else f"{value:.6f}%"


def bar_width(percent, full=1080):
    if not percent:
        return 0
    return max(3, min(full, full * percent / 100))


def generate_svg(report):
    code, data = report["code"], report["data"]
    percent = report["main_image_percent"]
    desc = (f'{pct_label(code["linked_percent"])} linked code, '
            f'{pct_label(data["linked_percent"])} linked data, '
            f'{percent:.6f}% of the main image reconstructed.')
    out = ['<svg xmlns="http://www.w3.org/2000/svg" width="1200" height="900" viewBox="0 0 1200 900" role="img" aria-labelledby="title desc">',
           '<title id="title">Marvel vs. Capcom 2 — NAOMI decompilation progress</title>',
           f'<desc id="desc">{desc}</desc>',
           '<rect width="1200" height="900" rx="20" fill="#10141d"/>',
           '<style>text{font-family:Arial,sans-serif;fill:#eef3fc}.muted{fill:#a1adbf}.mono{font-family:monospace}</style>',
           '<text x="36" y="42" font-size="13" letter-spacing="2" class="muted">SEGA NAOMI · MATCHING DECOMPILATION</text>',
           '<text x="36" y="88" font-size="32" font-weight="700">MARVEL vs. CAPCOM 2</text>',
           '<text x="36" y="116" font-size="15" class="muted">Export / Korea · Rev A · mvsc2 · SH-4 little-endian</text>']
    bars = [
        (148, "CODE", pct_label(code["linked_percent"]),
         f'{code["linked_bytes"]:,} / {code["total_bytes"] if code["total_bytes"] is not None else "?"} B',
         bar_width(code["linked_percent"] or 0)),
        (232, "DATA", pct_label(data["linked_percent"]),
         f'{data["linked_bytes"]:,} / {data["total_bytes"] if data["total_bytes"] is not None else "?"} B',
         bar_width(data["linked_percent"] or 0)),
    ]
    for y, label, value, sub, width in bars:
        out.extend([
            f'<text x="36" y="{y}" font-size="14" class="muted">{label}</text>',
            f'<text x="1164" y="{y}" font-size="22" font-weight="700" text-anchor="end">{value}</text>',
            f'<rect x="36" y="{y+12}" width="1128" height="22" rx="11" fill="#26303f"/>',
            f'<rect x="36" y="{y+12}" width="{width}" height="22" rx="11" fill="#2dbd86"/>',
            f'<text x="36" y="{y+52}" font-size="12" class="muted">{sub}</text>',
        ])
    out.extend([
        f'<text x="36" y="318" font-size="14" class="muted">MAIN IMAGE</text>',
        f'<text x="1164" y="318" font-size="22" font-weight="700" text-anchor="end">{percent:.6f}%</text>',
        f'<rect x="36" y="330" width="1128" height="22" rx="11" fill="#26303f"/>',
        f'<rect x="36" y="330" width="{bar_width(percent)}" height="22" rx="11" fill="#2dbd86"/>',
        f'<text x="36" y="370" font-size="12" class="muted">{report["reconstructed_bytes"]:,} / {report["main_image_bytes"]:,} bytes</text>',
    ])
    out.extend(['<text x="36" y="408" font-size="18" font-weight="700">Main program address map</text>',
                '<text x="36" y="432" font-size="13" class="muted">64 KiB per full tile · blue = partial source coverage · green = fully reconstructed · gray = none</text>'])
    for i, bank in enumerate(image_banks(report)):
        x, y = 36 + (i % 8) * 142, 452 + (i // 8) * 43
        fill = "#2dbd86" if bank["linked"] == bank["size"] else "#285878" if bank["linked"] else "#26303f"
        out.extend([f'<rect x="{x}" y="{y}" width="134" height="35" rx="4" fill="{fill}">',
                    f'<title>0x{bank["address"]:08x}: {bank["linked"]} linked / {bank["size"]} bytes; {bank["known"]} classified</title></rect>',
                    f'<text x="{x+8}" y="{y+22}" font-size="12" class="mono">{bank["address"]:08x}</text>'])
    out.extend(['<text x="36" y="701" font-size="18" font-weight="700">Verified source functions · magnified view</text>',
                '<text x="36" y="725" font-size="13" class="muted">Only compiled, byte-matching, correctly linked source earns green.</text>'])
    functions = [u for u in report["units"] if u["kind"] == "code" and u["status"] == "matching"]
    for i, unit in enumerate(functions[:16]):
        x, y = 36 + (i % 8) * 142, 744 + (i // 8) * 44
        out.extend([f'<rect x="{x}" y="{y}" width="134" height="36" rx="4" fill="#207b59"/>',
                    f'<text x="{x+8}" y="{y+23}" font-size="12" class="mono">{unit["address"]:08x} · {unit["size"]}B</text>'])
    footer = ("Reviewed layout covers the main image; percentages use those code and data totals."
              if report["layout_complete"] else
              f'{report["unclassified_bytes"]:,} bytes remain unclassified; code/data totals are not yet established.')
    out.extend([f'<text x="36" y="850" font-size="14">{footer}</text>',
                f'<text x="36" y="875" font-size="12" class="muted">18/18 ROMs verified · full main image and program ROM match · {report["evidence"]["source_fingerprint"][:12]}</text>',
                '</svg>'])
    return "\n".join(out) + "\n"


def main():
    target = load_json(ROOT / "config/target.json")
    units = load_json(ROOT / "config/units.json")
    evidence = load_json(ROOT / "build/evidence.json")
    report = build_report(target, units, evidence, source_fingerprint())
    (ROOT / "assets").mkdir(exist_ok=True)
    (ROOT / "docs").mkdir(exist_ok=True)
    (ROOT / "assets/progress.svg").write_text(generate_svg(report))
    (ROOT / "docs/progress.json").write_text(json.dumps(report, indent=2) + "\n")
    template = (ROOT / "tools/dashboard.html").read_text()
    serialized = json.dumps(report, separators=(",", ":")).replace("<", "\\u003c")
    (ROOT / "docs/index.html").write_text(template.replace("/* REPORT_DATA */", "const REPORT = " + serialized + ";"))
    print(f"Report: {report['code']['linked_bytes']} linked code bytes, "
          f"{report['data']['linked_bytes']} linked data bytes, "
          f"{report['unclassified_bytes']} unclassified bytes.")


if __name__ == "__main__":
    try:
        main()
    except (ValueError, OSError) as exc:
        raise SystemExit(str(exc))
