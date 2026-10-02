struct S_0c1672c8 {
    unsigned char pad0[4];
    unsigned char b4;
    unsigned char b5;
    unsigned char pad1[0x1c - 6];
    short w1c;
    unsigned char pad2[0x20 - 0x1e];
    unsigned char b20;
    unsigned char pad3[0x34 - 0x21];
    float f34;
    float f38;
    unsigned char pad4[0x5c - 0x3c];
    float f5c, f60;
    unsigned char pad5[0x68 - 0x64];
    float f68, f6c;
    unsigned char pad6[0x12c - 0x70];
    unsigned char b12c;
    unsigned char pad7[0x19e - 0x12d];
    signed char b19e, b19f;
};

struct S_0c1672c8b {
    unsigned char pad[0x41c];
    float f41c;
};

extern signed char func_0c02a026(struct S_0c1672c8 *);
extern void func_0c037688(struct S_0c1672c8 *);
extern void func_0c02a0c4(struct S_0c1672c8 *, int, int);
extern void func_0c037d0c(struct S_0c1672c8 *);

void func_0c1672c8(struct S_0c1672c8 *a, struct S_0c1672c8b *b)
{
    a->f34 += a->f5c;
    a->f5c += a->f68;
    a->f38 += a->f60;
    a->f60 += a->f6c;
    func_0c02a026(a);
    if (a->b20 == 7 && b->f41c > a->f38)
        goto bump;
    if (!a->b19e && !a->b19f && --a->w1c)
        goto done;
bump:
    a->b5++;
    a->f5c /= 4.0f;
    a->f68 /= 4.0f;
    a->f60 /= 4.0f;
    a->f6c /= 4.0f;
    if (a->b20 == 6)
        func_0c02a0c4(a, 23, 29);
    else
        func_0c02a0c4(a, 23, 31);
done:
    func_0c037d0c(a);
}

void func_0c167392(struct S_0c1672c8 *a)
{
    a->f34 += a->f5c;
    a->f5c += a->f68;
    a->f38 += a->f60;
    a->f60 += a->f6c;
    if (func_0c02a026(a) >= 0)
        return;
    func_0c037688(a);
}

void func_0c1673ec(struct S_0c1672c8 *a)
{
    a->b4++;
    a->b12c = 0;
}

void func_0c1673fa(struct S_0c1672c8 *a)
{
    func_0c037688(a);
}
