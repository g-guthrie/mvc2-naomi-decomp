struct Obj {
    unsigned char pad0[6];
    unsigned char b6;
    unsigned char pad1[52 - 7];
    float f52, f56;
    unsigned char pad2[92 - 60];
    float f92, f96, f100, f104, f108;
    unsigned char pad3[0x141 - 112];
    unsigned char b141;
    unsigned char pad4[0x1f9 - 0x142];
    unsigned char b1f9;
    unsigned char pad5[0x2c8 - 0x1fa];
    int l2c8;
    unsigned char pad6[0x41c - 0x2cc];
    float f41c;
};
typedef void (*handler)(struct Obj *);
extern char func_0c02a026(struct Obj *);
extern void func_0c08183c(struct Obj *);
extern void func_0c0818cc(struct Obj *);
extern void func_0c0442fa(struct Obj *);
extern void func_0c0432ca(struct Obj *);
extern void func_0c048bb0(struct Obj *, int);
extern void func_0c02a0c4(struct Obj *, int, int);
extern handler table_0c241ac4[];

void func_0c07eabc(struct Obj *a)
{
    a->l2c8 = 4;
    if (func_0c02a026(a) >= 0) {
        if (a->b141 == 0) {
            a->f52 += a->f92;
            a->f92 += a->f104;
            a->f56 += a->f96;
            a->f96 += a->f108;
        }
    } else {
        a->l2c8 = 0;
        func_0c08183c(a);
    }
}

void func_0c07eb2c(struct Obj *a)
{
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (a->f56 > a->f41c) {
        func_0c02a026(a);
        return;
    }
    a->f56 = a->f41c;
    a->b1f9 = 0;
    func_0c0818cc(a);
    func_0c08183c(a);
}

void func_0c07eb9e(struct Obj *a)
{
    table_0c241ac4[a->b6](a);
}

void func_0c07ebb0(struct Obj *a)
{
    a->b6++;
    func_0c0442fa(a);
    a->b1f9 = 0;
    func_0c0432ca(a);
    func_0c048bb0(a, 5);
    a->f92 = 0.0f;
    a->f96 = 0.0f;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    func_0c02a0c4(a, 21, 26);
}
