/* Candidate: size exact, 547/572 bytes; func_0c05105c, func_0c051094 and both
 * pools are exact. Remaining differences are scratch-register rotation (r2/r3
 * swapped) plus retail hoisting `mov #1,r3; mov r13,r5` above the b43d load in
 * func_0c050ea4 (the stores b43d/b43e/b43f/b45d then use r2 and r3 the other
 * way round), which also swaps the table lookup temporaries and the b43d
 * decrement in func_0c050f8e. Tried: chained zero stores, b45d store first,
 * b45d = 1 as the call argument, ++ / += / x = x + 1 spellings. */
#include "objects.h"

extern int func_0c04e78e(struct Actor *, int);
extern int func_0c04e82a(struct Actor *, struct OperandStream *);
extern void func_0c04e6b2(struct Actor *, struct OperandStream *, int);
extern int func_0c051b50(struct Actor *, void *);
extern int (*const table_0c23e97c[])(struct Actor *, void *);

int func_0c050ea4(struct Actor *a, struct OperandStream *s)
{
    int bits;

    if (!func_0c04e78e(a, 3))
        return 0;
    if (!func_0c04e82a(a, s))
        return 0;
    func_0c04e6b2(a, s, 0);
    a->b43d++;
    a->b43e = 0;
    a->b43f = 0;
    a->b45d = 1;
    func_0c04e6b2(a, s, 1);
    a->b448 = a->parameter4b4.integer;
    func_0c04e6b2(a, s, 1);
    a->l44c = a->parameter4b4.integer;
    func_0c04e6b2(a, s, 1);
    a->b4ab = a->parameter4b4.integer;
    func_0c04e6b2(a, s, 1);
    a->b4aa = a->parameter4b4.integer;
    func_0c04e6b2(a, s, 1);
    bits = a->parameter4b4.integer << 8;
    if ((unsigned short)bits & 0x0c00)
        bits ^= a->b1d2 * 0xc00;
    a->w4ac = a->parameter4b4.integer << 8;
    a->l450 = (unsigned short)bits;
    a->w4dc = bits;
    if (a->b1 == 48)
        a->f498 = table_0c23e97c[a->l44c];
    else
        a->f498 = func_0c051b50;
    return 0;
}

int func_0c050f8e(struct Actor *a, struct OperandStream *s)
{
    unsigned char *p;
    int bits;

    if (a->b5 == 0 && (a->b1d0 == 21 || a->b1d0 == 29))
        goto next;
    a->b43d--;
    a->w442 = 0;
    return 1;
next:
    if (a->w442 && !--a->w442) {
        p = s->base;
        p += a->w444;
        a->b45d = 1;
        a->b448 = *p++;
        a->l44c = *p++;
        a->b4ab = *p++;
        a->b4aa = *p++;
        bits = *p << 8;
        if ((unsigned short)bits & 0x0c00) {
            bits ^= a->b1d2 * 0xc00;
            a->w4ac = bits;
        }
    }
    a->w4dc = a->l450;
    return a->f498(a, s);
}

int func_0c05105c(struct Actor *a, struct OperandStream *s)
{
    func_0c04e6b2(a, s, 0);
    func_0c04e6b2(a, s, 1);
    a->l44c = a->parameter4b4.integer;
    a->b45f = a->parameter4b4.integer + 1;
    return 1;
}

int func_0c051094(struct Actor *a, struct OperandStream *s)
{
    func_0c04e6b2(a, s, 0);
    func_0c04e6b2(a, s, 1);
    a->l44c = a->parameter4b4.integer;
    a->b4a7 = *(unsigned char *)&a->l44c + 1;
    return 1;
}
