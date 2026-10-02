#include "objects.h"

struct Table_u_053b94 {
    unsigned char pad[124];
    short counts[64];
};

extern struct Table_u_053b94 *dat_0c2f83f8;
extern void func_0c0432ca(struct Actor *);
extern void func_0c0442fa(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);
extern char func_0c02a026(struct Actor *);
struct Vec3_u_053b94 { float x, y, z; };
extern void func_0c0429a4(struct Actor *, struct Vec3_u_053b94 *, int);

void func_0c053b94(struct Actor *a, struct MaskInput *inp)
{
    if (a->b255 == 6) {
        a->b3f0 = 0xff;
        a->b3f1 = 16;
    }
    a->b6++;
    a->f92 = 0.0f;
    a->f96 = 0.0f;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    if (a->b1f9 != 2) {
        func_0c0442fa(a);
        func_0c0432ca(a);
        a->f56 = a->f41c;
        a->b1f9 = 0;
    }
    inp->b3 = a->b525 ? 12 : 24;
    a->s28 = 64;
    a->b1a1 = 85;
    a->w1ac = 0;
    a->b19e = 0;
    a->p1c4 = 0;
    dat_0c2f83f8->counts[a->b2]++;
    if (a->b1f9 != 2)
        func_0c02a0c4(a, 22, 4);
    else
        func_0c02a0c4(a, 22, 6);
}

void func_0c053c5a(struct Actor *a)
{
    struct Vec3_u_053b94 v;

    a->b3f8 = 2;
    a->b328 = 5;
    a->b3f1 = (a->b255 == 6) ? 2 : 0;
    func_0c02a026(a);
    if (a->b141) {
        a->b6++;
        a->b141 = 0;
        a->b3f0 = 0;
        a->b3f1 = 0;
        v.x = 40.0f;
        v.y = 137.142853f;
        v.z = 0;
        func_0c0429a4(a, &v, 1);
    }
}
