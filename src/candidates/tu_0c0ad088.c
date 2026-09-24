/* Candidate for the corrected 368-byte span at 0x0c0ad088. Its linked
 * extent matches and 364/368 bytes are equal. The three later functions and
 * 56-byte pool are exact; only two register choices in func_0c0ad088 differ.
 * The eight preceding bytes are literal pointers, not part of this unit. */
#include "objects.h"

typedef void (*ActorHandler)(struct Actor *);
extern ActorHandler table_0c2446c0[];
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern ActorHandler table_0c2404cc[];
extern char func_0c02a026(struct Actor *);
extern void func_0c0346da(struct Actor *, int);
extern void func_0c0437b8(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);
extern void func_0c02a39a(struct Actor *, int);

extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c043324(struct Actor *);
extern void func_0c0439c4(struct Actor *);

extern void func_0c045248(struct Actor *, int);

void func_0c0ad088(struct Actor *a)
{
    a->b5 = 0;
    a->b7 = 0;
    a->b6 = 0;
    switch (a->b4c9) {
    case 0: a->b1e9 = 1; break;
    case 1: a->b1e9 = 0; break;
    case 2: a->b1e9 = 2; break;
    default: goto finish;
    }
    a->b1a3 = 0;
finish:
    func_0c045248(a, 21);
}

void func_0c0ad0c6(struct Actor *a)
{
    table_0c2446c0[a->b6](a);
}

void func_0c0ad0d8(struct Actor *a)
{
    func_0c02a39a(a, 0);
    a->b6++;
    a->b1f9 = 2;
    a->f92 = 30.0f;
    if (a->b1d2 == 0)
        a->f92 = -a->f92;
    a->f104 = 0.0f;
    a->f96 = 4.285714149475098f;
    a->f108 = -0.80357140303f;
    a->b1a1 = 71;
    a->w1ac = 0;
    a->b19e = 0;
    *(unsigned int *)&a->p1c4 = 0;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a, 20, 0);
}

void func_0c0ad152(struct Actor *a)
{
    func_0c02a026(a);
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (func_0c044e52(a)) {
        a->b6++;
        func_0c02a0c4(a, 20, 2);
        func_0c043324(a);
    }
}
