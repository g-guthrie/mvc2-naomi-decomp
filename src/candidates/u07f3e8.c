struct Obj {
    unsigned char pad0[6];
    unsigned char b6;
    unsigned char pad1[28 - 7];
    short s28;
    unsigned char pad2[56 - 30];
    float f56;
    unsigned char pad3[92 - 60];
    float f92, f96, f100, f104, f108;
    unsigned char pad4[0x1d2 - 112];
    char b1d2;
    unsigned char pad5[0x1f9 - 0x1d3];
    unsigned char b1f9;
    unsigned char pad6[0x255 - 0x1fa];
    unsigned char b255;
    unsigned char pad7[0x2bc - 0x256];
    int l2bc;
    unsigned char pad8[0x328 - 0x2c0];
    unsigned char b328;
    unsigned char pad9[0x3f0 - 0x329];
    unsigned char b3f0, b3f1;
    unsigned char pad10[0x3f8 - 0x3f2];
    unsigned char b3f8;
    unsigned char pad11[0x41c - 0x3f9];
    float f41c;
};
extern void func_0c0442fa(struct Obj *);
extern void func_0c0432ca(struct Obj *);
extern void func_0c02a0c4(struct Obj *, int, int);
extern char func_0c02a026(struct Obj *);
extern void func_0c0429a4(struct Obj *, void *, int);

void func_0c07f3e8(struct Obj *a)
{
    if (a->b255 == 6) {
        a->b3f0 = 0xff;
        a->b3f1 = 16;
    }
    a->b6++;
    func_0c0442fa(a);
    a->b1f9 = 0;
    func_0c0432ca(a);
    a->l2bc = 0xff;
    a->f56 = a->f41c;
    func_0c02a0c4(a, 22, 0);
}

void func_0c07f438(struct Obj *a)
{
    struct { float x, y, z; } v;
    a->b3f8 = 2;
    a->b328 = 5;
    a->b3f1 = (a->b255 == 6) ? 2 : 0;
    if (func_0c02a026(a) < 0) {
        a->b3f0 = 0;
        a->b3f1 = 0;
        a->b6++;
        v.x = -28.3333321f;
        v.y = 173.57143f;
        func_0c0429a4(a, &v, 1);
    }
}

void func_0c07f49c(struct Obj *a)
{
    float vx, ax;
    a->b3f8 = 2;
    a->b328 = 5;
    a->b6++;
    func_0c02a0c4(a, 22, 1);
    a->s28 = 24;
    a->f96 = 0.0f;
    a->f108 = 0.0f;
    vx = -26.666666031f;
    ax = 0.41666666f;
    if (a->b1d2) {
        vx = 26.666666031f;
        ax = -0.41666666f;
    }
    a->f92 = vx;
    a->f104 = ax;
}
