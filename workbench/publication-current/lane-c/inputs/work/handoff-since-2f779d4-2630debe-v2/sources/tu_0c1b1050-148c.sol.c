#include "selector_model.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern unsigned int func_0c02849a(void);
extern void func_0c029fc4(struct LinkedActor *),func_0c1cea66(struct LinkedActor *,struct LinkedActorVec3 *,int);
extern struct ActorSub2a4 *dat_0c2fb424;
extern union LinkedActorWcc *dat_0c2fb420;
extern void (*dat_0c25ad80[])(struct LinkedActor *),(*dat_0c25ad94[])(struct LinkedActor *);
extern short dat_0c25ad4c[];
void func_0c1b10e0(struct LinkedActor *);
#pragma section u1050
struct LinkedActor *func_0c1b1050(struct LinkedActor *parent,unsigned char mode,unsigned char phase)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,3,0))!=0){a->p16=func_0c1b10e0;a->p24=parent;a->b32=mode;a->b33=phase;((struct MeActor *)a)->w26=0x2000;}return a;
}
struct LinkedActor *func_0c1b1092(struct LinkedActor *owner,unsigned char mode,unsigned char phase)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,3,0))!=0){a->p16=func_0c1b10e0;a->p24=owner->p24;a->p20=owner;a->b32=mode;a->b33=phase;((struct MeActor *)a)->w26=0x2000;}return a;
}
void func_0c1b10e0(struct LinkedActor *a){dat_0c2fb424=&((struct Actor *)a->p24)->sub2a4;dat_0c2fb420=&a->wcc;dat_0c25ad80[a->b32](a);}
void func_0c1b1108(struct LinkedActor *a){dat_0c25ad94[a->b4](a);}
#pragma section u148c
void func_0c1b148c(struct LinkedActor *a)
{
 struct Actor *parent=(struct Actor *)a->p24;struct LinkedActorVec3 offset;
 func_0c029fc4(a);
 if(--a->b34==0){
 a->b34=4;offset.x=(func_0c02849a()&127)+-63.0f;offset.x*=1.66666663f;offset.y=(func_0c02849a()&127)+-63.0f;offset.y*=2.1428571f;offset.z=0.0f;func_0c1cea66(a,&offset,0);
 }
 if(--a->s28==0){func_0c1b1092(a,3,a->s30);a->s30++;a->s28=dat_0c25ad4c[a->s30];if(a->s28<0){a->s30=0;a->s28=dat_0c25ad4c[a->s30];}}
 if(parent->b411||((signed char *)&dat_0c2fb424->w8)[1]>=2)a->b5++;
}
