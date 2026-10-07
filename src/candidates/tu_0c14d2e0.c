/* Candidate: 2.0f compare (fldi1/fadd) and owner sub2a4 byte store addressing differ; func_0c14d376 arg order shifted by 2 bytes. */
#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c14fb9c(struct Actor *);
extern struct ActorFlags *dat_0c2d6f84;
extern void (*const table_0c250324[])(struct Actor *, struct Actor *, void *);
void func_0c14d2e0(struct Actor *a);
void func_0c14d376(struct Actor *a);

void func_0c14d2e0(struct Actor *a)
{
    struct Actor *o = (struct Actor *)((struct LinkedActor *)a)->p24;
    func_0c02a026(a);
    if (0.0f != a->f264) a->f264 -= 0.06f;
    a->f80 -= 0.08f;
    if (a->f80 <= 0.0f) a->f80 = 0.02f;
    a->f84 += 0.200000003f;
    if (a->f84 >= 2.0f) {
        a->b4++;
        a->f84 = 0.0f;
        o->sub2a4.b20 = 0;
    }
    a->f80 = (dat_0c2d6f84->flags & 1) ? 1.0f : 0.800000012f;
}

void func_0c14d376(struct Actor *a)
{
    table_0c250324[a->b5](a, (struct Actor *)((struct LinkedActor *)a)->p24, &a->f136);
    if (a->b1 != ((struct LinkedActor *)a)->p24->b1) func_0c14fb9c(a);
}
