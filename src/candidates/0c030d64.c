/* Candidate: func_0c030d64 calls 0x0c0302d0 and 0x0c030570 with bsr;
 * SHC emits jsr for those imports so the first function is 4 bytes long.
 * func_0c030dfe loop/register assignment still differs. */

struct G_0c2d6f84 {
    unsigned char pad0[3];
    unsigned char b3, b4, b5, b6, b7;
    unsigned char pad1[24 - 8];
    unsigned char b24;
    unsigned char pad2[44 - 25];
    unsigned char b44;
    unsigned char pad3[46 - 45];
    unsigned char b46;
    unsigned char pad4[71 - 47];
    unsigned char b71;
    unsigned char pad5[76 - 72];
    unsigned char b76;
    unsigned char pad6[0x84 - 77];
    unsigned char b84;
    unsigned char pad7[0x129 - 0x85];
    unsigned char b129;
};

struct Pl_0c030d64 {
    unsigned char b0;
    unsigned char pad0[0x12c - 1];
    unsigned char b12c;
    unsigned char pad1[0x4c9 - 0x12d];
    unsigned char b4c9;
    unsigned char pad2[0x524 - 0x4ca];
    unsigned char b524;
    unsigned char pad3[0x52c - 0x525];
    unsigned char b52c;
    unsigned char b52d;
    unsigned char pad4[0x53f - 0x52e];
    unsigned char b53f;
    unsigned char pad5[0x5a4 - 0x540];
};

struct Hud_0c2f8338 {
    unsigned char pad[90];
    unsigned char b90, b91;
};

extern struct G_0c2d6f84 *dat_0c2d6f84;
extern struct Pl_0c030d64 dat_0c2d7088[];
extern unsigned char dat_0c2d7008[];
extern unsigned char dat_0c22d1a8[];
extern unsigned char dat_0c2d96a4;
extern struct Hud_0c2f8338 dat_0c2f8338;
extern void func_0c1fba00(void *, int, int);
extern void func_0c038438(void);
extern void func_0c0394cc(void);
extern void func_0c040d40(void);
extern void func_0c0302d0(void);
extern void func_0c030570(void);
extern void func_0c034060(void);
extern void func_0c027ff0(int);

void func_0c030dfe(void);

void func_0c030d64(void)
{
    struct Hud_0c2f8338 *h;

    func_0c1fba00(dat_0c2d7008, 0, 0x80);
    dat_0c2d6f84->b24 = 3;
    dat_0c2d6f84->b84 = 0;
    dat_0c2d6f84->b46 = 1;
    dat_0c2d6f84->b76 = 0;
    func_0c038438();
    func_0c0394cc();
    func_0c040d40();
    func_0c0302d0();
    func_0c030dfe();
    dat_0c2d6f84->b84 = 3;
    func_0c030570();
    func_0c034060();
    if (dat_0c2d6f84->b71)
        func_0c027ff0(14);
    h = &dat_0c2f8338;
    h->b90 = 5;
    h->b91 = 5;
    dat_0c2d6f84->b3 = 0;
    dat_0c2d6f84->b4 = 0;
    dat_0c2d6f84->b5 = 0;
    dat_0c2d6f84->b6 = 0;
    dat_0c2d6f84->b7 = 0;
}

void func_0c030dfe(void)
{
    int i;
    struct Pl_0c030d64 *p;
    unsigned char t;
    int idx;
    int one;
    int three;
    unsigned char z;

    z = 0;
    i = z;
    three = 3;
    one = 1;
    do {
        p = &dat_0c2d7088[i];
        p->b0 = (unsigned char)one;
        p->b12c = z;
        p->b524 = (unsigned char)i;
        t = dat_0c2d6f84->b44;
        idx = t & three;
        p->b52c = dat_0c22d1a8[idx * 6 + i];
        p->b4c9 = z;
        p->b52d = z;
        p->b53f = (unsigned char)(i / 2);
        i = i + 1;
    } while (i < 6);
    t = dat_0c2d6f84->b44;
    dat_0c2d96a4 = t & 7;
    dat_0c2d6f84->b129 = dat_0c2d6f84->b44 & 7;
}
