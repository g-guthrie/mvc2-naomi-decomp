#!/usr/bin/env python3
"""Extract shc.exe and helpers from a decomp.me compiler Docker image."""

import argparse
import io
import json
import os
import shutil
import subprocess
import sys
import tarfile
from pathlib import Path


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("image")
    parser.add_argument("dest")
    args = parser.parse_args()
    dest = Path(args.dest)
    dest.mkdir(parents=True, exist_ok=True)
    blob = subprocess.check_output(["docker", "save", args.image])
    with tarfile.open(fileobj=io.BytesIO(blob), mode="r:") as image:
        names = image.getnames()
        if "manifest.json" in names:
            manifest = json.loads(image.extractfile("manifest.json").read())
            layers = manifest[0]["Layers"]
        else:
            layers = [n for n in names if n.endswith("/layer.tar") or "/blobs/" in n]
        found = None
        for layer in layers:
            member = image.extractfile(layer)
            if member is None:
                continue
            raw = member.read()
            inner = tarfile.open(fileobj=io.BytesIO(raw), mode="r:*")
            for info in inner:
                if info.name.endswith("shc.exe") and info.isfile():
                    found = (inner, info)
                    break
            if found:
                break
        if not found:
            raise SystemExit(f"no shc.exe in image {args.image}")
        inner, exe = found
        prefix = str(Path(exe.name).parent)
        for info in inner:
            if not info.isfile():
                continue
            name = info.name
            if not name.startswith(prefix):
                continue
            rel = Path(name).name
            out = dest / rel
            with inner.extractfile(info) as src, out.open("wb") as dst:
                shutil.copyfileobj(src, dst)
            if rel.endswith(".py") or rel == "shc.exe":
                os.chmod(out, 0o755)
        if not (dest / "shc.exe").exists():
            raise SystemExit("extracted image did not contain shc.exe")
        print(f"extracted SHC into {dest}", file=sys.stderr)


if __name__ == "__main__":
    main()
