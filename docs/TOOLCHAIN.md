# Toolchain notes

Matching leaves currently compile with GCC 13.3 `-m4 -ml -O2` as in
`tools/project.py`. Those shapes (`rts` delay-slot `mov #imm,r0`, identity,
`a-b`/`b-a`, void field setters) are **also** produced by Hitachi SHC
5.0 Release 31 (`-cpu=sh4 -endian=little -optimize=1`).

## Hitachi SHC 5.0r31

The owner supplied `Hitachi.zip` (PE32 `shc.exe`, 1998). It is **not** in
this repository. On macOS it runs with [wibo](https://github.com/decompals/wibo)
(`wibo-macos`). decomp.me's command line is a working baseline:

```
SHC_LIB=. SHC_TMP=. wibo shc.exe file.c \
  -comment=nonest -cpu=sh4 -division=cpu -endian=little \
  -macsave=0 -sjis -string=const -optimize=1 -object=file.obj
python3 rof2elf.py file.obj file.elf --isa=sh4
```

Wine under qemu-i386 on this host hangs during `wineboot` and is not used.

## `func_0c04701c` (72 bytes)

Retail prologue `mov.l r14,@-r15` / `sts.l pr` / `add #-12,r15` matches SHC
`-optimize=1` for the first **34 bytes**. The remainder differs:

- Retail uses `bsr` to `0x0c047b0c` and `0x0c047796`.
- SHC uses `bsr` to same-file stubs (wrong displacement) or `jsr` plus a
  literal when the callees are only declared.
- SHC inserts FPSCR save/restore around the second call.

Keep the function as `status=candidate` until an SHC object linked at the
original address is byte-identical. Do not switch the matching GCC path until
that is proven in `make all`.
