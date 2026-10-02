/* Differs: func_0c033b98 register choice and extra extu/exts on b84;
 * func_0c033bec extra mov for zero local. Pool of 0x0c033c42 can match. */

struct G_0c033b98 {
    unsigned char pad0[2];
    unsigned char b2, b3, b4, b5, b6, b7;
    short w8;
    unsigned char pad1[0x19 - 10];
    unsigned char b19;
    unsigned char pad2[0x84 - 0x1a];
    char b84;
    unsigned char pad3[0x8d - 0x85];
    unsigned char b8d;
    char b8e;
};

extern struct G_0c033b98 *dat_0c2d6f84;
extern unsigned short dat_0c2d6f24;
extern unsigned short dat_0c2d6f38;
extern void func_0c0374b8(int);
extern void func_0c037354(void);
extern void func_0c023658(unsigned int);
extern void func_0c033cbe(void);
extern void func_0c033cd8(void);
extern void func_0c034358(void);

void func_0c033b98(void)
{
    struct G_0c033b98 *g;
    char f;

    func_0c0374b8(11);
    g = dat_0c2d6f84;
    g->w8 = g->w8 - 1;
    f = dat_0c2d6f84->b84;
    if (f & 1) {
        if (dat_0c2d6f24 & 0x360)
            goto inc;
    }
    if (f & 2) {
        if (dat_0c2d6f38 & 0x360)
            goto inc;
    }
    if (dat_0c2d6f84->w8 == 0)
        goto inc;
    return;
inc:
    dat_0c2d6f84->b8e = dat_0c2d6f84->b8e + 1;
}

void func_0c033bec(void)
{
    unsigned char z;

    z = 0;
    dat_0c2d6f84->b2 = z;
    dat_0c2d6f84->b3 = z;
    dat_0c2d6f84->b4 = z;
    dat_0c2d6f84->b5 = z;
    dat_0c2d6f84->b6 = z;
    dat_0c2d6f84->b7 = z;
    dat_0c2d6f84->b8d = z;
    dat_0c2d6f84->b8e = z;
    dat_0c2d6f84->b19 = 1;
    func_0c037354();
    func_0c023658(0xff000000u);
    func_0c033cbe();
    func_0c033cd8();
    func_0c034358();
}
