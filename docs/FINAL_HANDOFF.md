# Final stopped handoff — 2026-10-04

The decompilation effort is stopped at the user's request. The project is incomplete. No workers or recurring decompilation monitor should resume without a new request.

The final source tree contains the whole-exact work accepted through the final build. Eight existing Grok units were independently recompiled without source variants and accepted; the first six added 2,046 executable bytes, and two further complete candidate units were promoted only after whole-section proofs. Other Grok material is retained as research, including sources that require a different header or contain `noregsave` pragmas. Existing registered code is counted once when a larger exact section replaces it. The checked cloud SDK consumer functions and final effect updater are included after independent whole-section proofs.

The final local full check reports **29.401% of known code** (514,736 / 1,750,746 executable bytes). This is not a complete decompilation.

## Recovery material

[Final recovery release](https://github.com/g-guthrie/mvc2-naomi-decomp/releases/tag/final-stop-2026-10-04)

- `mvc2-final-source-recovery-2026-10-04.tar.gz`: 81 Naomi worktree and standalone-draft snapshots, 177,051 file entries, 25,412 unique source/evidence objects. Includes incomplete and invalid research; this material is not verified decompilation credit.
- `mvc2-naomi-all-local-refs.bundle`: recoverable local Git branch and commit history.
- `SHA256SUMS`, preservation summary, and audits accompany the release. Source objects and uploaded archive digests were verified. Ten historical generated cache/evidence files could not be copied; authored sources were preserved.

The related PS2 work was preserved locally and excluded from the Naomi publication. Provider configuration, credentials, and raw assistant transcripts were excluded. Root publication audits are under `workbench/final-stop-20261004`; stopped cloud research is under `workbench/cloud-final-stop-20261004`.

## Validation

The final publication requires the original 92-test suite, bundled-compiler relocation checks, compilation/comparison of all registered units, and byte-identical 2,424,832-byte main and 4,194,304-byte program ROMs. GitHub CI must pass for the pushed source. A matching rebuilt image includes original remainder bytes and does not mean the decompilation is complete.
