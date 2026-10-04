#include "objects.h"

extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);
extern void func_0c043324(struct Actor *);
extern void func_0c0437b8(struct Actor *);

void func_0c073234(struct Actor *a)
{
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (a->f92 * a->f104 >= 0) {
        a->f92 = 0;
        a->f104 = 0;
    }
    func_0c02a026(a);
    if (a->f96 < 0) {
        a->b6++;
        a->b7 = 0;
        a->b19e = 1;
        a->f108 = -1.2053571f;
        func_0c02a0c4(a, 21, 4);
    }
}

void func_0c0732c8(struct Actor *a)
{
    if (!a->b7) {
        a->f56 += a->f96;
        a->f96 += a->f108;
        func_0c02a026(a);
        if (a->f56 < a->f41c) {
            a->b7++;
            a->b1f9 = 0;
            a->f56 = a->f41c;
            func_0c02a0c4(a, 21, a->b1a3 + 5);
            func_0c043324(a);
        }
    } else if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}
