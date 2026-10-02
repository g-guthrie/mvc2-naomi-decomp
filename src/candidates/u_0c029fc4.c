/* 86/98 + 84/130: unsigned char r yields extu.b vs retail exts.b r0 / mov r6,r0; 4-byte size miss. */

struct Pair8_fc4 {
    int a, b;
};

struct Pair20_fc4 {
    int a, b, c, d, e;
};

struct Obj_fc4 {
    unsigned char pad0[0x140];
    union {
        struct Pair8_fc4 s8;
        struct Pair20_fc4 s20;
        struct {
            unsigned char pad[2];
            char b142;
            char b143;
            unsigned char pad4[4];
            int i148;
            union {
                int i;
                unsigned char b;
            } u14c;
            int i150;
        } b;
    } u140;
    int *p154;
    unsigned char b158, b159;
    unsigned char pad2[0x168 - 0x15a];
    unsigned char *p168;
    unsigned char *p16c;
    unsigned char pad3[0x1c0 - 0x170];
    unsigned char *p1c0;
};

extern void func_0c0344e4(struct Obj_fc4 *a);

int func_0c029fc4(struct Obj_fc4 *a)
{
    unsigned char r;

    r = 0;
    if (--a->u140.b.b142 == 0) {
        do {
            a->p154 = (int *)((unsigned char *)a->p154 + 8);
            if ((r = a->u140.b.b143 & 0x80) != 0)
                a->p154 = (int *)(a->p168 + *a->p154);
            a->u140.s8 = *(struct Pair8_fc4 *)a->p154;
            a->u140.b.i148 = 0;
            a->u140.b.u14c.i = 0;
            a->u140.b.i150 = 0;
        } while (a->u140.b.b142 == 0);
    }
    return r;
}

int func_0c02a026(struct Obj_fc4 *a)
{
    unsigned char r;

    r = 0;
    if (--a->u140.b.b142 == 0) {
        do {
            a->p154 = (int *)((unsigned char *)a->p154 + 20);
            if ((r = a->u140.b.b143 & 0x80) != 0)
                a->p154 = (int *)(a->p168 + *a->p154);
            a->u140.s20 = *(struct Pair20_fc4 *)a->p154;
        } while (a->u140.b.b142 == 0);
        a->p1c0 = a->p16c + (((unsigned short *)a->p154)[9] << 4);
        if (a->u140.b.u14c.b)
            func_0c0344e4(a);
    }
    return r;
}
