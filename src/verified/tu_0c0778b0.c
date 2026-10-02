#include "objects.h"

extern signed char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);
typedef void (*handler_t)(struct Actor *);
extern handler_t table_0c241448[];

void func_0c077992(struct Actor *a);

void func_0c0778b0(struct Actor *a)
{
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (func_0c02a026(a) < 0) {
        a->b6++;
        func_0c02a0c4(a, 2, 2);
        a->f92 = 0.0f;
        a->f96 = 0.0f;
        a->f104 = 0.0f;
        a->f108 = 0.0f;
    }
}

void func_0c077922(struct Actor *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

void func_0c077944(struct Actor *a)
{
    table_0c241448[a->b6](a);
}

void func_0c077956(struct Actor *a)
{
    func_0c02a026(a);
    if (a->b141 == 0) {
        a->b6++;
        if (a->b1d2)
            a->f92 = -20.0f;
        else
            a->f92 = 20.0f;
        func_0c077992(a);
    }
}

void func_0c077992(struct Actor *a)
{
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (func_0c02a026(a) < 0) {
        a->b6++;
        a->f92 = 0.0f;
        a->f96 = 0.0f;
        a->f104 = 0.0f;
        a->f108 = 0.0f;
        func_0c02a0c4(a, 2, 3);
    }
}
