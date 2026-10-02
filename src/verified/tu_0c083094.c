#include "objects.h"

typedef void (*handler_0c0567e8)(struct Actor *);
extern handler_0c0567e8 table_0c241fbc[];
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);
extern void func_0c043324(struct Actor *);
extern void func_0c1944c8(struct Actor *, int, int);

void func_0c083094(struct Actor *a)
{
    struct ActorSub2a4 *p;
    int v;

    p = &a->sub2a4;
    p->s8 = (short)(int)a->f52;
    p->s10 = (short)(int)a->f56;
    a->f56 += 171.42856f;
    v = 0xffb06000;
    if (a->b2)
        v = 0x004fa000;
    a->f52 += (float)v * 1.66666663f / 65536.0f;
    v = 0x00068000;
    if (a->b2)
        v = 0xfff98000;
    a->f92 = (float)v * 1.66666663f / 65536.0f;
    a->f96 = -0.80357140303f;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    func_0c02a0c4(a, 18, 3);
    func_0c1944c8(a, 0, 0);
    a->b7++;
}

void func_0c08312a(struct Actor *a)
{
    table_0c241fbc[a->b7](a);
}

void func_0c08313c(struct Actor *a)
{
    if (func_0c02a026(a) < 0)
        a->b5++;
}

void func_0c08315c(struct Actor *a)
{
    func_0c02a026(a);
    if (a->b141 >= 0) {
        a->f52 += a->f92;
        a->f92 += a->f104;
        a->f56 += a->f96;
        a->f96 += a->f108;
    }
    if (a->f56 < a->f41c) {
        a->f56 = a->f41c;
        func_0c043324(a);
        a->b7++;
        func_0c02a0c4(a, 18, 2);
    }
}
