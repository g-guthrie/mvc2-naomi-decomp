/* 188/200: p1c0 word load uses r2 and hoists 0x1c0 earlier than retail (r1). */

struct Pair20_a0c4 {
    int a, b, c, d, e;
};

struct Obj_a0c4 {
    unsigned char pad0[0x132];
    unsigned short w132;
    unsigned char pad1[0x140 - 0x134];
    union {
        struct Pair20_a0c4 s20;
        struct {
            unsigned char pad[2];
            char b142;
            char b143;
            unsigned char pad4[8];
            unsigned char b14c;
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

extern void func_0c0344e4(struct Obj_a0c4 *a);

void func_0c02a0c4(struct Obj_a0c4 *a, unsigned char b, unsigned char c)
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
    a->u140.s20 = *(struct Pair20_a0c4 *)a->p154;
    if (!a->u140.b.b142) {
        do {
            a->p154 = (int *)((unsigned char *)a->p154 + 20);
            if (a->u140.b.b143 & 0x80)
                a->p154 = (int *)(a->p168 + *a->p154);
            a->u140.s20 = *(struct Pair20_a0c4 *)a->p154;
        } while (a->u140.b.b142 == 0);
    }
    a->p1c0 = a->p16c + (((unsigned short *)a->p154)[9] << 4);
    if (a->u140.b.b14c)
        func_0c0344e4(a);
}
