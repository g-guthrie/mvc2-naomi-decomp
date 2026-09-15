# Continue the NAOMI decompilation

## Target is settled

Use **Sega NAOMI MVC2, Export/Korea Rev A**, MAME set `mvsc2`.
The complete clean 18-file ZIP is tracked privately in `orig/mvsc2.zip`.
All ROM hashes match the MAME catalog at the revision in `config/target.json`.
The standalone `.dat` examined earlier is modified/converted and is not used.

Main program boot descriptor:

- Program ROM: `epr-23085a.ic11`, 4,194,304 bytes.
- File range: `0x00001000 .. 0x00251000` (exclusive end).
- Load address and entry point: `0x0c021000`.
- Main program length: `0x250000` (2,424,832 bytes).
- Service/test program: separate ROM range `0x003c0000 .. 0x00400000`,
  loaded at `0x0c020000` in test mode. It is outside current progress scope.

Both descriptors are checked against the original ROM on every build.
Other mask ROM contents include further assets and potentially code requiring
separate analysis. Do not declare the whole game complete from main-only work.

## Verified starting work

`src/callback_leaves.c` nominates 262 matching functions / 1052 bytes:
address-taken and direct-BSR four-byte leaves (`rts; nop`, `rts` delay-slot
`mov #imm,r0` for 0, 1, 42, and 120), four identity `return x` BSR targets,
one six-byte `return a - b` at `0x0c1eae70`, and `func_0c206570`
(`return b - a`, 6 bytes). GCC 13.3 `-O2 -m4 -ml` matches retail at original
addresses. Fingerprints are in `config/units.json`.
No gameplay role is inferred from these shapes.

The initial toolchain is open GNU GCC 13.3 / binutils 2.42 targeting SH-4,
little-endian. Flags are recorded by `tools/project.py` in every build proof.
GCC 13 was tried on `func_0c04701c` at `-O0/-O1/-O2/-O3/-Os`, with and without
frame pointer, `-mhitachi`, `-mrenesas`, and delayed-branch scheduling off.
Every setting emitted a different size and prologue than retail (`e62f` /
`mov.l r14,@-r15` plus `sts.l pr` and `bsr`, 72 bytes). GCC is ruled out for
this representative non-leaf. Hitachi SHC remains the compiler to obtain and
test; it is not in this repository.

## First session on a new machine

1. Read AGENTS.md and README.md.
2. Build the Docker image and run `make all` as documented in README.md.
3. Require a passing ROM check, compiled/link comparisons, and full program
   match before relying on any progress numbers.
4. Open the generated `docs/index.html`, or inspect `docs/progress.json`.

No Flycast or BIOS is required for these steps. Runtime work later needs a
compatible emulator and NAOMI BIOS, which are not included in this repository.

## Next useful work

1. **Build a reviewed main-program inventory.** Most bytes are explicitly
   unclassified. A conservative scan (BSR + address-taken entries that look
   like prologues, then CFG walk) covers about 1.62 MiB / 66.7% if treated as
   code, plus ~140 KiB of ≥4-word in-image pointer runs. Walking every pointer
   as a function falsely covers ~92% and is rejected. Do not catalog those
   auto-ranges as units until each boundary is reviewed: tables decode as
   instructions. Unclassified bytes stay unknown.
2. **Expand a nearby function with real behavior.** `0x0c04701c` (72 bytes,
   through `0x0c047064`) is catalogued as a candidate in
   `src/candidate_0c04701c.c`. GCC 13 `-O2` does not match (jsr via constant
   pool, different callee-saved set). Next: recover callees `0x0c047b0c` and
   `0x0c047796`, or try a documented Hitachi SHC experiment separately.
   Nearby matching leaf: `func_0c206570` (`return b - a`, 6 bytes).
3. **Recover data objects from their users.** Observed pointer-run extents
   (in-image words only; ABI still unknown; not credited as reconstructed
   data): `0x0c050fd0..0x0c050fe4` (5), `0x0c2155e4..0x0c2155f0` (3),
   `0x0c23bef0..0x0c23bf3c` (19 handlers around `0x0c047064`),
   `0x0c23e698..0x0c23e70c` (29 around `0x0c04d210`),
   `0x0c23f3e8..0x0c23f464` (31 around `0x0c0548a2`),
   `0x0c23fd04..0x0c23fd8c` (34 around `0x0c05eac4`),
   `0x0c240334..0x0c240384` (20 around `0x0c067792` / `0x0c064b72`).
   `0x0c02be98` is an isolated cell (next word is outside the main image).
   Do not promote raw pointer arrays to reconstructed data until C has
   symbolic function references and a caller-established ABI.
4. **Obtain Hitachi SHC (or another compiler that emits `bsr` + r14 frames)
   and match `0x0c04701c` before changing the matching toolchain.** GCC 13
   flag search on that function is exhausted for the options listed above.
5. **Add service/test and additional code targets separately.** Each needs
   its own original addresses, fingerprints, layout, and source credit.
6. **Prepare ports after platform dependencies are understood.** Preserve
   timing, input, RNG, arithmetic, and game behavior; separate rendering,
   audio, I/O and storage bindings when the recovered code supports doing so.

Disassemble a small original range inside the container:

```sh
sh4-linux-gnu-objdump -D -b binary -m sh4 -EL \
  --adjust-vma=0x0c021000 \
  --start-address=0x0c04701c --stop-address=0x0c047068 \
  orig/unpacked/main.bin
```

## Limits of the current evidence

The full main/program-ROM match proves placement and byte identity of source
replacements plus the preserved original remainder. It is not evidence that
the remainder was decompiled, that the entire game is source-built, or that
runtime gameplay has been tested. No emulator playthrough is claimed.
