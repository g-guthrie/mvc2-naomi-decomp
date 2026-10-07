#include "objects.h"


extern unsigned char func_0c046e7e(struct Actor *, void *, void *);
extern void func_0c047aac(struct Actor *, void *);
extern void func_0c045248(struct Actor *, int);
extern int dat_0c240590;
extern int dat_0c2405cc;
extern int dat_0c240530;
extern int dat_0c2405a0;

int func_0c067f4c(struct Actor *a)
{
    if (func_0c046e7e(a, &dat_0c240590, a->x39c) == 0)
        return 0;
    func_0c047aac(a, a->x39c);
    a->b5 = 0;
    a->b7 = 0;
    a->b6 = 0;
    a->b1e9 = 3;
    func_0c045248(a, 29);
    return 1;
}

int func_0c067f92(struct Actor *a)
{
    if (func_0c046e7e(a, &dat_0c2405cc, a->x3a4) == 0)
        return 0;
    func_0c047aac(a, a->x3a4);
    a->b5 = 0;
    a->b7 = 0;
    a->b6 = 0;
    a->b1e9 = 8;
    func_0c045248(a, 21);
    return 1;
}

int func_0c067fd8(struct Actor *a)
{
    if (func_0c046e7e(a, &dat_0c240530, a->x3ac) == 0)
        return 0;
    func_0c047aac(a, a->x3ac);
    a->b5 = 0;
    a->b7 = 0;
    a->b6 = 0;
    a->b1e9 = 0;
    func_0c045248(a, 21);
    return 1;
}

int func_0c068020(struct Actor *a)
{
    if (func_0c046e7e(a, &dat_0c2405a0, a->x3b4) == 0)
        return 0;
    func_0c047aac(a, a->x3b4);
    a->b5 = 0;
    a->b7 = 0;
    a->b6 = 0;
    a->b1e9 = 9;
    func_0c045248(a, 21);
    return 1;
}
