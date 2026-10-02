/* Candidate: r1 vs r5 for w14<<5 before func_0c1fb400; unit 4 bytes long.
 * Rest of 0c0315dc and 0c0316b2 follow retail shape. */

struct Rec_0c0315dc {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char b3;
    unsigned char pad1[4];
    short w8;
    unsigned char pad2[4];
    short w14;
    unsigned char pad3[8];
    unsigned char b24;
    unsigned char pad4[17];
    unsigned char b42;
};

struct G_0c2d93d0 {
    unsigned char b0;
    unsigned char pad1[3];
    int i4;
    unsigned char pad2[1];
    unsigned char b9, b10, b11;
    float f12;
};

extern struct Rec_0c0315dc *dat_0c2d6f84;
extern struct G_0c2d93d0 dat_0c2d93d0;
extern unsigned short dat_0c2d6f24[];
extern void func_0c1fb400(struct G_0c2d93d0 *p, int n);
extern void func_0c0275dc(void);
extern void func_0c0267ce(void);
extern void func_0c033cbe(void);
extern void func_0c033cd8(void);
extern void func_0c034358(void);

void func_0c0315dc(void)
{
    struct Rec_0c0315dc *a;

    a = dat_0c2d6f84;
    if (a->w14) {
        a->w14 = a->w14 - 1;
        func_0c1fb400(&dat_0c2d93d0, dat_0c2d6f84->w14 << 5);
        dat_0c2d93d0.i4 = 60 + 10;
        dat_0c2d93d0.f12 = 8994.0f / (float)(2 << (60 - dat_0c2d6f84->w14)) + 6.0f;
        dat_0c2d93d0.b9 += -4;
        dat_0c2d93d0.b10 += -4;
        dat_0c2d93d0.b11 += -4;
        if (6.0f > dat_0c2d93d0.f12) {
            dat_0c2d6f84->w14 = 0;
            dat_0c2d93d0.i4 = 10;
            dat_0c2d93d0.f12 = 6.0f;
            dat_0c2d93d0.b9 = 0;
            dat_0c2d93d0.b10 = 0;
            dat_0c2d93d0.b11 = 0;
        }
    }
    func_0c0275dc();
    func_0c0267ce();
    if (dat_0c2d6f84->w8)
        dat_0c2d6f84->w8 = dat_0c2d6f84->w8 - 1;
    a = dat_0c2d6f84;
    if (a->b42 || a->b24) {
        if ((dat_0c2d6f24[0] & 0x8000) || (dat_0c2d6f24[10] & 0x8000) || a->w8 == 0)
            a->b3 = a->b3 + 1;
    }
}

void func_0c0316b2(void)
{
    dat_0c2d6f84->b2 = 6;
    dat_0c2d6f84->b3 = 0;
    func_0c033cbe();
    func_0c033cd8();
    func_0c034358();
}
