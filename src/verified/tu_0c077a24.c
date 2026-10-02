#include "objects.h"

struct S_ud2_11 {
    unsigned char pad0[6];
    unsigned char b6;
    unsigned char pad1[0x1c - 7];
    short w1c;
    unsigned char pad2[0x34 - 0x1e];
    float f34;
    float f38;
    unsigned char pad4[0x5c - 0x3c];
    float f5c, f60;
    unsigned char pad5[0x68 - 0x64];
    float f68, f6c;
};

struct ActorCounts { unsigned char pad[124]; short counts[100]; };
extern struct ActorCounts *dat_0c2f83f8;
extern void func_0c02a39a(struct Actor *, int);
extern void func_0c02a0c4();
extern signed char func_0c02a026();
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c043324(struct Actor *);
extern void func_0c0437b8();
typedef void (*handler_t)(struct Actor *);
extern handler_t table_0c241454[];

void func_0c077a24(struct S_ud2_11 *a)
{
    a->f34 += a->f5c;
    a->f5c += a->f68;
    a->f38 += a->f60;
    a->f60 += a->f6c;
    if (func_0c02a026(a) >= 0)
        return;
    func_0c0437b8(a);
}

void func_0c077a7e(struct Actor *a)
{
    table_0c241454[a->b6](a);
}

void func_0c077a90(struct Actor *a)
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
    a->b1a1 = 81;
    a->w1ac = 0;
    a->b19e = 0;
    a->p1c4 = 0;
    dat_0c2f83f8->counts[a->b2]++;
    func_0c02a0c4(a, 20, 3);
}

void func_0c077b0a(struct Actor *a)
{
    func_0c02a026(a);
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (func_0c044e52(a)) {
        a->b6++;
        func_0c02a0c4(a, 20, 4);
        func_0c043324(a);
    }
}
