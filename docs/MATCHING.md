# Making a function match

The compiler is right. SHC 5.0R31 with the `game` option set reproduces retail
instruction for instruction, register for register, when the source has the
same shape as the original and the unit has the same extent. Every difference
seen so far came from source shape, unit extent or an option, never from the
compiler. The `-extra=a=400` nop and `-macsave=0` were the last two options;
both came from Sega's own tool manual and both are now in
`config/compiler.json`.

## Work at the translation unit

- A function that reads a literal pool or reaches a neighbour with `bsr` or
  `bra` cannot match alone. Pool displacements and branch targets depend on the
  whole unit.
- SHC flushes a pool at the first unconditional branch or return after a
  literal was pending, roughly every 200 to 340 bytes of code, even in the
  middle of a function. The code then jumps over the pool and continues. A
  retail unit therefore holds several pools, and `tools/pool_clusters.py`
  reports one pool at a time. Before writing, find the real extent: walk back
  to a prologue, and forward until no function branches past the last pool.
  Half of the clusters handed out in the first batch were fragments.
- A function ending in an epilogue with no `rts`, followed directly by the
  next prologue, ends with a call to that next function: `next(a);` as the
  last statement, with `next` defined immediately after it in the same file.
- SHC assumes the unit starts 4-aligned. A retail pool with no pad after an
  odd number of words means the unit starts earlier than you think.
- Declare every outside symbol `extern` and name it by address; the diff tool
  imports it. The runtime routines the compiler calls by name are in
  `config/runtime.json`.
- `#pragma section` gives a lone function its own section. Use it only for
  pool-free leaves. Pragma sections also reset the scratch-register rotation
  (below), so a leaf that retail compiled inside a unit may only match there.

## Iterate with the diff tool

```sh
python3 tools/diff_unit.py src/candidates/new.c
python3 tools/diff_unit.py src/verified/new.c --register new_id
python3 tools/float_literal.py 0x41092492
```

The tool reads the unit off the file: functions are named `func_0cXXXXXX`, so
their addresses are known. A file whose functions each follow a
`#pragma section` line is a set of pool-free leaves, one section each, sized
from the reviewed code range at that address. Any other file is one
translation unit whose section runs from the first function through every
code and data range up to the pool after the last function in the file; each
data range inside is declared as interior. Outside symbols named
`func_0cXXXXXX`, `dat_0cXXXXXX`, `ptr_0cXXXXXX` or `table_0cXXXXXX` are
imported at those addresses, runtime routines from `config/runtime.json`, and
anything else takes `--import SYMBOL=ADDRESS`. Units above 0x0c1e9000 are
Sega library code and take `--options library`.

It prints each section, function and pool with its equal byte count, then
every differing instruction with retail on the left and the compiled result on
the right. Fix the first difference; later ones are usually its consequences.

`--register` writes the unit into `config/units.json`: verified when exact,
candidate otherwise. A file under `src/verified/` must be exact. Registering
releases any section of another unit that the new unit owns, pool or leaf,
from that unit's registry entry and source. Several copies of the tool can run
at once; only `tools/build.py` needs the tree to itself.

## Registers

- **Named locals get r5, r6, r7 and callee-saved registers; anonymous
  temporaries get r1 to r3.** A value retail keeps in r5 across an expression
  is a local variable. `q = p->p20;` gives `mov.l @(20,r4),r5`; the same load
  used inline gives r3.
- **Scratch-register rotation carries across functions inside a section.**
  Which of r1, r2 or r3 the first temporary of a function gets depends on what
  the previous function in the same section allocated. A function that
  differs from retail only by r2 and r3 swapped needs its real predecessor in
  the file. This is the whole explanation of the old mask unit question.
- **Test the assignment.** `if ((p = f()) != 0)` gives `tst r0,r0; bt.s L;
  mov r0,r4`; `p = f(); if (p)` gives `mov r0,r4; tst r4,r4`.
- **`if (!x)` and `if (x == 0)`** allocate differently; try the other one.
- **`switch (b) { case 0: ... }`** gives `extu.b; cmp/eq #0`; `if (b == 0)`
  gives `tst`.

## Source shapes that decide the bytes

| Retail shows | Write |
| --- | --- |
| offsets from the pool or `mov #imm,r0` with `@(r0,Rn)` on each access | member access on a struct pointer (`a->b1a3`), never `a[0x1a3]` or `*(T *)(a + N)` |
| `mov Rm,r0; nop` before a store, compare or return | any code; this is `-extra=a=400`, not a source shape |
| `extu.b` before a truthiness test | the field is `unsigned char`; without `extu.b` it is `char`; `tst #imm,r0` on a byte also means `char` |
| a value compared without reloading it | test the assignment expression: `if ((*out = x) == w)` |
| `mov #N,r2 ... mov.b r2,@(r0,r4); add #-1,r0; mov.b r2,@(r0,r4)` | chained assignment `a->x = a->y = N;` |
| `p->x = p->x + 1` style register use | `p->cur = p->cur + 1`, not `++` |
| loads in the order left then right of `+=` | `s->a += s->b` loads b first; `s->a = s->a + s->b` loads a first |
| the loop test duplicated before the body | `if (c) { do { ... } while (c); }`, not `while (c)` |
| `bra test` at the top, `jsr; tst r0,r0; bt body` at the bottom | `while (f() == 0) { ... }` |
| `movt r0; rts; nop` epilogue | `if (cond) return 1; return 0;` |
| `extu.b r6,r0` as the return | `int f() { unsigned char r = 0; if (c) r = 1; return r; }` |
| `add #-1; store; extu.b; cmp/pl` | `if (--p->b > 0)` on `unsigned char` |
| `add #-1; store; add #1; exts.w; tst` | `if ((p->s28)-- == 0)` |
| a tail call selected by a condition, callee in r3 | two call statements in `if` and `else`, not a ternary argument |
| two identical call sites merged into one `jmp` | exactly two sites, reached by `goto` or fallthrough, never three |
| `bra` to a shared `rts; nop` | a `goto` to a label before the call, see the file for `func_0c12eade` |
| `mov r14,r3; add #64,r3; mov.l @r3` next to `@(r0,Rn)` accesses | a one-element array member, `int arr64[1]`, used as `arr64[0]` |
| index computed before the pointer chain | pointer-to-array member: `(*g->p0)[a->b32 + 110]` |
| `mov.l @r5+,r3` on consecutive ints | a walked pointer: `int *p = tbl[i]; x = *p++;` |
| `lds r1,fpul; fsts fpul,fr3` for a float constant | the field is a struct member; a `float[]` element gives `mova; fmov @r0` |
| `mova C; fmov; ...; mova -C; fmov` with no `bra` | `x = C; if (cond) x = -C;` |
| `fldi1 frN; fadd frN,frN` for 2.0 | not produced yet by any spelling; open |
| `r1 = dst; r2 = src; r0 = size; jsr` | struct assignment `a->s = b->s` with a member of that size; the routine name follows the struct's alignment |
| `r1 = dividend; r0 = divisor; jsr __modls` | `%` |
| `sts.l macl` around a multiply | any code; that is `-macsave=1`, and the game set has `-macsave=0` |
| a 12-byte frame with `mov r15,r5` passed to a call | `struct { float x, y, z; } v;` passed as `&v`, not `float v[3]` |
| `add #-12,r15` for two floats written | a three-float struct local |
| a byte at 0x159 where a `mov.w` reads 0x158 | a union of the short and two bytes |

## Float literals

SHC's decimal parser truncates. The shortest decimal for a float often lands
one ulp low. When a pool float is off in its last hex digit, run
`python3 tools/float_literal.py 0xBITS` and use the spelling it prints.

## When it will not match

- Try the spellings above and a few of your own with the diff tool, about ten
  per function.
- If a function still differs by a register choice, check the unit extent and
  the preceding function first. Then leave the unit as a candidate: every
  function and pool that matches is already credited, and the comment at the
  top of the file must say what differs and where.
- Functions full of `fipr`, `fschg`, `ftrv`, `pref` or `fmov @Rm+` streams are
  hand-written assembly. Skip them.
- Do not rewrite instructions, add assembler, or change options. That is not a
  match.

## Open questions

- 2.0f materialised as `fldi1; fadd` at 106 retail sites, never from a pool.
  No spelling produces it.
- Three shared constants held in r7, r4 and r13 across one function
  (`func_0c16fc14`); SHC keeps at most two in registers.
