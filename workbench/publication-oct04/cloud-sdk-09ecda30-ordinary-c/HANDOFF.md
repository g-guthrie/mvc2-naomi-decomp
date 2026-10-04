# Checked ordinary-C SDK batch

Checked source cutoff: `09ecda30619dc1a4d3267cdab2f5b1b2a757cae1` on `cloud/sdk-research-20261004`.
Publication branch: `cloud/sdk-handoff-09ecda30-ordinary-c-20261004`.
The packaging commit adds evidence only; its parent is the checked cutoff.
Prior sealed branch `cloud/sdk-handoff-a458f59d-20261004` remains unchanged at `7fc31197cafb7c1aa761253a860b8e8a818813d0`.

## Credit and source eligibility

- `5c61792a362ab36f351e2de04d0f9eb3dd9d1f9e` removes unnecessary volatile formals from `src/verified/tu_0c224f60.c`. Ordinary formals `int selector, unsigned int value` match the complete 36-byte unit: `[0x0c224f60,0x0c224f84)`, 32 code +4 pool bytes. These 32 code bytes were already byte-exact in the prior handoff but excluded by the integrator's source review. This is restoration of eligibility, ZERO genuinely new code bytes. The four pool bytes transfer from `ptrtab_50`; no new data credit. Padding `[0x0c224f84,0x0c224fa0)` stays outside the unit.
- `09ecda30619dc1a4d3267cdab2f5b1b2a757cae1` adds `src/verified/tu_0c21b768.c`: whole `[0x0c21b768,0x0c21b7f0)`, 122 code +14 pool bytes, genuinely NEW 122 executable bytes. It releases 4 pool bytes from `bulk_146` at `0x0c21b7e2` and 8 from `ptrtab_50` at `0x0c21b7e8`; net new data is 2 bytes. The saved interrupt mask is ordinary unsigned int, with no volatile forcing. Compiler intrinsics are the bundled compiler's get/set interrupt-mask operations under unchanged library options. Shared structures are appended to `src/include/objects.h`.

Do not double-count the restored 32 as new progress versus the original checked cloud cutoff. Against an integrator snapshot containing prior SDK196 + C52 + C30 but excluding the wrapper, eligible addition is 32 restored +122 genuinely new =154 code bytes, plus 2 net data bytes. The prior 278 eligible bytes are not new in this batch.

## Integration

`units.json` contains the final two ordinary-C unit records. If the wrapper was excluded from the integrator's registry, its ordinary-C source repair commit alone cannot restore registration: include the original whole wrapper registration from `a458f59d9b429770ae3de96f9b182b5bbbfe671f` together with the repaired source, and release its four-byte pool from `ptrtab_50`. The final source and entry in this batch are authoritative.
For the new queue unit, append the three SDK completion structures from the checked header rather than overwriting an integrator header containing other workers' types. Bring in its registry entry and the two pool releases atomically. The integrator must run the combined gate after resolving its current inputs and serialize main publication. Do not overwrite other workers' work.
This branch contains no unregistered research drafts or mapping-gap promotions.

## Full verification

Full gate: 92 tests PASS; Hitachi relocation checks PASS; all registered exact units checked; full main (2,424,832 bytes) and program ROM (4,194,304 bytes) exact.
Full gate input SHA-256: `13e3239d2a3eb6fcb22990f14c0086b4dce5a7191e83c4ccf37a03fdbbac11c3`.
Artifacts: `full-proof.json`, `full-check.log`, both ordinary-C source snapshots, `objects.h`, standalone whole-unit proofs, queue boundary proof, `manifest.json`, and `SHA256SUMS.json`.
Checked local metrics: code 506772/1750382 (28.9521%), data 443537/473714, main 950309/2424832. These are the cloud cutoff's metrics; the integrator's combined result must be recomputed.
Packaging does not alter fingerprinted inputs. No unchanged full gate was repeated merely to package this batch. The normal push workflow runs without a CI-skip marker; its remote terminal result is not asserted by this document.
