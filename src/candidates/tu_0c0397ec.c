/* 251/316: func_0c039842 and func_0c039854 match; p20c load uses r1 not r3;
 * func_0c039888 CSE of 1 into r5 instead of r0. */
#include "objects.h"

typedef void (*handler_0c0397ec)(struct Actor *);

extern unsigned char dat_0c2f833e;
extern unsigned char dat_0c2f8338;
extern handler_0c0397ec table_0c23b8b4[];
extern handler_0c0397ec table_0c23b8c4[];
extern void func_0c043248(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);
extern char func_0c02a026(struct Actor *);
extern void func_0c0453c4(struct Actor *, int);

void func_0c0397ec(struct Actor *a)
{
    unsigned char flags;

    if (a->b0 == 0)
        return;
    if (a->p20c->b248 != 0)
        return;
    if ((flags = dat_0c2f833e) != 0) {
        if ((flags & (1 << (a->b2 ^ 1))) != 0)
            return;
        if (a->b3f0 == 0) {
            func_0c043248(a);
            return;
        }
    }
    table_0c23b8b4[a->b4](a);
}

void func_0c039842(struct Actor *a)
{
    table_0c23b8c4[a->b5](a);
}

void func_0c039854(struct Actor *a)
{
    int z;

    z = 0;
    a->b19d = 0;
    a->p428->fn24(a);
    if (a->b5 == 0)
        return;
    a->b5 = 1;
    func_0c02a0c4(a, z, z);
}

void func_0c039888(struct Actor *a)
{
    func_0c02a026(a);
    if (dat_0c2f8338 <= 2)
        return;
    a->b4 = 1;
    a->b7 = 0;
    a->b6 = 0;
    a->b5 = 0;
    a->b19d = -128;
    if ((*(unsigned int *)((char *)a + 0x414) & 0x06000000) == 0) {
        if (a->b2 == 0)
            a->b1d2 = 1;
        else
            a->b1d2 = 0;
        a->w130 = (unsigned char)a->b1d2;
    }
    a->b1d0 = 0;
    func_0c0453c4(a, 0);
}
