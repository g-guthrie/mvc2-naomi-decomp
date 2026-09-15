# Working instructions

## Objective and authority

Recover maintainable C for **NAOMI MVC2 Export/Korea Rev A (`mvsc2`)**, matching
the verified original. Read README.md, docs/CONTINUE.md, docs/PROGRESS.md, and
config/target.json and docs/TOOLCHAIN.md first. The ROM fingerprints and current NAOMI executable
are the target authority. PS2 and Dreamcast work is reference material, not
matching evidence for this binary.

## Build and acceptance

- The required original ROM is already in `orig/mvsc2.zip`. Run `make prepare`
  to verify and extract it; do not search the internet for another target.
- Use the Dockerfile or the Ubuntu cross-toolchain described in README.md.
- Hitachi SHC 5.0 Release 31 is already bundled under
  `toolchain/hitachi-shc-5.0r31/`. Use `make shc-check` and
  `make shc SOURCE=path/to/candidate.c`; do not block on locating an installer.
  The tested runner is wibo 1.2.0 (macOS/Rosetta or Linux x86_64), not Wine/QEMU.
- Run `make all` after each coherent change. This runs tests, a source build,
  original-address linking, direct byte comparisons, full-image comparison,
  and report generation. Inspect failures before deciding what to change.
- Treat tests as code. Repair obsolete tests, but never weaken a real match,
  address, overlap, provenance, or denominator check to obtain green status.
- Do not report a change as verified from an old `build/evidence.json`.
- Preserve concurrent user work. Prefer small coherent changes, explicit
  state, existing utilities, and deletion/reuse over new abstractions.

## What earns progress

- Real source must compile and match at its original address. Do not substitute
  byte arrays, inline assembly, generated disassembly wrappers, binary includes,
  target-byte copies, patched comparisons, or compiler-output substitutions.
- Unknown regions stay unknown. Record reviewed code/data ranges in
  `config/units.json`; ranges must remain disjoint and inside the main image.
- Data needs an identified representation and references before it can be
  called reconstructed. Raw pointer numbers and zero/fill arrays are
  placeholders, even if their bytes match.
- Keep not-yet-matching source in separate candidate files. Only source files
  nominated by `status=matching` are included in the strict linked build.
- New symbols imported from original code go in `config/symbols.ld` with
  evidence. Such imports do not earn source credit.
- Do not invent gameplay names or ABI signatures from a four-byte return stub.
  Address-based names are intentional until callers establish their role.
- GCC 13 remains the accepted compiler for existing matched units. Use the
  bundled Hitachi compiler for nontrivial candidates before repeating broad
  GCC-only searches. Neither a working SHC invocation nor ELF conversion
  establishes a byte match or proves the original revision; verify the unit.

## Cloud continuity and publishing

- This repository is private and contains the owner's provided commercial ROM.
  Keep its visibility private; do not publish the ROM or ROM-containing artifacts
  to public repositories, public Pages, or other public endpoints.
- No extra credential is required by CI: the checkout contains its own target.
- Push ordinary commits to the authorized branch; CI automatically compiles
  and verifies them. Successful main builds update the infographic and reports.
- Do not edit generated progress numbers by hand. Update source/catalogs,
  run the build, then regenerate.
- End a work session with exact source/build evidence, remaining limitations,
  and the next concrete task in docs/CONTINUE.md. Do not imply that byte-identical
  fallback assembly is decompiled or that a partial ELF is a native port.
