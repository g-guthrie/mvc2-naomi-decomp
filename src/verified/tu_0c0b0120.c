#include "objects.h"
extern unsigned char func_0c046e7e(struct Actor *, unsigned char *, unsigned char *);
extern void func_0c047aac(struct Actor *, unsigned char *);
extern void func_0c045248(struct Actor *, unsigned char);
extern unsigned char dat_0c2449b0[], dat_0c2449c4[];
int func_0c0b0120(struct Actor *a)
{
    if (!func_0c046e7e(a, dat_0c2449b0, a->x384)) return 0;
    if (a->b1f9 == 2) {
        if (a->b1d4 && !a->b1fc) return 0;
        a->b1d4++;
    }
    func_0c047aac(a, a->x384);
    a->b5 = 0;
    a->b7 = 0;
    a->b6 = 0;
    a->b1e9 = 3;
    func_0c045248(a, 21);
    if (a->b1f9 == 2) a->b6 = 1;
    else a->b6 = 0;
    return 1;
}
int func_0c0b01a0(struct Actor *a)
{
    if (!func_0c046e7e(a, dat_0c2449c4, a->x38c)) goto fail;
    if (!*a->p40c) {
fail:
        return 0;
    }
    func_0c047aac(a, a->x38c);
    a->b5 = 0;
    a->b7 = 0;
    a->b6 = 0;
    a->b1e9 = 4;
    func_0c045248(a, 29);
    return 1;
}
