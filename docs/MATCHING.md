# Making a function match

The compiler is right. SHC 5.0R31 with the options in `config/compiler.json`
reproduces retail instruction for instruction, register for register, when the
source has the same shape as the original. Every difference seen so far came
from source shape or from unit layout, not from the compiler.

## Work at the translation unit

- A function that reads a literal pool or calls a neighbour with `bsr` cannot
  match alone. Its pool displacements and branch targets depend on the whole
  unit. Start from `tools/pool_clusters.py`, write every function that reads the
  pool into one file in source order, and register the pool as interior data.
- Declare every outside symbol `extern` and list it in `imports`. SHC then loads
  it from the pool exactly as retail does.
- `#pragma section` names give a lone function its own section. Use it only for
  pool-free leaves.

## Iterate with the diff tool

```sh
python3 tools/diff_unit.py mask_tu
python3 tools/diff_unit.py src/candidates/new.c --address 0x0c047a40 --import _dat_0c2d9300=0x0c2d9300
```

It prints each section and each function with its equal byte count, then every
differing instruction with retail on the left and the compiled result on the
right. Fix the first difference; later ones are usually its consequences.

## Source shapes that decide the bytes

| Retail shows | Write |
| --- | --- |
| offsets loaded from the pool or `mov #imm,r0` and `@(r0,Rn)` addressing on each access | member access on a struct pointer (`a->b1a3`), never `a[0x1a3]` or `*(T *)(a + N)` |
| the address folded into the base register (`add #62,r4; mov.b r3,@r4`) | the pointer is dead after the store; write it as the last statement |
| `extu.b` before a truthiness test | the field is `unsigned char`; without `extu.b` it is `char` |
| a value compared without reloading it | test the assignment expression: `if ((*out = x) == w)` |
| `p->x = p->x + 1` form register use | write `p->cur = p->cur + 1`, not `++` |
| the loop test duplicated before the body | `if (c) { do { ... } while (c); }`, not `while (c)` |
| `movt r0; rts; nop` epilogue | `if (cond) return 1; return 0;` |
| no FPSCR save and restore around calls | already the default: `-fpu=single` |

Shared objects are defined once in `src/include/objects.h`. Add a member there
when a new offset is used; do not declare a local copy.

## When it will not match

- Try the spellings above and one or two of your own with the diff tool.
- If a single function still differs by a register choice, leave the unit as a
  candidate. Every function that matches is already credited, and the note at
  the top of the file must say what differs and where.
- Do not rewrite instructions, add assembler, or change options. That is not a
  match.

## Open question

`func_0c047a40` in `src/candidates/mask_tu.c` loads a table index into r2
where retail uses r3, four instructions in 288 bytes. Twelve spellings of the
block did not move it. It is the only difference seen so far that no source
shape explains.
