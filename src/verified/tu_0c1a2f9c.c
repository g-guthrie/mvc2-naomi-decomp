struct Vec3_tu { float x, y, z; };
struct Big_tu {
    unsigned char pad0[0x12c - 0xdc];
    unsigned char b12c;
    unsigned char pad1[0x19c - 0x12d];
};

struct Obj_tu {
    unsigned char pad0[1];
    unsigned char b1, b2;
    unsigned char pad1[1];
    unsigned char b4;
    unsigned char b6;
    unsigned char pad3[16 - 7];
    void (*p16)(struct Obj_tu *);
    unsigned char pad3b[24 - 20];
    struct Obj_tu *p24;
    unsigned char pad4[32 - 28];
    unsigned char b32;
    unsigned char b33;
    unsigned char pad5[36 - 34];
    unsigned char b36;
    unsigned char pad6[38 - 37];
    short s38;
    unsigned char pad7[48 - 40];
    unsigned char b48;
    unsigned char pad8[80 - 49];
    struct Vec3_tu vel;
    unsigned char pad9[0xdc - 92];
    struct Big_tu xdc;
    unsigned char pad10[0x1a3 - 0x19c];
    unsigned char b1a3, b1a4;
};

typedef void (*handler_tu)(struct Obj_tu *);

extern struct Obj_tu *func_0c0374da(int a, int b, int c);
extern handler_tu dat_0c258f64[];
extern handler_tu table_0c258f74[];
extern handler_tu table_0c258f84[];
extern signed char func_0c02a026(struct Obj_tu *);
extern void func_0c02a18c(struct Obj_tu *, int, int, int);

void func_0c1a2fd0(struct Obj_tu *a);

struct Obj_tu *func_0c1a2f9c(struct Obj_tu *p, unsigned char b)
{
    struct Obj_tu *q;

    if ((q = func_0c0374da(0, 3, 0)) != 0) {
        q->p16 = func_0c1a2fd0;
        q->p24 = p;
        q->b32 = b;
        q->s38 = 0x1500;
    }
    return q;
}

void func_0c1a2fd0(struct Obj_tu *a)
{
    dat_0c258f64[a->b32](a);
}

void func_0c1a2fe4(struct Obj_tu *a)
{
    table_0c258f74[a->b4](a);
}

void func_0c1a2ff6(struct Obj_tu *a)
{
    a->b4++;
    a->xdc = a->p24->xdc;
    a->xdc.b12c = 1;
    a->b2 = a->p24->b2;
    a->b1 = a->p24->b1;
    a->vel.x = a->p24->vel.x;
    a->vel.y = a->p24->vel.y;
    a->b1a3 = a->p24->b1a3;
    a->b1a4 = a->p24->b1a4;
    a->b48 = a->p24->b48;
    a->vel = a->p24->vel;
    a->b36 = a->p24->b36;
    a->b36 = 0;
    if (a->b33)
        func_0c02a18c(a, 21, 16, 6);
    else
        func_0c02a18c(a, 21, 10, 6);
}

void func_0c1a3078(struct Obj_tu *a)
{
    if (func_0c02a026(a) < 0) {
        a->b4 = a->b4 + 1;
        a->xdc.b12c = 0;
    }
}

void func_0c1a309a(struct Obj_tu *a)
{
    table_0c258f84[a->b4](a);
}
