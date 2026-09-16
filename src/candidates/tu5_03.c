/* Four functions sharing the literal pool at 0x0c1d106e. 279/284 bytes match.
 * func_0c1d0fd4 differs in three words: retail calls func_0c1d0b36,
 * func_0c1d0ca4 and func_0c1d0e02 with bsr, so those functions belong to the
 * same retail translation unit (they sit before this pool with pools of their
 * own). Declaring them extern would emit mov.l+jsr and shift every later
 * function, so the three calls are written as calls to func_0c1d0f70 (also a
 * bsr) to keep the layout; only the bsr targets differ.
 * The 12-byte struct copies call the runtime helper __quick_odd_mvn at
 * 0x0c1fb7a0: pass --import __quick_odd_mvn=0x0c1fb7a0. */

struct Vec3_tu5_03 { float x, y, z; };

struct Obj_tu5_03 {
    unsigned char pad0[16];
    void (*p16)(struct Obj_tu5_03 *);
    unsigned char pad1[52 - 20];
    struct Vec3_tu5_03 pos;
    unsigned char pad2[80 - 64];
    float f80, f84, f88;
    unsigned char pad3[120 - 92];
    float f120, f124, f128;
    int l84;
    unsigned char pad4[0xcc - 0x88];
    int lcc;
    unsigned char pad5[0xf0 - 0xd0];
    int lf0;
    unsigned char pad6[0x12c - 0xf4];
    unsigned char b12c;
    unsigned char pad7[0x130 - 0x12d];
    short w130;
};

struct Ref_tu5_03 { struct Obj_tu5_03 *p0; };

extern struct Ref_tu5_03 *dat_0c2d9650;
extern struct Obj_tu5_03 *func_0c0374da(int, int, int);
extern void func_0c1d0e90(struct Obj_tu5_03 *);
extern void func_0c037688(struct Obj_tu5_03 *);

void func_0c1d0fd4(struct Obj_tu5_03 *a);
void func_0c1d103a(struct Vec3_tu5_03 *v);

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
    func_0c1d0f70(&a->pos); /* retail: bsr func_0c1d0b36 */
    func_0c1d0f70(&a->pos); /* retail: bsr func_0c1d0ca4 */
    func_0c1d0f70(&a->pos); /* retail: bsr func_0c1d0e02 */
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
