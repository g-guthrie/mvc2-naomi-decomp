#include "objects.h"
struct ActorCounts { unsigned char pad[124]; short arr[100]; };
extern void func_0c048bb0(struct Actor *, int);
extern void func_0c0442fa(struct Actor *);
extern void func_0c02a39a(struct Actor *, int);
extern void func_0c02a0c4(struct Actor *, int, int);
extern void func_0c095380(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c0953be(struct Actor *);
extern void func_0c0438de(struct Actor *);
extern void func_0c143b10(struct Actor *, int, int);
extern void (*table_0c242e7c[])(struct Actor *);
extern struct ActorCounts *dat_0c2f83f8;
void func_0c093caa(struct Actor *, void *);
void func_0c093c10(struct Actor *a, void *context)
{
    a->b7++;
    func_0c048bb0(a, 5);
    func_0c0442fa(a);
    a->b1f9 = 2;
    func_0c02a39a(a, 0);
    a->f92 /= 16.0f;
    a->f96 /= 8.0f;
    a->f108 /= 64.0f;
    a->f104 = 0;
    a->b1a1 = a->b1a3 + 48;
    a->w1ac = 0;
    a->b19e = 0;
    *(unsigned int *)&a->p1c4 = 0;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a, 21, 4);
    func_0c093caa(a, context);
}
void func_0c093caa(struct Actor *a, void *context)
{
    int i;
    func_0c095380(a);
    if (func_0c02a026(a) < 0) {
        func_0c0438de(a);
        return;
    }
    func_0c0953be(a);
    if (a->b141 & 1) {
        a->b141 &= 0xfe;
        for (i = 10; i < 15; i++)
            func_0c143b10(a, 0, i);
    }
    if (a->b141 & 2) {
        a->b141 &= 0xfd;
        a->f108 = -0.80357140303f;
    }
}
void func_0c093d2c(struct Actor *a)
{
    table_0c242e7c[a->b7](a);
}
