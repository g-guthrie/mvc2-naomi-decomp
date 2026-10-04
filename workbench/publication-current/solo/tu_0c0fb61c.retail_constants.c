/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern char func_0c02a026(struct Actor *);
extern void func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c02a39a(struct Actor *,int);
extern void func_0c0429a4(struct Actor *,struct LinkedActorVec3 *,int);
extern void func_0c02a18c(struct Actor *,int,int,int);

/* func_0c0fb61c: no verified twin. Ghidra draft:
*/
void func_0c0fb6bc(struct Actor *);
void func_0c0fb61c(struct Actor *a)
{
 int zero;
 if(a->b255==6){a->b3f0=255;a->b3f1=16;}
 a->b6++;func_0c0442fa(a);func_0c02a39a(a,1);
 a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;zero=0;
 if(a->b1f9!=2){a->b1f9=zero;func_0c0432ca(a);}
 a->b1a1=93;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;
 a->s28=48;a->s30=16;a->l2c8=2;*(int *)&a->pad10c[0]=zero;func_0c02a0c4(a,21,4);
}

void func_0c0fb6bc(struct Actor *a)
{
 struct LinkedActorVec3 position;
 a->b3f8=2;a->b328=5;a->b3f1=a->b255==6?2:0;
 func_0c02a026(a);
 if(a->b141){
  a->b3f0=0;a->b3f1=0;
  a->b7++;a->b141=0;
  position.x=0.0f;position.y=210.0f;
  func_0c0429a4(a,&position,1);
 }
}
