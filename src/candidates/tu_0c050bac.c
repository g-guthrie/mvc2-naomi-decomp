/* Candidate: size exact, 198/212 bytes and the pool match. Differs: the
 * call-address registers of the two func_0c04e6b2 calls and the truth-test
 * scratch register are one step off in rotation (retail r2,r3,r2 where this
 * gives r3,r2,r3) in both functions. */
#include "objects.h"

extern int func_0c04e78e(struct Actor *, int);
extern int func_0c04e82a(struct Actor *, void *);
extern void func_0c04e6b2(struct Actor *, void *, int);

int func_0c050bac(struct Actor *a, void *b)
{
    unsigned short m;

    if (!func_0c04e78e(a, 2))
        return 0;
    if (!func_0c04e82a(a, b))
        return 0;
    func_0c04e6b2(a, b, 0);
    func_0c04e6b2(a, b, 1);
    if (a->parameter4b4.integer)
        m = 0x100;
    else
        m = 0x200;
    if (a->w4ae & m)
        a->w4ae ^= m;
    else
        a->w4dc = m;
    return 0;
}

int func_0c050c10(struct Actor *a, void *b)
{
    unsigned short m;

    if (!func_0c04e78e(a, 2))
        return 0;
    if (!func_0c04e82a(a, b))
        return 0;
    func_0c04e6b2(a, b, 0);
    func_0c04e6b2(a, b, 1);
    if (a->parameter4b4.integer)
        m = 0x20;
    else
        m = 0x40;
    if (a->w4ae & m)
        a->w4ae = m;
    else
        a->w4dc = m;
    return 0;
}
