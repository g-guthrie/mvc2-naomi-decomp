/* Full C translation unit from 0x0c1d0ad0 through its pool at 0x0c1d108c.
 * All BSR targets are defined in this section. Four byte values remain: the
 * high bytes at 0x0c1d0df9, 0x0c1d0dfb, 0x0c1d0f55, and 0x0c1d0f57 differ
 * because SHC uses r3 for two func_0c037688 tail jumps where retail uses r2.
 * The linked extent and all pools match; 0x0c1d0f5e is alignment padding.
 * Twelve-byte vector copies use __quick_odd_mvn at 0x0c1fb7a0. */
struct Vec3_tu5_03 { float x, y, z; };

struct Obj_tu5_03 {
    unsigned char pad0[4];
    unsigned char b4;
    char b5;
    unsigned char pad1[16 - 6];
    void (*p16)(struct Obj_tu5_03 *);
    unsigned char pad2[28 - 20];
    short w28;
    unsigned char pad3[52 - 30];
    struct Vec3_tu5_03 pos;
    unsigned char pad4[72 - 64];
    int l48;
    unsigned char pad5[80 - 76];
    float f80, f84, f88;
    unsigned char pad6[120 - 92];
    float f120, f124, f128;
    int l84;
    unsigned char pad7[0xcc - 0x88];
    int lcc;
    unsigned char pad8[0xe4 - 0xd0];
    int lE4, lE8, lEC;
    int lf0;
    unsigned char pad9[0x12c - 0xf4];
    unsigned char b12c;
    unsigned char pad10[0x130 - 0x12d];
    short w130;
};

struct Ref_tu5_03 { struct Obj_tu5_03 *p0; };
extern struct Ref_tu5_03 *dat_0c2d9650;
extern struct Obj_tu5_03 *func_0c0374da(int, int, int);
extern void func_0c037688(struct Obj_tu5_03 *);
extern void func_0c1d0ad0(struct Obj_tu5_03 *);
extern void func_0c1d0b98(struct Obj_tu5_03 *);
extern void func_0c1d0d08(struct Obj_tu5_03 *);
extern void func_0c1d0e90(struct Obj_tu5_03 *);
extern void func_0c1d0f70(struct Vec3_tu5_03 *);
extern void func_0c1d0b36(struct Vec3_tu5_03 *);
extern void func_0c1d0ca4(struct Vec3_tu5_03 *);
extern void func_0c1d0e02(struct Vec3_tu5_03 *);
extern void func_0c1d103a(struct Vec3_tu5_03 *);

void func_0c1d0ad0(struct Obj_tu5_03 *a)
{
    switch (a->b4) {
    case 0:
        a->f80 += 0.062f;
        a->f84 += 0.062f;
        if ((a->w28 = a->w28 + 1) >= 8)
            a->b4++;
        break;
    case 1:
        a->f80 -= 0.042f;
        a->f84 -= 0.042f;
        if ((a->w28 = a->w28 + 1) < 20)
            break;
        func_0c037688(a);
        return;
    }
}

void func_0c1d0b36(struct Vec3_tu5_03 *v)
{
    struct Obj_tu5_03 *p;
    if ((p = func_0c0374da(0, 8, 1)) != 0) {
        p->b12c = 1;
        p->p16 = func_0c1d0ad0;
        p->l84 = dat_0c2d9650->p0->lE4;
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
    a->l48 += 0x333;
    a->w28++;
    switch (a->b4) {
    case 0:
        a->f80 += 0.57200003f;
        a->f84 += 0.57200003f;
        if ((a->w28 = a->w28 + 1) >= 7)
            a->b4++;
        break;
    case 1:
        a->f80 -= 0.308f;
        a->f84 -= 0.308f;
        if ((a->w28 = a->w28 + 1) < 20)
            break;
        goto finish;
    }

    switch (a->b4) {
    case 0:
        a->f120 += 0.5f;
        a->f124 += 0.5f;
        a->f128 += 0.5f;
        if (a->w28 >= 2)
            goto advance;
        goto out;
    case 1:
        if (a->w28 >= 12)
            goto advance;
        goto out;
advance:
        a->b5++;
        goto out;
    case 2:
        a->f120 -= 0.125f;
        a->f124 -= 0.125f;
        a->f128 -= 0.125f;
        if (a->w28 < 20)
            return;
finish:
        func_0c037688(a);
        return;
    default:
        goto out;
    }
out:
    ;
}

void func_0c1d0ca4(struct Vec3_tu5_03 *v)
{
    struct Obj_tu5_03 *p;
    if ((p = func_0c0374da(0, 8, 1)) != 0) {
        p->b12c = 1;
        p->p16 = func_0c1d0b98;
        p->l84 = dat_0c2d9650->p0->lE8;
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
        if ((a->w28 = a->w28 + 1) >= 7)
            a->b4++;
        break;
    case 1:
        a->f80 -= 0.2300000042f;
        a->f84 -= 0.2300000042f;
        if ((a->w28 = a->w28 + 1) < 20)
            break;
        goto finish;
    }

    switch (a->b4) {
    case 0:
        a->f120 += 0.5f;
        a->f124 += 0.5f;
        a->f128 += 0.5f;
        if (a->w28 >= 2)
            goto advance;
        goto out;
    case 1:
        if (a->w28 >= 12)
            goto advance;
        goto out;
advance:
        a->b5++;
        goto out;
    case 2:
        a->f120 -= 0.125f;
        a->f124 -= 0.125f;
        a->f128 -= 0.125f;
        if (a->w28 < 20)
            goto out;
finish:
        func_0c037688(a);
        return;
    default:
        goto out;
    }
out:
    ;
}

void func_0c1d0e02(struct Vec3_tu5_03 *v)
{
    struct Obj_tu5_03 *p;
    if ((p = func_0c0374da(0, 8, 1)) != 0) {
        p->b12c = 1;
        p->p16 = func_0c1d0d08;
        p->l84 = dat_0c2d9650->p0->lEC;
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
        if ((a->w28 = a->w28 + 1) >= 20)
            a->b4++;
        break;
    case 1:
        a->f80 -= 0.2300000042f;
        a->f84 -= 0.2300000042f;
        if ((a->w28 = a->w28 + 1) < 20)
            break;
        goto finish;
    }

    switch (a->b4) {
    case 0:
        a->f120 += 0.200000003f;
        a->f124 += 0.200000003f;
        a->f128 += 0.200000003f;
        if (a->w28 >= 5)
            goto advance;
        goto out;
    case 1:
        if (a->w28 >= 15)
            goto advance;
        goto out;
advance:
        a->b5++;
        goto out;
    case 2:
        a->f120 -= 0.200000003f;
        a->f124 -= 0.200000003f;
        a->f128 -= 0.200000003f;
        if (a->w28 < 20)
            goto out;
finish:
        func_0c037688(a);
        return;
    default:
        goto out;
    }
out:
    ;
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
