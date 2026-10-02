#include "objects.h"

struct ActorCounts { unsigned char pad[124]; short counts[100]; };
typedef void (*handler)(struct Actor *);
extern handler table_0c249600[];
extern struct ActorCounts *dat_0c2f83f8;
extern void func_0c0442fa(struct Actor *);
extern void func_0c0432ca(struct Actor *);
extern void func_0c02a39a(struct Actor *, int);
extern void func_0c02a0c4(struct Actor *, int, int);
extern char func_0c02a026(struct Actor *);
struct Vec3_u { float x, y, z; };
extern void func_0c0429a4(struct Actor *, struct Vec3_u *, int);

void func_0c0e5598(struct Actor *a)
{
    table_0c249600[a->b6](a);
}

void func_0c0e55aa(struct Actor *a)
{
    if (a->b255 == 6) {
        a->b3f0 = 255;
        a->b3f1 = 16;
    }
    a->b6++;
    a->b1a1 = 64;
    a->w1ac = 0;
    a->b19e = 0;
    *(unsigned int *)&a->p1c4 = 0;
    dat_0c2f83f8->counts[a->b2]++;
    func_0c0442fa(a);
    a->f56 = a->f41c;
    a->b1f9 = 0;
    a->f92 = 0.0f;
    a->f96 = 0.0f;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    func_0c0432ca(a);
    func_0c02a39a(a, 0);
    func_0c02a0c4(a, 21, 15);
}

void func_0c0e5636(struct Actor *a)
{
    struct Vec3_u v;

    a->b3f8 = 2;
    a->b328 = 5;
    a->b3f1 = (a->b255 == 6) ? 2 : 0;
    func_0c02a026(a);
    if (a->b141) {
        a->b6++;
        a->b141 = 0;
        a->b3f0 = 0;
        a->b3f1 = 0;
        v.x = -8.33333302f;
        v.y = 42.85714f;
        v.z = 0;
        func_0c0429a4(a, &v, 1);
    }
}
