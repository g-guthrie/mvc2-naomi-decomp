#include "objects.h"

#pragma section n0a2050
void func_0c0c3050(struct Actor *p, struct Actor *q) {
    if (--p->s28 == 0) {
        q->b24++;
        p->s28 = 24;
    }
}

#pragma section n1465ca
void func_0c1675ca(void *unused, struct Actor *q) {
    if (q->b2 >= 12) return;
    if (--q->b3 > 0) return;
    q->b3 = 2;
    q->b2++;
}

#pragma section n179b88
int func_0c19ab88(struct Actor *p, float limit) {
    float a, b;
    int i;
    a = p->f56;
    b = p->f96;
    i = 0;
    do {
        a += b;
        b += p->f108;
        i++;
    } while (b > 0.0f || a > limit);
    return i;
}
