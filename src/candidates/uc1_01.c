/* Unit at 0x0c075338, eight functions through func_0c075516. The assigned
 * size 570 ends mid pool; the diff tool's derived section correctly extends
 * to 580 bytes through the jmp-table literal at 0x0c075574 that the last four
 * functions' tail calls to func_0c045248 need, so no explicit extent change
 * was required.
 *
 * func_0c0753a6 (the func_0c241234[a->b6](a) dispatcher) matches exactly.
 * func_0c075338, func_0c0753f8 differ only by literal-pool displacements that
 * trace back to func_0c0753b8, which still differs: retail loads each of the
 * four zeroed floats' offsets (92, 96, 104, 108) with a fresh `mov #N,r0`,
 * but every spelling tried here (four discrete statements, chained, reordered,
 * and grouped into 2-float sub-structs at those offsets) makes SHC compute
 * later offsets as `add #delta,r0` off the previous one instead. This looks
 * like the same class of issue as the open "2.0f" and "three shared
 * constants" questions in docs/MATCHING.md: a source shape not yet found.
 * func_0c075430/func_0c075490 (switch on b4c9, cases 0 vs 1-2) match the
 * cmp/eq chain for cases 1 and 2 exactly, but retail fuses the case-0 branch
 * with a `bt.s` whose delay slot preloads the register the shared case-1/2
 * code needs (mov #6,r5), while every switch/if-else spelling tried emits a
 * separate `bt` with no delay slot there. func_0c0754c2/func_0c075516 (three-
 * way switch driving the same tail call) have the analogous case-0 mismatch
 * plus register-choice differences in the case-2 body.
 */

struct Obj_uc1_01 {
    unsigned char pad0[5];
    unsigned char b5, b6, b7;
    unsigned char pad1[0x22 - 8];
    unsigned char b22;
    unsigned char pad2[0x38 - 0x23];
    float f38;
    unsigned char pad3[0x92 - 0x3c];
    struct { float x, y; } vel92;
    unsigned char pad4[0x104 - 0x9c];
    struct { float x, y; } acc104;
    unsigned char pad5[0x141 - 0x10c];
    char b141;
    unsigned char pad6[0x1a3 - 0x142];
    unsigned char b1a3;
    unsigned char pad7[0x1d2 - 0x1a4];
    unsigned char b1d2;
    unsigned char pad8[0x1e9 - 0x1d3];
    unsigned char b1e9;
    unsigned char pad9[0x1f9 - 0x1ea];
    unsigned char b1f9;
    unsigned char pad10[0x41c - 0x1fa];
    float f41c;
    unsigned char pad11[0x4c9 - 0x420];
    char b4c9;
};

typedef void (*handler_uc1_01)(struct Obj_uc1_01 *);
extern handler_uc1_01 dat_0c241234[];

extern char func_0c02a026(struct Obj_uc1_01 *);
extern void func_0c0437b8(struct Obj_uc1_01 *);
extern void func_0c0344a0(struct Obj_uc1_01 *, int);
extern void func_0c191980(struct Obj_uc1_01 *, int);
extern void func_0c043014(struct Obj_uc1_01 *, void *);
extern void func_0c0442fa(struct Obj_uc1_01 *);
extern void func_0c02a0c4(struct Obj_uc1_01 *, int, int);
extern void func_0c045248(struct Obj_uc1_01 *, int);

struct V2_uc1_01 { float x, y, z; };

void func_0c075338(struct Obj_uc1_01 *a)
{
    if (func_0c02a026(a) < 0) {
        func_0c0437b8(a);
    } else {
        if (a->b141 & 1) {
            a->b141 ^= 1;
            func_0c0344a0(a, 32);
            func_0c191980(a, 1);
        }
        if (a->b141 & 2) {
            struct V2_uc1_01 v;

            a->b141 ^= 2;
            v.x = -106.666667f;
            v.y = 102.85714f;
            func_0c043014(a, &v);
        }
    }
}

void func_0c0753a6(struct Obj_uc1_01 *a)
{
    dat_0c241234[a->b6](a);
}

void func_0c0753b8(struct Obj_uc1_01 *a)
{
    a->b6++;
    a->b1f9 = 0;
    a->f38 = a->f41c;
    a->vel92.x = 0.0f;
    a->vel92.y = 0.0f;
    a->acc104.x = 0.0f;
    a->acc104.y = 0.0f;
    func_0c0442fa(a);
    func_0c02a0c4(a, 20, 0);
}

void func_0c0753f8(struct Obj_uc1_01 *a)
{
    if (func_0c02a026(a) < 0) {
        func_0c0437b8(a);
        return;
    }
    if (a->b141) {
        a->b141 = 0;
        func_0c191980(a, 6);
        return;
    }
}

void func_0c075430(struct Obj_uc1_01 *a)
{
    a->b7 = a->b6 = a->b5 = 0;
    switch (a->b4c9) {
    case 0:
        a->b1e9 = 5;
        break;
    case 1:
    case 2:
        a->b1e9 = 6;
        break;
    }
    func_0c045248(a, 29);
}

void func_0c075490(struct Obj_uc1_01 *a)
{
    a->b7 = a->b6 = a->b5 = 0;
    switch (a->b4c9) {
    case 0:
        a->b1e9 = 5;
        break;
    case 1:
    case 2:
        a->b1e9 = 6;
        break;
    }
    func_0c045248(a, 29);
}

void func_0c0754c2(struct Obj_uc1_01 *a)
{
    a->b7 = a->b6 = a->b5 = 0;
    switch (a->b4c9) {
    case 0:
        a->b1e9 = 2;
        a->b1a3 = 1;
        break;
    case 1:
        a->b1e9 = 0;
        a->b1a3 = 1;
        break;
    case 2:
        a->b1e9 = 1;
        a->b1a3 = 1;
        a->b22 = 2;
        if (a->b1d2 == 0)
            a->b22 = 6;
        break;
    }
    func_0c045248(a, 21);
}

void func_0c075516(struct Obj_uc1_01 *a)
{
    a->b7 = a->b6 = a->b5 = 0;
    switch (a->b4c9) {
    case 0:
        a->b1e9 = 2;
        a->b1a3 = 1;
        break;
    case 1:
        a->b1e9 = 0;
        a->b1a3 = 1;
        break;
    case 2:
        a->b1e9 = 1;
        a->b1a3 = 1;
        a->b22 = 2;
        if (a->b1d2 == 0)
            a->b22 = 6;
        break;
    }
    func_0c045248(a, 21);
}
