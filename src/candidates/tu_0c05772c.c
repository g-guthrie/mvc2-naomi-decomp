struct Rec_0c05772c {
    unsigned char pad[2];
    char b2;
};

struct Obj_0c05772c {
    unsigned char pad0[7];
    unsigned char b7;
    unsigned char pad1[52 - 8];
    float f52, f56;
    unsigned char pad2[92 - 60];
    float f92, f96, f100, f104, f108;
    unsigned char pad3[0x141 - 112];
    unsigned char b141;
    unsigned char pad4[0x1a1 - 0x142];
    unsigned char b1a1;
    unsigned char pad5[0x1a3 - 0x1a2];
    unsigned char b1a3;
    unsigned char pad6[0x1b4 - 0x1a4];
    struct Obj_0c05772c *p1b4;
    unsigned char pad7[0x1c8 - 0x1b8];
    struct Obj_0c05772c *p1c8;
    unsigned char pad8[0x1ea - 0x1cc];
    unsigned char b1ea;
    unsigned char pad9[2];
    unsigned char b1ed;
    unsigned char pad10[0x1f5 - 0x1ee];
    unsigned char b1f5, b1f6;
    unsigned char pad11[0x205 - 0x1f7];
    unsigned char b205;
    unsigned char pad12[0x2a4 - 0x206];
    struct Rec_0c05772c sub2a4;
};

extern char func_0c02a026(struct Obj_0c05772c *);
extern void func_0c02a0c4(struct Obj_0c05772c *, int, int);
extern void func_0c025900(struct Obj_0c05772c *, int, int);
extern unsigned char func_0c044e52(struct Obj_0c05772c *);
extern void func_0c043324(struct Obj_0c05772c *);
extern void func_0c0437b8(struct Obj_0c05772c *);

void func_0c05772c(struct Obj_0c05772c *a)
{
    struct Obj_0c05772c *p;
    struct Rec_0c05772c *s = &a->sub2a4;

    a->b1ea = 1;
    a->b1ed = 2;
    a->b1f5 = 2;
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (func_0c02a026(a) < 0) {
        a->b7++;
        func_0c02a0c4(a, 15, 33);
        return;
    }
    if (a->b141) {
        a->b141 = 0;
        func_0c025900(a, 0, 0);
        p = a->p1c8;
        p->p1b4 = a;
        p->b1f6 = 2;
        p->b1a1 = a->b1a3 + 37;
        a->b1a1 = a->b1a3 + 37;
        a->b205 = s->b2 / 2 + 32;
    }
}

void func_0c0577fc(struct Obj_0c05772c *a)
{
    a->b1ea = 1;
    a->b1ed = 2;
    a->b1f5 = 2;
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (func_0c044e52(a)) {
        func_0c043324(a);
        a->b7++;
        func_0c02a0c4(a, 15, 34);
    }
}

void func_0c057876(struct Obj_0c05772c *a)
{
    if (func_0c02a026(a) < 0) {
        a->b205 = 0;
        func_0c0437b8(a);
    }
}
