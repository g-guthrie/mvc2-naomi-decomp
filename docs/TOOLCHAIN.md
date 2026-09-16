# Toolchain and verification

## Included

- `toolchain/hitachi-shc-5.0r31/`: the original 28-file Hitachi package supplied for this project. Its manifest records every file size and SHA-256.
- `toolchain/wibo/`: pinned wibo 1.2.0 executables for macOS and Linux x86_64, plus license notices. Hashes and upstream provenance are in toolchain/wibo.json.
- `orig/mvsc2.zip`: all 18 reference ROM members, checked against the pinned MAME manifest in config/target.json.

The runtime is invoked directly; no online downloads are part of the build. Python's standard library handles checksums, ZIP reading, ELF loading, reports, and tests. A small bundled public-domain SH-4 decoder supports original-byte inspection; it is not a compiler.

## Platforms

| Host | Build route |
| --- | --- |
| Linux x86_64 | Bundled native wibo; verified in GitHub Actions |
| macOS Intel | Same Intel executable runs natively; not separately hardware-tested |
| macOS Apple Silicon | Same executable through installed Rosetta; verified locally |
| Windows | Local build not validated; use GitHub Actions |
| Linux ARM / x86 emulation on ARM | Unsupported; use the native Linux GitHub Actions job |

## One pipeline

`tools/build.py` invokes `shc.exe` to produce a Hitachi object, then `lnk.exe` to emit an **absolute linked ELF** and a map at declared original addresses. It separately requests compiler assembly for inspection. The linked output is the evidence used for comparison. The bundled assembler and conversion tools remain intact as part of the original package but are not required by this path.

The linker smoke fixture checks code, constants, initialized data, BSS, and two real relocations: a local function pointer and an imported symbol pointer. It is infrastructure only and never contributes game progress.

For each game unit, the verifier checks ELF type/CPU/endianness, load ranges, complete section set, section sizes/kinds/addresses, exported addresses, and all initialized bytes. Extra emitted bytes fail an exact match. Verified units must pass; candidate mismatches are recorded without credit. Compilation/link errors always fail.

The full build overlays only verified C-produced bytes onto the reference main image, checks its SHA-256, reinserts it into the program ROM, and requires a full program-ROM match. Untranslated bytes stay original. All other archive members are hash-verified, not claimed as source reconstruction.

## Extending the map

`tools/flow_map.py` walks the CFG from the entry point plus every reviewed code
range. Once that reaches a fixed point it proposes nothing further, because the
remaining functions are reached indirectly rather than by a direct branch from
anything already reviewed.

`--roots FILE` takes a JSON array of extra candidate entry addresses to try.
`tools/survey.py` supplies them: it records the destination of every BSR opcode
in the image, including destinations inside unreviewed bytes. A raw opcode hit
is a hint, not a boundary, so the walker still decides. It rejects a candidate
whose walk reports issues, whose ranges conflict with a reviewed range, or whose
kind disagrees with an existing one; survivors carry delay slots and split their
PC-relative pools as data. Destinations with several independent incoming calls
are the strongest candidates.

Proposals are reviewed before they enter `config/mapping.json`. Nothing about a
successful walk makes a range correct.

## Translation units

SHC emits a translation unit's literal pool inside the same linked section as
its code, so an object that covers several functions covers their shared pool
too. A unit section may therefore declare `interior` ranges: sub-ranges of the
section that hold the other kind, each with an address, size and kind.

```json
{ "section": "P", "kind": "code", "address": "0x0c047a40", "size": 288,
  "interior": [ { "address": "0x0c047b2e", "size": 30, "kind": "data" } ] }
```

The ledger keeps calling those bytes data, because they are literals and a walk
must never read one as an instruction, while the unit still owns the whole
section for compile and link verification. Reconciliation is per byte: an
overlap of a different kind passes only where a declared interior covers it,
and an undeclared one still fails. An interior outside its section fails.

`tools/pool_clusters.py` lists the candidates. It coalesces adjacent reviewed
data into whole pools, because one pool is usually several ledger ranges, then
walks back from each pool through the code ranges that are adjacent and read it.
It recovers the span `mask_tu.c` already matches: four functions at
`0x0c047a3c` sharing the pool at `0x0c047b2e`.

Isolated functions do not move the code measure. The verified code sections
average a few bytes each because each one is a leaf compiled alone under its
own `#pragma section`, and a lone function whose pool SHC places in `P` cannot
match a section declared as pure code. Grouping the functions that share a pool
into one unit is what the retail objects actually look like.

## Evidence

- `build/proof.json`: input fingerprint, tool versions, ROM/image hashes, and per-unit comparisons.
- `build/work/`: C copies, generated assembly, objects, linked ELFs/maps, linker commands, logs.
- `build/progress.json`: generated evidence plus conservative code/data metrics.
- `build/progress.svg`, `build/active.svg`, `build/index.html`: static and interactive maps generated from that same successful build.

All generated evidence stays in `build/` and is attached to the exact CI run. It is not committed as repository state.

The fingerprint covers source, config, tools, tests, and bundled toolchain files. CI artifacts contain reports and per-unit evidence; the workflow does not publish ROM images. The selected baseline options (`-cpu=sh4 -endian=little -optimize=1`) and compiler revision are not yet proven to match the original build throughout the game.
