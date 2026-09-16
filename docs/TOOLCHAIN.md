# Toolchain, verification and credit

## What is bundled

- `toolchain/hitachi-shc-5.0r31/`: the Hitachi SH C/C++ compiler package. Its
  manifest records every file's size and SHA-256.
- `toolchain/wibo/`: the wibo 1.2.0 Windows runtime for Linux x86_64 and macOS.
- `toolchain/naomi-sdk/lib/`: Sega's prebuilt NAOMI SDK libraries, in Hitachi
  library format, with a manifest recording every file's size and SHA-256. The
  retail ROM links these objects unchanged, so library units link them instead
  of reconstructing their source.
- `orig/mvsc2.zip`: the 18 reference ROM members, hash-checked against
  `config/target.json`.

| Host | Route |
| --- | --- |
| Linux x86_64 | native; this is what CI runs |
| macOS Intel or Apple Silicon with Rosetta | native |
| anything else | push and use GitHub → Actions → Hitachi build → Run workflow |

## Where the options came from

The NAOMI SDK preserved at archive.org (item `NaomiSDK`) holds the Hitachi
compiler releases Sega shipped, `pcv5r10` through `pcv5r32` and `pcv51r01`
and `pcv51r08`, and in `hitachi990119.zip` the file
`doc/english/misc/read_1st.txt`, Sega's tool manual, whose section 1 lists
the options every application must be built with. Those are the `game` set.
Releases 31, 32 and 5.1 produce identical bytes for every unit tried; release
28 does not. The `library` set drops `-extra=a=400` because Sega's libraries
above 0x0c1e9000 were built without it. The compiler runtime routines the
generated code calls are listed with their retail addresses in
`config/runtime.json`, each proven by a verified unit.

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
- A pool is its `mov.w` literals, a two-byte zero pad when their count is odd,
  then its `mov.l` literals. The pad is mapped as data like the literals.
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

A **library unit** links one prebuilt SDK module instead of compiling C, so it
names a `library` and a `module` in place of a `source`, and takes no `options`:

```json
{ "id": "lib_kamui2_km2ver_kamui2_lib_", "library": "toolchain/naomi-sdk/lib/libkamui2.lib",
  "module": "km2ver_kamui2_lib_", "mode": "verified",
  "sections": [ { "section": "PSG", "kind": "code", "address": "0x0c206780", "size": 64 } ],
  "imports": { "_kmiWriteRegister": "0x0c213200" },
  "exports": { "_kmGetVersionInfo": "0x0c206780" } }
```

The build extracts that one module into a private library, links it at the
declared addresses against a reference object that names only its exports, and
compares the result with retail exactly as it compares a compiled unit. Because
the module is the compiler's own output, a library unit carries no `interior`
and makes no claim about which of its bytes are instructions: the reviewed
mapping keeps its own classification of them, and the decoder test ignores them.

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
- `tools/twins.py START SIZE`: for each function in a span, the verified
  function of the same instruction shape, with its source. The game stamps
  its state handlers from a few templates, so most units are half twins.
- `tools/clone.py START SIZE OUT.c`: assemble a unit from its verified
  twins, symbols and immediates substituted; functions without a twin become
  stubs carrying their Ghidra draft. `--list` names the units whose every
  function has a twin.
- `tools/libunit.py LIB [--register]`: find every module of a bundled SDK
  library in the retail image, solve the addresses its relocations point at,
  prove the link byte-exact, and register the exact ones as library units.
- `tools/permute.py FILE`: hill-climb over the mechanical rewrites in
  MATCHING.md, scored by equal bytes against retail.
- `tools/float_literal.py 0xBITS`: the decimal spelling SHC parses to those
  float bits.
- `tools/ghidra_draft.py --ghidra DIR`: a Ghidra decompilation draft of every
  reviewed function into `build/drafts/`, pool literals substituted by
  `tools/draft_pools.py`. Ghidra is not bundled: unpack a release such as
  `ghidra_11.3.2_PUBLIC` from its GitHub releases (Java 17 or newer is
  required) and pass the directory. The run takes about half an hour and
  needs no analysis pass; `tools/ghidra/DraftSome.java` drafts a few named
  functions in seconds. Run `tools/ghidra/single_precision.sh DIR` once
  after unpacking: Ghidra's SH-4 model decides float width at run time and
  otherwise fills float code with double-precision noise; the script forces
  single precision, which is how the game runs, and recompiles the language.
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
