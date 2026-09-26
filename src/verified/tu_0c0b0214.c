#include "objects.h"
extern unsigned char func_0c046e7e(struct Actor *, unsigned char *, unsigned char *);
extern int func_0c046d54(struct Actor *);
extern unsigned char func_0c046dd0(struct Actor *, int);
extern void func_0c047aac(struct Actor *, unsigned char *);
extern void func_0c045248(struct Actor *, int);
extern unsigned char dat_0c2449d4[];
int func_0c0b0214(struct Actor *a)
{
    if (!func_0c046e7e(a, dat_0c2449d4, a->x394) || !*a->p40c) return 0;
    if (a->b1f9 == 2 && !a->b1fc) {
        if (a->b1d4) return 0;
        a->b1d4++;
    }
    func_0c047aac(a, a->x394);
    a->b5 = 0;
    a->b7 = 0;
    a->b6 = 0;
    a->b1e9 = 5;
    func_0c045248(a, 29);
    if (a->b1f9 == 2) a->b6 = 1;
    else a->b6 = 0;
    return 1;
}
int func_0c0b029c(struct Actor *a)
{
    if (!func_0c046d54(a)) goto fail;
    if (!*a->p40c) {
fail:
        return 0;
    }
    a->b1e9 = 6;
    a->b5 = 0;
    func_0c045248(a, 29);
    a->b6 = a->b7 = 0;
    return 1;
}
int func_0c0b02dc(struct Actor *a)
{
    if (!func_0c046dd0(a, 7)) return 0;
    a->b1e9 = 7;
    a->b5 = 0;
    func_0c045248(a, 21);
    a->b6 = a->b7 = 0;
    return 1;
}
