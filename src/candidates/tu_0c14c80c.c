/* Candidate. Retail func_0c14c80c loads a->p24 into r4 early and never uses that
 * register (the later b1a3 read reloads p24 into r2); keeping the pointer in the
 * local o reproduces the load but then holds r4, so constants shift to r5.
 * func_0c14c91a follows the same table-pointer shape. */
#include "objects.h"
#define A(a) ((struct Actor *)(a))

struct Motion4 { float f0, f4, f8, f12; };

extern void func_0c02a0c4(struct LinkedActor *, int, int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern short table_0c2500a4[];
extern struct Motion4 table_0c2500ac[];
extern short table_0c25007c[];

void func_0c14c80c(struct LinkedActor *a)
{
    struct LinkedActor *o = a->p24;

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

        t += o->b1a3;
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
    A(a)->f80 = 0.4f;
    A(a)->f84 = 0.4f;
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
