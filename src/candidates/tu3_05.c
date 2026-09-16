/* Two functions sharing the literal pool at 0x0c1e1690. 202/206 compared bytes
 * match. Not creditable yet: the retail pool runs to 0x0c1e16c0 but
 * config/mapping.json leaves the 2-byte alignment pad at 0x0c1e169a unmapped,
 * so the tool sizes the section at 206 bytes while the compiled unit is 244.
 * Remaining code difference, in func_0c1e1610 at 0x0c1e1640: retail loads the
 * callee into r1 and dat_0c2d964c->p0 into r2; ours uses r2 and r4. */
struct Obj_tu3_05 {
    unsigned char pad0[4];
    unsigned char b4;
    unsigned char pad1[16 - 5];
    void (*p16)(struct Obj_tu3_05 *);
    unsigned char pad2[28 - 20];
    short s28;
    unsigned char pad3[0x84 - 30];
    int l84;
    unsigned char pad4[0xcc - 0x88];
    int l0cc;
    unsigned char pad5[0x12c - 0xd0];
    unsigned char b12c;
};

struct Inner_tu3_05 { unsigned char pad[0x88]; int l88; int l8c; };
struct Outer_tu3_05 { struct Inner_tu3_05 *p0; };

extern struct Outer_tu3_05 *dat_0c2d964c;
extern struct Obj_tu3_05 *func_0c0374da(int, int, int);
extern void func_0c1d91a8(int);
extern void func_0c1d8ff8(int, int);
extern int func_0c1d901e(void);
extern void func_0c1d912a(float *, float *);
extern void func_0c1d917e(float *, float *);

void func_0c1e1610(struct Obj_tu3_05 *a);

void func_0c1e15cc(void)
{
    struct Obj_tu3_05 *a;
    if ((a = func_0c0374da(0, 5, 1)) != 0) {
        a->b12c = 1;
        a->p16 = func_0c1e1610;
        a->l84 = dat_0c2d964c->p0->l88;
        a->l0cc = 0x800;
        func_0c1d91a8(a->l84);
    }
}

void func_0c1e1610(struct Obj_tu3_05 *a)
{
    float y, x;
    switch (a->b4) {
    case 0:
        a->s28 = a->s28 + 1;
        if (a->s28 >= 200)
            a->s28 = 0;
        func_0c1d8ff8(dat_0c2d964c->p0->l8c, a->l84);
        while (func_0c1d901e() == 0) {
            func_0c1d912a(&x, &y);
            y += (float)a->s28 * 2.1445862716350486e-36f;
            func_0c1d917e(&x, &y);
        }
        break;
    }
}
