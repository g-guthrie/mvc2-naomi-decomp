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


def generate_svg(report):
    code, data = report["code"], report["data"]
    percent = report["main_image_percent"]
    out = ['<svg xmlns="http://www.w3.org/2000/svg" width="1200" height="840" viewBox="0 0 1200 840" role="img" aria-labelledby="title desc">',
           '<title id="title">Marvel vs. Capcom 2 — NAOMI decompilation progress</title>',
           f'<desc id="desc">{code["linked_bytes"]} linked code bytes, {data["linked_bytes"]} linked data bytes. '
           f'{report["unclassified_bytes"]} bytes not yet classified. Separate code and data percentages are pending a complete layout.</desc>',
           '<rect width="1200" height="840" rx="20" fill="#10141d"/>',
           '<style>text{font-family:Arial,sans-serif;fill:#eef3fc}.muted{fill:#a1adbf}.mono{font-family:monospace}</style>',
           '<text x="36" y="42" font-size="13" letter-spacing="2" class="muted">SEGA NAOMI · MATCHING DECOMPILATION</text>',
           '<text x="36" y="88" font-size="32" font-weight="700">MARVEL vs. CAPCOM 2</text>',
           '<text x="36" y="116" font-size="15" class="muted">Export / Korea · Rev A · mvsc2 · SH-4 little-endian</text>']
    cards = [(36, "LINKED CODE", f'{code["linked_bytes"]:,} B', f'{code["linked_units"]} C functions · total code size pending'),
             (420, "LINKED DATA", f'{data["linked_bytes"]:,} B', f'{data["linked_units"]} reconstructed data units · total size pending'),
             (804, "MAIN IMAGE RECONSTRUCTED", f'{percent:.5f}%', f'{report["reconstructed_bytes"]:,} / {report["main_image_bytes"]:,} bytes')]
    for x, label, value, sub in cards:
        out.extend([f'<rect x="{x}" y="143" width="360" height="113" rx="10" fill="#1c2431"/>',
                    f'<text x="{x+18}" y="170" font-size="12" class="muted">{label}</text>',
                    f'<text x="{x+18}" y="214" font-size="35" font-weight="700">{value}</text>',
                    f'<text x="{x+18}" y="240" font-size="11" class="muted">{sub}</text>'])
    out.extend(['<text x="36" y="293" font-size="18" font-weight="700">Main program address map</text>',
                '<text x="36" y="317" font-size="13" class="muted">64 KiB per full tile · blue = partial source coverage · green = fully reconstructed · gray = none</text>'])
    for i, bank in enumerate(image_banks(report)):
        x, y = 36 + (i % 8) * 142, 337 + (i // 8) * 43
        fill = "#2dbd86" if bank["linked"] == bank["size"] else "#285878" if bank["linked"] else "#26303f"
        out.extend([f'<rect x="{x}" y="{y}" width="134" height="35" rx="4" fill="{fill}">',
                    f'<title>0x{bank["address"]:08x}: {bank["linked"]} linked / {bank["size"]} bytes; {bank["known"]} classified</title></rect>',
                    f'<text x="{x+8}" y="{y+22}" font-size="12" class="mono">{bank["address"]:08x}</text>'])
    out.extend(['<text x="36" y="586" font-size="18" font-weight="700">Verified source functions · magnified view</text>',
                '<text x="36" y="610" font-size="13" class="muted">Only compiled, byte-matching, correctly linked source earns green. This view excludes unmapped bytes.</text>'])
    functions = [u for u in report["units"] if u["kind"] == "code" and u["status"] == "matching"]
    for i, unit in enumerate(functions[:16]):
        x, y = 36 + (i % 8) * 142, 629 + (i // 8) * 44
        out.extend([f'<rect x="{x}" y="{y}" width="134" height="36" rx="4" fill="#207b59"/>',
                    f'<text x="{x+8}" y="{y+23}" font-size="12" class="mono">{unit["address"]:08x} · {unit["size"]}B</text>'])
    out.extend([f'<text x="36" y="735" font-size="14">{report["unclassified_bytes"]:,} bytes remain unclassified; code/data totals are not yet established.</text>',
                f'<text x="36" y="760" font-size="13" class="muted">18/18 ROMs verified · full main image and program ROM match · scope: main program only</text>',
                f'<text x="36" y="805" font-size="12" class="muted">Build inputs {report["evidence"]["source_fingerprint"][:12]} · generated after successful compilation</text>',
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
