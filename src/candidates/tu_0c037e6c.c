/* Collision helpers; not an exact match yet (frame/register and later leaves). */
#include "objects.h"

extern unsigned char dat_0c2f8338;
extern struct Actor dat_0c2d7088[];
extern struct Actor *dat_0c2f8350[];
extern void func_0c047d4c(struct Actor *);
extern void func_0c049690(struct Actor *, struct Actor *);

int func_0c037f34(struct Actor *, struct Actor *, int, int);
int func_0c037f50(struct Actor *, struct Actor *, int, int);
void func_0c0381d0(struct Actor *, struct Actor *);

int func_0c037e6c(struct Actor *atk, struct Actor *a, short arg2)
{
    short idx;
    unsigned int *p;

    idx = arg2;
    p = (unsigned int *)((char *)a + 0x414);
    if ((*p & 0x07000000) | 0)
        return 0;
    if (a->b0 == 0)
        return 0;
    if (a->w420 == 0)
        return 0;
    if (a->b1eb != 0)
        return 0;
    if (a->b19d == 0)
        return 0;
    if (a->b254 != 0)
        return 0;
    if (a->b411 != 0)
        return 0;
    if (a->b23a >= 2)
        return 0;
    if (a->b5 != 0)
        return 0;
    if (a->b1d0 == 18)
        return 0;
    if (a->b1d0 == 19)
        return 0;
    if (a->p1c0->w12 != 0) {
        if (func_0c037f34(atk, a, idx, a->p1c0->w12) != 0)
            return 1;
    }
    if (a->p1c0->w14 <= 0)
        return 0;
    if (func_0c037f34(atk, a, idx, a->p1c0->w14) == 0)
        return 0;
    return 1;
}

int func_0c037f34(struct Actor *a, struct Actor *b, int i, int j)
{
    return func_0c037f50(a, b, i, j);
}

int func_0c037f50(struct Actor *a, struct Actor *b, int i, int j)
{
    struct Hitbox *pa;
    struct Hitbox *pb;
    float x;
    float y;
    float c;

    i = (short)i;
    j = (short)j;
    pa = a->p170 + i;
    pb = b->p170 + j;
    c = 1.66666663f;
    x = (float)pa->x * a->f80 * c;
    if (a->w130 != 0)
        x = -x;
    x = x + a->f52;
    y = (float)pb->x * b->f80 * c;
    if (b->w130 != 0)
        y = -y;
    y = y + b->f52;
    x = x - y;
    if (x < 0.0f)
        x = -x;
    y = (float)pa->w * a->f80 * c;
    if (y == 0.0f)
        return 0;
    y = y + (float)pb->w * b->f80 * c;
    if (x > y)
        return 0;
    c = 2.1428571f;
    x = -((float)pa->y * a->f84 * c) + a->f56;
    y = -((float)pb->y * b->f84 * c) + b->f56;
    x = x - y;
    if (x < 0.0f)
        x = -x;
    y = (float)pa->h * a->f84 * c;
    if (y == 0.0f)
        return 0;
    y = y + (float)pb->h * b->f84 * c;
    if (x > y)
        return 0;
    return 1;
}

void func_0c0380ac(void)
{
    struct Actor *p;
    struct Actor *q;
    struct Actor *end;
    unsigned char n;

    if (dat_0c2f8338 < 4)
        return;
    p = dat_0c2d7088;
    end = (struct Actor *)((char *)dat_0c2d7088 + 0x21d8);
    for (; p < end; p = (struct Actor *)((char *)p + 0x5a4)) {
        if (p->b0 == 0)
            continue;
        if (p->b19f == 0)
            continue;
        q = p->p1b4;
        if ((q->b19c & 0x20) != 0) {
            p->b19f |= 0x40;
            continue;
        }
        p->b1a2 = q->b1a1;
        n = q->b1a4;
        p->p1b8 = (struct Actor *)((char *)dat_0c2d7088 + n * 0x5a4);
        p->b1a6 = p->p1b8->b1d2;
        p->b1a5 = p->b1d2;
        func_0c047d4c(p);
    }
}

void func_0c038140(void)
{
    int i;
    int j;
    int k;

    for (i = 0; i < 2; i = i + 1) {
        for (j = 0; j < 3; j = j + 1) {
            for (k = 0; k < 3; k = k + 1)
                func_0c0381d0(dat_0c2f8350[i * 3 + j], dat_0c2f8350[(i ^ 1) * 3 + k]);
        }
    }
}

void func_0c0381d0(struct Actor *a, struct Actor *b)
{
    int r;
    short mask;
    short t;

    r = 0;
    if (a->b0 == 0)
        return;
    if ((a->w1ae & 0x80) == 0)
        return;
    mask = a->p1c0->w2;
    if (mask > 0)
        return;
    if (b->b0 == 0)
        return;
    mask = mask & 0x1fff;
    if (b->p1c0->w0 > 0) {
        t = b->p1c0->w0;
        r = func_0c037f50(a, b, mask, t);
        b->w1a8 = t;
    }
    if (r == 0) {
        if (b->p1c0->w2 > 0) {
            t = b->p1c0->w2;
            r = func_0c037f50(a, b, mask, t);
            b->w1a8 = t;
        }
    }
    if (r == 0)
        return;
    a->b1a0 = 10;
    b->b1a0 = 11;
    a->b19d = 0;
    a->b1ed = 8;
    a->w1ae = a->w1ae & 0x7f;
    a->w1aa = mask;
    func_0c049690(a, b);
}
