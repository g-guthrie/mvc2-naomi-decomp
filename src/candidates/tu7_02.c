/* Candidate. First four functions and the pool at 0x0c102890 match when the
 * later same-file inits are present (they turn the 0x0c10283a tails into bra).
 * func_0c1028d4 / 96c / a26 / abe are the 0/1/2 inits over b1e8; they differ
 * in register assignment around the switch delay-slot zero and the post-switch
 * stores, so the unit is longer than retail and not exact. */
struct Game_tu7_02 { unsigned char pad[124]; short w7c[1]; };

struct Link_tu7_02 { unsigned char pad0[9]; char b9; };

struct Obj_tu7_02 {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad1[37 - 3];
    unsigned char b37;
    unsigned char pad2[0x141 - 38];
    char b141;
    unsigned char pad3[0x158 - 0x142];
    unsigned char b158, b159;
    unsigned char pad4[0x19e - 0x15a];
    char b19e;
    unsigned char pad5[0x1a1 - 0x19f];
    unsigned char b1a1;
    unsigned char pad6[0x1a3 - 0x1a2];
    char b1a3;
    unsigned char pad7[0x1a7 - 0x1a4];
    unsigned char b1a7;
    unsigned char pad8[0x1ac - 0x1a8];
    unsigned short w1ac;
    unsigned char pad9[0x1c4 - 0x1ae];
    int l1c4;
    unsigned char pad10[0x1e8 - 0x1c8];
    unsigned char b1e8;
    unsigned char pad11[0x1f9 - 0x1e9];
    char b1f9;
    unsigned char pad12[0x1fe - 0x1fa];
    char b1fe;
    unsigned char b1ff;
    unsigned char pad13[0x2a4 - 0x200];
    struct Link_tu7_02 s2a4;
    unsigned char pad14[0x3f4 - 0x2b0];
    int l3f4;
};

struct Ctl_tu7_02 { unsigned char pad0[16]; char b16; };

typedef void (*fn_tu7_02)(struct Obj_tu7_02 *);

extern fn_tu7_02 dat_0c24b21c[];
extern struct Game_tu7_02 *dat_0c2f83f8;
extern int dat_0c24b09c[];
extern int dat_0c24b0a0[];
extern int dat_0c24b0a4[];
extern int dat_0c24b0a8[];
extern int dat_0c24b0ac[];
extern int dat_0c24b0b0[];
extern void func_0c02a39a(struct Obj_tu7_02 *, int);
extern void func_0c02a684(struct Obj_tu7_02 *, int, int, int);
extern void func_0c044cbc(struct Obj_tu7_02 *);
extern void func_0c1048d6(struct Obj_tu7_02 *);
extern void func_0c0346da(struct Obj_tu7_02 *, int);
extern void func_0c02a0c4(struct Obj_tu7_02 *, int, int);

void func_0c102780(struct Obj_tu7_02 *a, struct Ctl_tu7_02 *b)
{
    if (b->b16) {
        b->b16 = 0;
        if (a->b159 == 12 && a->b158 == 5) {
            b->b16 = 1;
            func_0c02a684(a, 0, a->b37 * 48 + a->b141 + 5, 1);
        } else {
            func_0c02a39a(a, 0);
        }
    }
}

void func_0c1027dc(struct Obj_tu7_02 *a)
{
    int s = a->b159;
    if (s == 7 || s == 9 || s == 11) {
        if (a->b1a3)
            func_0c02a684(a, 0, a->b37 * 48 + 34, 1);
    }
}

void func_0c102826(struct Obj_tu7_02 *a)
{
    dat_0c24b21c[a->b1ff](a);
}

void func_0c1028d4(struct Obj_tu7_02 *a);
void func_0c10296c(struct Obj_tu7_02 *a);
void func_0c102a26(struct Obj_tu7_02 *a);
void func_0c102abe(struct Obj_tu7_02 *a);

void func_0c10283a(struct Obj_tu7_02 *a)
{
    struct Link_tu7_02 *s = &a->s2a4;
    func_0c044cbc(a);
    if (s->b9 != 0 && a->b1e8 == 2) {
        func_0c1048d6(a);
        return;
    }
    if (a->b1fe == 0) {
        if (a->b1f9 == 0)
            func_0c1028d4(a);
        else
            func_0c10296c(a);
        return;
    }
    if (a->b1f9 == 0)
        func_0c102a26(a);
    else
        func_0c102abe(a);
}

void func_0c1028d4(struct Obj_tu7_02 *a)
{
    char x, y, z;

    z = 0;
    switch (a->b1e8) {
    case 0:
        a->l3f4 = (int)dat_0c24b09c;
        x = z;
        y = z;
        a->b1a7 = x;
        func_0c0346da(a, 20);
        break;
    case 1:
        x = y = 1;
        a->l3f4 = (int)dat_0c24b0a0;
        a->b1a7 = x;
        func_0c0346da(a, 21);
        break;
    case 2:
        x = y = 2;
        a->l3f4 = (int)dat_0c24b0a4;
        a->b1a7 = x;
        break;
    }
    a->b1a1 = y;
    a->w1ac = z;
    a->b19e = z;
    a->l1c4 = z;
    (*dat_0c2f83f8).w7c[a->b2]++;
    func_0c02a0c4(a, 7, x);
}

void func_0c10296c(struct Obj_tu7_02 *a)
{
    char x, y, z;

    x = 0;
    switch (a->b1e8) {
    case 0:
        y = x;
        z = 6;
        a->l3f4 = (int)dat_0c24b09c;
        a->b1a7 = y;
        func_0c0346da(a, 20);
        break;
    case 1:
        y = 1;
        a->l3f4 = (int)dat_0c24b0a0;
        z = 7;
        a->b1a7 = y;
        func_0c0346da(a, 21);
        break;
    case 2:
        y = 2;
        z = 8;
        a->l3f4 = (int)dat_0c24b0a4;
        a->b1a7 = y;
        break;
    }
    a->b1a1 = y;
    a->w1ac = x;
    a->b19e = x;
    a->l1c4 = x;
    (*dat_0c2f83f8).w7c[a->b2]++;
    func_0c02a0c4(a, 9, y);
}

void func_0c102a26(struct Obj_tu7_02 *a)
{
    char x, y, z;

    x = 0;
    switch (a->b1e8) {
    case 0:
        y = x;
        z = 3;
        a->l3f4 = (int)dat_0c24b0a8;
        a->b1a7 = y;
        func_0c0346da(a, 20);
        break;
    case 1:
        y = 1;
        a->l3f4 = (int)dat_0c24b0ac;
        z = 4;
        a->b1a7 = y;
        func_0c0346da(a, 21);
        break;
    case 2:
        y = 2;
        z = 5;
        a->l3f4 = (int)dat_0c24b0b0;
        a->b1a7 = y;
        break;
    }
    a->b1a1 = y;
    a->w1ac = x;
    a->b19e = x;
    a->l1c4 = x;
    (*dat_0c2f83f8).w7c[a->b2]++;
    func_0c02a0c4(a, 8, y);
}

void func_0c102abe(struct Obj_tu7_02 *a)
{
    char z, y, w;

    switch (a->b1e8) {
    case 0:
        z = 0;
        w = 9;
        y = z;
        a->l3f4 = (int)dat_0c24b0a8;
        a->b1a7 = y;
        func_0c0346da(a, 20);
        break;
    case 1:
        y = 1;
        w = 10;
        a->l3f4 = (int)dat_0c24b0ac;
        a->b1a7 = y;
        func_0c0346da(a, 21);
        break;
    case 2:
        y = 2;
        w = 11;
        a->l3f4 = (int)dat_0c24b0b0;
        a->b1a7 = y;
        func_0c0346da(a, 22);
        break;
    }
    a->b1a1 = w;
    a->w1ac = z;
    a->b19e = z;
    a->l1c4 = z;
    func_0c02a0c4(a, 10, y);
}
