struct Obj {
    unsigned char pad0[34];
    unsigned char b22;
    unsigned char pad1[0x130 - 35];
    short w130;
    unsigned char pad2[0x1a0 - 0x132];
    unsigned char b1a0;
    unsigned char pad3[0x1d2 - 0x1a1];
    unsigned char b1d2;
    unsigned char pad4[0x1ea - 0x1d3];
    unsigned char b1ea;
    unsigned char pad5[0x1f7 - 0x1eb];
    unsigned char b1f7;
};

struct Vec3 { float x, y, z; };
typedef void (*handler)(struct Obj *);
extern void func_0c025900(struct Obj *, int, int);
extern void func_0c1d4610(struct Obj *, struct Vec3 *);
extern void func_0c048ce6(struct Obj *);
extern void func_0c02a0c4(struct Obj *, int, int);
extern handler dat_0c23fd60[];

void func_0c05ec28(struct Obj *a)
{
    struct Vec3 v;

    if ((a->b22 & 2) == 0) {
        a->b1d2 ^= 1;
        a->w130 = a->b1d2;
    }
    func_0c025900(a, 5, 5);
    v.x = 33.3333321f;
    v.y = 195.0f;
    func_0c1d4610(a, &v);
    a->b1a0 = 10;
    func_0c048ce6(a);
    func_0c02a0c4(a, 15, 1);
}

void func_0c05ec8a(struct Obj *a)
{
    struct Vec3 v;

    if ((a->b22 & 2) == 0) {
        a->b1d2 ^= 1;
        a->w130 = a->b1d2;
    }
    func_0c025900(a, 5, 5);
    v.x = 86.666664124f;
    v.y = 300.0f;
    func_0c1d4610(a, &v);
    a->b1a0 = 10;
    func_0c048ce6(a);
    func_0c02a0c4(a, 15, 2);
}

void func_0c05ecec(struct Obj *a)
{
    struct Vec3 v;

    if ((a->b22 & 2) == 0) {
        a->b1d2 ^= 1;
        a->w130 = a->b1d2;
    }
    func_0c025900(a, 5, 5);
    v.x = -80.0f;
    v.y = 184.28571f;
    v.z = 0.0f;
    func_0c1d4610(a, &v);
    a->b1a0 = 10;
    func_0c048ce6(a);
    func_0c02a0c4(a, 15, 3);
}

void func_0c05ed54(struct Obj *a)
{
    a->b1ea = 1;
    dat_0c23fd60[a->b1f7 & 0x3f](a);
}
