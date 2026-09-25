#include "objects.h"

extern unsigned char func_0c046dd0(struct Actor *, int);
extern void func_0c045248(struct Actor *, int);
extern unsigned char func_0c046e7e(struct Actor *, unsigned char *, unsigned char *);
extern unsigned char dat_0c240c10[];
extern unsigned char dat_0c240c20[];
extern void (*table_0c240d10[])(struct Actor *);

int func_0c06da74(struct Actor *a)
{
    if (!func_0c046dd0(a, 11)) return 0;
    a->b1e9 = 11;
    a->b5 = 0;
    func_0c045248(a, 21);
    a->b6 = a->b7 = 0;
    return 1;
}

int func_0c06daae(struct Actor *a)
{
    if (func_0c06dad4(a)) return 1;
    if (func_0c06db0a(a)) return 1;
    return 0;
}

int func_0c06dad4(struct Actor *a)
{
    if (!func_0c046e7e(a, dat_0c240c10, (unsigned char *)a + 0x374))
        return 0;
    else if (!*a->p40c)
        return 0;
    a->b258 = 2;
    return 1;
}

int func_0c06db0a(struct Actor *a)
{
    if (!func_0c046e7e(a, dat_0c240c20, (unsigned char *)a + 0x36c)) return 0;
    if (!*a->p40c) return 0;
    if (a->b1f9 == 2) return 0;
    a->b258 = 1;
    return 1;
}

void func_0c06db4c(struct Actor *a)
{
    if (a->b1a0 == 0 || a->b5 != 0) *(unsigned char *)((char *)a + 0x2a8) = 0;
}

void func_0c06db64(struct Actor *a)
{
    table_0c240d10[a->b1ff](a);
}
