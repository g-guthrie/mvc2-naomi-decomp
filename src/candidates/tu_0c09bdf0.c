/* Candidate: func_0c09be48 retail keeps the zero in r13 after the call; z placement shifts its body and pool order. */
#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c148d54(struct Actor *, int, int);
extern void func_0c19d2ac(struct Actor *, int, int);

void func_0c09bdf0(struct Actor *a)
{
    a->b3f8 = 2;
    a->b328 = 5;
    func_0c02a026(a);
    if (a->b141) {
        a->b6++;
        a->b141 = 0;
        func_0c148d54(a, 1, (a->s30 & 3) + 0x80);
        func_0c19d2ac(a, 6, a->s30 & 3);
        a->s30++;
    }
}

void func_0c09be48(struct Actor *a)
{
    unsigned char z = 0;
    a->b3f8 = 2;
    a->b328 = 5;
    func_0c02a026(a);
    if (a->b141) {
        a->b3f9 = z;
        a->b3f8 = z;
        a->b327 = z;
        a->b328 = z;
        a->b6++;
        a->b141 = z;
        a->b1f9 = 2;
        a->f92 = a->b1d2 ? -10.0f : 10.0f;
        a->f104 = 0.0f;
        a->f96 = 9.642857f;
        a->f108 = -0.80357140303f;
        func_0c19d2ac(a, 14, 0);
    }
}
