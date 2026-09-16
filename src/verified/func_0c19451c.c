struct Obj_0c19451c {
    unsigned char pad0[1];
    unsigned char b1;
    unsigned char pad1[4 - 2];
    unsigned char b4;
    unsigned char pad2[16 - 5];
    void (*p16)(struct Obj_0c19451c *);
    struct Obj_0c19451c *p20;
    struct Obj_0c19451c *p24;
    unsigned char pad3[32 - 28];
    unsigned char b32;
    unsigned char b33;
    unsigned char pad4[38 - 34];
    short s38;
    unsigned char pad5[0x12c - 40];
    unsigned char b12c;
};

typedef void (*handler_0c19451c)(struct Obj_0c19451c *, struct Obj_0c19451c *);

extern struct Obj_0c19451c *func_0c0374da(int a, int b, int c);
extern handler_0c19451c dat_0c257c9c[];

void func_0c194570(struct Obj_0c19451c *p);

struct Obj_0c19451c *func_0c19451c(struct Obj_0c19451c *p, unsigned char b, unsigned char c)
{
    struct Obj_0c19451c *q;

    if ((q = func_0c0374da((int)p, 3, 2)) != 0) {
        q->p16 = func_0c194570;
        q->p24 = p->p24;
        q->p20 = p;
        q->b1 = p->b1;
        *(&q->b32) = b;
        *(&q->b33) = c;
        q->s38 = 0x0b01;
        q->b12c = 0;
    }
    return q;
}

void func_0c194570(struct Obj_0c19451c *p)
{
    dat_0c257c9c[p->b4](p, p->p24);
}
