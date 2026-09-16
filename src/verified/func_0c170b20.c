struct Obj_0c170b20 {
    unsigned char pad0[1];
    unsigned char b1;
    unsigned char pad1[4 - 2];
    unsigned char b4;
    unsigned char pad2[16 - 5];
    void (*p16)(struct Obj_0c170b20 *);
    struct Obj_0c170b20 *p20;
    struct Obj_0c170b20 *p24;
    unsigned char pad3[32 - 28];
    unsigned char b32;
    unsigned char b33;
    unsigned char pad4[1];
    unsigned char b35;
    unsigned char pad5[38 - 36];
    short s38;
};

typedef void (*handler2_0c170b20)(struct Obj_0c170b20 *, struct Obj_0c170b20 *);
typedef void (*handler_0c170b20)(struct Obj_0c170b20 *);

extern struct Obj_0c170b20 *func_0c0374da(int a, int b, int c);
extern handler2_0c170b20 dat_0c2527ec[];
extern handler_0c170b20 dat_0c2527f8[];

void func_0c170bca(struct Obj_0c170b20 *p);
void func_0c170be0(struct Obj_0c170b20 *p);

struct Obj_0c170b20 *func_0c170b20(struct Obj_0c170b20 *p, unsigned char b, unsigned char c)
{
    struct Obj_0c170b20 *q;

    if ((q = func_0c0374da(0, 1, 0)) != 0) {
        q->p16 = func_0c170bca;
        q->s38 = 0x2e00;
        q->p24 = p;
        q->b1 = p->b1;
        *(&q->b32) = b;
        *(&q->b33) = c;
    }
    return q;
}

struct Obj_0c170b20 *func_0c170b6e(struct Obj_0c170b20 *p, unsigned char b, unsigned char c, unsigned char d)
{
    struct Obj_0c170b20 *q;

    if ((q = func_0c0374da(0, 1, 1)) != 0) {
        q->p16 = func_0c170bca;
        q->s38 = 0x2e00;
        q->p24 = p->p24;
        q->p20 = p;
        q->b1 = p->b1;
        *(&q->b32) = b;
        *(&q->b33) = c;
        q->b35 = d;
    }
    return q;
}

void func_0c170bca(struct Obj_0c170b20 *p)
{
    dat_0c2527ec[p->b32](p, p->p24);
}

void func_0c170be0(struct Obj_0c170b20 *p)
{
    dat_0c2527f8[p->b4](p);
}
