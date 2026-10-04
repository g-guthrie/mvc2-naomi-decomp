# Compiler-pattern investigation, 2026-10-04

Research against final stopped source commit `a93ee1a4e186a3dca66ed214bc41216b7e043824`, bundled SHC 5.0R31, and the unchanged `game` options. No units were registered and no decompilation credit is claimed.

## Recovered: repeated switch bodies produce a shared comparison chain

The previously open `0/1/2` comparison chain is reproduced by:

```c
switch ((signed char)a->b4c9) {
case 0: a->b1e9 = 8; break;
case 1: a->b1e9 = 8; break;
case 2: a->b1e9 = 8; break;
}
```

SHC merges these repeated case bodies into one store. It emits the retail `CMP/EQ #0; BT/S; MOV #8,R5; CMP/EQ #1; BT; CMP/EQ #2; BF` chain. Grouping the labels before one body produces a different branch shape; an `||` chain produces different register choices and a zero test. The signed-byte expression avoids `EXTU.B`. For these three nonnegative cases, the signed cast preserves the behavior for all 256 byte values: the remaining values take the default path either way.

In the real linked candidate, both `func_0c0d6afa` and `func_0c0d6b1e` match **36/36 bytes**, including pool displacements, register choices, and delay slots. The complete section is still **616/620**, so these function matches are evidence for the recipe, not permission to register a partial unit.

Run from the repository root:

```sh
python3 workbench/compiler-patterns-20261004/verify.py
```

The reproducer runs the unchanged comparator and checks a negative control with grouped labels. `proof.json` records the source hash, full input fingerprint, approved options, complete positive comparison, and failing negative control.

## Other errors that obscured this candidate

These are reconstruction errors, not unexplained compiler behavior:

- The old struct's `f108` ends at `0x70`, but the following padding was calculated from `0x6c`, shifting every later member by four bytes.
- `func_0c044e52` has an unsigned-byte result at this call site, evidenced by retail `EXTU.B` immediately after the call. Correcting the declaration restores the missing instruction and subsequent addresses.
- `0x0c0d6ae8` is a continuation of `func_0c0d6a90`, reached with its saved frame and live `r14`. It is not a separate function taking `r4`. An `else if` reproduces the continuation's register choices; an early return followed by another `if` does not.
- The final two switches set `b1a3` only for cases 0, 1, and 2. The old C also set it on the default path. Their case-1/case-2 values differ between the two functions; the old C made them identical.
- Putting the default exit before the final case, with that case falling out of the switch, reproduces the retail store-register choices. Two tail calls still load their target into `r3` instead of `r2`. Those four differing bytes remain unresolved.

With these evidence-backed changes, the complete section improves from the freshly measured old source's **313/620, linked size 660**, to **616/620, linked size 620**. Its pools match completely. The original candidate remains unchanged; the corrected research source is saved here.

## Reproduced: inlining followed by in-place doubling emits FLDI1/self-add

The bundled compiler can produce the exact pair with unchanged `game` options:

```c
#pragma inline(one)
static float one(void) { return 1.0f; }

/* Inside a function: */
float factor = one();
factor += factor;
```

Unlike the direct literal and ordinary local constant expressions, this form emits `FLDI1 FR4; FADD FR4,FR4` without an intervening move, load, store, or call. The experiments support an interaction between inlining and constant propagation; they do not establish the compiler's exact internal pass ordering.

`float_context.c` uses that factor to divide two fields at offsets `0x5c` and `0x68`, with the object live across a call. The unchanged compile/assemble/link path reproduces **all 20 bytes** at retail `[0x0c10f1e8, 0x0c10f1fc)`: ten instructions covering the pair and both divisions/stores, including `r14`, `fr4`, `fr3`, and `fr2` choices. The equivalent literal-`2.0f` control uses a pool load and fails the same comparison. `verify.py` checks both against the actual ROM bytes.

This is a compiler-pattern/block proof, not a complete retail function match. The helper is an experimental source construction; there is no claim that the original source used it. Do not introduce artificial helpers solely to manufacture register state or credit this block independently. A production reconstruction still needs justified source structure, correct function boundaries, and a whole-section proof. Nested inlining also did not automatically reproduce this result: an attempted second helper left a real call to `one`.

### Negative probes and remaining limits

The other supplied float probes distinguish literal folding from late arithmetic. With the approved options, `return 2.0f`, `(x+y)/2.0f`, integer/double spellings, and ordinary local sums still use a literal pool. A stored `1.0f` followed by addition can emit FLDI1/FADD, but also emits register moves or stores absent from the retail materialization. Those forms are not exact solutions.

Machine-code output and the ordinary assembly-output/assembler path were independently linked for `x/2.0f`; both produced the same 16 bytes. This rules out that output-stage distinction for the minimal probe. Isolated diagnostic changes to speed/size, rounding, denormal handling, CPU family, and selected extra bits also did not produce the target sequence. These exploratory settings were not added to the repository compiler configuration or used for any matching claim.

The inline/in-place recipe demonstrates that this compiler and option set can produce the previously unexplained instruction pair and one real surrounding block. It does not show that all retail sites have the same cause. The three-live-constant question remains unresolved, as do the switch candidate's final four bytes.
