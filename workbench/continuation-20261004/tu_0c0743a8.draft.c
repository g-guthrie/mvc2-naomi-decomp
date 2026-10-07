/* Unverified:361/364 bytes; state-byte test uses R2 instead of native R3. */
/* Paired actor capture: phase dispatch and horizontal approach. */
#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern int func_0c0447bc(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c025900(struct Actor *,char,char);
extern void (*table_0c2411d4[])(struct Actor *,struct ActorChildTimerReference *);
void func_0c0743a8(struct Actor *a){table_0c2411d4[a->b7](a,(struct ActorChildTimerReference *)&a->sub2a4);}
void func_0c0743be(struct Actor *a,struct ActorChildTimerReference *context){
 int zero;float stopped;
 a->b3f8=2;a->b328=5;a->f52+=a->f92;a->f92+=a->f104;
 func_0c02a026(a);zero=0;
 if((signed char)a->b1fd && (signed char)a->b1fd!=(1<<a->b1d2)){
 a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;a->b6++;a->b7=zero;
 func_0c02a0c4(a,22,3);
 }else if(a->b19e){
 stopped=0;
 if(func_0c0447bc(a)){
 struct Actor *child=a->p1b0;float offset;
 a->b7++;context->base.child=child;context->timer=zero;
 offset=-100.0f;if(a->b1d2)offset=100.0f;
 child->f52=a->f52+offset;child->f56=a->f56;child->b1f9=zero;
 a->f92=stopped;a->f104=stopped;
 func_0c025900(a,8,8);func_0c02a0c4(a,22,1);
 }else{
 a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;a->b6++;a->b7=zero;
 a->f92=stopped;a->f96=stopped;a->f104=stopped;a->f108=stopped;
 func_0c02a0c4(a,22,4);
 }
 }
}
