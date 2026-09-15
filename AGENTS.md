# Agent entry point

**Objective: 100% byte-identical C reconstruction of MVC2 NAOMI. Keep working toward it.**

1. Run `python3 tools/build.py check` from the repository root. It selects the bundled runtime and checks the host, ROMs, compiler, current source, and linked output.
2. Read the current `CANDIDATE` lines and `build/proof.json`. Choose any unverified unit, or use `build/mapping.json` to investigate an unknown gap. Do not use a remembered starting state or a prose task list.
3. Make the smallest coherent improvement and rerun the full check. Repeat from the new build output.

## Rules

- Use the included Hitachi toolchain. If preflight rejects the host, use **GitHub → Actions → Hitachi build → Run workflow** on your pushed branch; the proof, mapping, and compiler evidence are in its artifact.
- Inspect original bytes with `tools/inspect_rom.py`. Raw survey hits are hints. Review control flow, delay slots, and literal pools before declaring boundaries. Unreviewed bytes remain unknown in `config/mapping.json`.
- Register C units in `config/units.json`. Original addresses and complete sizes come from reference evidence. Keep candidates uncredited until every linked section, export address, size, and byte matches. A matching prefix is insufficient.
- Code credit requires compiled C, not raw-byte substitutes or inline assembly. Represent data meaningfully in C. Do not change ROMs, tool binaries, or valid checks to force a match.
- Preserve concurrent work. Independent agents use separate worktrees; builds recreate `build/work/`. Keep changes small and avoid new setup dependencies.
- Commit source and configuration changes after a successful full check. Build evidence and dashboards stay in `build/` and in the exact-commit CI artifact; do not commit generated status files. Push and verify CI. Keep this repository and its artifacts private.

`config/target.json` defines the reference. The current verifier reports main-image scope; do not call a partial scope or an image retaining original bytes a fully reconstructed game. Historical notes are evidence, never current instructions.
