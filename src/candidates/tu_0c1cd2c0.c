/* The 112-byte linked span and 18-byte literal pool are exact. The 70-byte
 * constructor func_0c1cd2c0 matches 52 bytes; its timer callback
 * func_0c1cd306 matches 24/24. Remaining constructor differences: zero and
 * callback temps at 0x0c1cd2d8-dc use r7/r5 instead of r5/r2; the p16 store
 * and dat_0c2d967c table loads at 0x0c1cd2e6-f4 are scheduled/register-allocated
 * differently; the p84[18] zero store at 0x0c1cd2f8 uses r7 instead of r5. */
#include "objects.h"

extern struct LinkedActorDispatch *func_0c0374da(int, int, int);
extern LinkedActorDispatchHandler **dat_0c2d967c;
extern void func_0c1cd306(struct LinkedActorDispatch *);

void func_0c1cd2c0(int index)
{
    struct LinkedActorDispatch *q;
    LinkedActorDispatchHandler value, p16;

    if ((q = func_0c0374da(0, 11, 1)) != 0) {
        p16 = func_0c1cd306;
        q->b12c = 0;
        q->b32 = index;
        value = (*dat_0c2d967c)[index];
        q->p16 = p16;
        q->p84[0] = value;
        q->p84[18] = 0;
        q->s28 = 0x1e0;
    }
}

void func_0c1cd306(struct LinkedActorDispatch *a)
{
    if (a->s28 != 0) {
        a->s28 = a->s28 - 1;
        return;
    }
    a->b12c = 1;
}
