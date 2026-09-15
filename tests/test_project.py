import hashlib
from pathlib import Path
import sys
import tempfile
import unittest
import zipfile
import zlib

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from project import checked_replacements, digest, read_verified_roms, validate_units
from report import build_report


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
