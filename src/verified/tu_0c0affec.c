#include "objects.h"
extern unsigned char func_0c046e7e(struct Actor *, unsigned char *, unsigned char *);
extern void func_0c047aac(struct Actor *, unsigned char *);
extern void func_0c045248(struct Actor *, unsigned char);
extern unsigned char dat_0c244980[], dat_0c244990[], dat_0c2449a0[];
int func_0c0affec(struct Actor *a)
{
    struct ActorSub2a4 *sub = &a->sub2a4;
    if (!func_0c046e7e(a, dat_0c244980, a->x36c) || *(char *)&sub->w4) return 0;
    if (a->b1f9 == 2) {
        if (a->b1d4 && !a->b1fc) return 0;
        a->b1d4++;
    }
    func_0c047aac(a, a->x36c);
    a->b5 = 0;
    a->b7 = 0;
    a->b6 = 0;
    a->b1e9 = 0;
    func_0c045248(a, 21);
    return 1;
}
int func_0c0b006c(struct Actor *a)
{
    if (!func_0c046e7e(a, dat_0c244990, a->x374)) return 0;
    func_0c047aac(a, a->x374);
    a->b5 = 0;
    a->b7 = 0;
    a->b6 = 0;
    a->b1e9 = 1;
    func_0c045248(a, 21);
    return 1;
}
int func_0c0b00b2(struct Actor *a)
{
    if (!func_0c046e7e(a, dat_0c2449a0, a->x37c)) return 0;
    func_0c047aac(a, a->x37c);
    a->b5 = 0;
    a->b7 = 0;
    a->b6 = 0;
    a->b1e9 = 2;
    func_0c045248(a, 21);
    return 1;
}
