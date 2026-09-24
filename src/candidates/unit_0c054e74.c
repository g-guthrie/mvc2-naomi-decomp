/* Candidate: linked 300/308 bytes at retail address. func_0c054ef0 and
 * func_0c054f02 match exactly, as does the 44-byte literal pool.
 * func_0c054e74 and func_0c054eb2 each differ only at case 2 and their
 * tail call: SHC chooses r2/r3 opposite to retail for those two temporaries.
 * The reviewed 308-byte extent and its shared pool are complete.
 */
#include "objects.h"

typedef void (*ActorHandler)(struct Actor *);
extern ActorHandler table_0c23f458[];
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c045248(struct Actor *, int);
extern void func_0c02a39a(struct Actor *, int);
extern void func_0c02a0c4(struct Actor *, int, int);

void func_0c054e74(struct Actor *a)
{
    a->b5 = 0; a->b7 = 0; a->b6 = 0;
    switch (a->b4c9) {
    case 0: a->b1e9 = 1; goto common;
    case 1: a->b1e9 = 0; goto common;
    case 2: a->b1e9 = 2; goto common;
    default: goto done;
    }
common:
    a->b1a3 = 1;
done:
    func_0c045248(a, 21);
}

void func_0c054eb2(struct Actor *a)
{
    a->b5 = 0; a->b7 = 0; a->b6 = 0;
    switch (a->b4c9) {
    case 0: a->b1e9 = 1; goto common;
    case 1: a->b1e9 = 0; goto common;
    case 2: a->b1e9 = 2; goto common;
    default: goto done;
    }
common:
    a->b1a3 = 1;
done:
    func_0c045248(a, 21);
}

void func_0c054ef0(struct Actor *a)
{
    table_0c23f458[a->b6](a);
}

void func_0c054f02(struct Actor *a)
{
    func_0c02a39a(a, 0);
    a->b6++;
    a->b1f9 = 2;
    a->f92 = 30.0f;
    if (a->b1d2 == 0)
        a->f92 = -a->f92;
    a->f104 = 0.0f;
    a->f96 = 4.28571415f;
    a->f108 = -0.80357140303f;
    a->b1a1 = 84;
    a->w1ac = 0;
    a->b19e = 0;
    a->p1c4 = 0;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a, 20, 8);
}
