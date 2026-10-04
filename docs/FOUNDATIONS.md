# Matching foundations

## Reliable incremental builds

`python3 tools/build.py check --jobs 4` reuses content-keyed compiler artifacts.
`--clean` bypasses cache reads; CI always uses it. Compiler executables, runtime,
options, compilation implementation, shared headers, source/library content,
and the full unit descriptor bind each cache key. Missing or corrupt artifacts
are recompiled. Every hit still passes the original byte comparison and full
ROM reconstruction. Cached pass/fail decisions are never used.

Each unit has private scratch space in `build/work/<id>/`. Concurrency defaults
to at most four vendor-tool jobs. Build commands share an output lock; changed
input fingerprints abort proof publication. Retaining original compiler assembly
avoids compiling the same C file twice. Alignment placement is unchanged.
Proofs report compilation counts, cache hits, and elapsed build time. Measure
cold and warm checks on the same tree, separately from decompilation throughput.

## Candidate admission and diagnosis

`python3 tools/diagnose.py src/candidates/NAME.c` reports structural mismatches,
first divergent words, register/literal/instruction categories, boundary evidence,
and applicable type contracts. Diagnostic normalization never accepts a match.

Boundary admission checks reviewed incoming/outgoing branches in both directions,
full literal widths, mapping gaps, split delay slots, and conditional branches
into exported entries. Cloning and registration reject blocked boundaries.
The work queue separates these blockers from near matches and supplies next
steps. Permutations check boundaries/contracts, skip duplicate variants, and
limit structurally misplaced candidates to twelve probes.

Indirect destinations and hidden calling conventions still need native review.
`direct_edges_closed` means only that the reviewed direct-edge checks passed.
It does not establish every function boundary or ABI assumption.

## Evidence-backed types

`config/type_contracts.json` records member offsets and prototypes with evidence.
`python3 tools/type_contracts.py` compiles layout expressions with SHC, links their
numeric target values, and checks them. Redeclarations catch incompatible
prototypes. Host ABI assumptions and guesses from field names are not used.

Initial coverage is explicit: four repaired `ud2_12` offsets, its unsigned-byte
return declaration, and the shared mask-word offset. Unlisted types remain
unvalidated. Add contracts as native evidence establishes more facts.

The repaired candidate remains inexact. Its continuation at `0c0d6ae8` is no
longer an exported function. Four tail-call register bytes still prevent a whole
match. Existing reports distinguish candidate evidence from verified C and SDK.

## Compiler patterns and feasible completion

`python3 tools/compiler_patterns.py` verifies the repeated-switch and inline
float-doubling patterns against retail bytes, with failing negative controls.
The normal test suite runs both. Their sources are in
`tests/fixtures/compiler_patterns/`, and participate in the build fingerprint.
Research history is retained in `workbench/compiler-patterns-20261004/`.
No fragment is newly registered by these pattern checks.

Every full proof includes a `feasibility` inventory: reviewed instructions with
exact C, accepted prebuilt SDK provenance, intrinsic/ABI or CPU-state signals,
and unassessed C feasibility. Signals are review prompts, not proof of handwritten
assembly or impossibility. Unknown mapping bytes remain outside those totals.
These are reviewed-instruction counts, not raw SDK code-section sizes; sections
can also contain pools and padding. Do not substitute one measure for the other.
Neither a reference-backed rebuilt ROM nor SDK object matching establishes
C-only completion. The three-live-constant problem remains open.

## Sustained work

Use isolated unit comparisons inside the research loop and full clean gates at
integration checkpoints. Keep disjoint research moving while integration runs.
Track actual checked additions, compilation time and idle time; an active goal
label is not evidence of execution. Do not restart stopped workers or schedules
without a new user instruction.
