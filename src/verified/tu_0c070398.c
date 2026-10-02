#include "objects.h"
struct ActorCounts { unsigned char pad[124]; short counts[100]; };
struct Vec3_0c085ac8 { float x, y, z; };
extern struct ActorCounts *dat_0c2f83f8;
extern signed char func_0c02a026();
extern void func_0c0437b8();
extern void func_0c02a39a(struct Actor *, int);
extern void func_0c02a0c4();
extern void func_0c043014(struct Actor *, struct Vec3_0c085ac8 *);
extern void func_0c02a684();
typedef void (*handler_0c0567e8)(struct Actor *);
extern handler_0c0567e8 table_0c240e70[];

void func_0c070398(struct Actor *a)
{
    struct Vec3_0c085ac8 v;
    if (func_0c02a026(a) < 0) {
        func_0c0437b8(a);
        return;
    }
    if (a->b141) {
        a->b141 = 0;
        v.x = 61.666664124f;
        v.y = 98.57143f;
        func_0c043014(a, &v);
    }
}

void func_0c0703e2(struct Actor *a)
{
    if (a->b6 == 0) {
        a->b6++;
        a->f92 = 0.0f;
        a->f96 = 0.0f;
        a->f104 = 0.0f;
        a->f108 = 0.0f;
        func_0c02a684(a, 1, 25, 1);
        func_0c02a0c4(a, 19, 4);
    } else if (func_0c02a026(a) < 0) {
        func_0c02a39a(a, 0);
        func_0c0437b8(a);
    }
}

void func_0c070444(struct Actor *a)
{
    table_0c240e70[a->b6](a);
}

void func_0c070456(struct Actor *a)
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
    a->b1a1 = 58;
    a->w1ac = 0;
    a->b19e = 0;
    a->p1c4 = 0;
    dat_0c2f83f8->counts[a->b2]++;
    func_0c02a0c4(a, 20, 7);
}
