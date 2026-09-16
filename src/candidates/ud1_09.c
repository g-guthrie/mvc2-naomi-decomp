/* func_0c077be0, func_0c077bf2 and func_0c077c26 match exactly (18/18,
 * 52/52, 96/96). func_0c077bac (47/52) differs only by scratch-register
 * choice (retail: r2 then r3; ours: r3 then r1) for the trailing
 * "if (a->b141) a->b141 = 0;" -- tried "!(x==0)" in place of "x!=0", no
 * change. -6.428571f (0xc0cdb6db) and -0.2678571f (0xbe892492) have no
 * decimal spelling tools/float_literal.py can find; used the closest
 * 7-digit spelling (both landed exact here, so not an issue after all). */
typedef void (*handler_ud1_09)(struct Obj_ud1_09 *);

struct Obj_ud1_09 {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad1[6 - 3];
    unsigned char b6;
    unsigned char pad2[0x1c - 7];
    short s1c;
    unsigned char pad3[0x34 - 0x1e];
    float f34, f38;
    unsigned char pad4[0x5c - 0x3c];
    float f5c, f60;
    unsigned char pad5[0x6c - 0x64];
    float f6c;
    unsigned char pad6[0x12c - 0x70];
    unsigned char b12c;
    unsigned char pad7[0x141 - 0x12d];
    unsigned char b141;
};

extern char func_0c02a026(struct Obj_ud1_09 *);
extern void func_0c02a39a(struct Obj_ud1_09 *, int);
extern void func_0c0439c4(struct Obj_ud1_09 *);
extern handler_ud1_09 dat_0c077c98[];
extern void func_0c076980(struct Obj_ud1_09 *);
extern unsigned char dat_0c2f8338;
extern void func_0c02a0c4(struct Obj_ud1_09 *, int, int);

void func_0c077bac(struct Obj_ud1_09 *a)
{
    if (func_0c02a026(a) < 0) {
        func_0c02a39a(a, 0);
        func_0c0439c4(a);
        return;
    }
    if (a->b141 != 0)
        a->b141 = 0;
}

void func_0c077be0(struct Obj_ud1_09 *a)
{
    dat_0c077c98[a->b6](a);
}

void func_0c077bf2(struct Obj_ud1_09 *a)
{
    func_0c076980(a);
    if (dat_0c2f8338 < 2) {
        a->b12c = 0;
    } else {
        a->b6 = a->b6 + 1;
        a->b12c = 1;
    }
}

void func_0c077c26(struct Obj_ud1_09 *a)
{
    a->b6 = a->b6 + 1;
    a->s1c = (short)(int)a->f34;
    a->f38 = 128.0f;
    if (a->b2 != 0) {
        a->f34 += 213.33333f;
        a->f5c = -8.33333302f;
    } else {
        a->f34 += -213.33333f;
        a->f5c = 8.33333302f;
    }
    a->f60 = -6.428571f;
    a->f6c = -0.2678571f;
    func_0c02a0c4(a, 0x12, 0);
}
