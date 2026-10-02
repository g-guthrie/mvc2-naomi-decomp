#include "objects.h"

struct Act_0c10c238 {
    unsigned char pad0[5];
    unsigned char b5, b6, b7;
    unsigned char pad1[0x1e9 - 8];
    unsigned char b1e9;
    unsigned char pad2[0x2c0 - 0x1ea];
    int l2c0;
    unsigned char pad3[0x4c9 - 0x2c4];
    unsigned char b4c9;
};

extern char dat_0c24ba42[];
extern void func_0c045248(struct Actor *, int);
struct Pair_0c10c238 { unsigned char e, a; };
extern struct Pair_0c10c238 dat_0c24ba48[];
extern struct Pair_0c10c238 dat_0c24ba4e[];

void func_0c10c238(struct Act_0c10c238 *a)
{
    unsigned char r5;

    a->b5 = 0;
    a->b7 = 0;
    a->b6 = 0;
    r5 = a->b4c9;
    if (r5 == 2)
        r5 += a->l2c0;
    *(&a->b1e9) = dat_0c24ba42[r5];
    func_0c045248((struct Actor *)a, 29);
}

void func_0c10c262(struct Actor *a)
{
    struct Pair_0c10c238 *t = dat_0c24ba48;

    a->b6 = a->b7 = a->b5 = 0;
    a->b1e9 = t[a->b4c9].e;
    *(&a->b1a3) = t[a->b4c9].a;
    func_0c045248(a, 21);
}

void func_0c10c290(struct Actor *a)
{
    struct Pair_0c10c238 *t = dat_0c24ba4e;

    a->b6 = a->b7 = a->b5 = 0;
    a->b1e9 = t[a->b4c9].e;
    *(&a->b1a3) = t[a->b4c9].a;
    func_0c045248(a, 21);
}
