/* Four functions sharing the literal pool at 0x0c047b2e. 281/288 bytes match:
 * func_0c047a40 loads the table index into r2 where retail uses r3. */
#include "objects.h"

extern float dat_0c2d9300;
extern char dat_0c23bf64[];
extern unsigned char dat_0c23bf87[];
int func_0c02849a(struct MaskObject *a);

int func_0c047a40(struct MaskObject *a)
{
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
