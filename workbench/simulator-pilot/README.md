# SH4 paired-execution pilot

This is an optional diagnostic experiment, not a decompilation acceptance gate.
It uses the unmodified [sh4objtest v0.1.48](https://github.com/lhsazevedo/sh4objtest/tree/291be8e458ddc2ecad9c3fd27b4e48a8b17e73aa)
instruction engine and expectation matcher. No PHP packages or background service
are required; PHP 8.3+ and a clean checkout of that revision suffice.

```sh
git clone --depth 1 --branch v0.1.48 https://github.com/lhsazevedo/sh4objtest.git build/sh4objtest
python3 workbench/simulator-pilot/pilot.py --simulator build/sh4objtest --php php
```

On the current Mac the PHP binary is `/opt/homebrew/opt/php@8.3/bin/php`.
Outputs, extracted reference bytes, compiled variants, and jobs stay under
`build/simulator-pilot/`; the final report is `results.json`. The separate
**SH4 simulator pilot** workflow runs this on demand and uploads its report.

## What it establishes

The same 87 cases run against retail, reconstructed C, and deliberately broken C:

- Two device-slot scans: disabled state, empty/full devices, every individual
  slot, blocking sentinel IDs, mixed supported/unsupported types (66 cases).
- Two byte checksums: both tested banks, zero/high-bit/wrapping/ramp/random data,
  and different 80/75-byte extents (18 cases).
- History display: all ten callback positions, register and stack arguments,
  varied history values, and the final status callback (3 cases).

The recorded baseline passes all 87 cases on both retail and C. All 372 native
instruction bytes in the five exercised functions execute across those cases.
Each of the three source mutations compiles and causes an expectation failure:
reversed enable guard, shortened checksum, or wrong display coordinate. They
fail 52, 10, and 3 cases respectively. A compile error or unsupported instruction
is not accepted as evidence that a mutation was detected.

This baseline took about 14 seconds locally, including compilation and 261 test
executions. It does not measure an overall decompilation speedup. The current
candidates are behaviorally consistent on these cases but remain byte-inexact.
The practical result is to focus their remaining work on code generation rather
than continue guessing their behavior. Stop using the pilot on a unit once it
is exact; add cases only for a concrete unresolved behavior.

## Reference integrity and limits

The bundled ROM and compiler are verified first. The adapter maps the selected
code and globals from `0x0cxxxxxx` into the simulator's 16 MiB address space.
Only whitelisted pointer words inside reviewed literal pools are rebased in the
reference; each patch is recorded and reversed to verify the original bytes.
Native instructions are never rewritten. The candidate is linked at the same
rebased section address; its actual linked symbol addresses are used, rather
than assuming that mismatching functions retained their original offsets.

Execution uses upstream `Run`, `LinkedProgram`, and expectations directly, so
there is no new instruction interpreter, assembly reconstruction, or object
parser. Memory/register initialization remains randomized except for explicit
case data. A 100,000-instruction budget bounds each case. Full original function
instruction coverage and at least one runtime expectation failure per mutant
are required for this pilot to pass.

Coverage is not proof of all possible behaviors, all branch combinations, or
hardware equivalence. These integer-only routines avoid unverified FPU modes,
interrupts, and device behavior. Callback targets are mocked. The byte comparer,
compiler option sets, registration rules, and progress accounting are unchanged.
No simulator pass earns exact-C credit.
