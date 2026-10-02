/* TU from 0x0c0477dc through the 0x0c047b2e pool. 867/900 bytes.
 * Remaining diffs are r2/r3 swaps: func_0c0477dc 0x0c04780a (0x800 test)
 * seeds the same swap on dat_0c23bf64[a->b1d0] in 0x0c047886 / 940 / 9a6.
 * 0x0c047796 tails into 0x0c0477dc but is 2-mod-4 so it cannot lead the section. */
#include "objects.h"

extern float dat_0c2d9300;
extern char dat_0c23bf64[];
extern unsigned char dat_0c23bf87[];
int func_0c02849a(struct MaskObject *a);
unsigned char func_0c047886(struct MaskObject *a);
unsigned char func_0c047940(struct MaskObject *a);
unsigned char func_0c0479a6(struct MaskObject *a);

unsigned char func_0c0477dc(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p, unsigned short w)
{
    unsigned short flags = b->w2;

    if ((flags & 0x4000) == 0) {
        if (flags & 32) {
            if (a->b14a & 0xe0)
                return 0;
        }
        if (flags & 0x800) {
            if (func_0c047940(a) == 0)
                return 0;
        } else if (flags & 0x100) {
            if (func_0c0479a6(a) == 0)
                return 0;
        } else if (func_0c047886(a) == 0)
            return 0;
    }
    if (flags & 0x2000) {
        if (a->b1f9 != 2)
            return 0;
    }
    if (flags & 0x1000) {
        if (a->b1f9 == 2)
            return 0;
    }
    p->b0 = 0;
    p->w6 = w;
    return 1;
}

unsigned char func_0c047886(struct MaskObject *a)
{
    if (a->b1f2)
        return 0;
    if (a->b1f3)
        return 0;
    {
        unsigned char t;
        if ((t = a->b1d0) == 18 || t == 19) {
            if (a->b1de)
                return 0;
        }
    }
    if (a->b14a & 32)
        return 0;
    if (a->b5)
        return 0;
    if (a->b1d0 == 21)
        return 0;
    if (a->b1d0 == 28)
        return 0;
    if (a->p20c->b235)
        return 0;
    if (a->b1f9 == 2) {
        if (a->f38 <= a->f41c)
            return 0;
        if (a->f38 >= dat_0c2d9300 + -68.57143f)
            return 0;
    }
    if (dat_0c23bf64[a->b1d0])
        return 0;
    return 1;
}

unsigned char func_0c047940(struct MaskObject *a)
{
    if (a->b5)
        return 0;
    if (a->b1d0 == 21)
        return 0;
    if (a->b1d0 == 28)
        return 0;
    if (a->p20c->b235)
        return 0;
    if (a->b1f9 == 2) {
        if (a->f38 <= a->f41c)
            return 0;
        if (a->f38 >= dat_0c2d9300 + -68.57143f)
            return 0;
    }
    if (dat_0c23bf64[a->b1d0])
        return 0;
    return 1;
}

unsigned char func_0c0479a6(struct MaskObject *a)
{
    if (a->b1f2)
        return 0;
    if (a->b1f3)
        return 0;
    {
        unsigned char t;
        if ((t = a->b1d0) == 18 || t == 19) {
            if (a->b1de)
                return 0;
        }
    }
    if (a->b14a & 32)
        return 0;
    if (a->b5)
        return 0;
    if (a->b1d0 == 29)
        return 0;
    if (a->b1d0 == 28)
        return 0;
    if (a->b1d0 == 21) {
        if (a->b27a < 0) {
            if ((a->b14a & 0xe0) != (unsigned short)0x80)
                return 0;
        } else if (!a->b27a)
            return 0;
    }
    if (a->p20c->b235)
        return 0;
    if (a->b1f9 == 2) {
        if (a->f38 <= a->f41c)
            return 0;
        if (a->f38 >= dat_0c2d9300 + -68.57143f)
            return 0;
    }
    if (dat_0c23bf64[a->b1d0])
        return 0;
    return 1;
}

void func_0c047a8c(struct MaskObject *a, unsigned char *p)
{
    p[1] = dat_0c23bf87[func_0c02849a(a) & 31];
}

void func_0c047aac(struct MaskObject *a, struct MaskInput *b)
{
    if (a->b525) {
        a->b1fe = a->b4ab;
        a->b1a3 = a->b4aa;
        a->w1fa = a->w4ac;
        return;
    }
    if (b->w6 & 0x240)
        a->b1a3 = 0;
    if (b->w6 & 0x120)
        a->b1a3 = 1;
    if (b->w6 & 0x300)
        a->b1fe = 0;
    if (b->w6 & 0x60)
        a->b1fe = 1;
}

int func_0c047b0c(struct MaskObject *a, unsigned short w, unsigned short *out)
{
    unsigned short z = a->w342;
    if ((*out = ((a->w344 ^ z) | (a->w340 ^ z)) & w) == w)
        return 1;
    return 0;
}
