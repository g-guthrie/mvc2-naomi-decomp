# Continue from a clean checkout

1. Read README.md and AGENTS.md, then run `python3 tools/build.py check`.
2. Start with `mask_helper` (original function `0x0c047b0c`, 34 bytes) or `dispatch_parent` (`0x0c04701c`, 72 bytes). Both are unverified candidates. Their initial C is a hypothesis, not a confirmed behavioral reconstruction.
3. Run `python3 tools/build.py unit mask_helper`. Inspect `build/work/mask_helper.src`, `.map`, `.elf`, and `.log`; `build/unit-proof.json` records exactness and equal-byte counts.
4. Iterate on C and, when supported by evidence, the unit's compiler flags. config/compiler.json supplies baseline flags; an optional unit `flags` array replaces them completely. Keep CPU and endianness correct.
5. Only after the complete original range matches, change that unit's `mode` to `verified` and move its C file under `src/verified/` (updating its source path).
6. Run the full check. Commit the C/config changes and regenerated progress files. Push and verify the GitHub Actions result.

## Adding a unit

Add a C file and an entry in config/units.json. An entry has a unique `id`, `source`, `mode`, and `sections`. Each section names the Hitachi section (`P` for code, often `C` for constants, `D` for initialized data, `B` for BSS), its original `address`, complete `size`, and `kind` (`code`, `data`, or `bss`). Use `exports` for externally visible symbols whose final addresses must be checked, and `imports` for referenced symbols located elsewhere. Hitachi C symbols use an underscore prefix in linker configuration.

A unit may contain several original functions or data objects if needed to reproduce section layout and alignment. Do not truncate candidate output or alter reference sizes to obtain a match. Import definitions currently supply addresses; they do not prove that the imported function itself has been reconstructed.

## Baseline

`noop` plus `leaves_00`–`leaves_18` are verified Hitachi `-optimize=1` four-byte leaves at original **4-aligned** addresses: empty functions, `return 0/1/42/120`, `return x`, and three word-field accessors. That is **146 functions / 584 bytes**. Hitachi `lnk` rejects 2-aligned `START` addresses (`ILLEGAL START ADDRESS ALIGNMENT`), so odd-address copies of the same shapes are not in the matching link yet.

`mask_helper` (`0x0c047b0c`, 34 bytes) still fails: 22/34 equal bytes, linked size 36. The instruction body wants `MOVT; RTS; NOP` and a PC-relative `0x0342` literal at `0x0c047b4a` (28 bytes of other code sit between the function and that pool). Isolated compile puts the literal immediately after the function (`disp=0x0f` vs retail `0x1d`) and uses a different compare/return sequence. `dispatch_parent` remains 12/72.

Earlier GCC/layout work is archived in tag `pre-hitachi-foundation-20260915`; do not restore those progress claims without rebuilding through this verifier.

Next: match `mask_helper` as a complete 34-byte P section (or a larger unit that also reconstructs the following code and the shared literal), then `dispatch_parent`. Do not credit 2-aligned leaves until the linker can place them. This is not a claim that SHC 5.0R31 is the exact revision for every original file.
