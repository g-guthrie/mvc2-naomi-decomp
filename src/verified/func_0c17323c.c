struct Obj_0c17323c {
    unsigned char pad0[4];
    unsigned char b4;
    unsigned char pad1[16 - 5];
    void (*p16)(struct Obj_0c17323c *);
    unsigned char pad2[24 - 20];
    struct Obj_0c17323c *p24;
    unsigned char pad3[32 - 28];
    unsigned char b32;
    unsigned char pad4[38 - 33];
    short s38;
    unsigned char pad5[52 - 40];
    float f52, f56;
    unsigned char pad6[0x130 - 60];
    short w130;
    unsigned char pad7[0x2f0 - 0x132];
    int l2f0;
};

typedef void (*handler_0c17323c)(struct Obj_0c17323c *);

extern struct Obj_0c17323c *func_0c0374da(int a, int b, int c);
extern handler_0c17323c dat_0c252a60[];

void func_0c173298(struct Obj_0c17323c *p);

struct Obj_0c17323c *func_0c17323c(struct Obj_0c17323c *p, unsigned char b)
{
    struct Obj_0c17323c *q;
    float dx;

    if ((q = func_0c0374da(0, 1, 0)) != 0) {
        q->p16 = func_0c173298;
        q->p24 = p;
        q->b32 = b;
        q->s38 = 0x2f00;
        dx = 26.666666031f;
        if (p->w130)
            dx = -26.666666031f;
        q->f52 = p->f52 + dx;
        q->f56 = 137.142853f + p->f56;
    }
    return q;
}

void func_0c173298(struct Obj_0c17323c *p)
{
    p->p24->l2f0 = 2;
    dat_0c252a60[p->b4](p);
}
