# Toolchain, verification and credit

## What is bundled

- `toolchain/hitachi-shc-5.0r31/`: the Hitachi SH C/C++ compiler package. Its
  manifest records every file's size and SHA-256.
- `toolchain/wibo/`: the wibo 1.2.0 Windows runtime for Linux x86_64 and macOS.
- `orig/mvsc2.zip`: the 18 reference ROM members, hash-checked against
  `config/target.json`.

| Host | Route |
| --- | --- |
| Linux x86_64 | native; this is what CI runs |
| macOS Intel or Apple Silicon with Rosetta | native |
| anything else | push and use GitHub → Actions → Hitachi build → Run workflow |

## Pipeline

For every unit in `config/units.json`, `tools/build.py`:

1. copies the unit's C file and every header in `src/include/` into `build/work/`;
2. runs `shc.exe` with one of the two option sets in `config/compiler.json`:
   `game` for the game's own code and `library` for Sega's libraries above
   0x0c1e9000, which were built without the `-extra=a=400` nop workaround.
   A unit names its set with `"options"`; the default is `game`.
3. runs `asmsh.exe` on that assembly and `lnk.exe` to place each section at its
   original address, defining the unit's imports at their retail addresses;
4. compares the linked ELF with the main image.

The compiler's own output is what gets assembled. The build never edits
instructions, only section alignment directives.

## Unit registry

```json
{ "id": "mask_tu", "source": "src/candidates/mask_tu.c", "mode": "candidate",
  "sections": [ { "section": "P", "kind": "code", "address": "0x0c047a40", "size": 288,
                  "interior": [ { "address": "0x0c047b2e", "size": 50, "kind": "data" } ] } ],
  "exports": { "_func_0c047a40": "0x0c047a40", "_func_0c047a8c": "0x0c047a8c" },
  "imports": { "_dat_0c2d9300": "0x0c2d9300" } }
```

- `mode` is `verified` or `candidate`. Every verified unit must match exactly or
  the check fails.
- A section is one linked Hitachi section: `P` for code, `C` for constants,
  `D` for initialized data, `B` for BSS, or the `#pragma section` name.
- `interior` lists bytes of the other kind inside a section. SHC emits a
  translation unit's literal pool inside its code section, so a code section
  declares its pool as interior data. The mapping keeps calling those bytes
  data; the unit still owns the whole section.
- `exports` are the symbols the unit defines, with their retail addresses.
  Every function is exported.
- `imports` are the symbols it references from elsewhere, with their retail
  addresses. Compiler runtime routines are listed once in
  `config/runtime.json`.
- `options` names the option set, `game` or `library`.

## Verification

A unit is exact when the linked ELF has the expected sections and no others,
every section has the declared address, size and kind, every export lands at
its address, every initialized byte equals retail, and the ELF holds no bytes
beyond the declared sections. A matching prefix is not a match.

Each exported function is also compared on its own: its bytes run from its
address to the next export, the next declared interior range, or the end of the
section.

## Credit

- A **verified** unit is credited for every code and data byte once it is exact.
- A **candidate** unit is credited for the bytes of each function and each
  declared pool that matches, provided its section links at the declared
  address and size. Its other functions earn nothing.
- Only verified bytes are written into the rebuilt ROM. Everything else stays
  retail, and the rebuilt ROM must hash to retail.

`build/proof.json` records every comparison. `build/progress.json`,
`build/progress.svg`, `build/active.svg` and `build/index.html` are drawn from
it, and the README bars are rewritten from the same numbers.

## Tools

- `tools/diff_unit.py FILE [--register ID]`: compile one file, compare it with
  retail function by function, and register it. See
  [MATCHING.md](MATCHING.md).
- `tools/float_literal.py 0xBITS`: the decimal spelling SHC parses to those
  float bits.
- `tools/inspect_rom.py --address A --size N`: disassemble retail bytes.
- `tools/flow_map.py`: walk the control-flow graph from the entry point and every
  reviewed code range and propose new ranges. `--roots FILE` adds candidate
  entry points, for example the BSR destinations from `tools/survey.py`.
- `tools/unit_spans.py`: propose translation-unit extents, runs of code and
  pools that no branch crosses and that start on a function. This is the list
  to hand out.
- `tools/pool_clusters.py`: group reviewed code that reads one literal pool.
  A unit usually holds several.
- `tools/nonexecutable.py`: find runs that decode as no SH-4 instruction.
