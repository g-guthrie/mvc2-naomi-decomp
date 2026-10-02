/* TU 0x0c04701c through the 0x0c047b2e pool (2884 bytes). Linked 2860.
 * Remaining: handler shapes, pool placement, mask r2/r3. Absorbs mask_tu
 * and leaves_01's func_0c047064. */
#include "objects.h"

typedef unsigned char (*mask_fn)(struct MaskObject *, struct MaskInput *, struct MaskInput *, unsigned short);

extern float dat_0c2d9300;
extern char dat_0c23bf64[];
extern unsigned char dat_0c23bf87[];
extern unsigned char dat_0c23bf3c[];
extern mask_fn dat_0c23bf04[];
extern mask_fn dat_0c23bf18[];
extern mask_fn dat_0c23bf24[];
extern mask_fn dat_0c23bf40[];
extern mask_fn dat_0c23bf54[];
int func_0c02849a(struct MaskObject *a);
void func_0c046f9a(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p);
unsigned char func_0c0477dc(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p, unsigned short w);
unsigned char func_0c047796(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p, unsigned short w);
unsigned char func_0c0472e2(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p);
unsigned char func_0c047886(struct MaskObject *a);
unsigned char func_0c047940(struct MaskObject *a);
unsigned char func_0c0479a6(struct MaskObject *a);
void func_0c047a8c(struct MaskObject *a, unsigned char *p);
int func_0c047b0c(struct MaskObject *a, unsigned short w, unsigned short *out);

int func_0c04701c(struct MaskObject *a, unsigned char *table, unsigned char *obj)
{
    unsigned short local;
    obj[0] = 0;
    if ((unsigned char)func_0c047b0c(
            a, *(unsigned short *)(table + ((unsigned char)obj[2] * 2) + 8), &local))
        return func_0c047796(a, (struct MaskInput *)table, (struct MaskInput *)obj, local);
    return 0;
}

int func_0c047064(void)
{
    return 0;
}

unsigned char func_0c047068(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    if (a->b525) {
        if (a->b45d) {
            if (a->b448 == (unsigned char)b->b4)
                return func_0c0477dc(a, b, p, 0);
        }
        return 0;
    }
    return dat_0c23bf04[(unsigned char)p->b0](a, b, p, 0);
}

unsigned char func_0c0470aa(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    if ((a->w34a & b->w8) == 0) {
        p->b0 = 0;
        return 0;
    }
    p->b1 = b->b0;
    p->b2 = a->b1d2;
    p->b0 = p->b0 + 1;
    return 0;
}

unsigned char func_0c0470d4(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    if (--p->b1 > 0) {
        if ((a->w34a & b->w8) == 0)
            p->b0 = 0;
    } else
        p->b0 = p->b0 + 1;
    return 0;
}

unsigned char func_0c04710c(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    unsigned short t;

    t = b->w8;
    if ((t & a->w34a) == 0) {
        t = b->w8;
        if (t == 0x1000 || t == 0x2000 || p->b2 == a->b1d2) {
            p->b0 = p->b0 + 1;
            p->b1 = 15;
        } else {
            p->b0 = 0;
            return 0;
        }
    } else
        return 0;

    if (--p->b1 <= 0) {
        p->b0 = 0;
        return 0;
    }
    if (b->w10 == 0x800) {
        if (a->w34a != b->w10)
            return 0;
    } else if ((b->w10 & a->w34a) == 0)
        return 0;
    p->b0 = p->b0 + 1;
    p->b1 = 15;

    if (--p->b1 <= 0) {
        p->b0 = 0;
        return 0;
    }
    if (b->w12 & a->w34a)
        return func_0c0477dc(a, b, p, a->w34a & b->w12);
    return 0;
}

unsigned char func_0c047222(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    if (a->b525) {
        if (a->b45d) {
            if (a->b448 == (unsigned char)b->b4)
                return func_0c0477dc(a, b, p, 0);
        }
        return 0;
    }
    return dat_0c23bf18[(unsigned char)p->b0](a, b, p, 0);
}

unsigned char func_0c04723c(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    if ((b->w8 & a->w34e) == 0) {
        p->b0 = 0;
        return 0;
    }
    p->w6 = a->w34e & b->w8;
    p->b2 = 1;
    p->b0 = p->b0 + 1;
    p->b1 = b->b2;
    if ((unsigned char)p->b2 == *(unsigned short *)b) {
        p->b0 = 2;
        p->b1 = 14;
        return func_0c0472e2(a, b, p);
    }
    return 0;
}

unsigned char func_0c047286(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    if (--p->b1 <= 0) {
        p->b0 = 0;
        return 0;
    }
    if ((b->w8 & a->w34e) == 0)
        return 0;
    if ((unsigned short)(b->w8 & a->w34e) != p->w6)
        return 0;
    p->b2 = p->b2 + 1;
    p->b1 = b->b2;
    if ((unsigned char)p->b2 == *(unsigned short *)b) {
        p->b0 = 2;
        p->b1 = 14;
        return func_0c0472e2(a, b, p);
    }
    return 0;
}

unsigned char func_0c0472e2(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    if (--p->b1 <= 0) {
        p->b0 = 0;
        return 0;
    }
    if ((unsigned short)(a->w34e & b->w8) == p->w6)
        return 1;
    return 0;
}

unsigned char func_0c04730c(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    if (a->b525) {
        if (a->b45d) {
            if (a->b448 == (unsigned char)b->b4)
                return func_0c0477dc(a, b, p, 0);
        }
        return 0;
    }
    return dat_0c23bf24[(unsigned char)p->b0](a, b, p, 0);
}

unsigned char func_0c047360(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    unsigned short g = a->w34a & 0x3c00;

    if (g == 0 || (g != 0x2000 && g != 0x1000 && g != 0x800 && g != 0x400)) {
        p->b0 = 0;
        return 0;
    }
    {
        unsigned char dir = 0;
        if (g == 0x2000)
            dir = 0;
        if (g == 0x800)
            dir = 1;
        if (g == 0x1000)
            dir = 2;
        if (g == 0x400)
            dir = 3;
        p->b0 = p->b0 + 1;
        p->b2 = (unsigned char)(b->b0 + 0xff);
        p->b3 = dir;
        func_0c047a8c(a, (unsigned char *)p);
    }
    return 0;
}

unsigned char func_0c0473da(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    unsigned short g;

    if (--p->b1 <= 0) {
        p->b0 = 0;
        return 0;
    }
    g = (unsigned short)((a->w34a & 0x3c00) >> 10);
    if (g == 0)
        return 0;
    if ((unsigned char)dat_0c23bf3c[((unsigned char)p->b3 + 1) & 3] == g)
        p->b4 = 1;
    else if ((unsigned char)dat_0c23bf3c[((unsigned char)p->b3 - 1) & 3] == g)
        p->b4 = 0xff;
    else
        return 0;
    p->b0 = p->b0 + 1;
    p->b2 = p->b2 - 1;
    p->b3 = (unsigned char)((p->b3 + p->b4) & 3);
    func_0c047a8c(a, (unsigned char *)p);
    return 0;
}

unsigned char func_0c04746c(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    unsigned short g;

    if (--p->b1 <= 0) {
        p->b0 = 0;
        return 0;
    }
    g = (unsigned short)((a->w34a & 0x3c00) >> 10);
    if (g == 0)
        return 0;
    if ((unsigned char)dat_0c23bf3c[(unsigned char)((p->b3 + p->b4) & 3)] != g)
        return 0;
    p->b2 = p->b2 - 1;
    if ((unsigned char)p->b2 == 0) {
        a->b35c = 0;
        p->b0 = p->b0 + 1;
        p->b1 = 15;
        p->b2 = 0;
        func_0c046f9a(a, b, p);
        return 0;
    }
    p->b3 = (unsigned char)((p->b3 + p->b4) & 3);
    func_0c047a8c(a, (unsigned char *)p);
    return 0;
}

unsigned char func_0c0474f8(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    if (a->b525) {
        if (a->b45d) {
            if (a->b448 == (unsigned char)b->b4)
                return func_0c0477dc(a, b, p, 0);
        }
        return 0;
    }
    return dat_0c23bf40[(unsigned char)p->b0](a, b, p, 0);
}

unsigned char func_0c04753a(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    p->b2 = 0;
    if ((unsigned short)(a->w34e & 0x3f60) == b->w8) {
        func_0c047a8c(a, (unsigned char *)p);
        p->b0 = 1;
        p->b2 = 1;
    }
    return 0;
}

unsigned char func_0c04756c(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    if (--p->b1 <= 0) {
        p->b0 = 0;
        return 0;
    }
    if ((unsigned short)(a->w34e & 0x3f60) ==
        *(unsigned short *)((unsigned char *)b + ((unsigned char)p->b2 * 2) + 8)) {
        func_0c047a8c(a, (unsigned char *)p);
        p->b2 = p->b2 + 1;
        if ((unsigned char)p->b2 == *(unsigned short *)b) {
            p->b0 = 2;
            p->b1 = 15;
        }
    }
    return 0;
}

unsigned char func_0c0475ec(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    unsigned short m;

    if (--p->b1 <= 0) {
        p->b0 = 0;
        return 0;
    }
    m = (unsigned short)((a->w34e & *(unsigned short *)((unsigned char *)b + ((unsigned char)p->b2 * 2) + 8)) & 0x3f60);
    if (m) {
        if ((*(unsigned short *)&b->b2 & 0x8000) == 0x8000) {
            if (m != *(unsigned short *)((unsigned char *)b + ((unsigned char)p->b2 * 2) + 8)) {
                p->b0 = p->b0 + 1;
                return 0;
            }
        } else if ((*(unsigned short *)&b->b2 & 64) == 64)
            return func_0c0477dc(a, b, p, m);
        return func_0c047796(a, b, p, m);
    }
    return 0;
}

unsigned char func_0c047664(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p)
{
    unsigned short w;

    if (a->b525) {
        if (a->b45d) {
            if (a->b448 == (unsigned char)b->b4)
                a->w4ae = (unsigned short)~b->w8;
        }
        w = a->w4ae;
    } else
        w = a->w34a;
    return dat_0c23bf54[(unsigned char)p->b0](a, b, p, w);
}

unsigned char func_0c0476d4(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p, unsigned short w)
{
    if ((w & b->w8) == 0) {
        p->b0 = 0;
        return 0;
    }
    p->b1 = b->b0;
    p->b0 = p->b0 + 1;
    return 0;
}

unsigned char func_0c0476f4(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p, unsigned short w)
{
    if (--p->b1 > 0) {
        if ((w & b->w8) == 0)
            p->b0 = 0;
    } else
        p->b0 = p->b0 + 1;
    return 0;
}

unsigned char func_0c04771a(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p, unsigned short w)
{
    unsigned short x = b->w8 & w;
    if (x == 0) {
        if ((unsigned char)func_0c0477dc(a, b, p, x)) {
            p->b0 = 0;
            return 1;
        }
        p->b0 = p->b0 + 1;
        p->b1 = 10;
    }
    return 0;
}

unsigned char func_0c04775c(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p, unsigned short w)
{
    if (--p->b1 == 0) {
        p->b0 = 0;
        return 0;
    }
    if ((unsigned char)func_0c0477dc(a, b, p, w) == 0)
        return 0;
    p->b0 = 0;
    return 1;
}

unsigned char func_0c047796(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p, unsigned short w)
{
    if (w & 0x120) {
        if ((char)(p->b1 - 4) < 0) {
            if ((*(unsigned short *)&b->b2 & 0x8600) == 0)
                w = w & 0xfedf;
        } else
            return func_0c0477dc(a, b, p, w);
    }
    if (w & 0x2d0) {
        if ((char)(p->b1 - 2) >= 0)
            return func_0c0477dc(a, b, p, w);
    }
    p->b0 = 0;
    return 0;
}

unsigned char func_0c0477dc(struct MaskObject *a, struct MaskInput *b, struct MaskInput *p, unsigned short w)
{
    unsigned short flags = *(unsigned short *)&b->b2;

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
