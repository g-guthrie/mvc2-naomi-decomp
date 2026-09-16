/* Unit 0x0c05b474-0x0c05b720: 7 functions, two pairs near-duplicated with
 * different constants (35/50 vs 36/51). func_0c05b508 and func_0c05b532
 * match exactly; func_0c05b6d4 too. func_0c05b474/func_0c05b616 each differ
 * by one anonymous-register choice (r2 vs r3 rebuilding the a->b141 test
 * address) that no tried rephrasing of the surrounding `if` changed.
 * func_0c05b544 differs by a bf/bf.s (delay-slot) choice after the
 * `a->b141==2` compare and a following r2-vs-r4 register swap for storing 0;
 * func_0c05b6aa inherits the same cascade. Every mismatch found so far is a
 * scratch-register pick, not a structural difference. */
struct Obj_ud0_05;

struct Vec2_ud0_05 { float x, y, z; };

struct Obj_ud0_05 {
    unsigned char pad0[7];
    unsigned char b7;
    unsigned char pad1[28 - 8];
    short s28;
    unsigned char pad2[0x141 - 30];
    char b141;
    unsigned char b142;
    unsigned char pad3[0x1a1 - 0x143];
    unsigned char b1a1;
    unsigned char pad4[0x1b4 - 0x1a2];
    struct Obj_ud0_05 *p1b4;
    unsigned char pad5[0x1c8 - 0x1b8];
    struct Obj_ud0_05 *p1c8;
    unsigned char pad6[0x1f6 - 0x1cc];
    unsigned char b1f6;
};

typedef void (*handler_ud0_05)(struct Obj_ud0_05 *);

extern handler_ud0_05 dat_0c23fa20[];
extern handler_ud0_05 dat_0c23fa2c[];
extern char func_0c02a026(struct Obj_ud0_05 *);
extern int func_0c0427f2(struct Obj_ud0_05 *);
extern int func_0c042780(struct Obj_ud0_05 *);
extern void func_0c04b02a(struct Obj_ud0_05 *);
extern void func_0c1ceafe(struct Obj_ud0_05 *, struct Vec2_ud0_05 *);
extern void func_0c0346da(struct Obj_ud0_05 *, int);
extern void func_0c02a0c4(struct Obj_ud0_05 *, int, int);
extern void func_0c0437b8(struct Obj_ud0_05 *);
extern void func_0c0344a0(struct Obj_ud0_05 *, int);
extern void func_0c025900(struct Obj_ud0_05 *, int, int);
extern void func_0c0426c2(struct Obj_ud0_05 *, int);
extern void func_0c0427be(struct Obj_ud0_05 *, int);

void func_0c05b616(struct Obj_ud0_05 *a);

void func_0c05b474(struct Obj_ud0_05 *a)
{
    struct Obj_ud0_05 *p;
    struct Vec2_ud0_05 v;

    func_0c02a026(a);
    if (--a->s28 == 0)
        goto timeout;
    if (func_0c0427f2(a))
        a->b142 = 5;
    if (func_0c042780(a->p1c8))
        goto timeout;
    if (a->b141) {
        a->b141 = 0;
        p = a->p1c8;
        p->p1b4 = a;
        p->b1a1 = 35;
        a->b1a1 = 35;
        func_0c04b02a(a);
        v.x = -106.66666412f;
        v.y = 205.71427917f;
        func_0c1ceafe(a, &v);
        func_0c0346da(a, 12);
    }
    return;
timeout:
    a->b7++;
    func_0c02a0c4(a, 15, 50);
}

void func_0c05b508(struct Obj_ud0_05 *a)
{
    a->b7++;
    func_0c0426c2(a->p1c8, 20);
    func_0c0427be(a, 3);
    a->s28 = 64;
    func_0c05b474(a);
}

void func_0c05b532(struct Obj_ud0_05 *a)
{
    dat_0c23fa20[a->b7](a);
}

void func_0c05b544(struct Obj_ud0_05 *a)
{
    struct Obj_ud0_05 *p;
    struct Vec2_ud0_05 v;

    if (func_0c02a026(a) < 0) {
        func_0c0437b8(a);
        return;
    }
    if (a->b141 == 2) {
        a->b141 = 0;
        v.x = -186.66665649f;
        v.y = 137.14285278f;
        func_0c1ceafe(a, &v);
        func_0c0344a0(a, 32);
        return;
    }
    if (a->b141 == 1) {
        a->b141 = 0;
        func_0c025900(a, 0, 0);
        p = a->p1c8;
        p->p1b4 = a;
        p->b1f6 = 1;
        p->b1a1 = 36;
        a->b1a1 = 36;
    }
}

void func_0c05b616(struct Obj_ud0_05 *a)
{
    struct Obj_ud0_05 *p;
    struct Vec2_ud0_05 v;

    func_0c02a026(a);
    if (--a->s28 == 0)
        goto timeout;
    if (func_0c0427f2(a))
        a->b142 = 5;
    if (func_0c042780(a->p1c8))
        goto timeout;
    if (a->b141) {
        a->b141 = 0;
        p = a->p1c8;
        p->p1b4 = a;
        p->b1a1 = 36;
        a->b1a1 = 36;
        func_0c04b02a(a);
        v.x = -186.66665649f;
        v.y = 137.14285278f;
        func_0c1ceafe(a, &v);
        func_0c0344a0(a, 32);
    }
    return;
timeout:
    a->b7++;
    func_0c02a0c4(a, 15, 51);
}

void func_0c05b6aa(struct Obj_ud0_05 *a)
{
    a->b7++;
    func_0c0426c2(a->p1c8, 20);
    func_0c0427be(a, 3);
    a->s28 = 64;
    func_0c05b616(a);
}

void func_0c05b6d4(struct Obj_ud0_05 *a)
{
    dat_0c23fa2c[a->b7](a);
}
