import hashlib
from pathlib import Path
import sys
import tempfile
import unittest
import zipfile
import zlib

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from project import ROOT, checked_replacements, digest, load_json, read_verified_roms, validate_units
from report import build_report, generate_svg


def fixture():
    target = {"name": "Fixture", "platform": "SH-4", "revision": "test", "set": "test",
              "main": {"address": 0x1000, "size": 64}, "test": {}}
    row = {"name": "function", "address": 0x1000, "size": 4, "kind": "code",
           "status": "matching", "representation": "reconstructed", "source": "src/a.c",
           "section": ".text.function", "sha256": digest(b"code")}
    elf = {"symbols": {"function": {"address": 0x1000, "size": 4, "type": 2, "section": 0}},
           "sections": [{"name": ".text.function", "address": 0x1000, "data": b"code"}]}
    original = b"code" + bytes(60)
    evidence = {"source_fingerprint": "current", "full_main_matches": True,
                "full_program_rom_matches": True,
                "verified_units": [{k: row[k] for k in ("name", "address", "size", "kind", "sha256")}]}
    evidence["verified_units"][0]["linked"] = True
    return target, row, elf, original, evidence


class VerificationTests(unittest.TestCase):
    def test_same_bytes_at_wrong_address_are_rejected(self):
        target, row, elf, original, _ = fixture()
        elf["symbols"]["function"]["address"] += 4
        with self.assertRaisesRegex(ValueError, "linked symbol/address/size mismatch"):
            checked_replacements(original, 0x1000, [row], elf)

    def test_shipped_catalog_covers_the_main_image_without_overlap(self):
        target = load_json(ROOT / "config/target.json")
        units = load_json(ROOT / "config/units.json")
        validate_units(units, target)
        self.assertEqual(sum(u["size"] for u in units), target["main"]["size"])
        matching = [u for u in units if u["status"] == "matching"]
        self.assertTrue(matching)
        self.assertTrue(all(u["representation"] == "reconstructed" for u in matching))
        placeholders = [u for u in units if u["representation"] == "placeholder"]
        self.assertTrue(placeholders)
        self.assertTrue(all(u["status"] != "matching" for u in placeholders))

    def test_gcc_constant_byte_stores_are_matching_source(self):
        units = {u["name"]: u for u in load_json(ROOT / "config/units.json")}
        src = (ROOT / "src" / "accessors.c").read_text()
        for name, needle in (
            ("func_0c02e316", "p[4] = 10"),
            ("func_0c1b29fc", "p[4] = 2"),
            ("func_0c1bfdda", "p[4] = 3"),
        ):
            self.assertEqual(units[name]["status"], "matching")
            self.assertEqual(units[name]["size"], 6)
            self.assertIn(name, src)
            self.assertIn(needle, src)

    def test_bsr_callee_of_candidate_is_catalogued_as_code(self):
        units = load_json(ROOT / "config/units.json")
        addr = 0x0C047B0C
        covering = [u for u in units if u["address"] <= addr < u["address"] + u["size"]]
        self.assertEqual(len(covering), 1)
        self.assertEqual(covering[0]["kind"], "code")
        self.assertNotEqual(covering[0]["status"], "matching")

    def test_main_entry_is_catalogued_as_code(self):
        target = load_json(ROOT / "config/target.json")
        units = load_json(ROOT / "config/units.json")
        entry = target["main"]["entrypoint"]
        covering = [u for u in units if u["address"] <= entry < u["address"] + u["size"]]
        self.assertEqual(len(covering), 1)
        self.assertEqual(covering[0]["kind"], "code")

    def test_shc_b0c_prefix_fixture_uses_retail_callee_shape(self):
        src = (ROOT / "tests" / "shc_b0c_prefix.c").read_text()
        self.assertIn("0x342", src)
        self.assertIn("func_0c047b0c", src)
        script = (ROOT / "tools" / "shc_b0c_prefix.py").read_text()
        self.assertIn("0x0C047B0C", script)
        self.assertIn("PREFIX_LEN = 20", script)

    def test_shc_smoke_fixture_is_return_zero(self):
        src = (ROOT / "tests" / "shc_return0.c").read_text()
        self.assertIn("return 0", src)
        smoke = (ROOT / "tools" / "shc_smoke.py").read_text()
        self.assertIn("0b0000e0", smoke)
        self.assertIn("wibo", smoke)

    def test_toolchain_doc_uses_wibo_not_wine(self):
        text = (ROOT / "docs" / "TOOLCHAIN.md").read_text()
        self.assertIn("wibo 1.2.0", text)
        self.assertIn("Do **not** use Wine", text)
        workflow = (ROOT / ".github" / "workflows" / "build.yml").read_text()
        self.assertIn("tools/shc_smoke.py", workflow)
        self.assertIn("tools/shc_b0c_prefix.py", workflow)
        self.assertIn("wibo-x86_64", workflow)

    def test_shc_wibo_smoke_when_configured(self):
        import os
        import subprocess
        if not os.environ.get("SHC_BIN") or not os.environ.get("WIBO"):
            self.skipTest("WIBO/SHC_BIN not set")
        subprocess.check_call([sys.executable, str(ROOT / "tools" / "shc_smoke.py")])

    def test_dashboard_template_has_code_and_data_percent_bars(self):
        html = (ROOT / "tools/dashboard.html").read_text()
        self.assertIn('id="code-bar"', html)
        self.assertIn('id="data-bar"', html)
        self.assertIn("linked_percent", html)
        self.assertIn("toFixed(6)", html)

    def test_complete_layout_infographic_shows_code_and_data_percent_bars(self):
        target, row, _, _, evidence = fixture()
        target["main"]["size"] = 4
        report = build_report(target, [row], evidence, "current")
        svg = generate_svg(report)
        self.assertIn(">CODE<", svg)
        self.assertIn(">DATA<", svg)
        self.assertIn("100.000000%", svg)
        self.assertIn('fill="#2dbd86"', svg)
        self.assertIn("percentages use those code and data totals", svg)

    def test_incomplete_layout_infographic_does_not_claim_established_percents(self):
        target, row, _, _, evidence = fixture()
        svg = generate_svg(build_report(target, [row], evidence, "current"))
        self.assertIn("pending", svg)
        self.assertIn("not yet established", svg)

    def test_wrong_bytes_at_right_address_are_rejected(self):
        _, row, elf, original, _ = fixture()
        elf["sections"][0]["data"] = b"fake"
        with self.assertRaisesRegex(ValueError, "compiled bytes differ"):
            checked_replacements(original, 0x1000, [row], elf)

    def test_exact_source_replacement_preserves_entire_image(self):
        _, row, elf, original, _ = fixture()
        rebuilt, verified = checked_replacements(original, 0x1000, [row], elf)
        self.assertEqual(rebuilt, original)
        self.assertEqual(verified[0]["size"], 4)
        self.assertTrue(verified[0]["linked"])

    def test_code_data_overlap_is_rejected(self):
        target, row, *_ = fixture()
        other = {**row, "name": "data", "kind": "data", "address": 0x1002}
        with self.assertRaisesRegex(ValueError, "overlapping"):
            validate_units([row, other], target)

    def test_out_of_scope_range_is_rejected(self):
        target, row, *_ = fixture()
        row["address"] = 0x103e
        with self.assertRaisesRegex(ValueError, "outside main program"):
            validate_units([row], target)

    def test_placeholder_data_cannot_be_promoted_by_status_alone(self):
        target, row, *_ = fixture()
        row.update(kind="data", representation="placeholder")
        with self.assertRaisesRegex(ValueError, "placeholder cannot earn progress"):
            validate_units([row], target)

    def test_incomplete_layout_does_not_report_one_hundred_percent_code(self):
        target, row, _, _, evidence = fixture()
        result = build_report(target, [row], evidence, "current")
        self.assertEqual(result["unclassified_bytes"], 60)
        self.assertEqual(result["main_image_percent"], 6.25)
        self.assertIsNone(result["code"]["total_bytes"])
        self.assertIsNone(result["code"]["linked_percent"])
        self.assertEqual(result["data"]["linked_bytes"], 0)
        self.assertFalse(result["layout_complete"])
        self.assertNotEqual(result["code"]["linked_percent"], 100)
        self.assertNotEqual(result["data"]["linked_percent"], 100)

    def test_placeholder_data_cannot_report_one_hundred_percent_data(self):
        target, row, *_ = fixture()
        row.update(kind="data", representation="placeholder", status="matching")
        with self.assertRaisesRegex(ValueError, "placeholder cannot earn progress"):
            validate_units([row], target)

    def test_complete_layout_reports_one_hundred_only_when_all_bytes_match(self):
        target, row, _, _, evidence = fixture()
        target["main"]["size"] = 4
        result = build_report(target, [row], evidence, "current")
        self.assertEqual(result["unclassified_bytes"], 0)
        self.assertTrue(result["layout_complete"])
        self.assertEqual(result["code"]["total_bytes"], 4)
        self.assertEqual(result["code"]["linked_bytes"], 4)
        self.assertEqual(result["code"]["linked_percent"], 100)
        self.assertEqual(result["data"]["linked_bytes"], 0)
        self.assertEqual(result["data"]["total_bytes"], 0)
        self.assertIsNone(result["data"]["linked_percent"])

    def test_complete_layout_with_unmatched_gap_cannot_claim_full_code(self):
        """A classified assembly remainder is not reconstructed matching C."""
        target, row, _, _, evidence = fixture()
        gap = {"name": "rest", "address": 0x1004, "size": 60, "kind": "code",
               "status": "assembly", "representation": "placeholder", "source": "",
               "section": "", "sha256": digest(b"x" * 60)}
        result = build_report(target, [row, gap], evidence, "current")
        self.assertEqual(result["unclassified_bytes"], 0)
        self.assertTrue(result["layout_complete"])
        self.assertEqual(result["code"]["total_bytes"], 64)
        self.assertEqual(result["code"]["linked_bytes"], 4)
        self.assertEqual(result["code"]["linked_percent"], 6.25)
        self.assertNotEqual(result["code"]["linked_percent"], 100)

    def test_stale_evidence_is_rejected(self):
        target, row, _, _, evidence = fixture()
        with self.assertRaisesRegex(ValueError, "stale"):
            build_report(target, [row], evidence, "changed")

    def test_missing_linked_unit_cannot_keep_old_credit(self):
        target, row, _, _, evidence = fixture()
        evidence["verified_units"] = []
        with self.assertRaisesRegex(ValueError, "verified units do not match"):
            build_report(target, [row], evidence, "current")

    def test_full_image_failure_blocks_publication(self):
        target, row, _, _, evidence = fixture()
        evidence["full_program_rom_matches"] = False
        with self.assertRaisesRegex(ValueError, "retail-image verification"):
            build_report(target, [row], evidence, "current")

    def test_archive_integrity_does_not_substitute_for_retail_hash(self):
        expected = b"original"
        target = {"roms": [{"name": "program.ic11", "size": len(expected),
                            "crc32": f"{zlib.crc32(expected):08x}",
                            "sha1": hashlib.sha1(expected).hexdigest()}]}
        with tempfile.TemporaryDirectory() as temp:
            path = Path(temp) / "game.zip"
            with zipfile.ZipFile(path, "w") as z:
                z.writestr("program.ic11", b"modified")
            with self.assertRaisesRegex(ValueError, "retail ROM verification failed"):
                read_verified_roms(path, target)
            with zipfile.ZipFile(path, "w") as z:
                z.writestr("program.ic11", expected)
            self.assertEqual(read_verified_roms(path, target)["program.ic11"], expected)

    def test_unexpected_archive_member_is_rejected(self):
        with tempfile.TemporaryDirectory() as temp:
            path = Path(temp) / "game.zip"
            with zipfile.ZipFile(path, "w") as z:
                z.writestr("../program.ic11", b"bad")
            with self.assertRaisesRegex(ValueError, "unexpected"):
                read_verified_roms(path, {"roms": []})


if __name__ == "__main__":
    unittest.main()
