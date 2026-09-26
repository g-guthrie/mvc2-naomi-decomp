#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *);
extern void func_0c025900(struct Actor *, char, char);
extern void func_0c1ceafe(struct Actor *, struct LinkedActorVec3 *);
extern void func_0c0346da(struct Actor *, int);
void func_0c05b37c(struct Actor *a)
{
    struct Actor *child;
    if (func_0c02a026(a) < 0) {
        func_0c0437b8(a);
        return;
    }
    if (a->b141) {
        a->b141 = 0;
        func_0c025900(a, 0, 0);
        child = a->p1c8;
        child->p1b4 = a;
        child->b1f6 = 2;
        child->b1a1 = 32;
        a->b1a1 = 32;
    }
}
void func_0c05b3c8(struct Actor *a)
{
    struct LinkedActorVec3 position;
    struct Actor *child;
    if (func_0c02a026(a) < 0) {
        func_0c0437b8(a);
        return;
    }
    if (a->b141 == 2) {
        a->b141 = 0;
        position.x = -106.666664124f;
        position.y = 205.71428f;
        func_0c1ceafe(a, &position);
        func_0c0346da(a, 12);
        return;
    }
    if (a->b141 == 1) {
        a->b141 = 0;
        func_0c025900(a, 0, 0);
        child = a->p1c8;
        child->p1b4 = a;
        child->b1f6 = 1;
        child->b1a1 = 35;
        a->b1a1 = 35;
    }
}
