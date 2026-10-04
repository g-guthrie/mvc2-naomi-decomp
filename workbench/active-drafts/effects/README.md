# Packaged effects research

These complete drafts remain unregistered under `workbench/active-drafts/effects/`. The measurements below are historical, as labeled in `manifest.json`; recompile against the current shared header before promotion. Do not move them into `src/candidates/` without satisfying the source-ownership workflow. See [the active-draft guide](../README.md).

# Effects source freeze

Exact committed cutoff: `0bdcf7e3fe9b642c5f5ddc659e76c965a75f62ac` in `/Users/gguthrie/Projects/mvc2-naomi-effects-oct02`. The tracked tree is clean. Its final full check passed 92 tests, relocation checks, and full main/program ROM comparison. All five exact effects units from that cutoff are already verified in inspected main `7c9b572`; there are zero new committed exact bytes beyond the cutoff.

`drafts/` contains eleven complete but NONEXACT C drafts, 142 functions, targeting 17,696 linked bytes. They use shared `objects.h` and have no stubs or ASM. They are unregistered and receive no verified decompilation credit. Measurements were made against the cutoff header; rerun matching against the current main header before integration. `partial-manifest.json` records source hashes, target spans, and the observed comparisons.

The new `tu_0c183860.c` is a complete fifteen-function translation; its literal-pool layout remains unresolved. A separate private section-layout experiment matches the constructor section but changes cross-section calls, so it is not bundled or claimed exact. The reviewed-span sidecar for `1824c0` documents boundary corrections needed before normal registration. Other historical variants remain in the source-recovery archive; this bundle is the curated continuation set.

Publish these as unregistered source drafts. Do not promote them into the verified registry without whole-unit byte proof and the required full build.
