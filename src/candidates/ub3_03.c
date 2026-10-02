/* The 312-byte section links at retail. func_0c091608 (144 bytes) and the
 * 32-byte pool match exactly. func_0c091698 matches in
 * structure, branch targets and byte count (136/136 expected) but differs
 * from retail only by a scratch-register swap (r2<->r3) at three anonymous
 * temporaries: the (a->w1fa & 0x0c00) test, the a->b1fe test, and the
 * mov #2,rN before storing a->b1f7 in the b1f9==2 case. 125/136 bytes equal;
 * every other byte, including all branch displacements, matches. */
struct Obj_ub3_03 {
    unsigned char pad0[52];
    float f52;
    float f56;
    unsigned char pad1[32];
    float f92;
    float f96;
    unsigned char pad2[4];
    float f104;
    float f108;
    unsigned char pad3[307];
    char b1a3;
    unsigned char pad4[83];
    unsigned char b1f7;
    unsigned char pad5[1];
    unsigned char b1f9;
    unsigned short w1fa;
    unsigned char pad6[2];
    char b1fe;
    unsigned char pad7[541];
    float f41c;
};

extern char func_0c02a026(struct Obj_ub3_03 *);
extern void func_0c0438de(struct Obj_ub3_03 *);
extern void func_0c044f1c(struct Obj_ub3_03 *);
extern int func_0c037d54(struct Obj_ub3_03 *);

void func_0c091608(struct Obj_ub3_03 *a)
{
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (func_0c02a026(a) < 0) {
        func_0c0438de(a);
        return;
    }
    if (a->f56 < a->f41c) {
        a->f56 = a->f41c;
        a->b1f9 = 0;
        a->f92 = 0.0f;
        a->f96 = 0.0f;
        a->f104 = 0.0f;
        a->f108 = 0.0f;
        func_0c044f1c(a);
    }
}

int func_0c091698(struct Obj_ub3_03 *a)
{
    int r;

    if (a->b1f9 == 1)
        return 0;
    if (!(0x0c00 & a->w1fa))
        return 0;
    if (!a->b1a3)
        return 0;
    if (!a->b1fe) {
        if (a->b1f9 != 2) {
            if ((r = func_0c037d54(a)) != 0)
                a->b1f7 = 0;
            return r;
        } else {
            if ((r = func_0c037d54(a)) != 0)
                a->b1f7 = 2;
            return r;
        }
    }
    if (a->b1f9 == 2)
        return 0;
    if ((r = func_0c037d54(a)) != 0)
        a->b1f7 = 1;
    return r;
}
