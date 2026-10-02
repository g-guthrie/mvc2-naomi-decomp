/* Unit 0x0c032b58 size 520. No verified twin. 30/340 so far: prologue
 * and w8 decrement match shape; remaining diffs start at r4 vs r3 for
 * the *dat_0c2d6f84 load and the b4 increment addressing. */
struct G_0c2d6f84 {
    unsigned char pad0[3];
    unsigned char b3, b4, b5, b6, b7;
    short w8;
    unsigned char pad1[4];
    short w14;
    unsigned char pad2[0x19 - 0x10];
    unsigned char b19;
    unsigned char pad3[0x84 - 0x1a];
    unsigned char b84;
};

struct G_0c2d93d0 {
    unsigned char pad0[11];
    unsigned char b11;
    float f12;
};

extern struct G_0c2d6f84 *dat_0c2d6f84;
extern struct G_0c2d93d0 dat_0c2d93d0;
extern unsigned char dat_0c2d7088[];
extern void func_0c033e0e(int, int);
extern void func_0c023658(int);
extern void func_0c0275dc(void);
extern void func_0c0267ce(void);
extern void func_0c033cbe(void);
extern void func_0c033cd8(void);
void func_0c032c24(void);

void func_0c032b58(void)
{
    struct G_0c2d6f84 *g;

    g = dat_0c2d6f84;
    if ((g->w8 = g->w8 - 1) == 0)
        dat_0c2d6f84->b4 = dat_0c2d6f84->b4 + 1;
    if (dat_0c2d6f84->w8 <= 30)
        func_0c033e0e(1, 30);
    g = dat_0c2d6f84;
    if (g->w8 == 10)
        g->w14 = 3;
    g = dat_0c2d6f84;
    if (g->w14 >= 2) {
        dat_0c2d93d0.f12 -= 140.0f;
        dat_0c2d93d0.b11 = dat_0c2d93d0.b11 + 2;
        if (dat_0c2d93d0.f12 < 0.0f) {
            dat_0c2d6f84->w14 = 3;
            dat_0c2d93d0.f12 = 0.0f;
            dat_0c2d93d0.b11 = 0xff;
            func_0c023658(-1);
        }
    }
    func_0c0275dc();
    func_0c0267ce();
}

void func_0c032be4(void)
{
    struct G_0c2d6f84 *g;

    g = dat_0c2d6f84;
    g->b3 = g->b3 + 1;
    dat_0c2d6f84->b4 = 0;
    dat_0c2d6f84->b5 = 0;
    dat_0c2d6f84->b6 = 0;
    dat_0c2d6f84->b7 = 0;
    dat_0c2d6f84->b19 = 1;
    func_0c032c24();
    func_0c023658(-1);
    func_0c033cbe();
    func_0c033cd8();
}

void func_0c032c24(void)
{
    unsigned short v;
    unsigned char t;

    if (dat_0c2d6f84->b84 & 1) {
        v = *(unsigned short *)(dat_0c2d7088 + 0x4dc) & 0xff90;
        if (v == 0x90) {
            t = dat_0c2d7088[0x1690 + 0x53f];
            dat_0c2d7088[0xb48 + 0x53f] = t;
            dat_0c2d7088[0x1690 + 0x53f] = dat_0c2d7088[0xb48 + 0x53f];
        } else if (v == 0x80) {
            t = dat_0c2d7088[0x53f];
            dat_0c2d7088[0x53f] = dat_0c2d7088[0xb48 + 0x53f];
            dat_0c2d7088[0xb48 + 0x53f] = t;
        } else if (v == 16) {
            t = dat_0c2d7088[0x53f];
            dat_0c2d7088[0x53f] = dat_0c2d7088[0x1690 + 0x53f];
            dat_0c2d7088[0x1690 + 0x53f] = t;
        }
    }
    if (dat_0c2d6f84->b84 & 2) {
        v = *(unsigned short *)(dat_0c2d7088 + 0x5a4 + 0x4dc) & 0xff90;
        if (v == 0x90) {
            dat_0c2d7088[0x10ec + 0x53f] = dat_0c2d7088[0x1c34 + 0x53f];
        } else if (v == 0x80) {
            dat_0c2d7088[0x5a4 + 0x53f] = dat_0c2d7088[0x10ec + 0x53f];
        } else if (v == 16) {
            t = dat_0c2d7088[0x5a4 + 0x53f];
            dat_0c2d7088[0x5a4 + 0x53f] = dat_0c2d7088[0x1c34 + 0x53f];
            dat_0c2d7088[0x1c34 + 0x53f] = t;
        }
    }
}

void func_0c032cac(void)
{
}
