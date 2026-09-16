#include "objects.h"

#pragma section n00e644
void func_0c02f644(struct Actor *p) {
    p->f60 += p->f100;
    p->f100 += p->f112;
}

#pragma section n0a6ff2
void func_0c0c7ff2(struct Actor *p, struct Actor *q) {
    if (--p->s28 == 0) {
        q->b24++;
        p->s28 = 10;
    }
    p->f52 += p->f92;
    p->f92 += p->f104;
}

#pragma section n1bbb08
int func_0c1dcb08(struct Actor *p) {
    if ((p->s28)-- == 0) {
        if ((p->b7 = p->b7 + 1) > 5)
            return 1;
        p->f116 = 1.0f;
        p->b6 = 1;
        p->s28 = 0;
    }
    return 0;
}
