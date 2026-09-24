/* Actor-state translation unit, including its shared selector and velocity pools. */
#include "objects.h"
extern char func_0c02a026(struct Obj_ub3_05 *);
extern void func_0c0437b8(struct Obj_ub3_05 *);
extern void func_0c0442fa(struct Obj_ub3_05 *);
extern void func_0c02a39a(struct Obj_ub3_05 *, int);
extern void func_0c02a0c4(struct Obj_ub3_05 *, int, int);
struct Obj_ub3_05 {
    unsigned char pad0[2];
    unsigned char b2, b3, b4;
    unsigned char b5;
    unsigned char b6;
    unsigned char b7;
    unsigned char pad1[20];
    short s28;
    unsigned char pad2[2];
    unsigned char b32;
    unsigned char pad3[19];
    float f52;
    float f56;
    unsigned char pad4[32];
    float f92;
    float f96;
    unsigned char pad5[4];
    float f104;
    float f108;
    unsigned char pad6[209];
    unsigned char b141;
    unsigned char pad7[0x19e - 0x142];
    unsigned char b19e;
    unsigned char pad7b[0x1a1 - 0x19f];
    unsigned char b1a1;
    unsigned char pad7c[0x1ac - 0x1a2];
    unsigned short w1ac;
    unsigned char pad7d[0x1c4 - 0x1ae];
    unsigned int p1c4;
    unsigned char pad7e[0x1d2 - 0x1c8];
    unsigned char b1d2;
    unsigned char pad8[36];
    unsigned char b1f7;
    unsigned char pad9[1];
    unsigned char b1f9;
    unsigned char pad9b[8];
    unsigned char b202;
    unsigned char pad10[0x41c - 0x203];
    float f41c;
};
typedef void (*handler_ub3_05)(struct Obj_ub3_05 *);
struct Global_ub3_05 { unsigned char pad[0x7c]; short w7c[1]; };
struct Vec3_ub3_05 { float x, y, z; };
extern struct Global_ub3_05 *dat_0c2f83f8;
extern void func_0c0432ca(struct Obj_ub3_05 *);
extern void func_0c043014(struct Obj_ub3_05 *, void *);
extern handler_ub3_05 table_0c24c2e8[];
void func_0c11548e(struct Obj_ub3_05 *, struct Obj_ub3_05 *);
void func_0c115542(struct Obj_ub3_05 *, struct Obj_ub3_05 *);

void func_0c11543c(struct Obj_ub3_05 *a, struct Obj_ub3_05 *b)
{
    a->b6++;
    func_0c0442fa(a);
    func_0c02a39a(a, 0);
    a->f92 = 0.0f;
    a->f96 = 0.0f;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    a->b1f9 = 0;
    a->f56 = a->f41c;
    func_0c02a0c4(a, 20, 2);
    func_0c11548e(a, b);
}

void func_0c11548e(struct Obj_ub3_05 *a, struct Obj_ub3_05 *b)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

void func_0c1154b0(struct Obj_ub3_05 *a)
{
    table_0c24c2e8[a->b6](a);
}

void func_0c1154c2(struct Obj_ub3_05 *a, struct Obj_ub3_05 *b)
{
    register int arg6;

    a->b6++;
    a->f92 = 0.0f;
    a->f96 = 0.0f;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    a->b1f9 = 0;
    a->f56 = a->f41c;
    func_0c02a39a(a, 0);
    func_0c0442fa(a);
    func_0c0432ca(a);
    arg6 = 8;
    a->b1a1 = 54;
    a->w1ac = 0;
    a->b19e = 0;
    a->p1c4 = 0;
    dat_0c2f83f8->w7c[a->b2]++;
    func_0c02a0c4(a, 21, arg6);
    func_0c115542(a, b);
}

void func_0c115542(struct Obj_ub3_05 *a, struct Obj_ub3_05 *b)
{
    if (func_0c02a026(a) < 0) {
        func_0c0437b8(a);
        return;
    }
    if (a->b141) {
        struct Vec3_ub3_05 v;

        a->b141 = 0;
        v.x = -5.0f;
        v.y = 158.57143f;
        func_0c043014(a, &v);
    }
}
