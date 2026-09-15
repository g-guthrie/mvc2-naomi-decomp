# Toolchain notes

Matching leaves currently compile with GCC 13.3 `-m4 -ml -O2` as in
`tools/project.py`. Those shapes (`rts` delay-slot `mov #imm,r0`, identity,
`a-b`/`b-a`, void field setters) are **also** produced by Hitachi SHC
5.0 Release 31 (`-cpu=sh4 -endian=little -optimize=1`).

## Hitachi SHC 5.0r31 via wibo (tested)

Do **not** use Wine or QEMU for this compiler. On this project SHC was run
successfully with [wibo 1.2.0](https://github.com/decompals/wibo):

| Host | Binary |
| --- | --- |
| macOS | `wibo-macos` (x86_64; runs under Rosetta on Apple silicon) |
| Linux CI | `wibo-x86_64` |

The owner’s `Hitachi.zip` (PE32 `shc.exe`, 1998, **SH SERIES C/C++ Compiler
Ver. 5.0(Release31)**) is not committed. GitHub Actions pulls the same
release from the decomp.me compiler image
`ghcr.io/decompme/compilers/dreamcast/shc-v5.0r31` and runs
`python3 tools/shc_smoke.py`.

```
SHC_LIB=. SHC_TMP=. wibo shc.exe file.c \
  -comment=nonest -cpu=sh4 -division=cpu -endian=little \
  -macsave=0 -sjis -string=const -optimize=1 -object=file.obj
python3 tools/rof2elf.py file.obj file.elf --isa=sh4
```

Assembler/compiler completion with zero errors is not a retail match.
Keep unmatched functions as candidates until `make all` links identical bytes.

## `func_0c04701c` (72 bytes) and `func_0c047b0c`

SHC `-optimize=1` matches the first **34 bytes** of `func_0c04701c` (r14/pr
frame and table math). Remaining mismatches are `bsr` displacements to
`0x0c047b0c` / `0x0c047796` and an extra FPSCR save.

`func_0c047b0c` is a 32-byte leaf (word xor/or/and into `*out`, `movt`
return). SHC `-optimize=1` emits the same algorithm with different
registers and `movt` in the `rts` delay slot; retail uses `movt` then
`rts; nop`. Still a candidate.
