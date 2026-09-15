# Marvel vs. Capcom 2 — NAOMI

[![Hitachi build](https://github.com/g-guthrie/mvc2-naomi-decomp/actions/workflows/build.yml/badge.svg)](https://github.com/g-guthrie/mvc2-naomi-decomp/actions/workflows/build.yml)

**Goal: 100% byte-identical C reconstruction.** This private repository includes the reference ROMs, Hitachi compiler/linker, and wibo.

## Agents: start here

```sh
git clone https://github.com/g-guthrie/mvc2-naomi-decomp.git
cd mvc2-naomi-decomp
python3 tools/build.py check
```

The check prints every current mismatch and writes the complete machine-readable results to `build/proof.json` and `build/mapping.json`. Work on any reported candidate or an evidence-backed mapping gap, verify it, and repeat toward 100%. [AGENTS.md](AGENTS.md) contains the short working rules.

The command checks the host and selects the runtime. Python 3.10+ is required. Native Linux x86_64 and Apple Silicon macOS are tested. On Apple Silicon, macOS runs the bundled Intel wibo through Rosetta/Intel-app translation automatically; no special terminal or Python setup is needed. If the host check fails, follow its message or use **Actions → Hitachi build → Run workflow** on your pushed branch. Windows local builds are unvalidated.

## Current state

The repository does not publish manually maintained progress counts or a task queue. Every successful CI run attaches `proof.json`, `mapping.json`, the compiler evidence, and the generated progress dashboard to that exact commit. Source status lives in `config/units.json`; reviewed mapping evidence lives in `config/mapping.json`.
