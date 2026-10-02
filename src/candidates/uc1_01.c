/* Unit at 0x0c075338, linked size 576. func_0c075338/3a6/430/490 match.
 * func_0c0753b8 still emits add #delta,r0 for the four zeroed floats instead
 * of a fresh mov #N,r0 (and that rotates r2/r3 in func_0c0753f8).
 * func_0c0754c2/516 match the bt.s case-0 shape but keep 0 in r6 and 1 in r5
 * instead of retail's r5=0, r6=1. Pool word at 0x0c07556e is the fallout. */

struct Obj_uc1_01 {
    unsigned char pad0[5];
    unsigned char b5, b6, b7;
    unsigned char pad1[0x22 - 8];
    unsigned char b22;
    unsigned char pad2[0x38 - 0x23];
    float f38;
    unsigned char pad3[0x92 - 0x3c];
    float f92, f96;
    unsigned char pad4[0x104 - 0x9c];
    float f104, f108;
    unsigned char pad5[0x141 - 0x10c];
    char b141;
    unsigned char b1a3;
    unsigned char pad6[0x1a3 - 0x142];
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
    a->f92 = 0.0f;
    a->f96 = 0.0f;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
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
    int six = 6;

    a->b7 = a->b6 = a->b5 = 0;
    switch (a->b4c9) {
    case 0:
        a->b1e9 = 5;
        break;
    case 1:
        a->b1e9 = six;
        break;
    case 2:
        a->b1e9 = six;
        break;
    }
    func_0c045248(a, 29);
}

void func_0c075490(struct Obj_uc1_01 *a)
{
    int six = 6;

    a->b7 = a->b6 = a->b5 = 0;
    switch (a->b4c9) {
    case 0:
        a->b1e9 = 5;
        break;
    case 1:
        a->b1e9 = six;
        break;
    case 2:
        a->b1e9 = six;
        break;
    }
    func_0c045248(a, 29);
}

void func_0c0754c2(struct Obj_uc1_01 *a)
{
    int one = 1;
    int z = 0;
    int two = 2;

    a->b7 = a->b6 = a->b5 = z;
    switch (a->b4c9) {
    case 0:
        a->b1e9 = two;
        a->b1a3 = one;
        break;
    case 1:
        a->b1e9 = z;
        a->b1a3 = one;
        break;
    case 2:
        a->b1e9 = one;
        a->b1a3 = one;
        a->b22 = two;
        if (!a->b1d2)
            a->b22 = 6;
        break;
    }
    func_0c045248(a, 21);
}

void func_0c075516(struct Obj_uc1_01 *a)
{
    int one = 1;
    int z = 0;
    int two = 2;

    a->b7 = a->b6 = a->b5 = z;
    switch (a->b4c9) {
    case 0:
        a->b1e9 = two;
        a->b1a3 = one;
        break;
    case 1:
        a->b1e9 = z;
        a->b1a3 = one;
        break;
    case 2:
        a->b1e9 = one;
        a->b1a3 = one;
        a->b22 = two;
        if (!a->b1d2)
            a->b22 = 6;
        break;
    }
    func_0c045248(a, 21);
}
