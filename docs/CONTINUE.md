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

`noop` is a four-byte no-op at `0x0c0275dc` and exercises the complete C-to-linked-byte path. Two other C candidates are retained as starting points. Earlier experiments and progress are archived in tag `pre-hitachi-foundation-20260915`; do not restore their progress claims without rebuilding through the current verifier.

The next substantive work is identifying original compilation patterns/options and converting meaningful small functions. This setup supplies tools and strict evidence, not a claim that SHC 5.0R31 is the exact revision for every original file.
