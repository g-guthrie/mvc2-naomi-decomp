# Mapping evidence — 2026-09-15 review

The main image is `0x0c021000` through `0x0c270fff` (2,424,832 bytes). The verified ROM header at `0x360` gives its ROM offset `0x1000`, load address, and size. `config/target.json` binds it to SHA-256 `b443b12af140ea0b3fae95e8795fe6f7673ae8ac00d886062f78766d1ac8070c`.

## Reviewed evidence

`config/mapping.json` is the machine-readable evidence ledger. Each range records its exact bytes by hash, kind, and supporting instructions. A full check rejects overlaps or changed bytes and writes `build/mapping.json`, including every unknown gap. This is mapping coverage, separate from matched C progress.

All ranges below use an **exclusive end**:

| Start | End | Kind | Evidence |
| --- | --- | --- | --- |
| `0x0c021000` | `0x0c02100e` | Code | Loader entry stub and JMP delay slot. It computes uncached alias `0xac021010`. |
| `0x0c021010` | `0x0c021048` | Code | Cache-control write, startup clear loops, conditional branch and BRA delay slot. |
| `0x0c021048` | `0x0c02104c` | Data | Zero literal loaded at `0x0c02103c`, skipped by control flow. |
| `0x0c02104c` | `0x0c021096` | Code | Register/stack setup, indirect call through `0x0c028394`, final self-loop and delay slot. |
| `0x0c02109c` | `0x0c0210b4` | Data | Referenced clear bounds, stack, call target, and BSS bounds. |
| `0x0c0210bc` | `0x0c0210cc` | Data | Four explicitly loaded mask/alias/cache-control constants. |
| `0x0c0275dc` | `0x0c0275e0` | Code | Verified no-op C. |
| `0x0c04701c` | `0x0c047064` | Code | Candidate parent with two calls and two complete return paths. |
| `0x0c047b0c` | `0x0c047b2e` | Code | Candidate helper reached by the parent's direct BSR; complete RTS delay slot. |
| `0x0c047b4a` | `0x0c047b4c` | Data | External `0x0342` literal read by the helper's first instruction. |

The reviewed ranges and gaps are counted by the current build. Read `build/NEXT.md` for live totals. Even nearby padding and the unused-in-this-trace cells `0x0c0210b4..0x0c0210bc` remain unclassified. Two promising prologue/return regions around `0x0c0210cc` and `0x0c0212a8` need full control-flow and pool review before entry in the ledger.

## What the whole-image survey means

`python3 tools/survey.py --limit 20` indexes raw BSR-shaped words across every aligned main-image address. It records target addresses and all incoming raw callsites in `build/survey.json`. These are **provisional hints**, not a code/data split: data itself can decode as BSR. For example, the reviewed startup data cell at `0x0c0210b4` starts with a BSR-shaped word.

The old prologue survey mislabeled the executable entry point as data. Its classifications are not reused. `config/regions.json` only supplies treemap display subdivisions. No unvisited range is automatically called data.

## Review leads from this audit (check the current ledger first)

1. Trace startup's indirect call to `0x0c028394`, including its calls and referenced tables.
2. Review complete control flow and all literal references around `0x0c0210cc`; a prologue-to-first-RTS scan is insufficient when functions have multiple returns.
3. Resolve the helper's neighboring function/pool layout around `0x0c047b2e..0x0c047b4c`. Its current 34-byte entry excludes the literal it needs.
4. Use the raw call index to locate additional candidates, then review each caller and target before classifying bytes.

Whole-image code/data completion remains blocked by unreviewed indirect control flow, tables, and mixed code/literal regions. Filling those gaps with guesses would not finish mapping.
