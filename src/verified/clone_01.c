/* Assembled by tools/clone.py from verified twins. */
struct Obj_tu1_09 {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad1[3];
    unsigned char b6;
    unsigned char b7;
    unsigned char pad2[56 - 8];
    float f56;
    unsigned char pad3[92 - 60];
    float f92, f96, f100, f104, f108;
    unsigned char pad4[0x141 - 112];
    char b141;
    unsigned char pad5[0x19e - 0x142];
    unsigned char b19e;
    unsigned char pad6[0x1a1 - 0x19f];
    unsigned char b1a1;
    unsigned char pad7[0x1ac - 0x1a2];
    unsigned short w1ac;
    unsigned char pad8[0x1c4 - 0x1ae];
    int p1c4;
    unsigned char pad9[0x1d2 - 0x1c8];
    char b1d2;
    unsigned char pad10[0x1f9 - 0x1d3];
    unsigned char b1f9;
    unsigned char pad11[0x255 - 0x1fa];
    unsigned char b255;
    unsigned char pad12[0x328 - 0x256];
    unsigned char b328;
    unsigned char pad13[0x3f0 - 0x329];
    unsigned char b3f0;
    unsigned char b3f1;
    unsigned char pad14[0x3f8 - 0x3f2];
    unsigned char b3f8;
    unsigned char pad15[0x41c - 0x3f9];
    float f41c;
};
struct Vec_tu1_09 { float x, y, z; };
struct Glob_0c2f83f8 { unsigned char pad[0x7c]; short w7c[1]; };
extern struct Glob_0c2f83f8 *dat_0c2f83f8;
extern void func_0c0442fa(struct Obj_tu1_09 *a);
extern void func_0c0432ca(struct Obj_tu1_09 *a);
extern void func_0c02a0c4(struct Obj_tu1_09 *a, int b, int c);
extern void func_0c02a026(struct Obj_tu1_09 *a);
extern void func_0c0429a4(struct Obj_tu1_09 *a, struct Vec_tu1_09 *v, int m);
extern void func_0c191980(struct Obj_tu1_09 *a, int n);

void func_0c12bf58(struct Obj_tu1_09 *a)
{
    if (a->b255 == 6) {
        a->b3f0 = 255;
        a->b3f1 = 16;
    }
    a->b7++;
    a->b1f9 = 0;
    a->f56 = a->f41c;
    a->f92 = 0.0f;
    a->f96 = 0.0f;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    a->b1a1 = 48;
    a->w1ac = 0;
    a->b19e = 0;
    a->p1c4 = 0;
    dat_0c2f83f8->w7c[a->b2]++;
    func_0c0442fa(a);
    func_0c0432ca(a);
    func_0c02a0c4(a, 22, 0);
}

void func_0c12bfdc(struct Obj_tu1_09 *a)
{
    struct Vec_tu1_09 v;

    a->b3f8 = 2;
    a->b328 = 5;
    a->b3f1 = (a->b255 == 6) ? 2 : 0;
    func_0c02a026(a);
    if (a->b141 & 2) {
        a->b7++;
        a->b141 = 0;
        a->b3f0 = 0;
        a->b3f1 = 0;
        v.x = 3.3333333f;
        v.y = 102.85714263916016f;
        func_0c0429a4(a, &v, 1);
    }
}

void func_0c12c046(struct Obj_tu1_09 *a)
{
    a->b3f8 = 2;
    a->b328 = 5;
    func_0c02a026(a);
    if (a->b141 & 1) {
        a->b6++;
        a->b7 = 0;
        a->f92 = -40.0f;
        if (a->b1d2)
            a->f92 = -a->f92;
        func_0c191980(a, 5);
    }
}
