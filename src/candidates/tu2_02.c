#include "objects.h"

extern void func_0c045248(struct Actor *, int);

void func_0c0ec040(struct Actor *o)
{
    o->b5 = 0;
    o->b7 = 0;
    o->b6 = 0;
    switch (o->b4c9) {
    case 0:
        o->b1e9 = 5;
        break;
    case 1:
        o->b1e9 = 5;
        break;
    case 2:
        o->b1e9 = 5;
        break;
    }
    func_0c045248(o, 29);
}

void func_0c0ec064(struct Actor *o)
{
    o->b5 = 0;
    o->b7 = 0;
    o->b6 = 0;
    switch (o->b4c9) {
    case 0:
        o->b1e9 = 5;
        break;
    case 1:
        o->b1e9 = 5;
        break;
    case 2:
        o->b1e9 = 5;
        break;
    }
    func_0c045248(o, 29);
}

void func_0c0ec088(struct Actor *o)
{
    o->b5 = 0;
    o->b7 = 0;
    o->b6 = 0;
    if (o->b4c9 == 0) {
        o->b1e9 = 0;
        o->b1a3 = 1;
    } else if (o->b4c9 == 1) {
        o->b1e9 = 1;
        goto z1a3;
    } else if (o->b4c9 == 2) {
        o->b1e9 = 2;
    z1a3:
        o->b1a3 = 0;
    }
    func_0c045248(o, 21);
}

void func_0c0ec0ca(struct Actor *o)
{
    o->b5 = 0;
    o->b7 = 0;
    o->b6 = 0;
    if (o->b4c9 == 0) {
        o->b1e9 = 0;
        goto a1a3;
    } else if (o->b4c9 == 1) {
        o->b1e9 = 1;
        goto a1a3;
    } else if (o->b4c9 == 2) {
        o->b1e9 = 2;
    a1a3:
        o->b1a3 = 1;
    }
    func_0c045248(o, 21);
}
