/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *);
extern int func_0c1ec190(void);
extern short dat_0c2406cc[];
extern void (*table_0c2406c4[])(struct Actor *);
extern void (*table_0c2406d4[])(struct Actor *);
extern void (*table_0c24355c[])(struct Actor *, struct ActorSub2a4 *);
extern void func_0c02a0c4(struct Actor *, int, int);

void func_0c09b2ec(struct Actor *a)
{
    table_0c24355c[a->b7](a, &a->sub2a4);
}

/* func_0c09b302: no verified twin. Ghidra draft:
*/
void func_0c09b302(void) { }

/* func_0c09b3b6: no verified twin. Ghidra draft:
*/
void func_0c09b3b6(void) { }
