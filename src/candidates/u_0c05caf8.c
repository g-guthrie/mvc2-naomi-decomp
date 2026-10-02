struct Obj {
    unsigned char pad0[6];
    unsigned char b6;
    unsigned char pad1[0x34 - 7];
    float f52;
    unsigned char pad2[0x5c - 0x38];
    float f92, f96;
    unsigned char pad3[0x68 - 0x64];
    float f104, f108;
    unsigned char pad4[0x141 - 0x70];
    unsigned char b141;
    unsigned char pad5[0x1d2 - 0x142];
    unsigned char b1d2;
    unsigned char pad6[0x1f9 - 0x1d3];
    unsigned char b1f9;
};

typedef void (*handler)(struct Obj *);
extern char func_0c02a026(struct Obj *);
extern void func_0c0437b8(struct Obj *);
extern handler table_0c23fc30[];

void func_0c05caf8(struct Obj *a)
{
    func_0c02a026(a);
    if (a->b141 == 0)
        return;
    a->b6++;
    a->b141 = 0;
    a->b1f9 = 2;
    a->f92 = 5.41666651f;
    a->f104 = 0.0f;
    if (a->b1d2 == 0) {
        a->f92 = -5.41666651f;
        a->f104 = -0.0f;
    }
    a->f96 = 0.0f;
    a->f108 = 0.0f;
}

void func_0c05cb50(struct Obj *a)
{
    a->f52 += a->f92;
    a->f92 += a->f104;
    if (func_0c02a026(a) < 0) {
        func_0c0437b8(a);
        return;
    }
    if (a->b141) {
        int z = 0;
        a->b141 = z;
        a->f92 = 0.0f;
        a->f104 = 0.0f;
    }
}

void func_0c05cba4(struct Obj *a)
{
    table_0c23fc30[a->b6](a);
}

void func_0c05cbb6(struct Obj *a)
{
    func_0c02a026(a);
    if (a->b141 == 0)
        return;
    a->b6++;
    a->b141 = 0;
    a->b1f9 = 0;
    a->f92 = 6.66666651f;
    a->f104 = 0.0f;
    if (a->b1d2 == 0) {
        a->f92 = -6.66666651f;
        a->f104 = -0.0f;
    }
    a->f96 = 6.428571224213f;
    a->f108 = -0.80357140303f;
}
