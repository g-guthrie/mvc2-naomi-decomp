/* func_0c12f848 matches exactly (148/148). func_0c12f8dc is very close
 * (69/72); func_0c12fa36 close (40/54); func_0c12f9c4 does not match yet
 * (its layout/condition needs another pass). Left as a candidate. */

struct S_ud2_04 {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad1[3];
    unsigned char b6;
    unsigned char pad1b[0x1c - 7];
    short w1c;
    unsigned char pad2b[0x20 - 0x1e];
    unsigned char b32;
    unsigned char pad2c[0x25 - 0x21];
    unsigned char b37;
    unsigned char pad3[0x38 - 0x26];
    float f38;
    unsigned char pad4[0x5c - 0x3c];
    float f5c, f60;
    unsigned char pad5[0x68 - 0x64];
    float f68, f6c;
    unsigned char pad6[0x140 - 0x70];
    signed char b140;
    unsigned char b141;
    unsigned char pad7[0x14b - 0x142];
    unsigned char b14b;
    unsigned char pad8[0x19e - 0x14c];
    unsigned char b19e;
    unsigned char pad9[0x1a1 - 0x19f];
    unsigned char b1a1;
    unsigned char pad10[0x1ac - 0x1a2];
    unsigned short w1ac;
    unsigned char pad11[0x1c4 - 0x1ae];
    int i1c4;
    unsigned char pad12[0x1f9 - 0x1c8];
    unsigned char b1f9;
    unsigned char pad13[0x255 - 0x1fa];
    unsigned char b255;
    unsigned char pad14[0x258 - 0x256];
    unsigned char pad15[0x2c4 - 0x258];
    int i2c4;
    unsigned char pad16[0x327 - 0x2c8];
    unsigned char b327, b328;
    unsigned char pad17[0x352 - 0x32a];
    unsigned short w352;
    unsigned char pad18[0x3f0 - 0x354];
    unsigned char b3f0, b3f1;
    unsigned char pad19[0x3f8 - 0x3f2];
    unsigned char b3f8, b3f9;
    unsigned char pad20[0x41c - 0x3fa];
    float f41c;
};

struct Global2f83f8_ud2_04 { unsigned char pad0[0x7c]; short w7c[64]; };
struct Global2f8338_ud2_04 { unsigned char b0; unsigned char pad0[2]; unsigned char b3; };

extern struct Global2f83f8_ud2_04 *dat_0c2f83f8;
extern struct Global2f8338_ud2_04 *dat_0c2f8338;
extern void func_0c0442fa(struct S_ud2_04 *);
extern void func_0c0432ca(struct S_ud2_04 *);
extern void func_0c1bee94(struct S_ud2_04 *);
extern void func_0c02a0c4(struct S_ud2_04 *, int, int);
extern signed char func_0c02a026(struct S_ud2_04 *);
extern void func_0c02a684(struct S_ud2_04 *, int, int, int);
extern void func_0c02a39a(struct S_ud2_04 *, int);
extern void func_0c0429a4(struct S_ud2_04 *, void *, int);
extern void func_0c1c1678(struct S_ud2_04 *, void *, int);
extern void (*dat_0c24e178[])(struct S_ud2_04 *);
extern void func_0c13150c(struct S_ud2_04 *);
extern void func_0c1beeec(struct S_ud2_04 *);

void func_0c12f848(struct S_ud2_04 *a)
{
    if (a->b255 == 6) {
        a->b3f0 = 0xff;
        a->b3f1 = 0x10;
    }
    a->b6 = a->b6 + 1;
    func_0c0442fa(a);
    func_0c0432ca(a);
    a->f5c = 0;
    a->f60 = 0;
    a->f68 = 0;
    a->f6c = 0;
    a->f38 = a->f41c;
    a->b1f9 = 0;
    a->w1c = a->b37 * 5;
    a->b1a1 = 0x52;
    a->w1ac = 0;
    a->b19e = 0;
    a->i1c4 = 0;
    dat_0c2f83f8->w7c[a->b2] += 1;
    func_0c1bee94(a);
    func_0c02a0c4(a, 22, 5);
}

void func_0c12f8dc(struct S_ud2_04 *a)
{
    a->b3f8 = 2;
    a->b328 = 5;
    a->b3f1 = (a->b255 == 6) ? 2 : 0;
    func_0c02a026(a);
    if (a->b140 != 0) {
        if (a->b140 < 0)
            func_0c02a39a(a, 1);
        else
            func_0c02a684(a, 0, a->w1c + a->b14b, 1);
    }
    if (a->b141 != 0) {
        struct { float x, y; } v;

        a->b3f0 = 0;
        a->b3f1 = 0;
        a->b6 = a->b6 + 1;
        a->b141 = 0;
        a->i2c4 = 0x258;
        func_0c02a39a(a, 1);
        v.x = 0;
        v.y = 137.1429f;
        func_0c0429a4(a, &v, 1);
        func_0c1c1678(a, (char *)a + 0x2c4, 6);
    }
}

void func_0c12f9c4(struct S_ud2_04 *a)
{
    a->b6 = a->b6 + 1;
    a->b32 = 0;
    a->w352 = 0;
    a->b3f8 = 2;
    a->b328 = 5;
    if (dat_0c2f8338->b3 == 0 && dat_0c2f8338->b0 != 5 && --a->i2c4 > 0) {
        dat_0c24e178[a->b32](a);
        return;
    }
    a->b3f9 = 0;
    a->b3f8 = 0;
    a->b327 = 0;
    a->b328 = 0;
    a->b6 = a->b6 + 1;
    func_0c02a0c4(a, 22, 11);
}

void func_0c12fa36(struct S_ud2_04 *a)
{
    if (func_0c02a026(a) < 0) {
        func_0c13150c(a);
        return;
    }
    if (a->b141 != 0) {
        a->b141 = 0;
        func_0c1beeec(a);
    }
}
