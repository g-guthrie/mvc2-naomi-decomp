/* Unverified full section:252/268 bytes match; allocation/store registers differ. */
/* Advance a linked horizontal segment, spawning the next segment at its limit. */
#include "objects.h"
extern struct Dat_13bb5c dat_0c2f8338;
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void func_0c197836(struct LinkedActor *);
/* Dispatch at 0c197a50 supplies context in R6; retain the owner argument slot. */
void func_0c197a90(register struct LinkedActor *a,struct LinkedActor *owner,struct ActorSubByteState *context){
 struct Dat_13bb5c *state=&dat_0c2f8338;
 struct LinkedActor *child,*parent;register float excess;float limit;int one=1;
 if(!(state->w3c&(1<<state->b3b)) && context->b4)goto retract;
 parent=a->p20;a->f52=parent->f52;a->f52+=a->f92;
 a->f92+=a->f104;excess=a->f92;if(excess<0.0f)excess=-excess;
 limit=160.0f;excess-=limit;if(excess<0.0f)return;
 a->b5++;if(!a->sdc.w130){excess=-excess;limit=-160.0f;}
 a->f52=parent->f52+limit;a->f92=limit;a->f104=0.0f;
 if(a->s28>=7)return;
 if((child=func_0c0374da((int)a,3,2))){
 child->w38=0xe02;child->b32=one;child->b34=0;child->f92=excess;
 child->s28=a->s28+1;child->p24=a->p24;child->p20=a;child->p16=func_0c197836;
 a->b34=one;return;
 }
 retract:a->b5=2;a->f104=26.666666031f;
 if(a->sdc.w130)a->f104=-a->f104;
}
