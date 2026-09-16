#include "objects.h"

struct PairTimer {
    unsigned short w0;
    unsigned short w2;
    unsigned char pad[12];
    unsigned short w16;
    unsigned short w18;
};

#pragma section n02156c
void func_0c02156c(struct PairTimer *p) {
    unsigned short z;
    z = 0;
    p->w16 = z;
    if (p->w2 == p->w0) {
        p->w18 = p->w18 + 1;
        if (p->w18 > 30) {
            if (p->w18 > 35) {
                p->w18 = 30;
                p->w16 = p->w0;
            }
        }
    } else {
        p->w18 = z;
    }
}

#pragma section n15c860
void func_0c15c860(struct Actor *p) {
    p->s28 = 2;
    if (--p->s30 == 0) {
        p->b5 = p->b5 + 1;
        p->s28 = 64;
        p->s30 = 64;
    }
}

#pragma section n172f28
void func_0c172f28(struct Actor *p) {
    if (--p->s28 == 0) {
        p->b5 = p->b5 + 1;
        p->b33 = 0;
        p->s28 = 0;
    }
}
