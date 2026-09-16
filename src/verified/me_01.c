/* Actor state machine at 0x0c1aab2c: seven handlers of the object in me_00. */
struct Blk_me01 {
    unsigned char pad0[0x50];
    unsigned char b12c;
    unsigned char pad1[3];
    unsigned short w130;
    unsigned char pad2[0x60 - 0x56];
    unsigned char b13c, b13d, b13e, b13f;
    unsigned char b140, b141;
    unsigned char pad3[0xc0 - 0x66];
};

struct Obj_me01 {
    unsigned char b00, b01, b02, b03, b04, b05, b06, b07;
    unsigned char pad0[0x10 - 8];
    void (*p10)(struct Obj_me01 *);
    unsigned char pad1[0x18 - 0x14];
    struct Obj_me01 *p18;
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
    struct Vec3_me01 v50;
    float f5c, f60;
    unsigned char pad8[0x68 - 0x64];
    float f68, f6c;
    unsigned char pad9[0xdc - 0x70];
    struct Blk_me01 blk_dc;
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

typedef void (*handler_me01)(struct Obj_me01 *);

extern handler_me01 dat_0c259c58[];
extern int func_0c1abcd4(struct Obj_me01 *a);
extern char func_0c02a026(struct Obj_me01 *a);
extern void func_0c02a0c4(struct Obj_me01 *a, int b, int c);
extern int func_0c028708(struct Obj_me01 *a);

void func_0c1aac00(struct Obj_me01 *a, struct Obj_me01 *b);

void func_0c1aab2c(struct Obj_me01 *a)
{
    if (func_0c1abcd4(a) == 0)
        a->b07++;
}

void func_0c1aab4a(struct Obj_me01 *a)
{
    if (func_0c02a026(a) < 0) {
        a->b06 = 2;
        a->b07 = 0;
    }
}

void func_0c1aab68(struct Obj_me01 *a, struct Obj_me01 *b)
{
    if (!b->b00 || b->b411)
        return;
    a->b06 = 2;
    a->b07 = 0;
    a->b00 = 1;
    a->blk_dc.b12c = 1;
    a->f34 = b->f34 + (b->blk_dc.w130 == 0 ? 80.0f : -80.0f);
    a->f38 = b->f41c;
    func_0c02a0c4(a, 25, 0);
}

void func_0c1aabb4(struct Obj_me01 *a)
{
    dat_0c259c58[a->b07](a);
}

void func_0c1aabc6(struct Obj_me01 *a, struct Obj_me01 *b)
{
    a->b07++;
    a->f5c = 0;
    a->f68 = 0;
    a->f60 = 17.142857f;
    a->f6c = 0;
    func_0c02a0c4(a, 25, 15);
    func_0c1aac00(a, b);
}

void func_0c1aac00(struct Obj_me01 *a, struct Obj_me01 *b)
{
    func_0c02a026(a);
    if (a->blk_dc.b141)
        a->b07++;
}

void func_0c1aac1e(struct Obj_me01 *a)
{
    a->f38 += a->f60;
    a->f60 += a->f6c;
    if (func_0c028708(a) == 0) {
        a->b06 = 5;
        a->b07 = 0;
        a->b00 = 0;
        a->blk_dc.b12c = 0;
    }
}
