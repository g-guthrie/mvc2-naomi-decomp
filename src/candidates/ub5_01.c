/* func_0c088548 differs from retail: the four `a->fX = a->fX + *p` address
 * temporaries land in r4 here, retail has them in r1 (mov #imm,r1; add
 * r14,r1, scheduled before r14 is even loaded). Instruction bytes 0x14/128
 * differ (all four address computations plus their fmov @rX loads); the
 * rest of the function, func_0c0885c8 (114/114) and the pool (34/34) match
 * exactly. Tried a persistent pointer, per-statement block scoping and a
 * plain `+=`/`=` member-access form; all four addresses always land in r4,
 * never r1. */
struct Obj_ub5_01 {
    unsigned char pad0[5];
    unsigned char b5;
    unsigned char pad1[1];
    unsigned char b7;
    unsigned char pad2[52 - 8];
    float f52, f56;
    unsigned char pad3[92 - 60];
    float f92, f96;
    unsigned char pad4[104 - 100];
    float f104, f108;
    unsigned char pad5[331 - 112];
    unsigned char b331;
    unsigned char pad6[419 - 332];
    unsigned char b419;
    unsigned char pad7[466 - 420];
    unsigned char b466;
};

extern void func_0c08a46a(struct Obj_ub5_01 *, struct Obj_ub5_01 *);
extern void func_0c19592c(struct Obj_ub5_01 *, int, int);
extern void func_0c02a026(struct Obj_ub5_01 *);
extern void func_0c048bb0(struct Obj_ub5_01 *, int);

void func_0c088548(struct Obj_ub5_01 *a, struct Obj_ub5_01 *b)
{
    {
        float *p = &a->f92;
        a->f52 = a->f52 + *p;
    }
    {
        float *p = &a->f104;
        a->f92 = a->f92 + *p;
    }
    {
        float *p = &a->f96;
        a->f56 = a->f56 + *p;
    }
    {
        float *p = &a->f108;
        a->f96 = a->f96 + *p;
    }
    func_0c02a026(a);
    if (a->b331) {
        int r5;

        a->b7++;
        func_0c08a46a(a, b);
        r5 = 8;
        if (a->b419)
            r5 = 10;
        func_0c19592c(a, r5, 0);
    }
}

void func_0c0885c8(struct Obj_ub5_01 *a, struct Obj_ub5_01 *b)
{
    func_0c02a026(a);
    func_0c08a46a(a, b);
    if (b->b5) {
        a->b7++;
        a->f92 = -3.75f;
        a->f104 = -1.25f;
        a->f96 = -4.28571415f;
        a->f108 = 0.0f;
        if (a->b466) {
            a->f92 = -a->f92;
            a->f104 = -a->f104;
        }
        func_0c048bb0(a, 5);
    }
}
