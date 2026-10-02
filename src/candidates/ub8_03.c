/* Unit 0x0c05a76c-0x0c05aa64 (760 bytes, two pools). Every function matches
 * except func_0c05a99c (66/76): SHC overlaps the spilled &a->sub2a4 (r3) with
 * an early mov.l of func_0c02a026 into r2, while retail reuses r3 after the
 * spill. Registering as a candidate. */
#include "objects.h"

struct Table_ub8_03 { unsigned char pad[124]; short arr[1]; };

typedef void (*handler_ub8_03)(struct Actor *);

extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c043324(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);
extern char func_0c02a026(struct Actor *);
extern void func_0c02a39a(struct Actor *, int);
extern void func_0c0437b8(struct Actor *);
extern handler_ub8_03 table_0c23f954[];
extern handler_ub8_03 table_0c23f9a4[];
extern handler_ub8_03 table_0c23f9b0[];
extern void func_0c056bb8(struct Actor *);
extern void func_0c0432ca(struct Actor *);
extern void func_0c048bb0(struct Actor *, int);
extern void func_0c0429a4(struct Actor *, struct LinkedActorVec3 *, int);
extern struct Table_ub8_03 *dat_0c2f83f8;
extern int func_0c1321b8(struct Actor *);

void func_0c05a76c(struct Actor *a)
{
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (func_0c044e52(a)) {
        func_0c043324(a);
        a->b7 = a->b7 + 1;
        func_0c02a0c4(a, 15, 34);
    }
}

void func_0c05a7d6(struct Actor *a)
{
    if (func_0c02a026(a) < 0) {
        a->b205 = 0;
        func_0c02a39a(a, 0);
        func_0c0437b8(a);
    }
}

void func_0c05a804(struct Actor *a)
{
    a->b1ea = 1;
    a->b1ed = 2;
    a->b1f5 = 2;
    a->b3f8 = 2;
    a->b328 = 5;
    table_0c23f954[a->b7](a);
}

void func_0c05a832(struct Actor *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

void func_0c05a854(struct Actor *a)
{
    table_0c23f9a4[a->b6](a);
}

void func_0c05a866(struct Actor *a)
{
    a->b6 = a->b6 + 1;
    func_0c056bb8(a);
    func_0c02a0c4(a, 21, 14);
}

void func_0c05a886(struct Actor *a)
{
    struct LinkedActorVec3 v;

    if (func_0c02a026(a) < 0) {
        a->b6 = a->b6 + 1;
        if (!a->b202)
            a->b202 = 128;
        else
            a->b202 = 0;
        func_0c02a39a(a, 0);
        func_0c02a0c4(a, 21, 15);
        v.x = -106.666664124f;
        v.y = 171.42856f;
        func_0c0429a4(a, &v, 1);
    }
}

void func_0c05a914(struct Actor *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

void func_0c05a936(struct Actor *a)
{
    table_0c23f9b0[a->b6](a);
}

void func_0c05a948(struct Actor *a)
{
    a->b6 = a->b6 + 1;
    func_0c056bb8(a);
    func_0c0432ca(a);
    func_0c048bb0(a, 8);
    a->b1a1 = 43;
    a->w1ac = 0;
    a->b19e = 0;
    a->p1c4 = 0;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a, 21, 9);
}

void func_0c05a99c(struct Actor *a)
{
    struct ActorSub2a4 *p;

    p = &a->sub2a4;
    func_0c02a026(a);
    if (a->b141) {
        a->b141 = 0;
        a->b6 = a->b6 + 1;
        p->b3 = 0;
        if (func_0c1321b8(a) == 0)
            func_0c0437b8(a);
    }
}

void func_0c05a9e8(struct Actor *a)
{
    struct ActorSub2a4 *p = &a->sub2a4;

    if (!p->b3)
        func_0c02a026(a);
    else {
        a->b6 = a->b6 + 1;
        func_0c02a0c4(a, 21, 10);
    }
}

void func_0c05aa06(struct Actor *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}
