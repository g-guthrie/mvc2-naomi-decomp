# Working on this repository

**Goal: every byte of the main image reproduced from C.** The rest of this file
is the whole process. Nothing here is restated elsewhere; if another document
disagrees with this one, this one wins.

## Loop

1. `python3 tools/build.py check`. It must pass before and after your change.
2. Pick work from the build output, never from memory:
   - a `CANDIDATE` line: a unit that does not match yet;
   - `python3 tools/pool_clusters.py`: runs of code sharing one literal pool.
     A retail unit usually spans several; find its real extent first;
   - `build/mapping.json`: unreviewed bytes to map.
3. Write one translation unit as one file. Iterate with
   `python3 tools/diff_unit.py <file>` until every function matches.
   [docs/MATCHING.md](docs/MATCHING.md) says how.
4. Register it with `python3 tools/diff_unit.py <file> --register <id>`, run
   the check, commit source and configuration together, push, and confirm CI
   is green.

## Rules

- **Only the bundled compiler.** `config/compiler.json` holds the only two
  option sets, `game` and `library`. A unit names one; nothing else is added. If your host cannot run it, push and use
  GitHub → Actions → Hitachi build → Run workflow.
- **C only.** No inline assembly, no assembler input, no byte arrays standing in
  for code. Data is declared with its real type where that is known.
- **Retail decides.** Addresses and sizes come from the ROM. Nothing in
  `orig/`, `toolchain/` or the verifier is changed to make a unit match.
- **One definition per object.** Shared structs live in `src/include/objects.h`.
  A unit never declares its own copy of an object that is already there.
- **Unreviewed bytes stay unknown.** A range enters `config/mapping.json` only
  after its control flow, delay slots and literal pools were reviewed.
  Survey hits are hints.
- **Small commits.** One unit or one mapping change per commit, made after a
  passing check. Generated files under `build/` are never committed.
- **Concurrent work is normal.** Use your own worktree; the build recreates
  `build/work/`.
