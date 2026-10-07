/* Candidate, 275/316 bytes: func_0c14c488 matches. func_0c14c510 differs only in
 * scratch-register rotation: the b1a1 else-constant 68 lands in r1 where retail
 * has r2, and the mov #23 for the b159 store is therefore scheduled after the
 * arr[] increment (retail hoists it into r3 before it). */
#include "objects.h"
#define A(a) ((struct Actor *)(a))

extern void func_0c02a0c4(struct LinkedActor *, int, int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;

void func_0c14c488(struct LinkedActor *a)
{
    A(a)->b12c = 1;
    A(a)->w130 = A(a->p20)->w130;
    a->f60 = a->p20->f52;
    a->f56 = a->p20->f56;
    a->f60 = a->p20->f60;
    a->s30 = a->s28 = 0;
    A(a)->f92 = 0.0f;
    A(a)->b19c = 66;
    A(a)->b19d = 66;
    A(a)->b1a1 = 65;
    A(a)->w1ac = 0;
    A(a)->b19e = 0;
    A(a)->p1c4 = 0;
    dat_0c2f83f8->arr[a->b2]++;
    a->b36 = 15;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    A(a)->f80 = 1.4f;
    A(a)->f84 = 1.4f;
    func_0c02a0c4(a, 23, 49);
}

void func_0c14c510(struct LinkedActor *a)
{
    struct Actor *t;
    struct LinkedActor *o = a->p24;

    t = A(o)->p20c;
    A(a)->b12c = 0;
    A(a)->w130 = A(a->p20)->w130;
    a->f52 = t->f52;
    a->f56 = a->p20->f56;
    a->f60 = t->f60;
    a->f56 += 34.2857132f;
    A(a)->b19c = 66;
    A(a)->b19d = 66;
    if (a->b35)
        A(a)->b1a1 = 67;
    else
        A(a)->b1a1 = 68;
    A(a)->w1ac = 0;
    A(a)->b19e = 0;
    A(a)->p1c4 = 0;
    dat_0c2f83f8->arr[a->b2]++;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    a->s28 = 28;
    A(a)->b159 = 23;
    func_0c02a0c4(a, A(a)->b159, 4);
}
