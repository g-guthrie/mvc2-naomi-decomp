/* Translation unit around 0x0c060f7c. */

struct Sub_ub6_10 {
    unsigned char pad[12];
    unsigned char b12;
};

struct Obj_ub6_10 {
    unsigned char pad0[7];
    unsigned char b7;
    unsigned char pad1[56 - 8];
    float f56;
    unsigned char pad2[96 - 60];
    float f96, f100, f104, f108;
    unsigned char pad3[0x14b - 112];
    unsigned char b14b;
    unsigned char pad4[0x2a4 - 0x14c];
    struct Sub_ub6_10 sub2a4[1];
};

typedef void (*handler_ub6_10)(struct Obj_ub6_10 *);

extern handler_ub6_10 dat_0c23ffe0[];
extern signed char func_0c02a026(struct Obj_ub6_10 *);
extern int func_0c03916c(struct Obj_ub6_10 *);
extern void func_0c0437b8(struct Obj_ub6_10 *);

void func_0c060f7c(struct Obj_ub6_10 *a)
{
    float d = 1.07142854f;

    if (a->b14b)
        a->f56 += d;
    if (func_0c02a026(a) < 0) {
        a->b7++;
        a->f96 = d;
        a->f108 = -0.066964284f;
    }
}

void func_0c060fc0(struct Obj_ub6_10 *a)
{
    if (a->b14b) {
        if (a->f96 > 1.07142854f)
            a->f108 = -a->f108;
        if (a->f96 < -1.07142854f)
            a->f108 = -a->f108;
    }
    func_0c02a026(a);
}

void func_0c060ff6(struct Obj_ub6_10 *a)
{
    struct Sub_ub6_10 *p = a->sub2a4;

    if (func_0c03916c(a)) {
        p->b12 = 0;
        func_0c0437b8(a);
    } else {
        dat_0c23ffe0[a->b7](a);
    }
}

void func_0c061034(struct Obj_ub6_10 *a)
{
    struct Sub_ub6_10 *p = a->sub2a4;

    if (func_0c03916c(a)) {
        p->b12 = 0;
        func_0c0437b8(a);
        return;
    }
    func_0c02a026(a);
}
