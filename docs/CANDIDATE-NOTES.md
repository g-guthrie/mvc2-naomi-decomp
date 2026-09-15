# `mask_helper` experiment record — 2026-09-15

Bounded Hitachi SHC 5.0R31 experiments for `0x0c047b0c` (reference size 34 bytes):

* Baseline `-cpu=sh4 -endian=little -optimize=1`: linked P is 36 bytes, 22/34 equal.
* `-optimize=0`: linked P is 92 bytes, 0/34 equal.
* `-optimize=2` is rejected by this SHC revision (`Invalid command parameter "2"`).
* Changing the return type from `int` to `unsigned short` preserved the baseline result (36 bytes, 22/34).

These are historical observations from the baseline configuration; run the current check for its present status. The trailing `29 00 0b 00 09 00` bytes are instructions (`MOVT R0`, `RTS`, `NOP`), not a literal pool. The first `MOV.W` uses a PC-relative literal at `0x0c047b4a`, outside the declared 34-byte function range; that external literal/dependent neighboring layout must be modeled separately. The baseline compiler emits a 36-byte linked section because it includes a local literal area/layout beyond the declared range. Next useful work is reconstructing the external literal dependency and neighboring function/section grouping, then matching source-level control flow or per-file SHC options; do not claim a match from the equal-byte prefix.
