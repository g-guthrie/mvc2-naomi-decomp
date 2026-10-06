/* Unverified palette-cycle attachment family:356 linked bytes against352 native; owner/subrecord register scheduling unresolved. */
#include "objects.h"
extern unsigned char dat_0c2f8338[],dat_0c25be48[];
extern void func_0c02a684(struct Actor *,int,int,int),func_0c02a39a(struct Actor *,int,int);
void func_0c1bd7a2(struct LinkedActor *,struct Actor *);
void func_0c1bd744(struct LinkedActor *a,struct LinkedActor *owner){
 a->b4++;a->sdc=owner->sdc;a->sdc.b12c=1;
 a->b2=owner->b2;a->b1=owner->b1;a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;
 a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;a->v80=owner->v80;a->b36=owner->b36;
 a->sdc.b12c=0;func_0c1bd7a2(a,(struct Actor *)owner);
}
void func_0c1bd7a2(struct LinkedActor *a,struct Actor *owner){
 unsigned char *flags;int kind;register signed char *state=(signed char *)owner+0x2a4;
 owner->w3e4=2;
 if(!owner->w420)goto done;
 flags=dat_0c2f8338;kind=owner->p20c->b1;
 if((kind==24 || kind==25) && (flags[3] || flags[0]==6))
 done:{a->b4++;return;}
 if(!(flags[6]&(1<<(a->b2^1))) && state[8]){
 if(state[34]--==0){
 state[34]=4;if(--state[33]<0)state[33]=9;
 func_0c02a684(owner,0,owner->b37*6+dat_0c25be48[state[33]],1);
 }
 }
}
void func_0c1bd856(struct LinkedActor *a,struct LinkedActor *owner){
 signed char *state=(signed char *)owner+0x2a4;
 a->b4++;a->sdc.b12c=0;state[8]=0;state[35]=1;func_0c02a39a((struct Actor *)owner,0,0);
}
