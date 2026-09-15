# Hitachi compiler: present and working

The required package is already in this private repository:

- Directory: `toolchain/hitachi-shc-5.0r31/`
- Compiler banner: **SH SERIES C/C++ Compiler Ver. 5.0(Release31)**
- Package: all **28 files** supplied by the owner, including the compiler's
  subprocesses, assembler, linker, conversion tools, and message files.
- File-by-file sizes and SHA-256 values: `toolchain/hitachi-shc-5.0r31.json`.
- `shc.exe` SHA-256:
  `7113feff1bd1f34915a52553848d9df545d1792d1972977d56a2a8536a2d94ab`.

Do not stop to look for a compiler installer or claim that this project has no
SHC package. Clone the repository and use the commands below. Keep the package
and repository private.

## Tested route: wibo, not Wine

Do **not** use Wine/QEMU for the macOS recipe below; use host-side wibo/Rosetta.

The wrapper uses **wibo 1.2.0**, pinned by SHA-256 in `toolchain/wibo.json`.
It downloads the appropriate small runtime from the official wibo release on
first use and verifies its checksum before execution. The Hitachi compiler
itself needs no download. Native Windows can run it without wibo.

On this Apple Silicon Mac, the macOS x86_64 wibo executable runs through
Rosetta. Actual C compilation, Hitachi assembly with zero errors, and
conversion to a valid SH-4 ELF object have succeeded on the host. No Wine
installation or Colima configuration change is required for that route.
Wine/QEMU failures reported in a different setup do not establish that the
compiler cannot run on this machine.

### macOS host — preferred for compiler experiments

```sh
make shc-check
make shc SOURCE=tools/probes/func_0c047b0c.c
make shc SOURCE=src/candidate_0c04701c.c
```

Apple Silicon needs Rosetta to run the x86_64 macOS wibo executable. If it is
absent, the operating system must provide it before this route can run.

### Linux x86_64 / GitHub Actions

```sh
docker build --platform linux/amd64 -t mvc2-naomi-build .
docker run --rm --platform linux/amd64 -v "$PWD:/project" mvc2-naomi-build make all
```

The workflow uses an x86_64 GitHub runner and runs the same compiler check.
An ARM Linux container is not the supported native host for this Win32 tool;
use a native x86_64 Linux host or the macOS host wrapper. The emulated Linux
container on this Mac also failed with wibo; do not substitute that route for
the working macOS host command. No Docker/Colima settings were changed.

## Outputs and isolation

`make shc SOURCE=path/to/file.c` produces:

```text
build/shc/path/to/file/output.src   compiler-generated assembly
build/shc/path/to/file/output.obj   Hitachi SYSROF object
build/shc/path/to/file/output.elf   converted ELF32-SH relocatable object
build/shc/path/to/file/compile.log
build/shc/path/to/file/evidence.json
```

The wrapper copies the tools and source into a temporary working directory,
sets `SHC_LIB` and `SHC_TMP`, runs the actual compiler/assembler/converter, and
preserves the outputs. It never edits the bundled executables or substitutes
handwritten instructions for compiler output. Every invocation checks all
package fingerprints. A `WIBO` environment override is supported only when
its contents match the pinned runtime for the current platform.

The starting SH-4 flag profile is in `tools/hitachi.py:FLAGS` and is recorded
in each evidence file. It is an investigation profile, not proof of the
original game's complete compiler command line.

## Relationship to the matching build

GitHub CI requires a successful Hitachi compile, assemble, and ELF-conversion
check, and also compiles the recovered callee probe. The results are in
`build/hitachi-check.json` and the GitHub build artifacts. `make verify` and
`make all` verify the bundled package's hashes without requiring a Windows
runtime for the existing GCC units. Compiler files contribute to the source
fingerprint, so changing them invalidates old evidence.

The existing accepted C units still use their proven GCC 13 build. Do not
silently switch those units or claim they were matched with SHC. Use Hitachi
for new compiler investigations, then integrate a unit only when its actual
bytes, symbol boundaries, relocations, literal pools, and original linked
placement are verified. Converted Hitachi ELF symbols may have leading
underscores and no function sizes; conversion alone is not matching evidence.

## Recovered `func_0c047b0c` finding

The probe is preserved at `tools/probes/func_0c047b0c.c`. The original is a
34-byte leaf that reads the words at byte offsets `0x342`, `0x344`, and `0x340`,
combines XOR/OR results, masks and stores the low word, and returns whether
that result equals the mask's low word. It is a callee of `0x0c04701c`.

The supplied SHC runs this probe successfully. With the current profile and
straightforward local-variable formulation, it emits a 38-byte instruction
body with a four-byte stack frame, followed by alignment and literals. That
differs from the original 34-byte frame-free body. This is a real code-generation
mismatch, not a missing-tool or runtime blocker. The probe remains uncredited;
do not repeat the claim that no local compiler exists.

## Conversion and matching cautions

The bundled `elfcnv.exe` recipe converts the **relocatable `.obj`**. A tested
conversion of the linked SYSROF `.abs` was rejected and left an empty file.
A relocatable ELF with `.text` at zero does not prove final placement. Keep
linking, relocation/literal-pool verification, and exact byte comparison as
separate acceptance steps. The existing `tools/rof2elf.py` remains available
as a separate converter for compiler investigations.

The older `make shc-smoke` check also remains available when `WIBO` and
`SHC_BIN` are configured. CI points it at the bundled package, not a compiler
image download. `make shc-check` is the self-configuring command for users.

## Current tracked candidate

`src/candidate_0c047b0c.c` is now catalogued as a 34-byte candidate by the
ongoing matching work. It explores a closer register-allocation shape than
the initial local-variable probe in `tools/probes/`. Preserve that work.
The original literal pool is 62 bytes after the entry; standalone objects
place their own pools differently. Register choices, `extu` ordering, and
return-delay-slot scheduling still require exact verification. The candidate
is not matching-source credit. Run it directly with:

```sh
make shc SOURCE=src/candidate_0c047b0c.c
```

Seven dummy `return 0` pads in `tests/shc_b0c_prefix.c` push the `0x0342`
pool to entry+0x3e so SHC bakes retail's `1d90` displacement.
`tools/shc_b0c_prefix.py` checks the first 20 bytes against the ROM.

The remaining 14 bytes are a real code-generation mismatch, not a missing
compiler: 5.0r26–5.1r13 with this C emit `extu.w r5,r5` then store then
reload `*out`; retail stores first, `extu.w r5,r2` / `extu.w r3,r3`,
`movt; rts; nop`. 5.0r10 stores first but xors before the third load and
uses different registers. Further C shapes (running offset, `register`,
inlined store helper, `do { *out=t; } while(0)`, compare `w` first,
`(unsigned)t==(unsigned)w`) still miss those 14 bytes. Intra-section
PC-relative pools are resolved inside the ROF (no reloc for GNU ld). Dummy
pads are test-only. The function stays a candidate.
