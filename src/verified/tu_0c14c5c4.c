/* Actor effect initialisers 0x0c14c5c4-0x0c14c70c. */
#include "objects.h"
#define A(a) ((struct Actor *)(a))

extern void func_0c02a0c4(struct LinkedActor *, int, int);

void func_0c14c5c4(struct LinkedActor *a)
{
    A(a)->b12c = 1;
    A(a)->w130 = A(a->p20)->w130;
    a->f52 = a->p20->f52;
    a->f56 = a->p20->f56;
    a->f60 = a->p20->f60;
    a->b36 = 13;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    A(a)->f80 = 1.4f;
    A(a)->f84 = 1.4f;
    a->f56 -= 95.9999924f;
    if (a->b35) {
        float c = 112.0f;

        a->f52 += A(a)->w130 ? c : -112.0f;
        func_0c02a0c4(a, 23, 3);
    } else {
        float d = -18.666666031f;

        a->f52 += A(a)->w130 ? d : 18.666666031f;
        func_0c02a0c4(a, 23, 60);
    }
}

void func_0c14c668(struct LinkedActor *a)
{
    A(a)->b12c = 1;
    A(a)->w130 = A(a->p20)->w130;
    a->f52 = a->p20->f52;
    a->f56 = a->p20->f56;
    a->f60 = a->p20->f60;
    {
        float c = 74.666664124f;

        a->f52 += A(a)->w130 ? c : -74.666664124f;
    }
    a->f56 -= 11.99999905f;
    a->b36 = 12;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    A(a)->f80 = 1.4f;
    A(a)->f84 = 1.4f;
    func_0c02a0c4(a, 23, 55);
}
