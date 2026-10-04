#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern int func_0c0427f2(struct Actor *),func_0c042780(struct Actor *);
extern void func_0c04b02a(struct Actor *),func_0c0346da(struct Actor *,int),func_0c1cea66(struct Actor *,struct LinkedActorVec3 *,int),func_0c02a0c4(struct Actor *,int,int);
void func_0c0d6200(struct Actor *a)
{
 struct Actor *other=a->p1c8;struct LinkedActorVec3 position;int one;
 func_0c02a026(a);one=1;if(func_0c0427f2(a))a->b142=one;
 if(!a->s30){if(func_0c042780(a->p1c8))a->s30=one;}
 if(!a->s30){if(--a->s28==0)a->s30=one;}
 if(!a->s30 && !other->w420)a->s30=one;
 if(a->b141){
  if(a->b141>0){
   other->b1a1=(a->b141&one)?33:34;func_0c04b02a(a);func_0c0346da(a,15);a->b141=0;
   position.x=-110.0f;position.y=139.28571f;position.z=0.0f;func_0c1cea66(a,&position,1);
  }else if(a->s30){a->b6++;func_0c02a0c4(a,15,1);}
 }
}
