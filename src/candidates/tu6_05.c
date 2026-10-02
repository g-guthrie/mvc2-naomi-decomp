/* Unit 0x0c0aa28c size 3828: real TU from 0x0c0aa28c through the pool after
 * func_0c0ab0a2 (bsr 0x0c0aa5b6 -> func_0c0aafe6). Linked ~3844 vs 3828.
 * Matching: first two functions and their first two pools, func_0c0aa5d6,
 * func_0c0aac3c. Remaining: func_0c0aa450 continuation ok; func_0c0aa57a
 * bsr displacement; func_0c0aadfa shared-tail vs duplicate; func_0c0ab014
 * r4 vs r14; pool layout after 0x0c0aa9a0. */

struct Rec_0c0aa28c {
    unsigned char pad0[8];
    short s8, s10;
    float f12;
    unsigned char pad1[4];
    float f20;
};

struct Obj_0c0aa28c {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad1[3];
    unsigned char b6, b7;
    unsigned char pad1b[30 - 8];
    short s30;
    unsigned char pad2[37 - 32];
    unsigned char b37;
    unsigned char pad2b[52 - 38];
    float f52, f56, f60;
    unsigned char pad3[80 - 64];
    float f80, f84;
    unsigned char pad4[92 - 88];
    float f92, f96, f100, f104, f108;
    unsigned char pad5[0x130 - 112];
    short w130;
    unsigned char pad5b[0x141 - 0x132];
    char b141;
    unsigned char pad6[0x19e - 0x142];
    unsigned char b19e;
    unsigned char pad6b[0x1a1 - 0x19f];
    unsigned char b1a1;
    unsigned char pad6c[0x1ac - 0x1a2];
    unsigned short w1ac;
    unsigned char pad7[0x1c4 - 0x1ae];
    int p1c4;
    unsigned char pad8[0x1d2 - 0x1c8];
    unsigned char b1d2, b1d3;
    unsigned char pad8b[0x1eb - 0x1d4];
    unsigned char b1eb;
    unsigned char pad9[0x1f9 - 0x1ec];
    unsigned char b1f9;
    unsigned char pad9b[0x1fc - 0x1fa];
    unsigned char b1fc;
    unsigned char pad9c[0x202 - 0x1fd];
    unsigned char b202;
    unsigned char pad10[0x20c - 0x203];
    struct Obj_0c0aa28c *p20c;
    unsigned char pad10b[0x255 - 0x210];
    unsigned char b255;
    unsigned char pad11[0x2a4 - 0x256];
    struct Rec_0c0aa28c sub2a4;
    unsigned char pad12[0x327 - 0x2bc];
    unsigned char b327, b328;
    unsigned char pad13[0x340 - 0x329];
    unsigned short w340;
    unsigned char pad13b[0x348 - 0x342];
    unsigned short w348, w34a;
    unsigned char pad13c[0x3f0 - 0x34c];
    unsigned char b3f0, b3f1;
    unsigned char pad14[0x3f8 - 0x3f2];
    unsigned char b3f8, b3f9;
    unsigned char pad15[0x41c - 0x3fa];
    float f41c;
    unsigned char pad16[0x4dc - 0x420];
    unsigned short w4dc, w4e0;
};

struct Vec3 { float x, y, z; };
struct Glob_0c2f83f8 { unsigned char pad[0x7c]; short w7c[1]; };
struct Glob_0c2d6f84 { unsigned char pad[28]; int l28; };
struct Hud_0c2d9260 { unsigned char pad[5]; unsigned char b5, b6; };

typedef void (*fn_0c0aa28c)(struct Obj_0c0aa28c *, struct Rec_0c0aa28c *);

extern struct Glob_0c2f83f8 *dat_0c2f83f8;
extern unsigned char dat_0c2f8370;
extern struct Glob_0c2d6f84 *dat_0c2d6f84;
extern struct Hud_0c2d9260 dat_0c2d9260;
extern fn_0c0aa28c dat_0c244568[];
extern fn_0c0aa28c dat_0c24457c[];
extern fn_0c0aa28c dat_0c244594[];
extern fn_0c0aa28c dat_0c24459c[];
extern fn_0c0aa28c dat_0c2445a8[];
extern void func_0c025900(struct Obj_0c0aa28c *a, int b, int c);
extern void func_0c0442fa(struct Obj_0c0aa28c *a);
extern void func_0c02a0c4(struct Obj_0c0aa28c *a, int b, int c);
extern void func_0c0432ca(struct Obj_0c0aa28c *a);
extern void func_0c0344a0(struct Obj_0c0aa28c *a, int b);
extern void func_0c0346da(struct Obj_0c0aa28c *a, int b);
extern void func_0c0429a4(struct Obj_0c0aa28c *a, struct Vec3 *v, int n);
extern char func_0c02a026(struct Obj_0c0aa28c *a);
extern void func_0c1a286c(struct Obj_0c0aa28c *a, int b, int c);
extern void func_0c02a684(struct Obj_0c0aa28c *a, int b, int c, int d);
extern void func_0c04be40(struct Obj_0c0aa28c *a);
extern void func_0c02a39a(struct Obj_0c0aa28c *a, int b);
extern void func_0c1c1678(struct Obj_0c0aa28c *a, short *p, int n);
extern void func_0c1a1a34(struct Obj_0c0aa28c *a, int b, int c);
extern void func_0c1ce70c(struct Obj_0c0aa28c *a, int b, int c, float x, float y);
extern void func_0c151a88(struct Obj_0c0aa28c *a, int b);
extern void func_0c0437b8(struct Obj_0c0aa28c *a);
extern void func_0c048bb0(struct Obj_0c0aa28c *a, int b, int c);
unsigned char func_0c0aadfa(struct Obj_0c0aa28c *a);
unsigned char func_0c0aaf20(struct Obj_0c0aa28c *a, unsigned char which);
unsigned char func_0c0aafc2(struct Obj_0c0aa28c *a, unsigned char which);
void func_0c0aafe6(struct Obj_0c0aa28c *a);
unsigned char func_0c0ab014(struct Obj_0c0aa28c *a);

void func_0c0aa28c(struct Obj_0c0aa28c *a, struct Rec_0c0aa28c *b)
{
    struct Vec3 v;

    if (a->b255 == 6) {
        a->b3f0 = 255;
        a->b3f1 = 16;
    }
    func_0c025900(a, 13, 6);
    a->b7++;
    b->s10 = 0xf0;
    func_0c0442fa(a);
    a->f56 = a->f41c;
    a->b1a1 = 66;
    a->w1ac = 0;
    a->b19e = 0;
    a->p1c4 = 0;
    dat_0c2f83f8->w7c[a->b2]++;
    func_0c02a0c4(a, 22, 54);
    b->s8 = 15;
    func_0c0432ca(a);
    func_0c0344a0(a, 20);
    a->b3f0 = 0;
    a->b3f1 = 0;
    v.x = 0.0f;
    v.y = v.y + 137.14286f;
    func_0c0429a4(a, &v, 1);
}

void func_0c0aa348(struct Obj_0c0aa28c *a, struct Rec_0c0aa28c *b)
{
    a->b3f8 = 2;
    a->b328 = 5;
    a->b3f1 = (a->b255 == 6) ? 2 : 0;
    if (func_0c02a026(a) < 0) {
        a->b7++;
        b->f12 = 0.5f;
        b->f20 = 0.5f;
        a->f80 = b->f12;
        a->f84 = b->f20;
        a->f56 = a->f41c;
        func_0c02a0c4(a, 22, 63);
        if (!(dat_0c2f8370 & (1 << a->b2)))
            func_0c1a286c(a, 0, 1);
        func_0c02a684(a, 0, a->b37 + 6, 1);
        func_0c02a684(a, 2, 12, 2);
        func_0c0344a0(a, 34);
        func_0c0346da(a, 53);
        a->b202 |= 0x80;
        a->b1eb = 2;
        func_0c04be40(a);
    }
}

void func_0c0aa450(struct Obj_0c0aa28c *a, struct Rec_0c0aa28c *b)
{
    int two = 2;

    a->b3f8 = two;
    a->b328 = 5;
    if (!(dat_0c2d6f84->l28 & 1))
        func_0c02a684(a, 0, a->b37 + 6, 1);
    else
        func_0c02a39a(a, 8);
    if (!(dat_0c2d6f84->l28 & 7)) {
        dat_0c2d9260.b5 = 2;
        dat_0c2d9260.b6 = 1;
    }
    b->f12 += 0.02f;
    b->f20 += 0.02f;
    a->f80 = b->f12;
    a->f84 = b->f20;
    if (b->f20 > 1.0f) {
        b->f12 = 1.0f;
        a->f80 = b->f12;
        a->f84 = b->f20;
        a->b7++;
        b->s8 = 30;
        func_0c02a0c4(a, 22, 55);
        func_0c02a39a(a, 0);
        func_0c02a684(a, 0, a->b37 + 6, 1);
        func_0c02a684(a, 2, 12, 2);
        func_0c0344a0(a, 37);
    }
    a->b202 |= 0x80;
    a->b1eb = two;
    func_0c04be40(a);
}

void func_0c0aa57a(struct Obj_0c0aa28c *a, struct Rec_0c0aa28c *b)
{
    a->b3f8 = 2;
    a->b328 = 5;
    if (--b->s8 <= 0) {
        a->b6++;
        a->b7 = 0;
        b->s10 = 0xf0;
        func_0c1c1678(a, &b->s10, 6);
        func_0c0aafe6(a);
    }
    a->b202 |= 0x80;
    a->b1eb = 2;
    func_0c04be40(a);
}

void func_0c0aa5d6(struct Obj_0c0aa28c *a)
{
    a->b3f8 = 2;
    a->b328 = 5;
    dat_0c244568[a->b7](a, &a->sub2a4);
    a->b202 |= 0x80;
    a->b1eb = 2;
    func_0c04be40(a);
}

unsigned char func_0c0aa644(struct Obj_0c0aa28c *a)
{
    if (func_0c0aadfa(a) != 0)
        return 0;
    if (func_0c0aaf20(a, 0) != 0)
        return 0;
    if (func_0c0ab014(a) != 0)
        return 0;
    return func_0c02a026(a);
}

void func_0c0aa678(struct Obj_0c0aa28c *a)
{
    if (func_0c0aadfa(a) != 0)
        return;
    if (func_0c0ab014(a) != 0)
        return;
    if (func_0c0aafc2(a, 0) == 0)
        func_0c0aafe6(a);
    func_0c02a026(a);
    if (a->b141 == 0) {
        a->f52 = a->f52 + a->f92;
        a->f92 = a->f92 + a->f104;
    } else if (a->b141 == 1) {
        a->b141 = 2;
        dat_0c2d9260.b5 = 1;
        dat_0c2d9260.b6 = 1;
        func_0c0346da(a, 53);
    }
}

void func_0c0aa6f2(struct Obj_0c0aa28c *a)
{
    if (func_0c02a026(a) < 0) {
        func_0c0aafe6(a);
        func_0c0442fa(a);
    }
}

void func_0c0aa716(struct Obj_0c0aa28c *a)
{
    if (func_0c02a026(a) < 0) {
        func_0c0aafe6(a);
        return;
    }
    if (a->b141 == 1) {
        a->b141 = 0;
        func_0c1a1a34(a, 22, 13);
        func_0c1a1a34(a, 23, 13);
        func_0c1a1a34(a, 24, 13);
    } else if (a->b141 == 2) {
        a->b141 = 0;
        a->f52 += a->w130 ? 26.666666031f : -26.666666031f;
    }
}

void func_0c0aa7aa(struct Obj_0c0aa28c *a)
{
    if (func_0c02a026(a) < 0) {
        func_0c0aafe6(a);
        return;
    }
    if (a->b141 == 1) {
        a->b141 = 0;
        func_0c1a1a34(a, 32, 13);
        func_0c1a1a34(a, 33, 13);
    } else if (a->b141 == 2) {
        a->b141 = 0;
        a->f52 += a->w130 ? -66.666664124f : 66.666664124f;
    }
}

void func_0c0aa822(struct Obj_0c0aa28c *a)
{
    a->b3f8 = 2;
    a->b328 = 5;
    if (a->w4dc & 96) {
        if (a->s30++ > 0x96)
            goto bump;
    } else {
        if (a->s30++ > 60)
            goto bump;
        goto dispatch;
    }
    if (0) {
bump:
        a->s30 = 10;
        a->b6++;
        a->b7 = 0;
        func_0c02a684(a, 0, a->b37 + 6, 1);
        return;
    }
dispatch:
    dat_0c24457c[a->b7](a, &a->sub2a4);
    a->b202 |= 0x80;
    a->b1eb = 2;
    func_0c04be40(a);
    if (dat_0c2d6f84->l28 & 1)
        func_0c02a684(a, 0, (a->b37 << 1) + 21, 1);
    else
        func_0c02a684(a, 0, (a->b37 << 1) + 20, 1);
    if (!(dat_0c2d6f84->l28 & 3))
        func_0c1ce70c(a, 0, 0, 3.8f, 0.40000764f);
}

void func_0c0aa92a(struct Obj_0c0aa28c *a)
{
    int n;

    if (func_0c02a026(a) < 0) {
        a->b7++;
        dat_0c2d9260.b5 = 2;
        dat_0c2d9260.b6 = 1;
        a->b1a1 = 69;
        a->w1ac = 0;
        a->b19e = 0;
        a->p1c4 = 0;
        dat_0c2f83f8->w7c[a->b2]++;
        n = a->w340;
        if (!(n & 0x3000))
            func_0c02a0c4(a, 22, 41);
        else if (n & 0x2000) {
            a->b7 = 2;
            func_0c02a0c4(a, 22, 40);
        } else {
            a->b7 = 3;
            func_0c02a0c4(a, 22, 42);
        }
        func_0c151a88(a, 0);
    }
}

void func_0c0aa9fa(struct Obj_0c0aa28c *a)
{
    if (func_0c02a026(a) < 0) {
        if (a->w340 & 0x3000) {
            if (a->w340 & 0x2000)
                func_0c02a0c4(a, 22, 40), a->b7 = 2;
            else
                func_0c02a0c4(a, 22, 42), a->b7 = 3;
        }
    }
}

void func_0c0aaa40(struct Obj_0c0aa28c *a)
{
    unsigned short n;

    if (func_0c02a026(a) < 0) {
        n = a->w340;
        if (!(n & 0x3000) || (n & 0x1000)) {
            a->b7 = 1;
            func_0c02a0c4(a, 22, 41);
            return;
        }
        if (a->w340 & 0x2000) {
            a->b7 = 4;
            func_0c02a0c4(a, 22, 38);
        }
    }
}

void func_0c0aaa96(struct Obj_0c0aa28c *a)
{
    unsigned short n;

    if (func_0c02a026(a) < 0) {
        n = a->w340;
        if (!(n & 0x3000) || (n & 0x2000)) {
            a->b7 = 1;
            func_0c02a0c4(a, 22, 41);
        }
        if (a->w340 & 0x1000) {
            a->b7 = 5;
            func_0c02a0c4(a, 22, 44);
        }
    }
}

void func_0c0aab00(struct Obj_0c0aa28c *a)
{
    if (func_0c02a026(a) < 0) {
        if (!(a->w340 & 0x2000)) {
            a->b7 = 2;
            func_0c02a0c4(a, 22, 39);
        }
    }
}

void func_0c0aab34(struct Obj_0c0aa28c *a)
{
    if (func_0c02a026(a) < 0) {
        if (!(a->w340 & 0x1000)) {
            a->b7 = 3;
            func_0c02a0c4(a, 22, 43);
        }
    }
}

void func_0c0aab68(struct Obj_0c0aa28c *a)
{
    a->b3f8 = 2;
    a->b328 = 5;
    dat_0c244594[a->b7](a, &a->sub2a4);
    a->b202 |= 0x80;
    a->b1eb = 2;
    func_0c04be40(a);
}

void func_0c0aaba6(struct Obj_0c0aa28c *a)
{
    func_0c02a026(a);
    if (--a->s30 <= 0) {
        a->b7++;
        func_0c02a0c4(a, 22, 37);
        dat_0c2d9260.b5 = 2;
        dat_0c2d9260.b6 = 1;
    }
}

void func_0c0aabdc(struct Obj_0c0aa28c *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0aafe6(a);
}

void func_0c0aabfc(struct Obj_0c0aa28c *a)
{
    dat_0c24459c[a->b7](a, &a->sub2a4);
}

void func_0c0aac3c(struct Obj_0c0aa28c *a, struct Rec_0c0aa28c *b)
{
    a->b7 = a->b7 + 1;
    b->f12 -= 0.02f;
    b->f20 -= 0.02f;
    a->f80 = b->f12;
    a->f84 = b->f20;
    func_0c02a0c4(a, 22, 67);
    if (!(dat_0c2f8370 & (1 << a->b2)))
        func_0c1a286c(a, 1, 1);
    func_0c0344a0(a, 35);
    func_0c0346da(a, 58);
    a->b202 |= 0x80;
    a->b1eb = 2;
    func_0c04be40(a);
}

void func_0c0aacbc(struct Obj_0c0aa28c *a, struct Rec_0c0aa28c *b)
{
    b->f12 -= 0.02f;
    b->f20 -= 0.02f;
    a->f80 = b->f12;
    a->f84 = b->f20;
    if (!(dat_0c2d6f84->l28 & 1))
        func_0c02a684(a, 0, a->b37 + 6, 1);
    else
        func_0c02a39a(a, 8);
    if (0.5f > a->f84) {
        b->f12 = 1.0f;
        b->f20 = 1.0f;
        a->f80 = b->f12;
        a->f84 = b->f20;
        a->b7++;
        func_0c0442fa(a);
        a->f56 = a->f41c;
        a->b202 = 0;
        func_0c02a39a(a, 0);
        func_0c02a0c4(a, 22, 61);
        a->b3f9 = 0;
        a->b3f8 = 0;
        a->b327 = 0;
        a->b328 = 0;
        return;
    }
    a->b202 |= 0x80;
    a->b1eb = 2;
    func_0c04be40(a);
}

void func_0c0aadd8(struct Obj_0c0aa28c *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

unsigned char func_0c0aadfa(struct Obj_0c0aa28c *a)
{
    unsigned short w = a->w4e0;
    int n;

    if (w & 0x200) {
        a->b7 = 3;
        a->f92 = a->f96 = a->f104 = a->f108 = 0.0f;
        a->b1a1 = 67;
        a->w1ac = 0;
        a->b19e = 0;
        a->p1c4 = 0;
        dat_0c2f83f8->w7c[a->b2]++;
        n = 32;
    } else if (w & 0x100) {
        a->b7 = 4;
        a->f92 = a->f96 = a->f104 = a->f108 = 0.0f;
        a->b1a1 = 68;
        a->w1ac = 0;
        a->b19e = 0;
        a->p1c4 = 0;
        dat_0c2f83f8->w7c[a->b2]++;
        n = 52;
    } else {
        if (!(w & 96))
            return 0;
        a->b6 = 2;
        a->b7 = 0;
        a->s30 = 0;
        a->f92 = a->f96 = a->f104 = a->f108 = 0.0f;
        func_0c02a0c4(a, 22, 33);
        func_0c0344a0(a, 37);
        func_0c0346da(a, 76);
        return 1;
    }
    func_0c02a0c4(a, 22, n);
    dat_0c2d9260.b5 = 1;
    dat_0c2d9260.b6 = 1;
    func_0c0344a0(a, 37);
    return 1;
}

unsigned char func_0c0aaf20(struct Obj_0c0aa28c *a, unsigned char which)
{
    unsigned short w = which ? a->w348 : a->w340;

    if (!(w & 0x0c00))
        return 0;
    a->b7 = 1;
    a->f92 = a->f96 = a->f104 = a->f108 = 0.0f;
    a->b1fc = 0;
    a->b1f9 = 0;
    a->b1d3 = (unsigned char)((a->w34a & 0x400) >> 10);
    func_0c02a0c4(a, 22, a->b1d3 + 29);
    if (a->w130 == 0)
        a->f92 = -5.625f;
    else
        a->f92 = 5.625f;
    if (a->b1d3)
        a->f92 = -a->f92;
    return 1;
}

unsigned char func_0c0aafc2(struct Obj_0c0aa28c *a, unsigned char which)
{
    unsigned short w = which ? a->w348 : a->w340;

    if (!(w & 0x0c00))
        return 0;
    return 1;
}

void func_0c0aafe6(struct Obj_0c0aa28c *a)
{
    a->b6 = 1;
    a->b7 = 0;
    func_0c02a0c4(a, 22, 28);
}

unsigned char func_0c0ab014(struct Obj_0c0aa28c *a)
{
    float d = a->b1d2 ? 23.3333321f : -23.3333321f;
    struct Obj_0c0aa28c *e = a->p20c;

    if (a->f52 > e->f52 + d || !a->b1d2) {
        if (a->f52 <= e->f52 + d && !a->b1d2)
            return 0;
        if (a->f52 > e->f52 + d && !a->b1d2)
            ;
        else
            return 0;
    } else
        return 0;
    a->b1f9 = 0;
    a->f92 = a->f96 = a->f104 = a->f108 = 0.0f;
    a->b6 = 1;
    a->b7 = 2;
    func_0c02a0c4(a, 22, 31);
    return 1;
}

void func_0c0ab08c(struct Obj_0c0aa28c *a)
{
    dat_0c2445a8[a->b6](a, &a->sub2a4);
}

void func_0c0ab0a2(struct Obj_0c0aa28c *a)
{
    a->b6++;
    func_0c0442fa(a);
    a->w130 ^= 1;
    func_0c048bb0(a, 5, 2);
    a->b1f9 = 0;
    a->f56 = a->f41c;
    a->b1a1 = 73;
    a->w1ac = 0;
    a->b19e = 0;
    a->p1c4 = 0;
    dat_0c2f83f8->w7c[a->b2]++;
    func_0c02a0c4(a, 22, 0);
    a->f92 = a->f96 = a->f104 = a->f108 = 0.0f;
    a->f92 = a->w130 ? 12.5f : -12.5f;
    a->f96 = 13.928571f;
    func_0c025900(a, 1, 7);
}
