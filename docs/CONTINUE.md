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

`src/callback_leaves.c` contains 216 address-taken, four-byte functions:
171 no-ops (`rts; nop`), 43 returns of zero (`rts` delay-slot `mov #0,r0`),
and two returns of one. Each entry is independently address-taken in the
main image. Fingerprints and ROM pointer offsets are in `config/units.json`.
No broad gameplay role is inferred from these shapes. They are small but real
compiled-source replacements, not assembly aliases.

The initial toolchain is open GNU GCC 13.3 / binutils 2.42 targeting SH-4,
little-endian. Flags are recorded by `tools/project.py` in every build proof.
The original NAOMI compiler has not been conclusively identified. The related
Dreamcast project investigated Hitachi SHC; its result is a lead to test, not
proof for this target.

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
   unclassified. Use control flow, address references, literal pools, and data
   consumers to establish boundaries. Do not classify every decodable SH-4 word
   as an instruction: tables and constants also decode as instructions.
2. **Expand a nearby function with real behavior.** The address-taken function
   at `0x0c04701c` (72 bytes, ending at the verified stub `0x0c047064`) saves
   `r14`/`pr`, allocates 12 stack bytes, copies arguments, does two `bsr`
   calls (`0x0c047b0c`, `0x0c047796`), and returns. Determine parameters and
   the callee ABI from callers before writing C. Keep it a candidate until
   GCC 13 output and linked placement match.
3. **Recover data objects from their users.** The eight known pointer cells
   are only four-byte observations, not recovered table boundaries. Establish
   the surrounding table's extent and callback ABI before replacing it with
   symbolic source and crediting data.
4. **Investigate the original toolchain on representative code.** Tiny
   return functions cannot distinguish GCC from Hitachi output. Keep any
   compiler experiments reproducible and separate from accepted source.
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
