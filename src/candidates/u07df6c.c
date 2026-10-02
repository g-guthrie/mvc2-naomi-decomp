struct Obj_0c0567e8 {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad1[3];
    unsigned char b6;
    unsigned char pad2[28 - 7];
    short s28;
    unsigned char pad2b[52 - 30];
    float f52, f56;
    unsigned char pad3[92 - 60];
    float f92, f96, f100, f104, f108;
    unsigned char pad4[0x141 - 112];
    unsigned char b141;
    unsigned char pad5[0x1d2 - 0x142];
    char b1d2;
};
typedef void (*handler_0c0567e8)(struct Obj_0c0567e8 *);
extern char func_0c02a026(struct Obj_0c0567e8 *);
extern void func_0c02a0c4(struct Obj_0c0567e8 *, int, int);
extern void func_0c08183c(struct Obj_0c0567e8 *);
extern handler_0c0567e8 table_0c2419c8[];

void func_0c07df6c(struct Obj_0c0567e8 *a)
{
    func_0c02a026(a);
    if (a->b141 == 0) {
        float vx, ax;
        a->b6++;
        a->s28 = 24;
        vx = 15.83333302f;
        ax = -0.3125f;
        if (a->b1d2) {
            vx = -15.83333302f;
            ax = 0.3125f;
        }
        a->f92 = vx;
        a->f104 = ax;
    }
}

void func_0c07dfae(struct Obj_0c0567e8 *a)
{
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    func_0c02a026(a);
    if (--a->s28 < 0) {
        float ax;
        a->b6++;
        ax = -0.5208333135f;
        if (a->b1d2)
            ax = 0.5208333135f;
        a->f104 = ax;
        func_0c02a0c4(a, 2, 3);
    }
}

void func_0c07e02c(struct Obj_0c0567e8 *a)
{
    if (func_0c02a026(a) < 0) {
        func_0c08183c(a);
        return;
    } else if (a->b141 == 0) {
        a->f52 += a->f92;
        a->f92 += a->f104;
        a->f56 += a->f96;
        a->f96 += a->f108;
    }
}

void func_0c07e08c(struct Obj_0c0567e8 *a)
{
    table_0c2419c8[a->b6](a);
}
