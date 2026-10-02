#include "objects.h"

struct P3_0c09a5f0 {
    char b0;
    char pad[2];
    char b3;
};

struct Obj_0c09a5f0 {
    unsigned char pad0[6];
    unsigned char b6;
    unsigned char pad1[28 - 7];
    short s28;
    unsigned char pad2[96 - 30];
    float f96;
    unsigned char pad3[108 - 100];
    float f108;
    unsigned char pad4[0x141 - 112];
    char b141;
    unsigned char pad5[0x27a - 0x142];
    unsigned char b27a;
    unsigned char b27b;
};

extern char func_0c02a026(struct Obj_0c09a5f0 *);
extern int func_0c146bfc(struct Obj_0c09a5f0 *, int);
extern void func_0c0437b8(struct Obj_0c09a5f0 *);
extern void func_0c02a0c4(struct Obj_0c09a5f0 *, int, int);

void func_0c09a5f0(struct Obj_0c09a5f0 *a, struct P3_0c09a5f0 *b)
{
    func_0c02a026(a);
    if (a->b141 != 0) {
        a->b6 = a->b6 + 1;
        b->b3 = 0;
        if (func_0c146bfc(a, 0) == 0) {
            func_0c0437b8(a);
            return;
        }
        a->b27b = 0;
        a->b27a = 16;
    }
}

void func_0c09a640(struct Obj_0c09a5f0 *a, struct P3_0c09a5f0 *b)
{
    func_0c02a026(a);
    if (b->b0 == 0) {
        func_0c0437b8(a);
        return;
    }
    if (b->b3 == 0)
        return;
    a->b6 = a->b6 + 2;
    a->f96 = 10.0f;
    a->f108 = -0.80357140303f;
    func_0c02a0c4(a, 21, 2);
}

void func_0c09a69a(struct Obj_0c09a5f0 *a)
{
    if (a->b141 == 0)
        func_0c02a026(a);
    if (--a->s28 == 0)
        a->b6 = a->b6 + 1;
}
