struct S_ud2_07 {
    unsigned char pad0[6];
    unsigned char b6;
    unsigned char pad1[0x1c - 7];
    short w1c, w1e;
    unsigned char pad2[0x141 - 0x20];
    unsigned char b141;
    unsigned char pad3[0x255 - 0x142];
    unsigned char b255;
    unsigned char pad4[0x328 - 0x256];
    unsigned char b328;
    unsigned char pad5[0x3f0 - 0x329];
    unsigned char b3f0, b3f1;
    unsigned char pad6[0x3f8 - 0x3f2];
    unsigned char b3f8;
};

extern signed char func_0c02a026(struct S_ud2_07 *);
extern void func_0c0429a4(struct S_ud2_07 *, void *, int);
extern float dat_0c09bdd8, dat_0c09bddc;
extern void func_0c148d54(struct S_ud2_07 *, int, int);
extern void func_0c19d2ac(struct S_ud2_07 *, int, int);
extern void func_0c02a0c4(struct S_ud2_07 *, int, int);

void func_0c09bca0(struct S_ud2_07 *a)
{
    a->b3f8 = 2;
    a->b328 = 5;
    a->b3f1 = (a->b255 == 6) ? 2 : 0;
    func_0c02a026(a);
    if (a->b141 != 0) {
        struct { float x, y, z; } v;

        a->b6 = a->b6 + 1;
        a->b141 = 0;
        a->b3f0 = 0;
        a->b3f1 = 0;
        v.x = dat_0c09bdd8;
        v.y = dat_0c09bddc;
        v.z = 0;
        func_0c0429a4(a, &v, 1);
        a->w1c = 7;
        a->w1e = 0;
    }
}

void func_0c09bd1e(struct S_ud2_07 *a)
{
    a->b3f8 = 2;
    a->b328 = 5;
    func_0c02a026(a);
    if (a->b141 != 0) {
        a->b141 = 0;
        func_0c148d54(a, 1, a->w1e & 3);
        func_0c19d2ac(a, 6, a->w1e & 3);
        func_0c19d2ac(a, 15, a->w1e & 3);
        a->w1e = a->w1e + 1;
        if (--a->w1c == 0)
            a->b6 = a->b6 + 1;
    }
}

void func_0c09bd8a(struct S_ud2_07 *a)
{
    a->b3f8 = 2;
    a->b328 = 5;
    func_0c02a026(a);
    if (func_0c02a026(a) < 0) {
        a->b6 = a->b6 + 1;
        func_0c02a0c4(a, 22, 5);
    }
}
