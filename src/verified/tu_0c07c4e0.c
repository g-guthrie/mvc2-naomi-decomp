#include "objects.h"

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
typedef void (*handler_0c0567e8)(struct Obj_0c0567e8 *);
extern handler_0c0567e8 table_0c24174c[];
struct Tbl_ub3_01 { unsigned char pad[124]; short arr[100]; };
struct Vec3_0c085ac8 { float x, y, z; };
typedef void (*ActorHandler)(struct Actor *);
extern ActorHandler table_0c2421c8[];
extern char func_0c02a026();
extern void func_0c0437b8();
extern void func_0c02a39a(struct Actor *, int);
extern void func_0c0442fa(struct Actor *);
extern void func_0c0432ca(struct Actor *);
extern void func_0c02a0c4();
extern void func_0c043014(struct Actor *, struct Vec3_0c085ac8 *);
extern void func_0c0346da();
extern void func_0c0438de(struct Actor *);

void func_0c07c4e0(struct Actor *a)
{
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (a->f56 <= a->f41c) {
        a->f56 = a->f41c;
        a->f96 = 0.0f;
        a->f108 = 0.0f;
    }
    if (func_0c02a026(a) < 0)
        func_0c0438de(a);
}

void func_0c07c55a(struct Actor *a)
{
    if (!a->b6) {
        a->b6++;
        func_0c02a0c4(a, 20, 7);
    } else if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

void func_0c07c596(struct Obj_0c0567e8 *a)
{
    table_0c24174c[a->b6](a);
}

void func_0c07c5a8(struct Actor *a)
{
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
    a->b1a1 = 60;
    a->w1ac = 0;
    a->b19e = 0;
    *(unsigned int *)&a->p1c4 = 0;
    dat_0c2f83f8->counts[a->b2]++;
    func_0c02a0c4(a, 20, 8);
}
