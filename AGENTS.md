# Working on this repository

**Goal: every byte of the main image reproduced from C.** This file is the
whole process. Nothing here is restated elsewhere; if another document
disagrees with this one, this one wins.

## Start

```sh
python3 tools/build.py check                      # must pass before you begin
python3 tools/ghidra_draft.py --ghidra DIR        # once per clone, optional
```

The check verifies the ROMs, runs the tests, compiles every unit and rebuilds
the ROM. The draft step needs a Ghidra install (see
[docs/TOOLCHAIN.md](docs/TOOLCHAIN.md)) and writes a decompilation draft of
every reviewed function into `build/drafts/`; without it you read
disassembly instead.

## Loop

1. Pick a unit from `python3 tools/unit_spans.py`, or a `CANDIDATE` line in
   the check output. A unit is a run of functions and their literal pools that
   no branch crosses; confirm its extent before writing.
2. Run `python3 tools/twins.py START SIZE`: functions with a verified twin
   are that twin's source with other constants, copy and adjust. Read the
   drafts and the disassembly (`tools/inspect_rom.py`) for the rest, and
   write every function into one file in address order.
   [docs/MATCHING.md](docs/MATCHING.md) says how to shape the C.
3. Iterate with `python3 tools/diff_unit.py <file>` until every function
   matches. `tools/permute.py <file>` searches the mechanical spellings for
   you; `tools/float_literal.py 0xBITS` gives an exact float spelling.
4. Register with `python3 tools/diff_unit.py <file> --register <id>`: verified
   when exact, under `src/verified/`; candidate otherwise, under
   `src/candidates/`, with a comment at the top saying what differs. Units
   above 0x0c1e9000 are Sega library code and take `--options library`.
5. Run the check, commit source and configuration together, push, and merge
   to `main`. CI republishes the README bars from `main`.

Several agents may run the loop at once: `diff_unit.py` uses a private work
directory and locks the registry. Only `tools/build.py` needs the tree to
itself, so run the check when no other agent is registering.

## Rules

- **Only the bundled compiler.** `config/compiler.json` holds the only two
  option sets, `game` and `library`. A unit names one; nothing else is added.
  If your host cannot run it, push and use GitHub → Actions → Hitachi build.
- **C only.** No inline assembly, no assembler input, no byte arrays standing in
  for code. Data is declared with its real type where that is known. The
  compiler's runtime routines (`config/runtime.json`) are reached by writing
  the C that makes the compiler call them, never by calling them.
- **Retail decides.** Addresses and sizes come from the ROM. Nothing in
  `orig/`, `toolchain/` or the verifier is changed to make a unit match.
- **One definition per object.** Shared structs live in `src/include/objects.h`.
  A unit never declares its own copy of an object that is already there.
- **Unreviewed bytes stay unknown.** A range enters `config/mapping.json` only
  after its control flow, delay slots and literal pools were reviewed.
  Survey hits are hints.
- **Registration owns bytes.** Registering a unit releases pool sections and
  swallowed leaves from other units, in the registry and in their sources;
  that is expected. Every registered source must be committed with the
  registry.
- **Small commits.** One unit or one mapping change per commit, made after a
  passing check. Generated files under `build/` are never committed.
