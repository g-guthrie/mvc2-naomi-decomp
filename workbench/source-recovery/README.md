# Historical source recovery archive

The [continuation snapshot release](https://github.com/g-guthrie/mvc2-naomi-decomp/releases/tag/continuation-2026-10-03)
preserves source and configuration from 77 local worktrees, including older
uncommitted drafts and experimental matching attempts. It complements the
curated [active drafts](../active-drafts/README.md); use the main repository's
registered source for builds.

- Archive: `mvc2-source-recovery-2026-10-03.tar.gz` (78,659,862 bytes).
- SHA-256: `b0d3e7cb8b74164d981deb7f94ebec2fc68ccc939f9b3b4e9e42445a2c4cd8ca`.
- 85,306 file entries, deduplicated to 6,111 SHA-256 objects.
- Includes source, configuration, tools, tests, docs, and manual C/header trials.
- The bundled ROM, compiler, SDK, and runtime are already in the main repository
  and are not duplicated in this archive.

These are **unverified historical working-tree snapshots**, not extra completed
decompilation. File names, including `verified`, do not establish a fresh proof.
Some experiments use approaches rejected by the current repository rules. Do
not register or integrate them without reviewing the current rules, retail
semantics, ownership, complete-section comparison, and full build.

## Download and restore

No GitHub credentials are needed for these public release assets.

```sh
mkdir -p .scratch/recovery
curl -fL https://github.com/g-guthrie/mvc2-naomi-decomp/releases/download/continuation-2026-10-03/mvc2-source-recovery-2026-10-03.tar.gz -o .scratch/recovery/mvc2-source-recovery-2026-10-03.tar.gz
curl -fL https://github.com/g-guthrie/mvc2-naomi-decomp/releases/download/continuation-2026-10-03/mvc2-source-recovery-2026-10-03.sha256 -o .scratch/recovery/mvc2-source-recovery-2026-10-03.sha256
(cd .scratch/recovery && sha256sum -c mvc2-source-recovery-2026-10-03.sha256)
tar -xzf .scratch/recovery/mvc2-source-recovery-2026-10-03.tar.gz -C .scratch/recovery
python3 .scratch/recovery/mvc2-source-recovery/restore.py --verify
python3 .scratch/recovery/mvc2-source-recovery/restore.py --list
```

Choose an ID from `--list`, then restore it into a **new** directory:

```sh
python3 .scratch/recovery/mvc2-source-recovery/restore.py --snapshot ID_FROM_LIST --output .scratch/restored-source
```

The helper verifies every restored file's SHA-256 and refuses to overwrite an
existing output directory. To build a recovered state, provision `orig/` and
`toolchain/` from the main clone and reconcile its source against the desired
registry; the archive does not guarantee that every old draft compiles.

## Capture limits

The [manifest](manifest.json) records each checkout's HEAD and branch, along
with the capture details. Unchanged tracked files may come from matching Git
index objects to avoid cloud-file hydration. Two inaccessible files were old
temporary compiler-input copies under `build/work-diff-53183`; their primary
source/configuration snapshots are retained. Generated compiler outputs, bulk
Ghidra drafts, caches, private home configuration and credentials are excluded.
The snapshot was taken while workers were active, so use a checked Git commit
and fresh proof for authoritative integration. Archive object verification and
a full canonical-source restoration were tested before publication.
