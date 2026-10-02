#include "objects.h"

struct Vec3 { float x, y, z; };
extern void func_0c025900(struct Actor *, int, int);
extern void func_0c1d4610(struct Actor *, struct Vec3 *);
extern void func_0c048bb0(struct Actor *, int);
extern void func_0c02a0c4(struct Actor *, int, int);
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *);
typedef void (*handler_t)(struct Actor *);
extern handler_t dat_0c2480a8[];

void func_0c0cddbc(struct Actor *a)
{
    struct Vec3 v;

    func_0c025900(a, 5, 5);
    v.x = -83.33333f;
    v.y = 158.57143f;
    func_0c1d4610(a, &v);
    a->b1a0 = 10;
    func_0c048bb0(a, 8);
    a->f92 = 0;
    a->f96 = 0;
    a->f104 = 0;
    a->f108 = 0;
    func_0c02a0c4(a, 15, 6);
}

void func_0c0cde14(struct Actor *a)
{
    a->b1ea = 1;
    dat_0c2480a8[a->b1f7 & 0x3f](a);
}

void func_0c0cde32(struct Actor *a)
{
    struct Actor *p;

    if (a->b141) {
        a->b141 = 0;
        p = a->p1c8;
        p->p1b4 = a;
        p->b1f6 = 1;
        p->b1f9 = 2;
        func_0c025900(a, 0, 0);
        p->b1a1 = 32;
        p->b1d2 = a->b1d2;
    }
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

void func_0c0cde90(struct Actor *a)
{
    struct Actor *p;

    if (a->b141) {
        a->b141 = 0;
        p = a->p1c8;
        p->p1b4 = a;
        p->b1f6 = 1;
        p->b1f9 = 2;
        func_0c025900(a, 0, 0);
        p->b1a1 = 33;
        p->b1d2 = a->b1d2;
    }
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}
