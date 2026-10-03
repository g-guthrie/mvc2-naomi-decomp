/* UNVERIFIED complete draft; whole linked comparison fails. Do not register or count as decompilation credit.
 * Uses published objects.h at 7c9b572. Actor byte 0x13d, when used, is accessed through its existing pad6bb member. */
#include "objects.h"
#define A(a) ((struct Actor *)(a))
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern float dat_0c251fcc[][4];
extern void func_0c02a0c4(struct LinkedActor *,int,int);
void func_0c167f98(struct LinkedActor *a)
{
 float *motion;int animation;
 a->b5++;a->sdc=a->p24->sdc;a->sdc.b12c=1;
 a->b2=a->p24->b2;a->b1=a->p24->b1;a->v80.x=a->p24->v80.x;a->v80.y=a->p24->v80.y;
 a->b1a3=a->p24->b1a3;a->b1a4=a->p24->b1a4;a->b48=a->p24->b48;a->v80=a->p24->v80;
 a->b36=a->p24->b36;
 motion=dat_0c251fcc[a->p24->b1a3];A(a)->f92=*motion++;A(a)->f104=*motion++;A(a)->f96=*motion++;A(a)->f108=*motion;
 *(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&a->p24->f52;
 if(A(a)->w130){a->f52-=-136.66666f;A(a)->f92=-A(a)->f92;A(a)->f104=-A(a)->f104;}else a->f52-=136.66666f;
 a->f56+=154.28571f;
 if(!a->p24->b1a3){A(a)->b1a1=79;A(a)->w1ac=0;A(a)->b19e=0;A(a)->p1c4=0;dat_0c2f83f8->arr[a->b2]++;animation=6;}
 else{A(a)->b1a1=81;A(a)->w1ac=0;A(a)->b19e=0;A(a)->p1c4=0;dat_0c2f83f8->arr[a->b2]++;animation=8;}
 func_0c02a0c4(a,23,animation);A(a)->b19c=68;A(a)->b19d=68;A(a)->b13c=A(a)->pad6bb=48;A(a)->b13f=A(a)->b13e=64;
}
