/* Translation unit whose real first function is func_0c0c6590, not
 * 0x0c0c658c as the assigned span implied: the preceding 4 bytes are data
 * from the previous pool. The reviewed section spans 360 bytes from
 * 0x0c0c6590 through 0x0c0c66f8 and matches retail. func_0c0c65f6 and
 * func_0c0c663e take an early return after the then-tail-call so SHC
 * allocates r3 then r2 for the two leftover jmp sites; an else-clause
 * reused r2 for both. */

struct Obj_ub7_02 {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad1[2];
    unsigned char b5, b6, b7;
    unsigned char pad2[28 - 8];
    short s28;
    unsigned char pad3[52 - 30];
    float f52, f56;
    unsigned char pad4[92 - 60];
    float f92;
    float f96;
    float f100;
    float f104;
    float f108;
    unsigned char pad6[304 - 112];
    unsigned short w304;
    unsigned char pad7[466 - 306];
    unsigned char b466;
    unsigned char pad8[1052 - 467];
    float f1052;
};

typedef void (*handler_ub7_02)(struct Obj_ub7_02 *);

extern handler_ub7_02 dat_0c247838[];
extern void func_0c1accc0(struct Obj_ub7_02 *, int);
extern void func_0c02a0c4(struct Obj_ub7_02 *, int, int);
extern signed char func_0c02a026(struct Obj_ub7_02 *);

void func_0c0c6590(struct Obj_ub7_02 *a)
{
    float d;

    a->b7++;
    a->s28 = 93;
    a->f100 = a->f52;
    d = 616.66663f;
    if (a->b2 == 0) {
        a->b466 = 0;
        a->f52 += d;
    } else {
        a->b466 = 1;
        a->f52 -= d;
    }
    a->w304 = a->b466;
    a->f56 = a->f1052;
    func_0c1accc0(a, 11);
    func_0c02a0c4(a, 18, 0);
}

void func_0c0c65f6(struct Obj_ub7_02 *a)
{
    if (--a->s28 == 0) {
        a->b7++;
        a->b466 ^= 1;
        a->w304 = a->b466;
        a->f92 = 0.0f;
        a->f104 = 0.0f;
        a->f96 = 0.0f;
        a->f108 = -0.80357140303f;
        func_0c02a0c4(a, 18, 2);
        return;
    }
    func_0c02a026(a);
}

void func_0c0c663e(struct Obj_ub7_02 *a)
{
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (a->f56 <= a->f1052) {
        a->b7++;
        a->f56 = a->f1052;
        func_0c02a0c4(a, 18, 3);
        return;
    }
    func_0c02a026(a);
}

void func_0c0c669e(struct Obj_ub7_02 *a)
{
    if (func_0c02a026(a) < 0) {
        a->b5++;
        a->b6 = 0;
        a->f52 = a->f100;
    }
}

void func_0c0c66c6(struct Obj_ub7_02 *a)
{
    dat_0c247838[a->b7](a);
}
