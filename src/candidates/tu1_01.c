/* Two functions sharing the literal pool at 0x0c18cf4c. 314/336 bytes match.
 * func_0c18ce24 is exact. func_0c18ce40 is instruction-identical until 0x0c18cedc:
 * retail builds 2.0f with `fldi1 fr15; fadd fr15,fr15` and keeps it in fr15;
 * SHC 5.0R31 with the game flags always loads 2.0f from the pool (mova/fmov),
 * so the pool has one extra word and every later pool displacement shifts.
 * MATCHING.md lists fldi1/fadd as open; 2.0f, 1.0f+1.0f, and a local `two = two + two`
 * all emit the pool load. */

struct Sub88_tu1_01 {
    unsigned char pad0[16];
    short s16;
    unsigned char pad1[2];
    int i20;
    int i24;
    char b28;
};

struct Sub2a4_tu1_01 {
    unsigned char pad0[19];
    char b19;
};

struct Obj_tu1_01 {
    unsigned char pad0[5];
    unsigned char b5;
    unsigned char b6;
    unsigned char pad1[28 - 7];
    short s28;
    short s30;
    unsigned char pad2[52 - 32];
    float f52, f56;
    unsigned char pad3[92 - 60];
    float f92, f96;
    unsigned char pad4[0x88 - 100];
    struct Sub88_tu1_01 sub88;
    unsigned char pad5[0x140 - 0x88 - sizeof(struct Sub88_tu1_01)];
    char b140;
    char b141;
    unsigned char pad6[0x158 - 0x142];
    short s158;
    unsigned char pad7[0x2a4 - 0x15a];
    struct Sub2a4_tu1_01 sub2a4;
};

struct Glob_0c2f8338 {
    unsigned char pad0[6];
    char b6;
    unsigned char pad1[59 - 7];
    unsigned char b59;
    unsigned short w60;
};

extern struct Glob_0c2f8338 dat_0c2f8338;

extern char func_0c029fc4(struct Obj_tu1_01 *a);
extern void func_0c133c06(struct Obj_tu1_01 *a);
extern float func_0c1ebd40(int x);
extern float func_0c1ec2c0(int x);
extern float func_0c1ec0e0(float x, float y);

void func_0c18ce24(struct Obj_tu1_01 *a, struct Obj_tu1_01 *b)
{
    if (b->b6 <= 2 && a->b140 == 2)
        func_0c029fc4(a);
}

void func_0c18ce40(struct Obj_tu1_01 *a, struct Obj_tu1_01 *b)
{
    struct Sub88_tu1_01 *s = &a->sub88;
    struct Sub2a4_tu1_01 *t = &b->sub2a4;

    if (s->s16 != b->s158) {
        a->b5 = a->b5 + 1;
        a->s28 = 8;
        return;
    }
    if (a->b141) {
        a->b141 = 0;
        func_0c133c06(a);
    }
    if (dat_0c2f8338.w60 & (1 << dat_0c2f8338.b59))
        return;
    if (!dat_0c2f8338.b6) {
        func_0c029fc4(a);
        if (a->s30 != 0) {
            a->s30 = a->s30 - 1;
            return;
        }
        if (a->b140 == 0) {
            a->s30 = 1;
            s->i20 += s->i24;
            if (t->b19)
                s->i20 = s->i20 + s->i24;
        }
    }
    a->f92 = func_0c1ebd40(s->i20) * func_0c1ec0e0(2.0f, (float)s->b28) / 2.0f;
    a->f96 = func_0c1ec2c0(s->i20) * func_0c1ec0e0(2.0f, (float)s->b28) / 2.0f;
    a->f52 = b->f52 + a->f92;
    a->f56 = b->f56 + a->f96 + 137.14285f;
}
