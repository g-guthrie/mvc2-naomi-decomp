/* Full retail TU from func_0c1d4814 through pools 0x0c1d4a74 / 0x0c1d4b44.
 * Wrapper and four spawners plus func_0c1d49f8 / 4aa8 / 4af6 match.
 * func_0c1d4a2e: retail `mov.l dat,r2` vs SHC `mov.l dat,r3` on the indexed
 * l2e8 load; extra pool word follows from that. */
struct V3 { float x, y, z; };

struct Obj_tu2_03 {
    unsigned char pad0[0x10];
    void (*p10)(struct Obj_tu2_03 *);
    unsigned char pad1[28 - 0x14];
    short s28;
    short s30;
    unsigned char pad2[52 - 32];
    struct V3 v52;
    unsigned char pad3[80 - 64];
    float f80, f84, f88;
    unsigned char pad4[116 - 92];
    float f116;
    unsigned char pad5[0x84 - 120];
    int l84;
    unsigned char pad6[0xcc - 0x88];
    int lcc;
    unsigned char pad7[0x12c - 0xd0];
    unsigned char b12c;
};

struct Src_tu2_03 {
    unsigned char pad[0x2e8];
    int l2e8;
    unsigned char pad2[0x30c - 0x2ec];
    int l30c;
    int l310;
};

extern struct Obj_tu2_03 *func_0c0374da(int, int, int);
extern void func_0c037688(struct Obj_tu2_03 *);
extern struct Src_tu2_03 **dat_0c2d9650;
extern float dat_0c2614a4[];
extern float dat_0c26151c[];
extern float dat_0c2614e0[];

void func_0c1d49f8(struct Obj_tu2_03 *);
void func_0c1d4a2e(struct Obj_tu2_03 *);
void func_0c1d4aa8(struct Obj_tu2_03 *);
void func_0c1d4af6(struct Obj_tu2_03 *);
void func_0c1d482e(struct V3 *a);
void func_0c1d489a(struct V3 *a);
void func_0c1d4920(struct V3 *a);
void func_0c1d498c(struct V3 *a);

void func_0c1d4814(struct V3 *a)
{
    func_0c1d482e(a);
    func_0c1d489a(a);
    func_0c1d4920(a);
    func_0c1d498c(a);
    goto done;
done:
    return;
}

void func_0c1d482e(struct V3 *a)
{
    struct Obj_tu2_03 *r;

    if ((r = func_0c0374da(0, 7, 1)) != 0) {
        r->b12c = 1;
        r->p10 = func_0c1d49f8;
        r->l84 = (*dat_0c2d9650)->l2e8;
        r->v52 = *a;
        r->v52.y += 137.142853f;
        r->lcc = 49;
        r->s28 = 0;
        r->f116 = 1.0f;
        r->f80 = 1.0f;
        r->f84 = 1.0f;
        r->f88 = 1.0f;
    }
}

void func_0c1d489a(struct V3 *a)
{
    struct Obj_tu2_03 *r;

    if ((r = func_0c0374da(0, 7, 1)) != 0) {
        r->b12c = 1;
        r->p10 = func_0c1d4a2e;
        r->l84 = (*dat_0c2d9650)->l2e8;
        r->v52 = *a;
        r->v52.y += 137.142853f;
        r->lcc = 33;
        r->s28 = 0;
        r->s30 = 0;
        r->f116 = 1.0f;
    }
}

void func_0c1d4920(struct V3 *a)
{
    struct Obj_tu2_03 *r;

    if ((r = func_0c0374da(0, 7, 1)) != 0) {
        r->b12c = 1;
        r->p10 = func_0c1d4aa8;
        r->l84 = (*dat_0c2d9650)->l30c;
        r->v52 = *a;
        r->v52.y += 137.142853f;
        r->lcc = 49;
        r->s28 = 0;
        r->f116 = 1.0f;
        r->f80 = 1.0f;
        r->f84 = 1.0f;
        r->f88 = 1.0f;
    }
}

void func_0c1d498c(struct V3 *a)
{
    struct Obj_tu2_03 *r;

    if ((r = func_0c0374da(0, 7, 1)) != 0) {
        r->b12c = 1;
        r->p10 = func_0c1d4af6;
        r->l84 = (*dat_0c2d9650)->l310;
        r->v52 = *a;
        r->v52.y += 137.142853f;
        r->lcc = 49;
        r->s28 = 0;
        r->f116 = 1.0f;
        r->f80 = 1.0f;
        r->f84 = 1.0f;
        r->f88 = 1.0f;
    }
}

void func_0c1d49f8(struct Obj_tu2_03 *o)
{
    if (o->s28 > 15) {
        func_0c037688(o);
        return;
    }
    o->f116 = dat_0c2614a4[o->s28];
    o->f80 += 0.1000000015f;
    o->f84 += 0.1000000015f;
    o->s28 = o->s28 + 1;
}

void func_0c1d4a2e(struct Obj_tu2_03 *o)
{
    struct Src_tu2_03 *s = *dat_0c2d9650;
    int *p = &s->l2e8;

    o->l84 = p[o->s30];
    if (o->s28 > 15) {
        func_0c037688(o);
        return;
    }
    o->f116 = dat_0c26151c[o->s28];
    o->s28 = o->s28 + 1;
    if (o->s28 < 8)
        o->s30 = o->s30 + 1;
}

void func_0c1d4aa8(struct Obj_tu2_03 *o)
{
    if (o->s28 > 14) {
        func_0c037688(o);
        return;
    }
    o->f116 = dat_0c2614e0[o->s28];
    if (o->s28 < 9) {
        o->f80 -= 0.1000000015f;
        o->f84 += 0.25f;
    }
    if (o->f80 < 0.1000000015f)
        o->f80 = 0.1000000015f;
    o->s28 = o->s28 + 1;
}

void func_0c1d4af6(struct Obj_tu2_03 *o)
{
    if (o->s28 > 14) {
        func_0c037688(o);
        return;
    }
    o->f116 = dat_0c2614e0[o->s28];
    if (o->s28 < 9) {
        o->f80 += 0.25f;
        o->f84 -= 0.1000000015f;
    }
    if (o->f84 < 0.1000000015f)
        o->f84 = 0.1000000015f;
    o->s28 = o->s28 + 1;
}
