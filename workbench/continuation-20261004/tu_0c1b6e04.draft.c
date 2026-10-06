/* Unverified sixteen-child allocation callback: 328 linked bytes against 320 native. */
#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void func_0c1b6a2a(struct LinkedActor *),func_0c02a0c4(struct LinkedActor *,int,int);
void func_0c1b6e04(struct LinkedActor *a,struct LinkedActor *owner)
{
 struct ActorSub2a4 *state=&((struct Actor *)owner)->sub2a4;
 struct LinkedActor *child;int i;
 a->sdc=owner->sdc;a->sdc.b12c=1;
 a->b2=owner->b2;a->b1=owner->b1;
 a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;
 a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;
 a->b48=owner->b48;a->v80=owner->v80;a->b36=owner->b36;
 a->b4++;a->b36=7;
 *(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&owner->f52;
 ((unsigned char *)a)[49]=127;
 for(i=1;i<17;i++){
 if((child=func_0c0374da((int)a,3,2))){
 child->w38=0x2d00;child->b32=4;child->b33=i;
 *(struct LinkedActorVec3 *)&child->f52=*(struct LinkedActorVec3 *)&a->f52;
 ((unsigned char *)child)[49]=i-a->b49;child->p16=func_0c1b6a2a;child->p24=owner;child->p20=a;
 }else{a->b4=2;a->sdc.b12c=0;state->b7=-1;return;}
 }
 func_0c02a0c4(a,23,6);
}
