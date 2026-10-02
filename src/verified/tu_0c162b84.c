/* Assembled by tools/clone.py from verified twins. */
struct Obj_tu5_08 {
    unsigned char pad00[5];
    unsigned char b5;
    unsigned char pad0[1];
    unsigned char b7;
    unsigned char pad1[52 - 8];
    float f52, f56;
    unsigned char pad2[92 - 60];
    float f92, f96, f100, f104, f108;
    unsigned char pad3[0x1c8 - 112];
    struct Obj_tu5_08 *p1c8;
    unsigned char pad4[0x1f7 - 0x1cc];
    unsigned char b1f7;
};
struct Vec3_tu5_08 { float x, y, z; };
extern char func_0c02a026();
extern void func_0c1d4610(struct Obj_tu5_08 *, struct Vec3_tu5_08 *);
extern void func_0c02a0c4();
extern void func_0c044548(struct Obj_tu5_08 *, struct Obj_tu5_08 *);
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
extern void func_0c0346da(struct Obj_0c0567e8 *, int);
extern void func_0c0437b8(struct Obj_0c0567e8 *);
typedef void (*handler_0c0567e8)(struct Obj_0c0567e8 *);
extern handler_0c0567e8 table_0c25162c[];
extern handler_0c0567e8 table_0c251638[];

void func_0c162b84(struct Obj_tu5_08 *a)
{
    if (func_0c02a026(a) < 0) {
        a->b5++;
        func_0c02a0c4(a, 23, 10);
    }
}

void func_0c162bae(struct Obj_0c0567e8 *a)
{
    table_0c25162c[a->b6](a);
}

struct Obj_162 {
    unsigned char pad0[5];
    unsigned char b5;
    unsigned char b6;
    unsigned char pad1[0x18 - 7];
    struct Obj_162 *p18;
    unsigned char pad2[0x22 - 0x1c];
    unsigned char b22;
    unsigned char pad3[52 - 0x23];
    float f52, f56;
    unsigned char pad4[92 - 60];
    float f92, f96, f100, f104, f108;
    unsigned char pad5[0x141 - 112];
    char b141;
    unsigned char pad6[0x1d0 - 0x142];
    unsigned char b1d0;
    unsigned char pad7[0x41c - 0x1d1];
    float f41c;
};
extern void func_0c0344a0();

void func_0c162bc0(struct Obj_162 *a)
{
    func_0c02a026(a);
    if (a->b141 < 0 && a->p18->b1d0 != 20)
        a->b22 = 1;
    if (!a->b141)
        a->b6++;
}

void func_0c162bf8(struct Obj_162 *a)
{
    if (!a->b141)
        func_0c02a026(a);
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (a->f56 < a->p18->f41c) {
        a->b6++;
        a->f56 = a->p18->f41c;
        func_0c0344a0(a->p18, 32);
    }
}

void func_0c162c74(struct Obj_0c0567e8 *a)
{
    table_0c251638[a->b6](a);
}
