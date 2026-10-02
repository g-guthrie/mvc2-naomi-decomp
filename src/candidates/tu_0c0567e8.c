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
extern void func_0c02a0c4(struct Obj_0c0567e8 *, int, int);
extern void func_0c043352(struct Obj_0c0567e8 *);
extern void func_0c044df4(struct Obj_0c0567e8 *);
extern void func_0c0346da(struct Obj_0c0567e8 *, int);
extern char func_0c02a026(struct Obj_0c0567e8 *);
extern void func_0c0437b8(struct Obj_0c0567e8 *);

typedef void (*handler_0c0567e8)(struct Obj_0c0567e8 *);
extern handler_0c0567e8 table_0c23f680[];

void func_0c0567e8(struct Obj_0c0567e8 *a)
{
    if (!a->b6) {
        func_0c044cbc(a);
        a->b6++;
        func_0c048bb0(a, 5);
        if (a->b1fe == 0) {
            a->b1a1 = 24;
            a->b1f9 = 1;
            func_0c02a0c4(a, 20, 3);
            a->w1ac = 0;
            a->b19e = 0;
            a->p1c4 = 0;
            dat_0c2f83f8->counts[a->b2]++;
        }
    }
    if (a->b1ff == 3)
        func_0c043352(a);
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    func_0c044df4(a);
    if (a->b14b) {
        func_0c0346da(a, 21);
        a->b14b = 0;
    }
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

void func_0c0568ca(struct Obj_0c0567e8 *a)
{
    table_0c23f680[a->b6](a);
}
