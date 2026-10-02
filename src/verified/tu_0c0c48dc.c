#include "objects.h"

struct ActorCounts { unsigned char pad[124]; short counts[100]; };
extern struct ActorCounts *dat_0c2f83f8;
extern void func_0c02a39a(struct Actor *, int);
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c043324(struct Actor *);
extern void func_0c0439c4(struct Actor *);
typedef void (*handler_t)(struct Actor *);
extern handler_t table_0c246d68[];
extern int (*table_0c246d74[])(struct Actor *);

void func_0c0c48dc(struct Actor *a)
{
    table_0c246d68[a->b6](a);
}

void func_0c0c48ee(struct Actor *a)
{
    a->b6++;
    a->b1f9 = 2;
    func_0c02a39a(a, 0);
    if (a->w130 == 0)
        a->f92 = -30.0f;
    else
        a->f92 = 30.0f;
    a->f104 = 0.0f;
    a->f96 = 0.2678571343422f;
    a->f108 = -0.80357140303f;
    a->b1a1 = 79;
    a->w1ac = 0;
    a->b19e = 0;
    *(unsigned int *)&a->p1c4 = 0;
    dat_0c2f83f8->counts[a->b2]++;
    func_0c02a0c4(a, 20, 0);
}

void func_0c0c4968(struct Actor *a)
{
    func_0c02a026(a);
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (func_0c044e52(a)) {
        a->b6++;
        func_0c02a0c4(a, 20, 1);
        func_0c043324(a);
    }
}

void func_0c0c49d6(struct Actor *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0439c4(a);
}

int func_0c0c49f8(struct Actor *a)
{
    return table_0c246d74[a->b1f9](a);
}
