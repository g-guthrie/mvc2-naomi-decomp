#include "objects.h"

struct Rec_ub3_05 { unsigned char pad[28]; int l28; };
struct Obj_ub3_05 {
    unsigned char pad0[5];
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
    unsigned char pad7[144];
    unsigned char b1d2;
    unsigned char pad8[36];
    unsigned char b1f7;
    unsigned char pad9[10];
    unsigned char b202;
};
typedef void (*handler_ub3_05)(struct Obj_ub3_05 *);
extern char func_0c02a026();
extern void func_0c02a0c4();
extern void func_0c0437b8();
struct Obj_0c0567e8 {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad1[3];
    unsigned char b6;
    unsigned char pad2[52 - 7];
    float f52, f56;
    unsigned char pad3[92 - 60];
    float f92, f96, f100, f104, f108;
    unsigned char pad4[0x14b - 112];
    unsigned char b14b;
    unsigned char pad5[0x19e - 0x14c];
    unsigned char b19e;
    unsigned char pad6[0x1a1 - 0x19f];
    unsigned char b1a1;
    unsigned char pad7[0x1ac - 0x1a2];
    unsigned short w1ac;
    unsigned char pad8[0x1c4 - 0x1ae];
    int p1c4;
    unsigned char pad9[0x1f9 - 0x1c8];
    unsigned char b1f9;
    unsigned char pad10[0x1fe - 0x1fa];
    unsigned char b1fe, b1ff;
};
struct ActorCounts { unsigned char pad[124]; short counts[100]; };
extern struct ActorCounts *dat_0c2f83f8;
extern void func_0c044cbc(struct Obj_0c0567e8 *);
extern void func_0c048bb0(struct Obj_0c0567e8 *, int);
extern void func_0c043352(struct Obj_0c0567e8 *);
extern void func_0c044df4(struct Obj_0c0567e8 *);
extern void func_0c0346da();
typedef void (*handler_0c0567e8)(struct Obj_0c0567e8 *);
extern handler_0c0567e8 table_0c241524[];
extern handler_0c0567e8 table_0c24152c[];
extern void func_0c02a39a(struct Actor *);
extern void func_0c043324(struct Actor *);

void func_0c079c88(struct Actor *a)
{
    func_0c02a026((struct Obj_ub3_05 *)a);
    if (a->f41c < a->f56)
        return;
    a->b6++;
    a->f56 = a->f41c;
    a->b1fc = 0;
    func_0c0346da((struct Obj_0c0567e8 *)a, 52);
    a->b1f9 = 0;
    a->f92 = 0.0f;
    a->f96 = 0.0f;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    func_0c02a0c4((struct Obj_ub3_05 *)a, 21, 14);
    func_0c043324(a);
}

void func_0c079cec(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

void func_0c079d0e(struct Obj_0c0567e8 *a)
{
    table_0c241524[a->b6](a);
}

void func_0c079d20(struct Actor *a)
{
    a->b6++;
    a->f56 = a->f41c;
    a->b1a1 = 49;
    a->w1ac = 0;
    a->b19e = 0;
    a->p1c4 = 0;
    dat_0c2f83f8->counts[a->b2]++;
    func_0c02a0c4((struct Obj_0c0567e8 *)a, 20, 5);
    a->f92 = 0.0f;
    a->f96 = 0.0f;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
}

void func_0c079d7c(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

void func_0c079d9e(struct Obj_0c0567e8 *a)
{
    table_0c24152c[a->b6](a);
}
