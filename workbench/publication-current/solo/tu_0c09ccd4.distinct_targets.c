#include "objects.h"
extern void func_0c025900(struct Actor *,int,int),func_0c048ce6(struct Actor *),func_0c1d4610(struct Actor *,struct LinkedActorVec3 *),func_0c02a0c4(struct Actor *,int,int),func_0c03f004(struct Actor *,struct Actor *);
#define FLAGS_LOW(p) (*(unsigned int *)&(p)->pad13c[2])
#define FLAGS_HIGH(p) (*(unsigned int *)&(p)->pad13c[6])
void func_0c09ccd4(struct Actor *a)
{
 struct LinkedActorVec3 position;unsigned int low,high;
 func_0c025900(a,6,6);func_0c048ce6(a);a->b1a0=10;
 position.x=-90.0f;position.y=154.28571f;position.z=0.0f;func_0c1d4610(a,&position);
 {struct Actor *target=a->p1c8;low=FLAGS_LOW(target)&0u;high=FLAGS_HIGH(target)&0x04000000u;}
 if(low|high)a->p1c8->f56=a->f41c+128.57143f;
 else {struct Actor *target=a->p1c8;if(FLAGS_LOW(target)&0x20000000u)a->p1c8->f56=a->f41c+42.85714f;}
 func_0c02a0c4(a,15,0);position=*(struct LinkedActorVec3 *)((char *)a+52);
 func_0c03f004(a,a->p1c8);*(struct LinkedActorVec3 *)((char *)a+52)=position;
}
void func_0c09cd9c(struct Actor *a)
{
 struct LinkedActorVec3 position;
 func_0c025900(a,6,6);func_0c048ce6(a);a->b1a0=10;
 position.x=-90.0f;position.y=154.28571f;position.z=0.0f;func_0c1d4610(a,&position);
 func_0c02a0c4(a,15,0);position=*(struct LinkedActorVec3 *)((char *)a+52);
 func_0c03f004(a,a->p1c8);*(struct LinkedActorVec3 *)((char *)a+52)=position;
}
