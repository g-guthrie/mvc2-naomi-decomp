/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
struct Vec3_0c05ec28 { float x, y, z; };
typedef void (*ActorHandler)(struct Actor *);
extern ActorHandler table_0c24466c[];
extern void func_0c025900(struct Actor *, int, int);
extern void func_0c1d4610(struct Actor *, struct Vec3_0c05ec28 *);
extern void func_0c048ce6(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);

void func_0c0ac7e0(struct Actor *a)
{
    a->b1ea = 1;
    table_0c24466c[a->b1f7 & 63](a);
}

/* func_0c0ac810: no verified twin. Ghidra draft:
*/
void func_0c0ac810(void) { }
