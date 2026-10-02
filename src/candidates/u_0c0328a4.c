/* Candidate: 0c0328a4 early 25/26 locals; 0c032a40 is a continuation without
 * its own prologue so a separate function does not match; 0c032a7e input mask. */

struct Rec_0c0328a4 {
    unsigned char pad0[4];
    unsigned char b4;
    unsigned char pad1[3];
    short w8;
    unsigned char pad2[4];
    short w14;
    unsigned char pad3[9];
    unsigned char b25;
    unsigned char pad4[0x84 - 26];
    char b84;
};

struct F_0c2d9260 {
    unsigned char pad0[12];
    float f12, f16, f20;
    unsigned char pad1[84 - 24];
    float f84, f88, f92;
    unsigned char pad2[128 - 96];
    float f128;
};

struct G_0c2d93d0 {
    unsigned char b0;
    unsigned char pad1[3];
    int i4;
    unsigned char pad2[1];
    unsigned char b9, b10, b11;
    float f12;
};

extern struct Rec_0c0328a4 *dat_0c2d6f84;
extern char dat_0c2d7088[];
extern void func_0c037354(void);
extern void func_0c0275a4(void);
extern void func_0c0268b8(void);
extern void func_0c02aa78(void);
extern void func_0c02aaac(void);
extern void func_0c027ff0(int);
extern void func_0c0343ac(int);
extern void func_0c034a1c(int);
extern void func_0c0233dc(int);
extern void func_0c023a50(void);
extern struct F_0c2d9260 dat_0c2d9260;
extern void func_0c1c910c(void);
extern void func_0c1c927a(int);
extern void func_0c1c93f6(int, int);
extern void func_0c02a7ea(int, int, int);
extern void func_0c0267c4(void);
extern struct G_0c2d93d0 dat_0c2d93d0;
extern void func_0c0267ce(void);
extern unsigned short dat_0c2d6f24[];
extern void func_0c1fb7a0(float *dst, float *a, float *b);
extern void func_0c0275dc(void);

void func_0c032a40(void);

void func_0c0328a4(void)
{
    struct Rec_0c0328a4 *a;
    char *p;
    char v25;
    char v26;

    a = dat_0c2d6f84;
    a->b4 = a->b4 + 1;
    dat_0c2d6f84->w8 = 0x12c;
    dat_0c2d6f84->w14 = 0;
    dat_0c2d6f84->b25 = !dat_0c2d6f84->b84;
    v25 = 25;
    v26 = 26;
    p = dat_0c2d7088;
    if (p[0x52c] == 24 && p[0x1074] == 24 && p[0x1bbc] == 24) {
        p[0x1074] = v25;
        p[0x1bbc] = v26;
    }
    if (p[0xad0] == 24 && p[0x1618] == 24 && p[0x2160] == 24) {
        p[0x1618] = v25;
        p[0x2160] = v26;
    }
    func_0c037354();
    func_0c0275a4();
    func_0c0268b8();
    func_0c02aa78();
    func_0c02aaac();
    func_0c027ff0(6);
    func_0c0343ac(2);
    func_0c034a1c(68);
    func_0c0233dc(0);
    func_0c023a50();
    dat_0c2d9260.f12 = 0.0f;
    dat_0c2d9260.f16 = 160.0f;
    dat_0c2d9260.f20 = 900.0f;
    dat_0c2d9260.f84 = 0.0f;
    dat_0c2d9260.f88 = 160.0f;
    dat_0c2d9260.f92 = 0.0f;
    dat_0c2d9260.f128 = 0.0f;
    func_0c1c910c();
    func_0c1c927a(0);
    func_0c1c927a(1);
    func_0c1c927a(2);
    func_0c1c927a(3);
    func_0c1c927a(4);
    func_0c1c927a(5);
    func_0c1c93f6(0, 0);
    func_0c1c93f6(1, 0);
    func_0c1c93f6(2, 0);
    func_0c1c93f6(3, 0);
    func_0c1c93f6(4, 0);
    func_0c1c93f6(5, 0);
    func_0c1c93f6(0, 1);
    func_0c1c93f6(1, 1);
    func_0c1c93f6(2, 1);
    func_0c1c93f6(3, 1);
    func_0c1c93f6(4, 1);
    func_0c1c93f6(5, 1);
    func_0c032a40();
}

void func_0c032a40(void)
{
    func_0c0268b8();
    func_0c02a7ea(-1, 30, 0);
    func_0c0267c4();
    dat_0c2d93d0.b0 = 1;
    dat_0c2d93d0.i4 = 42;
    dat_0c2d93d0.f12 = 7000.0f;
    dat_0c2d93d0.b9 = 0xff;
    dat_0c2d93d0.b10 = 0xff;
    dat_0c2d93d0.b11 = 0x80;
    func_0c0267ce();
}

void func_0c032a7e(void)
{
    unsigned short *p;
    unsigned short *q;
    unsigned char f;
    struct Rec_0c0328a4 *a;

    a = dat_0c2d6f84;
    a->w8 = a->w8 - 1;
    p = dat_0c2d6f24;
    q = dat_0c2d6f24 + 10;
    *p = *p & 0xfc9f;
    *q = *q & 0xfc9f;
    f = dat_0c2d6f84->b84;
    if (((f & 1) && (unsigned short)(*p & 0x360)) ||
        ((f & 2) && (unsigned short)(*q & 0x360)) ||
        dat_0c2d6f84->w8 == 60) {
        dat_0c2d6f84->b4 = dat_0c2d6f84->b4 + 1;
        dat_0c2d6f84->w8 = 60;
        dat_0c2d6f84->w14 = 2;
    }
    if (dat_0c2d6f84->w8 == 0x96)
        dat_0c2d6f84->w14 = 1;
    func_0c1fb7a0(&dat_0c2d9260.f12, &dat_0c2d9260.f12 + 3, &dat_0c2d9260.f12);
    func_0c1fb7a0(&dat_0c2d9260.f84, &dat_0c2d9260.f84 + 3, &dat_0c2d9260.f84);
    func_0c0275dc();
    func_0c0267ce();
}
