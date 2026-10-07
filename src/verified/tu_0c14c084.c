/* Actor effect-spawn initialisers 0x0c14c084..0x0c14c200. */
#include "objects.h"
#define A(a) ((struct Actor *)(a))

extern void func_0c02a0c4(struct LinkedActor *, int, int);

void func_0c14c084(struct LinkedActor *a)
{
    A(a)->b12c = 1;
    a->f52 = a->p24->f52;
    a->f56 = a->p24->f56;
    a->f60 = a->p24->f60;
    a->f52 += a->p24->sdc.w130 ? -16 : 16;
    a->f56 += 176.0f;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    A(a)->b159 = 23;
    func_0c02a0c4(a, A(a)->b159, 33);
}

void func_0c14c0ee(struct LinkedActor *a)
{
    A(a)->b12c = 1;
    a->f52 = a->p24->f52;
    a->f56 = a->p24->f56;
    a->f60 = a->p24->f60;
    a->b36 = 9;
    func_0c02a0c4(a, 23, (signed char)a->p24->b7 + 8);
}

void func_0c14c128(struct LinkedActor *a)
{
    A(a)->b12c = 1;
    a->f52 = a->p24->f52;
    a->f56 = a->p24->f56;
    a->f60 = a->p24->f60;
    a->b36 = 11;
    A(a)->f264 = 0.5f;
    func_0c02a0c4(a, 23, (signed char)a->p24->b7 + 13);
}

void func_0c14c16a(struct LinkedActor *a)
{
    A(a)->b12c = 1;
    a->f52 = a->p24->f52;
    a->f56 = a->p24->f56;
    a->f60 = a->p24->f60;
    a->b36 = 12;
    func_0c02a0c4(a, 23, (signed char)a->p24->b7 + 18);
}

void func_0c14c1a4(struct LinkedActor *a)
{
    A(a)->b12c = 1;
    a->f52 = a->p24->f52;
    a->f56 = a->p24->f56;
    a->f60 = a->p24->f60;
    a->f56 += 240.0f;
    a->b36 = 10;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    func_0c02a0c4(a, 23, 44);
}
