/* Unit 0x0c0cbd20 size 648. Two pools: 0x0c0cbe5a (46 bytes, including the
 * 2-byte pad at 0x0c0cbe62) and 0x0c0cbf88 (32 bytes). func_0c0cbe08 bra/bt
 * over the first pool and continues at 0x0c0cbe88; func_0c0cbee0 bra's back
 * to func_0c0cbdbe, so both belong here. Next function is 0x0c0cbfa8.
 * 606/648: first five functions and both pools match; remaining diffs are
 * fmov fr4,fr5 in func_0c0cbe08's continuation and r2 vs r3 on b321 in
 * func_0c0cbee0. */
struct Obj_ub4_03 {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad3[3];
    unsigned char b6;
    unsigned char pad7[28 - 7];
    short s28;
    unsigned char pad30[52 - 30];
    float f52, f56;
    unsigned char pad60[92 - 60];
    float f92, f96, f100, f104, f108;
    unsigned char pad112[321 - 112];
    signed char b321;
    unsigned char pad322[414 - 322];
    unsigned char b414;
    unsigned char pad415[417 - 415];
    unsigned char b417;
    unsigned char pad418[419 - 418];
    unsigned char b419;
    unsigned char pad420[428 - 420];
    unsigned short w428;
    unsigned char pad430[452 - 430];
    unsigned int dw452;
    unsigned char pad456[466 - 456];
    unsigned char b1d2;
    unsigned char pad467[505 - 467];
    unsigned char b505;
    unsigned char pad506[1052 - 506];
    float f1052;
};

struct Counts_ub4_03 { unsigned char pad[124]; short counts[256]; };

extern char func_0c02a026(struct Obj_ub4_03 *);
extern void func_0c02a0c4(struct Obj_ub4_03 *, int, int);
extern void func_0c0437b8(struct Obj_ub4_03 *);
extern void func_0c043324(struct Obj_ub4_03 *);
extern void func_0c0442fa(struct Obj_ub4_03 *);
extern void func_0c048bb0(struct Obj_ub4_03 *, int);
extern void func_0c1af2b8(struct Obj_ub4_03 *);
extern struct Counts_ub4_03 *dat_0c2f83f8;
typedef void (*handler_ub4_03)(struct Obj_ub4_03 *);
extern handler_ub4_03 dat_0c247fb4[];

void func_0c0cbd20(struct Obj_ub4_03 *a)
{
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (a->f56 <= a->f1052) {
        a->b6++;
        a->f56 = a->f1052;
        a->b505 = 0;
        func_0c02a0c4(a, 21, 7);
        func_0c043324(a);
    } else {
        func_0c02a026(a);
    }
}

void func_0c0cbd9c(struct Obj_ub4_03 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

void func_0c0cbdbe(struct Obj_ub4_03 *a)
{
    if (a->b321 > 0) {
        a->b321 = 0;
        a->b417 = a->b419 + 61;
        a->w428 = 0;
        a->b414 = 0;
        a->dw452 = 0;
        dat_0c2f83f8->counts[a->b2]++;
    }
}

void func_0c0cbdf6(struct Obj_ub4_03 *a)
{
    dat_0c247fb4[a->b6](a);
}

void func_0c0cbe08(struct Obj_ub4_03 *a)
{
    float f;

    a->b6++;
    func_0c0442fa(a);
    func_0c048bb0(a, 5);
    a->b417 = a->b419 + 61;
    a->w428 = 0;
    a->b414 = 0;
    a->dw452 = 0;
    dat_0c2f83f8->counts[a->b2]++;
    f = a->b419 ? 4.16666651f : 2.5f;
    if (a->b1d2 != 0) {
        if (a->f92 < 0)
            f = -f;
    } else {
        if (a->f92 <= 0)
            f = -f;
    }
    a->f92 += f;
    a->f104 = 0;
    func_0c1af2b8(a);
    a->s28 = a->b419 * 2 + 1;
    func_0c02a0c4(a, 21, 8);
}

void func_0c0cbee0(struct Obj_ub4_03 *a)
{
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (a->f56 <= a->f1052) {
        a->b6 = 3;
        a->f56 = a->f1052;
        a->b505 = 0;
        func_0c043324(a);
        func_0c02a0c4(a, 1, 3);
    } else {
        if (a->b321 < 0) {
            a->b321 = 0;
            if (--a->s28 < 0) {
                a->b6++;
                func_0c02a0c4(a, 21, 10);
                return;
            }
        }
        func_0c02a026(a);
        func_0c0cbdbe(a);
    }
}
