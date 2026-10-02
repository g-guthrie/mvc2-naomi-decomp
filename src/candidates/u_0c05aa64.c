struct Vec3 { float x, y, z; };
struct Glob_0c2f83f8 { unsigned char pad[0x7c]; short w7c[1]; };

struct Obj {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad1[3];
    unsigned char b6;
    unsigned char pad2[0x34 - 7];
    float f52, f56;
    unsigned char pad3[0x60 - 0x3c];
    float f96;
    unsigned char pad4[0x6c - 0x64];
    float f108;
    unsigned char pad5[0x19e - 0x70];
    unsigned char b19e;
    unsigned char pad6[0x1a1 - 0x19f];
    unsigned char b1a1;
    unsigned char pad7[0x1ac - 0x1a2];
    unsigned short w1ac;
    unsigned char pad8[0x1c4 - 0x1ae];
    int p1c4;
    unsigned char pad9[0x255 - 0x1c8];
    unsigned char b255;
    unsigned char pad10[0x328 - 0x256];
    unsigned char b328;
    unsigned char pad11[0x3f0 - 0x329];
    unsigned char b3f0, b3f1;
    unsigned char pad12[0x3f8 - 0x3f2];
    unsigned char b3f8;
};

typedef void (*handler)(struct Obj *);
extern handler table_0c23f9c0[];
extern void func_0c056bb8(struct Obj *);
extern struct Glob_0c2f83f8 *dat_0c2f83f8;
extern void func_0c02a0c4(struct Obj *, int, int);
extern char func_0c02a026(struct Obj *);
extern void func_0c0429a4(struct Obj *, struct Vec3 *, int);

void func_0c05aa64(struct Obj *a)
{
    table_0c23f9c0[a->b6](a);
}

void func_0c05aa76(struct Obj *a)
{
    if (a->b255 == 6) {
        a->b3f0 = 255;
        a->b3f1 = 16;
    }
    a->b6++;
    func_0c056bb8(a);
    a->b1a1 = 40;
    a->w1ac = 0;
    a->b19e = 0;
    a->p1c4 = 0;
    dat_0c2f83f8->w7c[a->b2]++;
    func_0c02a0c4(a, 21, 11);
}

void func_0c05aad2(struct Obj *a)
{
    struct Vec3 v;

    a->b3f8 = 2;
    a->b328 = 5;
    a->b3f1 = (a->b255 == 6) ? 2 : 0;
    if (func_0c02a026(a) < 0) {
        a->b3f0 = 0;
        a->b3f1 = 0;
        a->b6++;
        a->b1a1 = 40;
        a->w1ac = 0;
        a->b19e = 0;
        a->p1c4 = 0;
        dat_0c2f83f8->w7c[a->b2]++;
        a->f96 = 34.2857132f;
        a->f108 = -0.80357140303f;
        func_0c02a0c4(a, 21, 12);
        v.x = -40.0f;
        v.y = 154.28571f;
        func_0c0429a4(a, &v, 1);
    }
}
