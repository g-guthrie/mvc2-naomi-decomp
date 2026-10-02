struct Obj {
    unsigned char pad0[34];
    unsigned char b22;
    unsigned char pad1[56 - 35];
    float f56;
    unsigned char pad2[0x130 - 60];
    short w130;
    unsigned char pad3[0x1a0 - 0x132];
    unsigned char b1a0;
    unsigned char pad3b[0x1a3 - 0x1a1];
    unsigned char b1a3;
    unsigned char pad4[0x1d2 - 0x1a4];
    unsigned char b1d2;
    unsigned char pad5[0x1f7 - 0x1d3];
    unsigned char b1f7;
    unsigned char pad6[0x1fa - 0x1f8];
    unsigned short w1fa;
    unsigned char pad7[0x1fe - 0x1fc];
    char b1fe;
};
struct Vec3 { float x, y, z; };
typedef void (*handler)(struct Obj *);
extern struct Obj *func_0c037d54(struct Obj *);
extern handler dat_0c249c08[];
extern void func_0c025900(struct Obj *, int, int);
extern void func_0c1d4610(struct Obj *, struct Vec3 *);
extern void func_0c048ce6(struct Obj *);
extern void func_0c02a0c4(struct Obj *, int, int);

struct Obj *func_0c0eb978(struct Obj *p)
{
    int z;
    struct Obj *q;

    z = 0;
    if (!(p->b22 = (p->w1fa & 0x1c00) >> 10))
        return (struct Obj *)z;
    if (p->b1fe)
        return (struct Obj *)z;
    if (p->b1a3 != 1)
        return (struct Obj *)z;
    if (p->f56 > 137.142853f) {
        if ((q = func_0c037d54(p)) != 0) {
            p->b1f7 = 2;
            return q;
        }
    }
    return (struct Obj *)z;
}

void func_0c0eb9d8(struct Obj *p)
{
    dat_0c249c08[p->b1f7 & 63](p);
}

void func_0c0eb9f0(struct Obj *a)
{
    struct Vec3 v;

    if ((a->b22 & 1) == 0) {
        a->b1d2 ^= 1;
        a->w130 = a->b1d2;
    }
    func_0c025900(a, 5, 5);
    v.x = -90.0f;
    v.y = 162.857132f;
    func_0c1d4610(a, &v);
    a->b1a0 = 10;
    func_0c048ce6(a);
    func_0c02a0c4(a, 15, 1);
}

void func_0c0eba52(struct Obj *a)
{
    struct Vec3 v;

    if ((a->b22 & 2) == 0) {
        a->b1d2 ^= 1;
        a->w130 = a->b1d2;
    }
    func_0c025900(a, 5, 5);
    v.x = -90.0f;
    v.y = 162.857132f;
    func_0c1d4610(a, &v);
    a->b1a0 = 10;
    func_0c048ce6(a);
    func_0c02a0c4(a, 15, 6);
}
