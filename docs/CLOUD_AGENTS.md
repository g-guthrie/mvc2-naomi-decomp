# Cloud agent setup

Use a Linux x86_64 environment with Git and Python 3.10 or newer. GitHub Actions
uses Ubuntu 24.04 and Python 3.12. The build uses Python's standard library;
there is no pip environment, npm install, replacement SH compiler, or account
credential required to check a clone.

```sh
git clone https://github.com/g-guthrie/mvc2-naomi-decomp.git
cd mvc2-naomi-decomp
python3 tools/build.py check
```

Read [AGENTS.md](../AGENTS.md) before editing. A full check verifies the bundled
assets, runs the tests, compiles every registered unit, checks exact placement
and bytes, and rebuilds both reference images. Wait for the final `PASS full
main ... and program ROM ... match` and a zero exit status. Passing tests alone
is not the full check. The unchanged retail remainder makes the rebuilt ROM
complete; it does not count as decompiled source.

## Assets available in a normal clone

| Path | Purpose | Integrity record |
| --- | --- | --- |
| `orig/mvsc2.zip` | All 18 reference ROM members for NAOMI Export/Korea Rev A | `config/target.json` |
| `toolchain/hitachi-shc-5.1r08/` | Original compiler, assembler, linker and utilities | `toolchain/hitachi-shc-5.1r08.json` |
| `toolchain/naomi-sdk/lib/` | 16 prebuilt SDK libraries used by library-unit matching | `toolchain/naomi-sdk.json` |
| `toolchain/wibo/` | Linux x86_64 and macOS runtimes for the bundled tools | `toolchain/wibo.json` |
| `src/`, `config/` | Reconstructed C, shared layouts, ownership, reviewed mapping and target configuration | Git history and the build verifier |
| `tools/`, `tests/` | Matching tools and verification tests | Git history |

These files are ordinary Git objects. No Git LFS pull, submodule initialization,
external ROM download, or private asset server is needed. Keep the toolchain
manifests and original inputs unchanged. Do not substitute a different ROM
revision, compiler release, or option set to obtain a match.

For a quick integrity check before the expensive build, run from the repository
root:

```sh
python3 - <<'PY'
import sys
sys.path.insert(0, 'tools')
from core import ROOT, load, sha, verify_rom, verify_tools
print(verify_tools())
target = load(ROOT / 'config/target.json')
assert sha((ROOT / target['archive']).read_bytes()) == target['archive_sha256']
program = verify_rom(target)
print(f"PASS: {len(target['roms'])} ROM members, {len(program)} program bytes")
PY
```

Linux ARM64 cannot run the bundled x86_64 runtime natively. Select an x86_64
cloud machine. macOS requires Intel application support (Rosetta on Apple
Silicon). If a transfer stripped executable permissions, restore them with
`chmod +x toolchain/wibo/wibo-x86_64 toolchain/wibo/wibo-macos`.

## Unfinished work and historical snapshots

The [active draft workbench](../workbench/active-drafts/README.md) preserves
selected complete C candidates and their comparison evidence. The
[source recovery archive](../workbench/source-recovery/README.md) preserves
77 historical/local worktree snapshots and manual experiments with a hash-checked
restoration tool. Neither adds verified-code credit. Review each draft's
provenance, dependencies, and latest whole-unit result before continuing it.

## Continue the decompilation

After the baseline passes, inspect `build/work_queue.json` or use
`python3 tools/unit_spans.py --help` to find a complete unowned span. Check the
current registry and active assignments before selecting it. Work on a branch
or a separate clone and keep a claim with the exact start/end addresses in your
PR or coordination channel. Do not assume a function's end is a translation
unit's end: local branches, shared literal pools, and fallthrough entries must
be included.

```sh
git switch -c work/describe-your-unit
python3 tools/diff_unit.py --help
python3 tools/clone.py --help
python3 tools/inspect_rom.py --help
```

Follow the loop in AGENTS.md and the source-shaping guidance in
[MATCHING.md](MATCHING.md). Use the existing shared object definitions. Inspect
cloned fields, callback signatures and function boundaries against the retail
instructions; a similar verified function is a starting point, not proof.

Keep speculative or unregistered files outside `src/`, for example in `work/`.
The source-registration test intentionally rejects source-tree files that are
not in `config/units.json`. Preserve incomplete drafts as unverified work, never
as verified units. A near match, correct linked size, or independently matching
function does not establish an exact whole section.

Run `python3 tools/build.py check` after registration, then commit the C,
registry, shared-layout changes and all affected old pool-owner sources
together. Submit a PR with the exact unit range, whole-section result and final
full-check evidence. GitHub Actions runs the same full check on pushes and PRs.

## Parallel workers

Use separate checkouts and nonoverlapping whole-unit claims. Only one full
build may operate on a checkout at a time; freeze its tracked source, headers
and registry until it finishes. Do not register into a tree while another
worker is checking it. Each full build uses the host's reported CPU count, so
avoid running several full builds on one machine. On Python 3.13+, the standard
`-X cpu_count=4` option can bound one build's worker count:

```sh
python3 -X cpu_count=4 tools/build.py check
```

Keep the code-unit registry and pool releases together when integrating
branches. Reconcile against current `main`, rather than replacing a registry
with a stale worker copy. Re-run the full check on the combined result. Do not
include generated `build/` outputs, environment secrets, or unrelated local
files in source commits.

## Optional Ghidra drafts

Ghidra is a reading aid and is not needed to compile or verify units. The
repository includes its export scripts and the single-precision SH-4 patch.
Install Ghidra separately only if needed, following the version/JDK guidance in
[TOOLCHAIN.md](TOOLCHAIN.md), apply `tools/ghidra/single_precision.sh`, and use
`tools/ghidra_draft.py`. Prefer targeted drafts for the unit being worked on;
regenerating every draft is unnecessary for routine matching. Generated drafts
are not verified C and must not receive decompilation credit.
