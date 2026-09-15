/* Combined TU for the 0x0c047b2e pool. Use -fpu=single.
 * func_0c047a8c matches retail when this file is one P at 0x0c047a40. */
extern float dat_0c2d9300;
extern char dat_0c23bf64[];
extern unsigned char dat_0c23bf87[];
int func_0c02849a(unsigned char *a);

int func_0c047a40(unsigned char *a)
{
    if ((*(unsigned char **)(a + 0x20c))[0x235])
        return 0;
    if (a[0x1f9] == 2) {
        if (*(float *)(a + 56) <= *(float *)(a + 0x41c))
            return 0;
        if (*(float *)(a + 56) >= dat_0c2d9300 + -68.57143f)
            return 0;
    }
    if (dat_0c23bf64[a[0x1d0]])
        return 0;
    return 1;
}

void func_0c047a8c(unsigned char *a, unsigned char *p)
{
    p[1] = dat_0c23bf87[func_0c02849a(a) & 31];
}

void func_0c047aac(unsigned char *a, unsigned char *b)
{
    if (a[0x525]) {
        a[0x1fe] = a[0x4ab];
        a[0x1a3] = a[0x4aa];
        *(unsigned short *)(a + 0x1fa) = *(unsigned short *)(a + 0x4ac);
        return;
    }
    if (*(unsigned short *)(b + 6) & 0x240)
        a[0x1a3] = 0;
    if (*(unsigned short *)(b + 6) & 0x120)
        a[0x1a3] = 1;
    if (*(unsigned short *)(b + 6) & 0x300)
        a[0x1fe] = 0;
    if (*(unsigned short *)(b + 6) & 0x60)
        a[0x1fe] = 1;
}

int func_0c047b0c(unsigned char *a, unsigned short w, unsigned short *out)
{
    unsigned short z = *(unsigned short *)(a + 0x342);
    *out = ((*(unsigned short *)(a + 0x344) ^ z) |
            (*(unsigned short *)(a + 0x340) ^ z)) & w;
    if (*out == w)
        return 1;
    return 0;
}
