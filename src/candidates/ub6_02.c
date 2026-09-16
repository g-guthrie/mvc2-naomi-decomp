/* Translation unit around 0x0c0e9950: six functions from func_0c0e9950 to
 * func_0c0e9c0c, each state-machine style callback on a moving actor. The
 * assignment gave size 754 (span ending at 0x0c0e9c42), but func_0c0e9c0c's
 * final literal at 0x0c0e9c44 lands one word past that end; extended to
 * size 768 so the derived section covers it.
 *
 * func_0c0e9950, func_0c0e99b2, func_0c0e99c8 and func_0c0e99da match
 * exactly, along with the pool at 0x0c0e9a78. func_0c0e9b04's dispatch on
 * b1f9/b1e8 (offsets 0x1f9/0x1e8) shares one call site between its
 * b1f9==2/b1e8==97 case and its b1f9!=2/b1e8==97 case (a `goto call;`
 * here), which got the call-site addresses close but not exact, so
 * func_0c0e9b04 and the downstream func_0c0e9c0c/pools are left as
 * differing. Left as a candidate. */

struct Obj_ub6_02 {
    unsigned char pad0[6];
    unsigned char b6;
    unsigned char pad1[30 - 7];
    short s28;
    unsigned char pad2[56 - 32];
    float f56;
    unsigned char pad3[92 - 60];
    float f92, f96, f100, f104, f108;
    unsigned char pad4[0x140 - 112];
    unsigned char b140, b141;
    unsigned char pad5[0x1d2 - 0x142];
    unsigned char b1d2;
    unsigned char pad6[0x1e8 - 0x1d3];
    unsigned char b1e8;
    unsigned char pad7[0x1f9 - 0x1e9];
    unsigned char b1f9;
    unsigned char pad8[0x1fc - 0x1fa];
    unsigned char b1fc;
    unsigned char pad9[0x201 - 0x1fd];
    unsigned char b201;
    unsigned char pad10[0x41c - 0x202];
    float f41c;
};

typedef void (*handler_ub6_02)(struct Obj_ub6_02 *);

extern handler_ub6_02 dat_0c249aa4[];
extern float dat_0c249ab0[];
extern signed char func_0c02a026(struct Obj_ub6_02 *);
extern void func_0c02a0c4(struct Obj_ub6_02 *, int, int);
extern void func_0c0346da(struct Obj_ub6_02 *, int);
extern void func_0c0438de(struct Obj_ub6_02 *);
extern void func_0c0437b8(struct Obj_ub6_02 *);
extern void func_0c0eb60a(struct Obj_ub6_02 *);
extern void func_0c043324(struct Obj_ub6_02 *);

void func_0c0e9950(struct Obj_ub6_02 *a)
{
    func_0c02a026(a);
    if (a->b140) {
        a->b140 = 0;
        func_0c0346da(a, 22);
    }
    if (--a->s28 > 0 && a->f56 > a->f41c)
        return;
    a->b6++;
    a->f92 = 0.0f;
    a->f96 = 0.0f;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    func_0c02a0c4(a, 11, 10);
}

void func_0c0e99b2(struct Obj_ub6_02 *a)
{
    if (a->b1f9 == 2)
        func_0c0438de(a);
    else
        func_0c0437b8(a);
}

void func_0c0e99c8(struct Obj_ub6_02 *a)
{
    dat_0c249aa4[a->b6](a);
}

void func_0c0e99da(struct Obj_ub6_02 *a)
{
    if (a->f56 < a->f41c) {
        a->f56 = a->f41c;
        a->f92 = 0.0f;
        a->f96 = 0.0f;
        a->f104 = 0.0f;
        a->f108 = 0.0f;
        func_0c0437b8(a);
        func_0c043324(a);
        return;
    }
    if (a->b201)
        func_0c0eb60a(a);
    func_0c02a026(a);
    if (!a->b141)
        return;
    a->b6++;
    a->f92 = 0.0f;
    a->f96 = 0.0f;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    a->b1fc = 0;
    if (a->b1e8 == 97) {
        a->f92 = 10.833333f;
        a->f96 = -6.428571f;
        a->s28 = (short)dat_0c249ab0[0];
    } else if (a->b1e8 == 98) {
        a->f92 = 6.666667f;
        a->f96 = -8.571428f;
        a->s28 = (short)dat_0c249ab0[1];
    } else {
        a->f92 = 2.5f;
        a->f96 = -11.785714f;
        a->s28 = (short)dat_0c249ab0[2];
    }
    if (a->b1d2)
        a->f92 = -a->f92;
    a->b1fc = 0;
}

void func_0c0e9b04(struct Obj_ub6_02 *a)
{
    int r5, r6;

    if (a->b140) {
        a->b140 = 0;
        if (a->b1e8 == 97)
            func_0c0346da(a, 20);
        else if (a->b1e8 == 98)
            func_0c0346da(a, 21);
        else
            func_0c0346da(a, 22);
    }
    func_0c02a026(a);
    a->s28--;
    if (a->s28 != 0 && a->f41c > a->f56)
        return;
    a->b6++;
    a->f92 = 0.0f;
    a->f96 = 0.0f;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    if (a->b1f9 == 2) {
        if (a->b1e8 == 97) {
            r6 = 15;
            r5 = 12;
            goto call;
        }
        r5 = 12;
        if (a->b1e8 == 98)
            r6 = 16;
        else
            r6 = 17;
        func_0c02a0c4(a, r5, r6);
        return;
    }
    if (a->b1e8 == 97) {
        r6 = 12;
        r5 = r6;
call:
        func_0c02a0c4(a, r5, r6);
        return;
    }
    r5 = 12;
    if (a->b1e8 == 98)
        r6 = 13;
    else
        r6 = 14;
    func_0c02a0c4(a, r5, r6);
}

void func_0c0e9c0c(struct Obj_ub6_02 *a)
{
    if (func_0c02a026(a) < 0) {
        if (a->b1f9 == 2)
            func_0c0438de(a);
        else
            func_0c0437b8(a);
    }
}
