/* Spawns the follow-up object chosen by the 0xc00 field of w1fa when the
 * actor is above the 137.14 line, recording the spawn mode in b1f7, and
 * dispatches on that mode. */
#include "objects.h"
typedef void (*ActorHandler)(struct Actor *);
extern ActorHandler table_0c249720[];
extern struct Actor *func_0c037d54(struct Actor *);

struct Actor *func_0c0e7574(struct Actor *a)
{
    struct Actor *t;
    if (!(a->b34 = (a->w1fa & 0xc00) >> 10))
        return 0;
    if (!a->b1fe && (unsigned char)a->b1a3 == 1 && a->f56 > 137.142853f) {
        a->b34 ^= 3;
        if (!(t = func_0c037d54(a)))
            return 0;
        a->b1f7 = 2;
        return t;
    } else if ((unsigned char)a->b1fe == 1 && (unsigned char)a->b1a3 == 1 && a->f56 > 137.142853f) {
        if (!(t = func_0c037d54(a)))
            return 0;
        a->b1f7 = 1;
        return t;
    }
    return 0;
}

void func_0c0e760e(struct Actor *a)
{
    table_0c249720[a->b1f7&63](a);
}
