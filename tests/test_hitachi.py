import hashlib
import json
from pathlib import Path
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
from hitachi import verify_package


class HitachiPackageTest(unittest.TestCase):
    def test_supplied_package_is_complete_and_fingerprinted(self):
        manifest = verify_package()
        self.assertEqual(manifest["compiler_id"], "shc-v5.0r31")
        self.assertEqual(len(manifest["files"]), 28)

    def test_corruption_or_missing_files_fail_verification(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            package = root / "package"
            package.mkdir()
            data = b"original compiler fixture"
            file = package / "shc.exe"
            file.write_bytes(data)
            manifest = root / "manifest.json"
            manifest.write_text(json.dumps({"files": [{"name": "shc.exe", "size": len(data),
                                                       "sha256": hashlib.sha256(data).hexdigest()}]}))
            verify_package(package, manifest)
            file.write_bytes(b"modified compiler fixture")
            with self.assertRaisesRegex(ValueError, "checksum mismatch"):
                verify_package(package, manifest)
            file.unlink()
            with self.assertRaisesRegex(ValueError, "missing"):
                verify_package(package, manifest)


if __name__ == "__main__":
    unittest.main()
