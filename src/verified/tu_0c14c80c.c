/* Actor effect initialisers 0x0c14c80c..0x0c14c998 (a fragment of the
 * 0x0c14b8d8..0x0c14caf4 translation unit; nothing branches across its ends).
 * Retail loads a->p24 into r4 in func_0c14c80c and never uses it: the source
 * read o->p20c into a local that is never used, and SHC drops only that second
 * load. */
#include "objects.h"
#define A(a) ((struct Actor *)(a))

extern void func_0c02a0c4(struct LinkedActor *, int, int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern short table_0c2500a4[];
extern struct Motion4 table_0c2500ac[];
extern short table_0c25007c[];

void func_0c14c80c(struct LinkedActor *a)
{
    struct Actor *o = A(a->p24);
    struct Actor *u = o->p20c;

    A(a)->b12c = 1;
    a->f52 = a->p20->f52;
    a->f56 = a->p20->f56;
    a->f60 = a->p20->f60;
    a->f56 += 34.2857132f;
    A(a)->w130 = A(a->p20)->w130;
    a->b36 = 10;
    A(a)->b19c = 66;
    A(a)->b19d = 66;
    A(a)->b1a1 = 64;
    A(a)->w1ac = 0;
    A(a)->b19e = 0;
    A(a)->p1c4 = 0;
    dat_0c2f83f8->arr[a->b2]++;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    a->b33 = 0;
    {
        short *t = table_0c2500a4;

        t += a->p24->b1a3;

        a->s28 = *t;
    }
    a->s30 = 90;
    {
        struct Motion4 *r = table_0c2500ac;

        r += a->b35;

        A(a)->f92 = r->f0;
        a->f104 = r->f4;
        A(a)->f96 = r->f8;
        a->f108 = r->f12;
    }
    A(a)->f80 = 0.400000006f;
    A(a)->f84 = 0.400000006f;
    A(a)->f92 = A(a)->w130 ? A(a)->f92 : -A(a)->f92;
    a->f104 = A(a)->w130 ? -a->f104 : a->f104;
    A(a)->b159 = 23;
    func_0c02a0c4(a, A(a)->b159, 57);
}

void func_0c14c91a(struct LinkedActor *a)
{
    short *t;

    A(a)->b12c = 1;
    a->f52 = a->p20->f52;
    a->f56 = a->p20->f56;
    a->f60 = a->p20->f60;
    a->b36 = 9;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    t = table_0c25007c;
    t += a->p24->b1a3;
    a->s28 = *t;
    A(a)->b159 = 23;
    func_0c02a0c4(a, A(a)->b159, 56);
}
