/* Candidate: func_0c1427bc tests b14b through r0 (mov.b @(r0,r14),r0; tst r0,r0) and reloads the offset, where retail keeps r0 and uses r1; the
 * following global load and store registers shift with it. Everything else (control flow, pool) matches. */
#include "objects.h"
#define A(a) ((struct Actor *)(a))
extern struct Dat_13bb5c dat_0c2f8338;
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern char func_0c02a026(struct LinkedActor *);
extern void func_0c037d0c(struct LinkedActor *);
extern void func_0c037688(struct LinkedActor *);

void func_0c1427bc(struct LinkedActor *a, struct Actor *b)
{
    struct ActorSub2a4 *sub = &b->sub2a4;
    struct LinkedActor *p = a->p20;
    if (b->b5 != 0 || b->b1d0 != 21 || b->b1e9 != 1) goto fail;
    a->b36 = b->b36;
    a->b49 = -8;
    if ((dat_0c2f8338.w3c & (1 << dat_0c2f8338.b3b)) != 0) return;
    if (A(a)->b19f != 0) goto fail;
    if (func_0c02a026(a) < 0) goto fail;
    *(struct LinkedActorVec3 *)&a->f52 = *(struct LinkedActorVec3 *)&p->f52;
    if (A(a)->b14b) {
        A(a)->b1a1 = A(a)->b14b;
        A(a)->w1ac = 0;
        A(a)->b19e = 0;
        A(a)->p1c4 = 0;
        dat_0c2f83f8->arr[a->b2]++;
        A(a)->b14b = 0;
    }
    func_0c037d0c(a);
    return;
fail:
    a->b4 = 2;
    A(a)->b12c = 0;
    sub->b0 = 1;
}

void func_0c142886(struct LinkedActor *a)
{
    func_0c037688(a);
}
