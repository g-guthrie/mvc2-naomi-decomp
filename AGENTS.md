# Agent instructions

## Objective

Reconstruct the NAOMI `mvsc2` main executable as maintainable C that builds byte-for-byte with the bundled Hitachi compiler and linker. Read README.md and docs/CONTINUE.md first. Keep the repository private.

## Build

Run `python3 tools/build.py check` before starting and after changing source, configuration, or tools. Python 3.10+ is required. Use native Linux x86_64, macOS with Rosetta on Apple Silicon, or Windows. The native Linux GitHub Actions job is the fallback for unsupported agent hosts. Use the bundled tools; do not create a second compiler pipeline or add a container dependency.

For a single candidate: `python3 tools/build.py unit mask_helper`. Outputs are in `build/work/`: compiler assembly (`.src`), object, linked ELF, linker map, linker commands, and logs. Single-unit checks do not refresh repository progress.

## Work and proof

- Make small changes, preserve concurrent work, and keep verified units passing.
- Register each C unit in config/units.json. Record the original section address, complete reference size, code/data/BSS kind, exported symbols, and external symbol addresses. Reference sizes come from the original image, never from candidate output.
- Use candidate mode while iterating. Promote to verified only when the full unit matches. A partial byte count, assembly resemblance, matching prefix, relocatable object, or raw instruction dump is not a match.
- Code credit requires compiled C. Do not replace functions with raw bytes, inline assembly, or an original-byte include to raise progress. Data must be represented as meaningful typed C, with pointers resolved by the linker.
- Validate complete linked sections, exact original addresses, all declared exports, and bytes. Padding, literal pools, and relocations matter. BSS is checked but does not add ROM-byte credit.
- Unknown regions stay unclassified. config/regions.json defines display subdivisions only; it is not a code/data or function map.
- Do not change original ROMs or tool binaries to obtain a match. Verify package hashes. Do not redistribute this private repository or its ROM/tool artifacts publicly.
- Favor deletion, reuse, simple explicit state, and meaningful checks. Fix obsolete tests, but never weaken a valid byte/address/size check to pass.
- Subagents are useful only for independent functions without conflicting ownership. Do not run parallel builds inside the same working tree because build/work is recreated.

## Delivery

Run the full check and commit the generated README progress block, assets/*.svg, docs/progress.json, and docs/index.html with the source. CI rebuilds from a fresh checkout and refreshes progress on main. Report matched units/bytes and remaining uncertainty. An exact image that retains original untranslated bytes is not 100% source reconstruction.
