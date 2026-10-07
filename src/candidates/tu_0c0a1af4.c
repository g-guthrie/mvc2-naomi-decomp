/* Candidate: 2.0f fldi1/fadd scheduling and tail float register choice differ (85/110). */
#include "objects.h"
extern void func_0c09e43a(struct Actor *);
extern void func_0c025900(struct Actor *,int,int);
extern int dat_0c2d9634;
extern struct MotionGlobal_0c2d9260 dat_0c2d9260;
#pragma inline(one)
static float one(void){return 1.0f;}

void func_0c0a1af4(struct Actor *a)
{
    float y;
    func_0c09e43a(a);
    a->b1ea = 1; a->b1ed = 2; a->b1f5 = 2;
    dat_0c2d9634 = 2;
    a->b6++;
    func_0c025900(a, 1, 13);
    y = one(); y += y;
    a->f52 = (dat_0c2d9260.f88 + dat_0c2d9260.f8c) / y;
    a->f52 += a->b1d2 ? -133.33333f : 133.33333f;
}
