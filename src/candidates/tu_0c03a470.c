/* Candidate: 204/228. Input-word load order is lo then hi; retail loads
 * @(4) first. Pool swaps 0x184010a0 with 0x02000801. */
#include "objects.h"

extern unsigned char func_0c043a10(struct Actor *);
extern unsigned char func_0c044846(struct Actor *);
extern unsigned char func_0c043ec6(struct Actor *);
extern void func_0c043d5c(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c042018(struct Actor *);
extern void func_0c0442fa(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c044f1c(struct Actor *);

void func_0c03a470(struct Actor *a)
{
    unsigned int *p;

    if (func_0c043a10(a))
        return;
    if (func_0c044846(a))
        return;
    p = (unsigned int *)&a->s414;
    if ((p[1] & 0x02000801u) | (p[0] & 0x184010a0u)) {
        if (func_0c043ec6(a))
            return;
    }
    p = (unsigned int *)&a->s414;
    if ((p[1] & 16) | (p[0] & 0xa8400960u))
        func_0c043d5c(a);
    if (a->b1 == 42)
        a->p428->f60(a);
    func_0c02a026(a);
    func_0c042018(a);
    if (func_0c044e52(a) == 0)
        return;
    if (func_0c044846(a))
        return;
    if (a->b525)
        func_0c0442fa(a);
    func_0c044f1c(a);
}
