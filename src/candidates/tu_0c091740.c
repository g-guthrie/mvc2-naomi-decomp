#include "objects.h"

struct Vec3 { float x, y, z; };
typedef void (*handler)(struct Actor *);
extern handler dat_0c242c20[];
extern void func_0c025900(struct Actor *, int, int);
extern void func_0c1d4610(struct Actor *, struct Vec3 *);
extern void func_0c048ce6(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);

void func_0c091740(struct Actor *p)
{
    dat_0c242c20[p->b1f7 & 63](p);
}

void func_0c091758(struct Actor *a)
{
    struct Vec3 v;

    func_0c025900(a, 5, 5);
    if (a->w1fa & 0x400) {
        a->w130 ^= 1;
        a->b1d2 ^= 1;
    }
    v.x = -146.66666f;
    v.y = 188.57143f;
    func_0c1d4610(a, &v);
    func_0c048ce6(a);
    a->b1a0 = 10;
    a->b6 = 0;
    a->b7 = 0;
    func_0c02a0c4(a, 15, 0);
}

void func_0c0917c0(struct Actor *a)
{
    struct Vec3 v;

    func_0c025900(a, 5, 5);
    if (a->w1fa & 0x800) {
        a->w130 ^= 1;
        a->b1d2 ^= 1;
    }
    v.x = -173.33333f;
    v.y = 188.57143f;
    func_0c1d4610(a, &v);
    func_0c048ce6(a);
    a->b1a0 = 10;
    a->b6 = 0;
    a->b7 = 0;
    func_0c02a0c4(a, 15, 1);
}
