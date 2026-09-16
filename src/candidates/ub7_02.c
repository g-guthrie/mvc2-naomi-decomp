/* Translation unit whose real first function is func_0c0c6590, not
 * 0x0c0c658c as the assigned span implied: 0x0c0c658c-0x0c0c6590 is 4 bytes
 * of data (the tail of the previous unit's pool) that the reviewed mapping
 * mislabels as this unit's code. Naming the first function at its true
 * address (0x0c0c6590) makes the tool derive the correct 334-byte section
 * (0x0c0c6590-0x0c0c66de), matching the assigned size once the 4 leading
 * bytes are excluded.
 *
 * 330/334 bytes match. func_0c0c6590, func_0c0c669e and func_0c0c66c6 are
 * exact. func_0c0c65f6 and func_0c0c663e each differ by one instruction: the
 * final tail-jmp to func_0c02a026 loads it into r3 in one function and r2 in
 * the other in retail, but the compiler swaps which function gets which
 * register from what's written here. This is the r2/r3 scratch-rotation
 * issue in docs/MATCHING.md, but here the predecessor function *is* in the
 * file and matches exactly, and the mismatch happens in an else-branch that
 * is independent of (never reached from) the preceding if-branch's own
 * register use -- so the rotation carry docs/MATCHING.md describes is not
 * simply "last register the previous statement used". */

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
        a->f108 = -0.8035714f;
        func_0c02a0c4(a, 18, 2);
    } else {
        func_0c02a026(a);
    }
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
    } else {
        func_0c02a026(a);
    }
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
