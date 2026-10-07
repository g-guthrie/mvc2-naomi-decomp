/* Four position/state handlers match. func_0c07085c differs only in float
 * registers around the 2.0f divisor that retail builds with fldi1/fadd (open
 * pattern, see MATCHING.md). The inline one() helper is the experimental
 * workbench recipe that keeps the pool exact; it is not claimed as original. */
#include "objects.h"
extern void func_0c1d4610(struct Actor *,struct LinkedActorVec3 *);
extern void func_0c048ce6(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int);
extern void (*table_0c240ea4[])(struct Actor *);
extern void (*table_0c240ebc[])(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern short dat_0c240ecc[];
extern void func_0c03489c(struct Actor *);
extern void func_0c0437b8(struct Actor *);
void func_0c07098a(struct Actor *);

void func_0c07076c(struct Actor *a)
{
 struct LinkedActorVec3 position;
 position.x=53.3333321f;position.y=171.42856f;
 func_0c1d4610(a,&position);a->b1a0=10;func_0c048ce6(a);func_0c02a0c4(a,15,0);
}

void func_0c0707a8(struct Actor *a)
{
 struct LinkedActorVec3 position;
 position.x=-53.3333321f;position.y=171.42856f;
 func_0c1d4610(a,&position);a->b1a0=10;func_0c048ce6(a);func_0c02a0c4(a,15,1);
}

void func_0c0707e4(struct Actor *a)
{
 struct LinkedActorVec3 position;
 position.x=-53.3333321f;position.y=171.42856f;
 func_0c1d4610(a,&position);a->b1a0=10;func_0c048ce6(a);func_0c02a0c4(a,15,2);
}

void func_0c070820(struct Actor *a)
{
 struct LinkedActorVec3 position;
 position.x=-53.3333321f;position.y=171.42856f;
 func_0c1d4610(a,&position);a->b1a0=10;func_0c048ce6(a);func_0c02a0c4(a,15,3);
}

#pragma inline(one)
static float one(void){return 1.0f;}
void func_0c07085c(struct Actor *a)
{
 struct LinkedActorVec3 position;float two;
 position.x=-26.666666031f;position.y=102.85714f;
 func_0c1d4610(a,&position);a->b1a0=10;
 {float z=0.0f;a->f92=z;two=one();two+=two;a->f104=z;}
 a->f96/=two;
 a->f108=-0.80357140303f;
 func_0c048ce6(a);func_0c02a0c4(a,15,6);
}
