/* Translation unit from func_0c1d0ad0 through the pool at 0x0c1d106e.
 * Spawners and the first fragments of the tick helpers match. Each tick
 * helper's second switch still inlines rts at three sites where retail
 * bras to one shared rts/nop epilogue (and jmp @r2 for the destroy tail). */

struct Vec3_tu5_03 { float x, y, z; };

struct Src_tu5_03 {
    unsigned char pad[0xe4];
    int le4, le8, lec, lf0;
};

struct Obj_tu5_03 {
    unsigned char pad0[4];
    unsigned char b4;
    unsigned char b5;
    unsigned char pad1[16 - 6];
    void (*p16)(struct Obj_tu5_03 *);
    unsigned char pad2[28 - 20];
    short s28;
    unsigned char pad3[52 - 30];
    struct Vec3_tu5_03 pos;
    unsigned char pad4[72 - 64];
    int l72;
    unsigned char pad5[80 - 76];
    float f80, f84, f88;
    unsigned char pad6[120 - 92];
    float f120, f124, f128;
    int l84;
    unsigned char pad7[0xcc - 0x88];
    int lcc;
    unsigned char pad8[0x12c - 0xd0];
    unsigned char b12c;
    unsigned char pad9[0x130 - 0x12d];
    short w130;
};

struct Ref_tu5_03 { struct Src_tu5_03 *p0; };

extern struct Ref_tu5_03 *dat_0c2d9650;
extern struct Obj_tu5_03 *func_0c0374da(int, int, int);
extern void func_0c037688(struct Obj_tu5_03 *);

void func_0c1d0ad0(struct Obj_tu5_03 *a);
void func_0c1d0b98(struct Obj_tu5_03 *a);
void func_0c1d0d08(struct Obj_tu5_03 *a);
void func_0c1d0e90(struct Obj_tu5_03 *a);
void func_0c1d0fd4(struct Obj_tu5_03 *a);
void func_0c1d103a(struct Vec3_tu5_03 *v);

void func_0c1d0ad0(struct Obj_tu5_03 *a)
{
    switch (a->b4) {
    case 0:
        a->f80 += 0.062f;
        a->f84 += 0.062f;
        if ((a->s28 = a->s28 + 1) >= 8)
            a->b4 = a->b4 + 1;
        break;
    case 1:
        a->f80 -= 0.042f;
        a->f84 -= 0.042f;
        if ((a->s28 = a->s28 + 1) >= 20)
            func_0c037688(a);
        break;
    }
}

void func_0c1d0b36(struct Vec3_tu5_03 *v)
{
    struct Obj_tu5_03 *p;

    if ((p = func_0c0374da(0, 8, 1)) != 0) {
        p->b12c = 1;
        p->p16 = func_0c1d0ad0;
        p->l84 = dat_0c2d9650->p0->le4;
        p->lcc = 0x411;
        p->pos = *v;
        p->f80 = 1.0f;
        p->f84 = 1.0f;
        p->f88 = 1.0f;
        p->f120 = 1.0f;
        p->f124 = 1.0f;
        p->f128 = 1.0f;
    }
}

void func_0c1d0b98(struct Obj_tu5_03 *a)
{
    a->l72 += 0x333;
    a->s28 = a->s28 + 1;
    switch (a->b4) {
    case 0:
        a->f80 += 0.57200003f;
        a->f84 += 0.57200003f;
        if ((a->s28 = a->s28 + 1) >= 7)
            a->b4 = a->b4 + 1;
        break;
    case 1:
        a->f80 -= 0.308f;
        a->f84 -= 0.308f;
        if ((a->s28 = a->s28 + 1) >= 20)
            goto kill;
        break;
    }
    switch (a->b4) {
    case 0:
        a->f120 += 0.5f;
        a->f124 += 0.5f;
        a->f128 += 0.5f;
        if (a->s28 >= 2)
            goto inc_b5;
        break;
    case 1:
        if (a->s28 >= 12) {
inc_b5:
            a->b5 = a->b5 + 1;
        }
        break;
    case 2:
        a->f120 -= 0.125f;
        a->f124 -= 0.125f;
        a->f128 -= 0.125f;
        if (a->s28 >= 20)
            goto kill;
        break;
    }
    return;
kill:
    func_0c037688(a);
}

void func_0c1d0ca4(struct Vec3_tu5_03 *v)
{
    struct Obj_tu5_03 *p;

    if ((p = func_0c0374da(0, 8, 1)) != 0) {
        p->b12c = 1;
        p->p16 = func_0c1d0b98;
        p->l84 = dat_0c2d9650->p0->le8;
        p->lcc = 0x411;
        p->pos = *v;
        p->f80 = 1.0f;
        p->f84 = 1.0f;
        p->f88 = 1.0f;
        p->f120 = 0.0f;
        p->f124 = 0.0f;
        p->f128 = 0.0f;
    }
}

void func_0c1d0d08(struct Obj_tu5_03 *a)
{
    switch (a->b4) {
    case 0:
        a->f80 += 0.4280000031f;
        a->f84 += 0.4280000031f;
        if ((a->s28 = a->s28 + 1) >= 7)
            a->b4 = a->b4 + 1;
        break;
    case 1:
        a->f80 -= 0.2300000042f;
        a->f84 -= 0.2300000042f;
        if ((a->s28 = a->s28 + 1) >= 20)
            goto kill;
        break;
    }
    switch (a->b4) {
    case 0:
        a->f120 += 0.5f;
        a->f124 += 0.5f;
        a->f128 += 0.5f;
        if (a->s28 >= 2)
            goto inc_b5;
        break;
    case 1:
        if (a->s28 >= 12) {
inc_b5:
            a->b5 = a->b5 + 1;
        }
        break;
    case 2:
        a->f120 -= 0.125f;
        a->f124 -= 0.125f;
        a->f128 -= 0.125f;
        if (a->s28 >= 20)
            goto kill;
        break;
    }
    return;
kill:
    func_0c037688(a);
}

void func_0c1d0e02(struct Vec3_tu5_03 *v)
{
    struct Obj_tu5_03 *p;

    if ((p = func_0c0374da(0, 8, 1)) != 0) {
        p->b12c = 1;
        p->p16 = func_0c1d0d08;
        p->l84 = dat_0c2d9650->p0->lec;
        p->lcc = 0x411;
        p->pos = *v;
        p->f80 = 1.0f;
        p->f84 = 1.0f;
        p->f88 = 1.0f;
        p->f120 = 0.0f;
        p->f124 = 0.0f;
        p->f128 = 0.0f;
    }
}

void func_0c1d0e90(struct Obj_tu5_03 *a)
{
    switch (a->b4) {
    case 0:
        a->f80 += 0.45f;
        a->f84 += 0.45f;
        if ((a->s28 = a->s28 + 1) >= 20)
            a->b4 = a->b4 + 1;
        break;
    case 1:
        a->f80 -= 0.2300000042f;
        a->f84 -= 0.2300000042f;
        if ((a->s28 = a->s28 + 1) >= 20)
            goto kill;
        break;
    }
    switch (a->b4) {
    case 0:
        a->f120 += 0.200000003f;
        a->f124 += 0.200000003f;
        a->f128 += 0.200000003f;
        if (a->s28 >= 5)
            goto inc_b5;
        break;
    case 1:
        if (a->s28 >= 15) {
inc_b5:
            a->b5 = a->b5 + 1;
        }
        break;
    case 2:
        a->f120 -= 0.200000003f;
        a->f124 -= 0.200000003f;
        a->f128 -= 0.200000003f;
        if (a->s28 >= 20)
            goto kill;
        break;
    }
    return;
kill:
    func_0c037688(a);
}

void func_0c1d0f70(struct Vec3_tu5_03 *v)
{
    struct Obj_tu5_03 *p;

    if ((p = func_0c0374da(0, 8, 1)) != 0) {
        p->b12c = 1;
        p->p16 = func_0c1d0e90;
        p->l84 = dat_0c2d9650->p0->lf0;
        p->lcc = 0x411;
        p->pos = *v;
        p->f80 = 1.0f;
        p->f84 = 1.0f;
        p->f88 = 1.0f;
        p->f120 = 0.0f;
        p->f124 = 0.0f;
        p->f128 = 0.0f;
    }
}

void func_0c1d0fd4(struct Obj_tu5_03 *a)
{
    func_0c1d0b36(&a->pos);
    func_0c1d0ca4(&a->pos);
    func_0c1d0e02(&a->pos);
    func_0c1d0f70(&a->pos);
    func_0c037688(a);
}

void func_0c1d0ffa(struct Obj_tu5_03 *a, struct Vec3_tu5_03 *v)
{
    struct Vec3_tu5_03 l;

    if (a->w130 != 0)
        l.x = a->pos.x - v->x;
    else
        l.x = a->pos.x + v->x;
    l.y = a->pos.y + v->y;
    l.z = 0.0f;
    func_0c1d103a(&l);
}

void func_0c1d103a(struct Vec3_tu5_03 *v)
{
    struct Obj_tu5_03 *p;

    if ((p = func_0c0374da(0, 8, 1)) != 0) {
        p->b12c = 0;
        p->p16 = func_0c1d0fd4;
        p->pos = *v;
    }
}
