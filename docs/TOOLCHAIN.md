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

## Evidence

- `build/proof.json`: input fingerprint, tool versions, ROM/image hashes, and per-unit comparisons.
- `build/work/`: C copies, generated assembly, objects, linked ELFs/maps, linker commands, logs.
- `build/progress.json`: generated evidence plus conservative code/data metrics.
- `build/progress.svg`, `build/active.svg`, `build/index.html`: static and interactive maps generated from that same successful build.

All generated evidence stays in `build/` and is attached to the exact CI run. It is not committed as repository state.

The fingerprint covers source, config, tools, tests, and bundled toolchain files. CI artifacts contain reports and per-unit evidence; the workflow does not publish ROM images. The selected baseline options (`-cpu=sh4 -endian=little -optimize=1`) and compiler revision are not yet proven to match the original build throughout the game.
