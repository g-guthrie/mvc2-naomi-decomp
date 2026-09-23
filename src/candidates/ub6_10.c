/* Translation unit around 0x0c060f7c: five small callbacks sharing one
 * actor-like object; func_0c060ff6 and func_0c061034 differ only in what
 * they do once armed (a table dispatch vs. a plain continue). The
 * assignment gave size 240 (span ending at 0x0c06106a, mid pool); the
 * real extent runs through one more pool block to 0x0c06108c, where the
 * next function's prologue begins. The full section is 272 bytes and links
 * at retail.
 *
 * func_0c060f7c matches exactly; the trailing pool is nonexact.
 * func_0c060fc0, func_0c060ff6 and func_0c061034 are close (same shape
 * and branches, only a handful of scratch-register choices off, likely a
 * rotation carried from func_0c060f7c's own register use) but not exact.
 * Left as a candidate. */

struct Obj_ub6_10 {
    unsigned char pad0[7];
    unsigned char b7;
    unsigned char pad1[56 - 8];
    float f56;
    unsigned char pad2[96 - 60];
    float f96, f100, f104, f108;
    unsigned char pad3[0x14b - 112];
    unsigned char b14b;
    unsigned char pad4[0x2b0 - 0x14c];
    unsigned char b2b0;
};

typedef void (*handler_ub6_10)(struct Obj_ub6_10 *);

extern handler_ub6_10 dat_0c23ffe0[];
extern signed char func_0c02a026(struct Obj_ub6_10 *);
extern int func_0c03916c(struct Obj_ub6_10 *);
extern void func_0c0437b8(struct Obj_ub6_10 *);

void func_0c060f7c(struct Obj_ub6_10 *a)
{
    float d = 1.071428f;

    if (a->b14b)
        a->f56 += d;
    if (func_0c02a026(a) < 0) {
        a->b7++;
        a->f96 = d;
        a->f108 = -0.066964f;
    }
}

void func_0c060fc0(struct Obj_ub6_10 *a)
{
    if (a->b14b) {
        if (a->f96 > 1.071428f)
            a->f108 = -a->f108;
        if (-1.071428f > a->f96)
            a->f108 = -a->f108;
    }
    func_0c02a026(a);
}

void func_0c060ff6(struct Obj_ub6_10 *a)
{
    unsigned char *p = (unsigned char *)a + 0x2a4;

    if (func_0c03916c(a)) {
        p[12] = 0;
        func_0c0437b8(a);
    } else {
        dat_0c23ffe0[a->b7](a);
    }
}

void func_0c061034(struct Obj_ub6_10 *a)
{
    unsigned char *p = (unsigned char *)a + 0x2a4;

    if (func_0c03916c(a)) {
        p[12] = 0;
        func_0c0437b8(a);
    } else {
        func_0c02a026(a);
    }
}
