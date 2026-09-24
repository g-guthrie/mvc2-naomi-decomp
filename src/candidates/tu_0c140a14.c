/* Candidate owns the reviewed 136-byte span 0x0c140a14-0x0c140a9b.
 * Remaining byte mismatches: A14 {0c140a2b, 0c140a2f, 0c140a32-34,
 * 0c140a39} (6 bytes); A66 {0c140a66-69, 0c140a6b, 0c140a6e-76,
 * 0c140a7b} (15 bytes). A46 (32), A88 (6), and the A8E-A9B pool/pad
 * (14 bytes) match exactly.
 */
#include "objects.h"
extern signed char func_0c02a026(struct Actor *);
extern void func_0c037688(struct Actor *);

void func_0c140a14(struct Actor *a, struct Actor *b)
{
    char *p = (char *)&b->sub2a4;
    struct Actor *q = a->p20;
    q->b12c = 1;
    if (q->b19f) {
        register char *slot = p;
        slot++;
        slot += a->b35;
        *slot |= -128;
    }
    a->b4 = 2;
    a->b12c = 0;
}

void func_0c140a46(struct Actor *a)
{
    if (func_0c02a026(a) < 0) {
        a->b4 = 3;
        a->b12c = 0;
    }
}

void func_0c140a66(struct Actor *a, struct Actor *b)
{
    char *base = (char *)b + 0x2a4;
    unsigned char i = a->b35;
    volatile char *slot = base + 1 + i;
    *slot &= -3;
    a->b4 = 3;
    a->b12c = 0;
}

void func_0c140a88(struct Actor *a)
{
    func_0c037688(a);
}
