# One-percentage-point benchmark, 2026-10-04

Baseline: `467cf586f0fd8170c96005772be50cf448598dbf`, 515,160 / 1,750,746 credited executable bytes.

The checked batch adds **11,328 net executable bytes**: 254 from a complete game-C unit and 11,074 from eight complete SDK modules. Existing fragments, pools, padding and transferred ownership are not new credit. Code progress increases by **0.6207466 percentage points** after including newly reviewed code in the denominator. **The requested one-point target has not been met.**

The recovered game unit is the complete 300-byte animation selector at `0c0b69c4`; its code portion is 254 bytes. The old automatic descriptor stopped at an internal pool. A full descriptor and boundary audit prove the complete function.

The SDK matcher now uses internal relocations to locate low-entropy data sections. All observed section-base constraints must agree and all fixed bytes must match; each complete module then passes the existing linker/ROM comparison. Existing export hints are also tried for sections too small for content search. Registry symbol evidence is retained for BSS placement; retrying stops when that evidence stops changing. Matcher invocations have private temporary directories.

Vendor ENT symbols and native control flow establish the newly reviewed instructions. Literal consumers establish pool bytes. Alignment and unreachable duplicate stack epilogues are explicitly excluded from executable credit. `sdk-cfg-reviews.json`, `sdk-map-proposals.json` and the unit records retain this evidence. The initialized data and BSS portions do not count toward the executable-byte target.

The later bounded source searches and additional library scans found no further net new executable credit. `ud1_02-unregistered.c` preserves a corrected 386/388-byte draft, with a fixed allocator signature, corrected callback entry/conditions, and reconstructed interpolation. Its two remaining instruction-order bytes fail the full match; it is not registered and earns no new credit.
