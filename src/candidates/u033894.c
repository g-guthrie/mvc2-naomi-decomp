/* Differs throughout: extra saved registers, 0x5a4 stride vs Big size,
 * loop/memcpy shape, pool after 0x0c0339a0. func_0c0339d0 is the pool-split
 * continuation of func_0c033894. */

struct Slot_0c033894 {
    unsigned char b0;
    unsigned char b1, b2, b3, b4, b5, b6, b7, b8, b9, ba, bb, bc, bd, be, bf;
    int d16;
    int d20;
};

struct Big_0c033894 {
    unsigned char pad0[0x4c9];
    unsigned char b4c9;
    unsigned char pad1[0x52c - 0x4ca];
    unsigned char b52c;
    unsigned char pad2[0x53e - 0x52d];
    unsigned char b53e;
    unsigned char pad3[0x1011 - 0x53f];
    unsigned char b1011;
    unsigned char pad4[0x1074 - 0x1012];
    unsigned char b1074;
    unsigned char pad5[0x1b59 - 0x1075];
    unsigned char b1b59;
    unsigned char pad6[0x1bbc - 0x1b5a];
    unsigned char b1bbc;
};

struct Obj_0c033894 {
    unsigned char pad0[0x524];
    char b524;
    unsigned char pad1[0x527 - 0x525];
    unsigned char b527;
    unsigned char pad2[0x534 - 0x528];
    int d534;
    int d538;
    unsigned char pad3[0x53e - 0x53c];
    unsigned char b53e;
    unsigned char pad4[0x558 - 0x53f];
    unsigned int t558;
};

struct Glob_0c2d6f84 {
    unsigned char pad[0x88];
    unsigned char b88;
};

extern struct Slot_0c033894 dat_0c2f8720[];
extern struct Big_0c033894 dat_0c2d7088[];
extern struct Glob_0c2d6f84 *dat_0c2d6f84;

void func_0c033894(struct Obj_0c033894 *a)
{
    int v0;
    int v1;
    unsigned char n;
    unsigned char k;
    struct Slot_0c033894 slot;
    struct Slot_0c033894 *p;
    struct Slot_0c033894 *q;
    struct Slot_0c033894 *r;
    struct Big_0c033894 *row;
    struct Big_0c033894 *row2;

    v0 = a->b524;
    v1 = (v0 ^ 1) & 1;
    n = a->b53e;
    k = n;
    p = &dat_0c2f8720[n];
    row = (struct Big_0c033894 *)((char *)dat_0c2d7088 + 0x5a4 * v0);
    p->b1 = row->b52c;
    p->b2 = row->b1074;
    p->b3 = row->b1bbc;
    p->b4 = row->b4c9;
    p->b5 = row->b1011;
    p->b6 = row->b1b59;
    p->b7 = dat_0c2d6f84->b88;
    p->b8 = a->b527;
    p->b9 = a->t558 / 0xe10u;
    p->ba = (a->t558 / 60u) % 60u;
    p->bb = ((a->t558 % 60u) * 100u) / 60u;
    p->bc = p->bd = p->be = p->bf = 42;
    p->d16 = a->d538;
    p->d20 = a->d534;
    row2 = (struct Big_0c033894 *)((char *)dat_0c2d7088 + 0x5a4 * v1);
    k = k - 1;
    if (n) {
        do {
            q = &dat_0c2f8720[n];
            r = &dat_0c2f8720[k];
            if (q->b8 < r->b8)
                break;
            if (row2->b53e == k)
                row2->b53e = n;
            slot = *r;
            *r = *q;
            *q = slot;
            q->b0 = q->b0 + 1;
            n = n - 1;
            k = k - 1;
            r->b0 = r->b0 - 1;
        } while (n);
    }
    a->b53e = n;
}
