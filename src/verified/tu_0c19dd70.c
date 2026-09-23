/* Five actor callbacks and their shared pool. Assigning then clearing b36
 * makes SHC emit the retail parent-field read before the zero store. */
struct Vec3_19dd70 { float x, y, z; };
struct Block192_19dd70 {
    unsigned char pad0[0x50];
    unsigned char b12c;
    unsigned char pad1[0xc0 - 0x51];
};
struct Obj_19dd70 {
    unsigned char pad0;
    unsigned char b1, b2;
    unsigned char pad1;
    unsigned char b4;
    unsigned char pad2[16 - 5];
    void (*p16)(struct Obj_19dd70 *);
    struct Obj_19dd70 *p20, *p24;
    short s28;
    unsigned char pad3[36 - 30];
    unsigned char b36;
    unsigned char pad4[48 - 37];
    unsigned char b48;
    unsigned char pad5[52 - 49];
    float f52, f56, f60;
    unsigned char pad6[80 - 64];
    struct Vec3_19dd70 v80;
    unsigned char pad7[0xdc - 92];
    struct Block192_19dd70 sdc;
    unsigned char pad8[0x1a3 - 0x19c];
    unsigned char b1a3, b1a4;
};
typedef void (*Handler_19dd70)(struct Obj_19dd70 *);
extern char func_0c029fc4(struct Obj_19dd70 *);
extern void func_0c19ee84(struct Obj_19dd70 *);
extern Handler_19dd70 table_0c258aac[];
extern Handler_19dd70 table_0c258abc[];
extern void func_0c029e70(struct Obj_19dd70 *, int, int);

void func_0c19dd70(struct Obj_19dd70 *a)
{
    if (func_0c029fc4(a) < 0)
        func_0c19ee84(a);
}

void func_0c19dd92(struct Obj_19dd70 *a)
{
    table_0c258aac[a->b4](a);
}

void func_0c19dda4(struct Obj_19dd70 *a)
{
    a->b4++;
    a->sdc = a->p24->sdc;
    a->sdc.b12c = 1;
    a->b2 = a->p24->b2;
    a->b1 = a->p24->b1;
    a->v80.x = a->p24->v80.x;
    a->v80.y = a->p24->v80.y;
    a->b1a3 = a->p24->b1a3;
    a->b1a4 = a->p24->b1a4;
    a->b48 = a->p24->b48;
    a->v80 = a->p24->v80;
    a->b36 = a->p24->b36;
    a->b36 = 0;
    a->f52 = a->p20->f52;
    a->f56 = a->p20->f56;
    func_0c029e70(a, 27, 9);
}

void func_0c19de28(struct Obj_19dd70 *a)
{
    if (func_0c029fc4(a) < 0)
        func_0c19ee84(a);
}

void func_0c19de4a(struct Obj_19dd70 *a)
{
    table_0c258abc[a->b4](a);
}
