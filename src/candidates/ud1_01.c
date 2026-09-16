struct Obj_ud1_01 {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad1[3];
    unsigned char b6;
    unsigned char pad2[45];
    float f52, f56;
    unsigned char pad3[32];
    float f92, f96;
    unsigned char pad4[4];
    float f104, f108;
    unsigned char pad5[209];
    unsigned char b141;
    unsigned char pad6[92];
    unsigned char b19e;
    unsigned char pad7[2];
    unsigned char b1a1;
    unsigned char pad8[10];
    unsigned short w1ac;
    unsigned char pad9[22];
    int x1c4;
    unsigned char pad10[10];
    unsigned char b1d2;
    unsigned char pad11[36];
    unsigned char b1f7;
    unsigned char pad12[1];
    unsigned char b1f9;
};

struct Table_ud1_01 { unsigned char pad[124]; short arr[256]; };

typedef void (*handler_ud1_01)(struct Obj_ud1_01 *);

extern handler_ud1_01 dat_0c23fd70[];
extern handler_ud1_01 dat_0c23fd7c[];
extern struct Table_ud1_01 *dat_0c2f83f8;
extern void func_0c02a39a(struct Obj_ud1_01 *, int);
extern char func_0c02a026(struct Obj_ud1_01 *);
extern void func_0c02a0c4(struct Obj_ud1_01 *, int, int);
extern void func_0c0439c4(struct Obj_ud1_01 *);
extern void func_0c043324(struct Obj_ud1_01 *);

void func_0c05f030(struct Obj_ud1_01 *a)
{
    dat_0c23fd70[a->b6](a);
}

void func_0c05f042(struct Obj_ud1_01 *a)
{
    func_0c02a39a(a, 0);
    a->b6 = a->b6 + 1;
    a->b1f9 = 2;
    if (a->b1d2 != 0)
        a->f92 = 30.0f;
    else
        a->f92 = -30.0f;
    a->f104 = 0.0f;
    a->f96 = 4.285714f;
    a->f108 = -0.803571f;
    a->b1a1 = 55;
    a->w1ac = a->b19e = a->x1c4 = 0;
    dat_0c2f83f8->arr[a->b2] = dat_0c2f83f8->arr[a->b2] + 1;
    func_0c02a0c4(a, 20, 0);
}

void func_0c05f0ba(struct Obj_ud1_01 *a)
{
    func_0c02a026(a);
    a->f52 += a->f92;
    a->f92 = a->f92 + a->f104;
    a->f56 = a->f56 + a->f96;
    a->f96 = a->f96 + a->f108;
    if (func_0c02a026(a) != 0) {
        a->b6 = a->b6 + 1;
        func_0c02a0c4(a, 20, 1);
        func_0c043324(a);
    }
}

void func_0c05f128(struct Obj_ud1_01 *a)
{
    if (func_0c02a026(a) < 0) {
        func_0c02a39a(a, 0);
        func_0c0439c4(a);
        return;
    }
    if (a->b141 != 0)
        a->b141 = 0;
}

void func_0c05f15c(struct Obj_ud1_01 *a)
{
    dat_0c23fd7c[a->b1f7 & 0x3f](a);
}
