struct S {
    unsigned char pad0[6];
    unsigned char b6;
    unsigned char pad1[0x1c - 7];
    short w1c;
    unsigned char pad2[0x34 - 0x1e];
    float f34;
    float f38;
    unsigned char pad4[0x5c - 0x3c];
    float f5c, f60;
    unsigned char pad5[0x68 - 0x64];
    float f68, f6c;
    unsigned char pad6[0x1d2 - 0x70];
    unsigned char b1d2;
};

extern signed char func_0c02a026(struct S *);
extern void func_0c0437b8(struct S *);
extern void func_0c02a0c4(struct S *, int, int);
typedef void (*handler)(struct S *);
extern handler table_0c24ad0c[];

void func_0c0fd768(struct S *a)
{
    a->f34 += a->f5c;
    a->f5c += a->f68;
    a->f38 += a->f60;
    a->f60 += a->f6c;
    func_0c02a026(a);
    if (a->w1c == 22) {
        a->f5c = -10.0f;
        a->f68 = 0.41666666f;
        if (a->b1d2) {
            a->f5c = -a->f5c;
            a->f68 = -a->f68;
        }
        func_0c02a0c4(a, 2, 2);
    }
    if (--a->w1c == 0)
        a->b6++;
}

void func_0c0fd7fc(struct S *a)
{
    a->f34 += a->f5c;
    a->f5c += a->f68;
    a->f38 += a->f60;
    a->f60 += a->f6c;
    if (func_0c02a026(a) >= 0)
        return;
    func_0c0437b8(a);
}

void func_0c0fd856(struct S *a)
{
    table_0c24ad0c[a->b6](a);
}
