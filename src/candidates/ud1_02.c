/* Unit 0x0c1aa314-0x0c1aa498 (seven functions + shared pool). The whole-unit
 * link is 384 bytes, 4 short of retail's 388; func_0c1aa314 is prime suspect
 * (its window matches only 6/46) which misaligns every following function's
 * fixed-address window, even though the source shapes for func_0c1aa354 (a
 * near-verbatim copy of the tu5_05 mirrored-object idiom: xdc/vel struct
 * assignment, b12c set twice, vel.x/vel.y then vel as a whole) match well
 * (92/144) and func_0c1aa43a's fdiv/fmac expression is plausible (7/44, but
 * likely also just misaligned). Tried: assigning the malloc result inline in
 * the if-condition per the "test the assignment" rule (matches retail's
 * bt.s/mov delay-slot shape) - no byte-count change, so the size gap is not
 * from that. Left as a candidate; the exact cause of the size gap is open. */
struct Obj_ud1_02;
typedef void (*handler_ud1_02)(struct Obj_ud1_02 *);

struct Big_ud1_02 {
    unsigned char pad0[0x12c - 0xdc];
    unsigned char b12c;
    unsigned char pad1[0xc0 - (0x12c - 0xdc) - 1];
};
struct Vec3_ud1_02 { float x, y, z; };

struct Obj_ud1_02 {
    unsigned char pad0[1];
    unsigned char b1, b2;
    unsigned char pad1[1];
    unsigned char b4;
    unsigned char pad2[1];
    unsigned char b6;
    unsigned char pad3[16 - 7];
    handler_ud1_02 p16;
    struct Obj_ud1_02 *p20;
    struct Obj_ud1_02 *p24;
    unsigned char pad5[32 - 28];
    unsigned char b32;
    unsigned char pad6[36 - 33];
    unsigned char b36;
    unsigned char pad7[38 - 37];
    unsigned short w38;
    unsigned char pad8[48 - 40];
    unsigned char b48;
    char b49;
    unsigned char pad9[52 - 50];
    float f52, f56;
    unsigned char pad10[80 - 60];
    struct Vec3_ud1_02 vel;
    unsigned char pad11[0xdc - 92];
    struct Big_ud1_02 xdc;
    unsigned char pad12[0x1a3 - 0x19c];
    unsigned char b1a3, b1a4;
};

extern handler_ud1_02 dat_0c2599d0[];
extern struct Obj_ud1_02 *func_0c0374da(int, int);
extern void func_0c029e70(struct Obj_ud1_02 *, int, int);
extern void func_0c037688(struct Obj_ud1_02 *);

void func_0c1aa342(struct Obj_ud1_02 *a);
void func_0c1aa3e4(struct Obj_ud1_02 *a);
void func_0c1aa43a(struct Obj_ud1_02 *a, struct Obj_ud1_02 *sub);

struct Obj_ud1_02 *func_0c1aa314(struct Obj_ud1_02 *param1, unsigned char param2)
{
    struct Obj_ud1_02 *result;
    if ((result = func_0c0374da(0, 3)) != 0) {
        result->p16 = func_0c1aa342;
        result->p24 = param1;
        result->b32 = param2;
    }
    return result;
}

void func_0c1aa342(struct Obj_ud1_02 *a)
{
    dat_0c2599d0[a->b4](a);
}

void func_0c1aa354(struct Obj_ud1_02 *a)
{
    struct Obj_ud1_02 *obj = a->p24;

    a->b4 = a->b4 + 1;
    a->w38 = 0x1c01;
    a->xdc.b12c = 1;
    a->xdc = obj->xdc;
    a->xdc.b12c = 1;
    a->b2 = obj->b2;
    a->b1 = obj->b1;
    a->vel.x = obj->vel.x;
    a->vel.y = obj->vel.y;
    a->b1a3 = obj->b1a3;
    a->b1a4 = obj->b1a4;
    a->b48 = obj->b48;
    a->vel = obj->vel;
    a->b36 = obj->b36;
    a->b49 = -1;
    a->f52 = obj->f52;
    func_0c029e70(a, 27, a->b32 == 0 ? 2 : 1);
    func_0c1aa3e4(a);
}

void func_0c1aa3e4(struct Obj_ud1_02 *a)
{
    struct Obj_ud1_02 *sub = a->p24;

    if ((unsigned char)sub->b6 > 2) {
        a->b36 = sub->b36;
        if (a->b32 != 0)
            a->f56 = sub->f56 + 304.285706f;
        else
            func_0c1aa43a(a, sub);
        return;
    }
    a->b4 = 2;
    a->xdc.b12c = 0;
}

void func_0c1aa426(struct Obj_ud1_02 *a)
{
    a->b4 = a->b4 + 1;
    a->xdc.b12c = 0;
}

void func_0c1aa434(struct Obj_ud1_02 *a)
{
    func_0c037688(a);
}

void func_0c1aa43a(struct Obj_ud1_02 *a, struct Obj_ud1_02 *sub)
{
    float diff = sub->p20->f56 - sub->f56;
    a->f56 = sub->f56 + (float)a->b32 * ((diff + -34.285713f) / 8.0f);
}
