/* The complete 92-byte span links at the reviewed address: 64 bytes of code
 * plus all three literal pools (28 bytes). The function matches 62/64 code
 * bytes. At 0x0c1e0b9a-0x0c1e0b9c SHC loads state 0x0901 into r5, while retail
 * loads it into r1; the indexed store otherwise matches. The 12-byte vector
 * copy is expressed as a struct assignment so SHC supplies its runtime call. */
#include "objects.h"

extern struct ActorGlobalRoot *dat_0c2d964c;
extern const struct LinkedActorVec3 dat_0c262718;
extern struct LinkedActor *func_0c0374da(int, int, int);
extern void func_0c1e0b60(struct LinkedActor *);

void func_0c1e0b64(void)
{
    struct LinkedActor *a;
    int state;

    if ((a = func_0c0374da(0, 5, 1)) == 0)
        return;
    a->sdc.b12c = 1;
    a->p16 = func_0c1e0b60;
    a->p84 = dat_0c2d964c->p0->entries[11].pointer;
    *(struct LinkedActorVec3 *)&a->f52 = dat_0c262718;
    state = 0x0901;
    a->wcc.arrcc[0] = state;
}
