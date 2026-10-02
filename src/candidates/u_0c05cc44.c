struct Obj {
    unsigned char pad0[6];
    unsigned char b6;
    unsigned char pad1[0x34 - 7];
    float f52, f56;
    unsigned char pad2[0x5c - 0x3c];
    float f92, f96;
    unsigned char pad3[0x68 - 0x64];
    float f104, f108;
    unsigned char pad4[0x1f9 - 0x70];
    unsigned char b1f9;
    unsigned char pad5[0x41c - 0x1fa];
    float f41c;
};

extern char func_0c02a026(struct Obj *);
extern void func_0c043324(struct Obj *);
extern void func_0c02a0c4(struct Obj *, int, int);
extern void func_0c0437b8(struct Obj *);

void func_0c05cc44(struct Obj *a)
{
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    func_0c02a026(a);
    if (a->f56 < a->f41c) {
        a->b6++;
        a->b1f9 = 0;
        a->f56 = a->f41c;
        a->f92 = 0.0f;
        a->f96 = 0.0f;
        a->f104 = 0.0f;
        a->f108 = 0.0f;
        func_0c043324(a);
        func_0c02a0c4(a, 8, 9);
    }
}

void func_0c05ccd4(struct Obj *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}
