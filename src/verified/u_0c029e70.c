struct Pair8_e70 {
    int a, b;
};

struct Obj_e70 {
    unsigned char pad0[0x132];
    unsigned short w132;
    unsigned char pad1[0x140 - 0x134];
    union {
        struct Pair8_e70 s;
        struct { unsigned char pad[2]; unsigned char b142; char b143; } b;
    } u140;
    int i148, i14c, i150;
    int *p154;
    unsigned char b158, b159;
    unsigned char pad2[0x168 - 0x15a];
    unsigned char *p168;
};

void func_0c029e70(struct Obj_e70 *a, unsigned char b, unsigned char c)
{
    unsigned char *p168;
    unsigned char *base;
    int *row;

    a->b159 = b;
    a->b158 = c;
    p168 = a->p168;
    base = p168 + a->w132;
    row = (int *)(p168 + *(int *)(base + (unsigned)b * 4));
    a->p154 = (int *)(p168 + row[c]);
    a->u140.s = *(struct Pair8_e70 *)a->p154;
    a->i148 = 0;
    a->i14c = 0;
    a->i150 = 0;
    if (a->u140.b.b142 == 0) {
        do {
            a->p154 = (int *)((unsigned char *)a->p154 + 8);
            if (a->u140.b.b143 & 0x80)
                a->p154 = (int *)(a->p168 + *a->p154);
            a->u140.s = *(struct Pair8_e70 *)a->p154;
            a->i148 = 0;
            a->i14c = 0;
            a->i150 = 0;
        } while (a->u140.b.b142 == 0);
    }
}

void func_0c029f0e(struct Obj_e70 *a, unsigned char b, unsigned char c, int d)
{
    unsigned char *p168;
    unsigned char *base;
    int *row;

    a->b159 = b;
    a->b158 = c;
    p168 = a->p168;
    base = p168 + a->w132;
    row = (int *)(p168 + *(int *)(base + (unsigned)b * 4));
    a->p154 = (int *)(p168 + row[c]);
    a->p154 = (int *)((unsigned char *)a->p154 + d * 8);
    a->u140.s = *(struct Pair8_e70 *)a->p154;
    a->i148 = 0;
    a->i14c = 0;
    a->i150 = 0;
    if (a->u140.b.b142 == 0) {
        do {
            a->p154 = (int *)((unsigned char *)a->p154 + 8);
            if (a->u140.b.b143 & 0x80)
                a->p154 = (int *)(a->p168 + *a->p154);
            a->u140.s = *(struct Pair8_e70 *)a->p154;
            a->i148 = 0;
            a->i14c = 0;
            a->i150 = 0;
        } while (a->u140.b.b142 == 0);
    }
}
