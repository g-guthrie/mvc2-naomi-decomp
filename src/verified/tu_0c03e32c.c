struct Obj_0c03e32c {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad1[3];
    unsigned char b6;
    unsigned char pad2[52 - 7];
    float f52;
    unsigned char pad2b[0x1d3 - 56];
    unsigned char b1d3;
    unsigned char pad3[0x1eb - 0x1d4];
    unsigned char b1eb;
    unsigned char pad4[0x207 - 0x1ec];
    unsigned char b207;
    unsigned char pad5[0x233 - 0x208];
    unsigned char b233;
    unsigned char pad6[0x235 - 0x234];
    unsigned char b235;
    char b236;
    unsigned char pad7[0x278 - 0x237];
    short w278;
    unsigned char pad8[0x420 - 0x27a];
    short w420;
    unsigned char pad9[0x525 - 0x422];
    unsigned char b525;
};
struct Rec_0c03e32c {
    unsigned char pad[5];
    unsigned char b5;
    unsigned char b6;
};
typedef void (*handler_0c03e32c)(struct Obj_0c03e32c *);
extern void func_0c034922(struct Obj_0c03e32c *);
extern void func_0c1d1622(float *, int);
extern int func_0c04daae(struct Obj_0c03e32c *, int, int);
extern void func_0c0453c4(struct Obj_0c03e32c *, int);
extern char func_0c02a026(struct Obj_0c03e32c *);
extern struct Rec_0c03e32c dat_0c2d9260;
extern handler_0c03e32c table_0c23bb54[];

void func_0c03e32c(struct Obj_0c03e32c *a)
{
    int value;
    a->b1eb = 2;
    if ((value = a->w278) < 0)
        goto animate;
    else if (0 < a->w420 && value > 0)
        goto animate;
    a->w278 = -1;
    func_0c034922(a);
    func_0c1d1622(&a->f52, a->b2);
    if (a->b233 != 1) {
        value = a->b207;
        value = value < 5 ? 1 : 3;
        dat_0c2d9260.b5 = value;
        dat_0c2d9260.b6 = 1;
    }
    if (a->b235 || !a->w420 || !a->b236)
        goto animate;
    if (a->b525) {
        if (func_0c04daae(a, 29, 2))
            a->b236 = -1;
        else
            a->b236 = 0;
    }
    if (a->b236 < 0) {
        a->b1d3 = 0;
        func_0c0453c4(a, 17);
        return;
    }
animate:
    if (func_0c02a026(a) < 0)
        func_0c0453c4(a, 23);
}

void func_0c03e400(struct Obj_0c03e32c *a)
{
    table_0c23bb54[a->b6](a);
}
