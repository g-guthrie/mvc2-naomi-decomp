/* Four functions sharing the literal pool at 0x0c073474. */

struct Entry_tu5_11 { int a, b, c, d; };

struct Obj_tu5_11 {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad1[3];
    unsigned char b6;
    unsigned char pad2[28 - 7];
    short s28;
    unsigned char pad3[92 - 30];
    float f92, f96, f100, f104, f108;
    unsigned char pad4[0x140 - 112];
    char b140;
    unsigned char pad5[0x14b - 0x141];
    char b14b;
    unsigned char pad6[0x19e - 0x14c];
    unsigned char b19e;
    unsigned char pad7[0x1a1 - 0x19f];
    unsigned char b1a1;
    unsigned char pad8[1];
    unsigned char b1a3;
    unsigned char pad9[0x1ac - 0x1a4];
    short w1ac;
    unsigned char pad10[0x1c4 - 0x1ae];
    int l1c4;
    unsigned char pad11[0x1d2 - 0x1c8];
    char b1d2;
    unsigned char pad12[0x348 - 0x1d3];
    short w348;
    unsigned char pad13[0x352 - 0x34a];
    short w352;
    unsigned char pad14[0x411 - 0x354];
    char b411;
    unsigned char pad15[0x525 - 0x412];
    char b525;
};

struct Stats_tu5_11 {
    unsigned char pad0[124];
    short w7c[256];
};

typedef void (*handler_tu5_11)(struct Obj_tu5_11 *);

extern int *dat_0c240fe0[];
extern struct Stats_tu5_11 *dat_0c2f83f8;
extern handler_tu5_11 dat_0c241178[];

void func_0c073368(struct Obj_tu5_11 *a, int i)
{
    int *p = dat_0c240fe0[i];

    p += a->b1a3 * 4;

    a->f92 = (float)*p++ * 1.6666667f / 65536.0f;
    a->f104 = (float)*p++ * 1.6666667f / 65536.0f;
    a->f96 = (float)*p++ * 2.1428571f / 65536.0f;
    a->f108 = (float)*p * 2.1428571f / 65536.0f;
    if (a->b1d2) {
        a->f92 = -a->f92;
        a->f104 = -a->f104;
    }
}

void func_0c0733da(struct Obj_tu5_11 *a)
{
    if (a->b14b) {
        a->b1a1 = (a->b1a3 << 1) + a->b14b + 75;
        a->w1ac = 0;
        a->b19e = 0;
        a->l1c4 = 0;
        dat_0c2f83f8->w7c[a->b2]++;
        a->b14b = 0;
    }
}

void func_0c07341e(struct Obj_tu5_11 *a)
{
    unsigned short k;

    if (a->b140) {
        if (a->b525 == 0) {
            k = a->w348 | a->w352;
            if (k & 0x300) {
                a->s28 = 1;
                a->w352 = 0;
            }
        } else {
            if (a->b411 == 0)
                a->s28 = 1;
        }
    }
}

void func_0c073462(struct Obj_tu5_11 *a)
{
    dat_0c241178[a->b6](a);
}
