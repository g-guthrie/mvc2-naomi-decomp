/* Tail-calls retail emit as bra/bsr to 0c0346da/0c0343f4; SHC emits jsr via the
 * pool for those externs. First function restores r14 without a matching save. */
#include "objects.h"

extern void func_0c0346da(struct Actor *, int);
extern void func_0c0343f4(struct Actor *, int);
extern unsigned char func_0c0347ee(struct Actor *, int);

void func_0c034894(struct Actor *a)
{
    int n;

    n = 48;
    func_0c0346da(a, n);
}

void func_0c03489c(struct Actor *a)
{
    struct Actor *p;
    int n;
    unsigned char t;

    p = a->p1c8;
    t = p->b207;
    if ((p->b202 & 0x80) != 0 || t >= 5)
        n = 49;
    else
        n = 48;
    func_0c0346da(p, n);
}

void func_0c0348ca(struct Actor *a)
{
    int n;

    if (a->b1 == 42)
        return;
    if ((a->b202 & 0x80) != 0 || a->b207 >= 5)
        n = 53;
    else
        n = 52;
    if (a->b1 == 16) {
        func_0c0343f4(a, 32);
        n = 43;
        func_0c0343f4(a, n);
        return;
    }
    if (a->b1 == 52) {
        n = 31;
        func_0c0343f4(a, n);
        return;
    }
    func_0c0346da(a, n);
    n = 43;
    func_0c0343f4(a, n);
}

void func_0c034922(struct Actor *a)
{
    int n;

    if ((a->b202 & 0x80) != 0 || a->b207 >= 5)
        n = 45;
    else
        n = 44;
    func_0c0346da(a, n);
}

void func_0c034946(struct Actor *a, int n)
{
    unsigned char r;

    r = func_0c0347ee(a, n);
    if (r != 0)
        n = r;
    func_0c0346da(a, n);
}
