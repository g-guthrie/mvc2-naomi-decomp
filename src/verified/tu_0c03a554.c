#include "objects.h"

extern unsigned char func_0c046030(struct Actor *);
extern unsigned char func_0c0464c4(struct Actor *);
extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *);
extern unsigned char func_0c044846(struct Actor *);
extern unsigned char func_0c04428c(struct Actor *);
extern unsigned char func_0c044be2(struct Actor *);
extern unsigned char func_0c043d3a(struct Actor *);
extern int func_0c0439d8(struct Actor *, int);
extern char func_0c02a026(struct Actor *);
extern void func_0c0453c4(struct Actor *, int);

void func_0c03a554(struct Actor *a)
{
    if (a->b1d1 != 21) {
        if (func_0c046030(a))
            return;
    }
    if (func_0c0464c4(a))
        return;
    if (func_0c043c66(a))
        return;
    if (func_0c043a10(a))
        return;
    if (func_0c044846(a))
        return;
    if (func_0c04428c(a))
        return;
    if (func_0c044be2(a))
        return;
    if (!a->b201) {
        if (func_0c043d3a(a))
            return;
        if (func_0c0439d8(a, 0))
            return;
    }
    if (func_0c02a026(a) < 0)
        func_0c0453c4(a, 0);
}
