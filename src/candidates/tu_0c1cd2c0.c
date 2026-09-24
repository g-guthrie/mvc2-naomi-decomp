/* The 112-byte linked span has 105 matching bytes. The 18-byte literal pool
 * and func_0c1cd306 match exactly. The constructor differs only in register
 * allocation for its dat_0c2d967c table lookup at 0x0c1cd2e8-0x0c1cd2f4;
 * the linked unit must not be promoted until all seven bytes match. */
#include "objects.h"

extern struct LinkedActorDispatch *func_0c0374da(int, int, int);
extern LinkedActorDispatchHandler **dat_0c2d967c;
extern void func_0c1cd306(struct LinkedActorDispatch *);

void func_0c1cd2c0(int index)
{
    struct LinkedActorDispatch *q;
    LinkedActorDispatchHandler value;

    if ((q = func_0c0374da(0, 11, 1)) != 0) {
        q->b12c = 0;
        q->b32 = index;
        q->p16 = func_0c1cd306;
        value = (*dat_0c2d967c)[index];
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
