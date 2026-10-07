#include "objects.h"
#define V(p) (*(struct LinkedActorVec3 *)&(p)->f52)
extern struct LinkedActor *func_0c0374da(struct LinkedActor *,int,int);
extern void func_0c02a0c4(struct LinkedActor *,int,int);
extern void func_0c1b6a2a(struct LinkedActor *);
void func_0c1b6e04(struct LinkedActor *a,struct LinkedActor *owner)
{
 struct ActorSub2a4 *sub=&((struct Actor *)owner)->sub2a4;
 struct LinkedActor *c;
 int i;
 a->sdc=owner->sdc;a->sdc.b12c=1;
 a->b2=owner->b2;a->b1=owner->b1;a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;
 a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;a->v80=owner->v80;
 a->b36=owner->b36;a->b4++;a->b36=7;V(a)=V(owner);
 a->b49=127;
 for(i=1;i<17;i++){
  if((c=func_0c0374da(a,3,2))!=0){c->w38=0x2d00;c->b32=4;c->b33=i;V(c)=V(a);c->b49=i-a->b49;c->p16=func_0c1b6a2a;c->p24=owner;c->p20=a;}
  else{a->b4=2;a->sdc.b12c=0;((char *)sub)[7]=-1;return;}
 }
 func_0c02a0c4(a,23,6);
}
