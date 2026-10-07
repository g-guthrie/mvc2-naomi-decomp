#include "objects.h"

extern char func_0c02a026(struct Actor *);
extern void func_0c045248(struct Actor *, int);
extern void func_0c02a18c(struct Actor *, int, int, int);
extern float dat_0c2d926c;
void func_0c0d6d2e(struct Actor *a);

void func_0c0d6ce8(struct Actor *a)
{
    func_0c0d6d2e(a);
    if (func_0c02a026(a) < 0) {
        func_0c045248(a, 2);
        a->b6 = 1;
        a->b1f9 = 2;
        a->w130 = a->b1d2;
        func_0c02a18c(a, 1, 1, 3);
        return;
    }
}

void func_0c0d6d2e(struct Actor *a)
{
    float k;

    k = dat_0c2d926c;
    if (a->w130)
        a->f52 = k + 288.333344f;
    else
        a->f52 = k + -288.333344f;
}
