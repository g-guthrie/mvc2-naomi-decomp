/* Actor state machine at 0x0c1aa884. Five of seven functions exact. func_0c1aa9c4: retail keeps a->p18 in r5 and the global byte in r4, ours the reverse. func_0c1aaa20: retail computes the conditional into fr3 and the zero into fr4 before the add, ours fr4/fr3. Pool float 0x44092492 spelled one ulp low. */
struct Vec3_me00 { float x, y, z; };
struct Blk_me00 {
    unsigned char pad0[0x50];
    unsigned char b12c;
    unsigned char pad1[3];
    unsigned short w130;
    unsigned char pad2[0x60 - 0x56];
    unsigned char b13c, b13d, b13e, b13f;
    unsigned char pad3[0xc0 - 0x64];
};

struct Obj_me00 {
    unsigned char b00, b01, b02, b03, b04, b05, b06, b07;
    unsigned char pad0[0x10 - 8];
    void (*p10)(struct Obj_me00 *);
    unsigned char pad1[0x18 - 0x14];
    struct Obj_me00 *p18;
    unsigned char pad2[0x1e - 0x1c];
    short w1e;
    unsigned char pad3[0x24 - 0x20];
    unsigned char b24;
    unsigned char pad4;
    unsigned short w26;
    unsigned char pad5[0x30 - 0x28];
    unsigned char b30;
    unsigned char pad6[0x34 - 0x31];
    float f34, f38;
    unsigned char pad7[0x50 - 0x3c];
    struct Vec3_me00 v50;
    float f5c, f60;
    unsigned char pad8[0x68 - 0x64];
    float f68, f6c;
    unsigned char pad9[0xdc - 0x70];
    struct Blk_me00 blk_dc;
    unsigned char pad13[0x1a3 - 0x19c];
    unsigned char b1a3, b1a4;
    unsigned char pad14[0x1d0 - 0x1a5];
    unsigned char b1d0;
    unsigned char pad15[0x1e9 - 0x1d1];
    unsigned char b1e9;
    unsigned char pad16[0x411 - 0x1ea];
    unsigned char b411;
    unsigned char pad17[0x41c - 0x412];
    float f41c;
};

struct Glob_me00 { unsigned char pad[0x14]; int l14; };

typedef void (*handler_me00)(struct Obj_me00 *);

extern struct Glob_me00 *dat_0c2d6f84;
extern unsigned char dat_0c2f833e;
extern handler_me00 dat_0c259bf4[];
extern handler_me00 dat_0c259c04[];
extern handler_me00 dat_0c259c48[];
extern handler_me00 dat_0c259bc4[];
extern struct Obj_me00 *func_0c0374da(int a, int b, int c);
extern void func_0c02a0c4(struct Obj_me00 *a, int b, int c);
extern void func_0c1d53e4(struct Obj_me00 *a);
extern void func_0c1abc64(struct Obj_me00 *a, struct Obj_me00 *b, handler_me00 *t);
extern void func_0c1abcd4(struct Obj_me00 *a, struct Obj_me00 *b);
extern char func_0c02a026(struct Obj_me00 *a);

void func_0c1aa8aa(struct Obj_me00 *a);
void func_0c1aa9c4(struct Obj_me00 *a);
void func_0c1aaa86(struct Obj_me00 *a, struct Obj_me00 *b);

struct Obj_me00 *func_0c1aa884(struct Obj_me00 *a)
{
    struct Obj_me00 *q;

    if ((q = func_0c0374da(0, 4, 0)) != 0) {
        q->p10 = func_0c1aa8aa;
        q->p18 = a;
    }
    return q;
}

void func_0c1aa8aa(struct Obj_me00 *a)
{
    dat_0c259bf4[a->b04](a);
}

void func_0c1aa8bc(struct Obj_me00 *a)
{
    struct Obj_me00 *b;

    if (dat_0c2d6f84->l14 == 0x80) {
        a->b04 = 2;
        a->b05 = 0;
        return;
    }
    a->b04++;
    a->w26 = 0x1c03;
    b = a->p18;
    a->blk_dc = b->blk_dc;
    a->blk_dc.b12c = 1;
    a->b02 = b->b02;
    a->b01 = b->b01;
    a->v50.x = b->v50.x;
    a->v50.y = b->v50.y;
    a->b1a3 = b->b1a3;
    a->b1a4 = b->b1a4;
    a->b30 = b->b30;
    a->v50 = b->v50;
    a->b24 = b->b24;
    a->blk_dc.b13c = 24;
    a->blk_dc.b13d = 24;
    a->blk_dc.b13e = 32;
    a->blk_dc.b13f = 32;
    a->b24 = 12;
    func_0c02a0c4(a, 25, 0);
    func_0c1d53e4(a);
    a->w1e = 4;
    if (b->b411) {
        a->b06 = 5;
        a->b00 = 0;
        a->blk_dc.b12c = 0;
    }
    func_0c1aa9c4(a);
}

void func_0c1aa9c4(struct Obj_me00 *a)
{
    struct Obj_me00 *b = a->p18;
    unsigned char m = dat_0c2f833e;

    if (m & (1 << (b->b02 ^ 1)))
        return;
    if (m) {
        if (b->b1d0 == 29 && b->b1e9 == 8)
            return;
    }
    dat_0c259c04[a->b06](a);
}

void func_0c1aaa0e(struct Obj_me00 *a)
{
    dat_0c259c48[a->b07](a);
}

void func_0c1aaa20(struct Obj_me00 *a, struct Obj_me00 *b)
{
    float d;

    a->b07++;
    a->b00 = 1;
    if (b->blk_dc.w130 == 0)
        d = 80.0f;
    else
        d = -80.0f;
    a->f34 = b->f34 + d;
    a->f38 = b->f41c + 548.57141f;
    a->f5c = 0;
    a->f68 = 0;
    a->f60 = 0;
    a->f6c = -0.80357143f;
    func_0c02a0c4(a, 25, 12);
    func_0c1aaa86(a, b);
}

void func_0c1aaa86(struct Obj_me00 *a, struct Obj_me00 *b)
{
    a->f38 += a->f60;
    a->f60 += a->f6c;
    if (b->f41c < a->f38)
        return;
    a->b07++;
    a->f38 = b->f41c;
    a->blk_dc.w130 = b->blk_dc.w130;
    func_0c1abc64(a, b, dat_0c259bc4);
    func_0c1abcd4(a, b);
    func_0c02a026(a);
}
