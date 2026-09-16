/* Unit at 0x0c0a3e7c, size 288: exactly to the next function at 0x0c0a3f9c,
 * no extension needed. Two functions: func_0c0a3e7c (a pool-free-register
 * leaf taking only r4, no prologue) and func_0c0a3ee8. func_0c0a3e7c ends
 * with an unconditional tail call to func_0c02a026. */

struct Obj_uc1_04 {
    unsigned char pad0[6];
    unsigned char b6;
    unsigned char pad1[28 - 7];
    short s28;
    unsigned char pad2[52 - 30];
    float f52, f56;
    unsigned char pad3[92 - 60];
    float f92, f96;
    unsigned char pad4[104 - 100];
    float f104, f108;
    unsigned char pad5[0x141 - 112];
    unsigned char b141;
    unsigned char pad6[0x1d2 - 0x142];
    unsigned char b1d2;
};

extern void func_0c02a026(struct Obj_uc1_04 *);
extern void func_0c02a0c4(struct Obj_uc1_04 *, int, int);

void func_0c0a3e7c(struct Obj_uc1_04 *a)
{
    if (a->b141) {
        a->b6++;
        a->f92 = 0.0f;
        a->f96 = 0.0f;
        a->f104 = 0.0f;
        a->f108 = 0.0f;
        a->f92 = (a->b1d2 != 0) ? 15.83333302f : -15.83333302f;
        a->f104 = (a->b1d2 != 0) ? -0.3125f : 0.3125f;
        a->f96 = 6.42857143f;
        a->f108 = -0.5357143f;
        a->s28 = 18;
        a->b141 = 0;
    }
    func_0c02a026(a);
}

void func_0c0a3ee8(struct Obj_uc1_04 *a)
{
    func_0c02a026(a);
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (a->s28 == 0) {
        float *p;

        a->b6++;
        p = &a->f104;
        *p += (a->b1d2 == 0) ? 0.3125f : -0.3125f;
        a->f108 = -0.5357143f;
        func_0c02a0c4(a, 2, 2);
    }
    a->s28--;
}
