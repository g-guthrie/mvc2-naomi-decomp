#include "objects.h"

extern unsigned char func_0c046030(struct Actor *);
extern unsigned char func_0c0464c4(struct Actor *);
extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *);
extern unsigned char func_0c044846(struct Actor *);
extern unsigned char func_0c043d3a(struct Actor *);
extern unsigned char func_0c044c0c(struct Actor *);
extern void func_0c0453c4(struct Actor *, int);

void func_0c03a9e0(struct Actor *a)
{
    if (a->b1 != 1)
        a->b237 = 5;
    if (a->b1 == 53 && !a->b140) {
        a->p428->fn16(a);
        return;
    } else if (func_0c046030(a))
        return;
    if (func_0c0464c4(a))
        return;
    if (!a->b201) {
        if (func_0c043c66(a))
            return;
        if (func_0c043a10(a))
            return;
        if (func_0c044846(a))
            return;
        if (func_0c043d3a(a))
            return;
        if (func_0c044c0c(a))
            return;
    } else {
        if (func_0c043a10(a))
            return;
        if (func_0c044846(a))
            return;
        if (a->w34e & 0x400) {
            func_0c0453c4(a, 0);
            return;
        }
    }
    a->p428->fn16(a);
}
