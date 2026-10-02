#include "objects.h"

extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *);
extern unsigned char func_0c044846(struct Actor *);
extern int func_0c0439d8(struct Actor *, int);
extern unsigned char func_0c043d3a(struct Actor *);
extern unsigned char func_0c044c60(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c0453c4(struct Actor *, int);

void func_0c03a8ec(struct Actor *a)
{
    if (func_0c043c66(a))
        return;
    if (func_0c043a10(a))
        return;
    if (func_0c044846(a))
        return;
    if (func_0c0439d8(a, 0))
        return;
    if (func_0c043d3a(a))
        return;
    if (func_0c044c60(a))
        return;
    if (func_0c02a026(a) < 0)
        func_0c0453c4(a, 0);
}

void func_0c03a954(struct Actor *a)
{
    if (func_0c043c66(a))
        return;
    if (func_0c043a10(a))
        return;
    if (func_0c044846(a))
        return;
    if (func_0c043d3a(a))
        return;
    if (func_0c044c60(a))
        return;
    if (func_0c02a026(a) < 0 || (a->w340 & 0xc00))
        func_0c0453c4(a, 6);
}
