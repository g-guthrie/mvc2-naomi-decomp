struct Obj {
    unsigned char pad0[6];
    unsigned char b6;
    unsigned char pad1[28 - 7];
    short s28;
    unsigned char pad2[52 - 30];
    float f52, f56;
    unsigned char pad3[92 - 60];
    float f92, f96, f100, f104, f108;
    unsigned char pad4[0x141 - 112];
    unsigned char b141;
    unsigned char pad5[0x19e - 0x142];
    unsigned char b19e;
    unsigned char pad6[0x1b0 - 0x19f];
    struct Obj *p1b0;
    unsigned char pad7[0x1d2 - 0x1b4];
    char b1d2;
    unsigned char pad8[0x1f9 - 0x1d3];
    unsigned char b1f9;
    unsigned char pad9[0x328 - 0x1fa];
    unsigned char b328;
    unsigned char pad10[0x3f8 - 0x329];
    unsigned char b3f8;
    unsigned char pad11[0x41c - 0x3f9];
    float f41c;
};
extern char func_0c02a026(struct Obj *);
extern int func_0c0447bc(struct Obj *);
extern void func_0c02a0c4(struct Obj *, int, int);

void func_0c07f534(struct Obj *a)
{
    struct Obj *p;
    float vx, t;

    a->b3f8 = 2;
    a->b328 = 5;
    func_0c02a026(a);
    if (a->b141 == 0) {
        a->f52 += a->f92;
        a->f92 += a->f104;
        a->f56 += a->f96;
        a->f96 += a->f108;
    }
    if (a->b19e == 0) {
        if (--a->s28 == 0)
            goto fail;
        return;
    }
    p = a->p1b0;
    if (func_0c0447bc(a) == 0)
        goto fail;
    a->b6++;
    vx = -3.3333333f;
    t = 106.666664124f;
    if (a->b1d2) {
        vx = 3.3333333f;
        t = -106.666664124f;
    }
    a->f92 = vx;
    a->f104 = 0.0f;
    p->b1f9 = 0;
    p->f56 = a->f41c;
    p->f52 = a->f52 - t;
    func_0c02a0c4(a, 22, 3);
    return;
fail:
    a->b6 = 6;
    vx = -16.666666031f;
    t = 0.5208333135f;
    if (a->b1d2) {
        vx = 16.666666031f;
        t = -0.5208333135f;
    }
    a->f92 = vx;
    a->f104 = t;
    func_0c02a0c4(a, 22, 2);
}
