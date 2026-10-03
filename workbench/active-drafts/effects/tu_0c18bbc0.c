/* UNVERIFIED DRAFT: complete function bodies; not registered or credited. */
/* Private partial translation. Enclosing 1532-byte unit remains incomplete. */
#include "objects.h"
#define A(p) ((struct Actor *)(p))
extern struct LinkedActor *func_0c0374da(struct LinkedActor *,int,int);
extern void (*table_0c256204[])(struct LinkedActor *,struct LinkedActor *);
extern void (*table_0c256214[])(struct LinkedActor *,struct LinkedActor *);
void func_0c18bc28(struct LinkedActor *);
void func_0c18bc44(struct LinkedActor *,struct LinkedActor *);
void func_0c18bdae(struct LinkedActor *,struct LinkedActor *);
struct LinkedActor *func_0c18bbc0(struct LinkedActor *owner,int flags)
{
 struct LinkedActor *a;
 if(flags<0)a=func_0c0374da(0,1,1);else a=func_0c0374da(owner,1,2);
 if(a){a->p16=func_0c18bc28;a->p24=owner;a->p20=owner->p24;
 a->wcc.dword_value=(unsigned short)owner->sdc.w158;a->b1=owner->b1;a->w38=0x3a04;
 a->b32=flags;a->b33=flags>>8;flags=(short)((unsigned int)flags>>16);a->b35=flags;}
 return a;
}
void func_0c18bc28(struct LinkedActor *a)
{if(!a->b32)func_0c18bc44(a,a->p24);else func_0c18bdae(a,a->p24);}
void func_0c18bc44(struct LinkedActor *a,struct LinkedActor *owner)
{table_0c256204[a->b4](a,owner);}
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c02a0c4(struct Actor *,int,int);
extern char func_0c02a026(struct Actor *);
extern void func_0c18c080(struct LinkedActor *,struct LinkedActor *);
extern void func_0c18c11a(struct LinkedActor *,struct LinkedActor *);
void func_0c18bd2a(struct LinkedActor *,struct LinkedActor *);
void func_0c18bc68(struct Actor *a,struct LinkedActor *owner)
{
 a->b4++;((struct LinkedActor *)a)->sdc=owner->p24->sdc;a->b12c=1;
 a->b2=owner->p24->b2;a->b1=owner->p24->b1;
 a->f80=owner->p24->v80.x;a->f84=owner->p24->v80.y;
 a->b1a3=owner->p24->b1a3;a->pad7cc[0]=owner->p24->b1a4;
 ((struct LinkedActor *)a)->b48=owner->p24->b48;((struct LinkedActor *)a)->v80=owner->p24->v80;
 a->b36=owner->p24->b36;((struct LinkedActor *)a)->b49=-1;a->b2^=1;
 a->pad178[0x19c-0x178]=102;a->b19d=6;a->b1a1=48;
 a->w1ac=0;a->b19e=0;a->p1c4=0;
 dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,23,52);func_0c18bd2a((struct LinkedActor *)a,owner);
}
void func_0c18bd2a(struct LinkedActor *a,struct LinkedActor *owner)
{
 float offset;
 if(owner->b4>1 || (unsigned short)owner->sdc.w158!=a->wcc.dword_value){A(a)->f264=0;func_0c18c11a(a,owner);return;}
 A(a)->b36=owner->b36;offset=A(owner)->b141*1.66666663f;
 if((short)A(owner)->w130)offset=-offset;A(a)->f52=A(owner)->f52+offset;
 A(a)->f56=A(owner)->f56+(signed char)A(owner)->b140*2.1428571f;
 func_0c02a026(A(a));func_0c18c080(a,owner);
}
void func_0c18bdae(struct LinkedActor *a,struct LinkedActor *owner)
{table_0c256214[a->b4](a,owner);}

extern unsigned int func_0c02849a(void);
extern float table_0c256224[];
extern struct ActorFlags *dat_0c2d6f84;
void func_0c18bf80(struct Actor *,struct LinkedActor *);
void func_0c18bdf4(struct Actor *a,struct LinkedActor *owner)
{
 float velocity,random_scale;int depth;unsigned int (*random)(void);
 a->b4++;((struct LinkedActor *)a)->sdc=((struct LinkedActor *)a)->p20->sdc;a->b12c=1;a->b2=((struct LinkedActor *)a)->p20->b2;a->b1=((struct LinkedActor *)a)->p20->b1;
 a->f80=((struct LinkedActor *)a)->p20->v80.x;a->f84=((struct LinkedActor *)a)->p20->v80.y;a->b1a3=((struct LinkedActor *)a)->p20->b1a3;a->pad7cc[0]=((struct LinkedActor *)a)->p20->b1a4;
 ((struct LinkedActor *)a)->b48=((struct LinkedActor *)a)->p20->b48;((struct LinkedActor *)a)->v80=((struct LinkedActor *)a)->p20->v80;a->b36=((struct LinkedActor *)a)->p20->b36;a->b36=8;a->b35=0;
 *(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&((struct LinkedActor *)a)->p20->f52;
 random=func_0c02849a;a->s28=(random()&31)+180;velocity=table_0c256224[a->b33];if((short)a->w130)velocity=-velocity;
 a->f92=velocity;a->f104=0;a->f96=4.28571415f;a->f108=-0.2678571343422f;
 random_scale=256.0f;a->f92+=(short)((unsigned char)random()-128)*1.66666663f/random_scale;
 a->f96+=(short)((unsigned char)random()-128)*2.1428571f/random_scale;
 a->pad178[0x19c-0x178]=102;a->b19d=6;a->b1a1=48;a->w1ac=0;a->b19e=0;a->p1c4=0;
 dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,23,(random()&3)+52);
}
void func_0c18bf80(struct Actor *a,struct LinkedActor *owner)
{
 struct Actor *parent=(struct Actor *)((struct LinkedActor *)a)->p20;
 func_0c02a026(a);a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(a->f56<parent->f41c){if(!a->b5){a->b5++;a->f92/=4.0f;a->f96=-a->f96/2.0f;}else{a->f92=0;a->f96=0;a->f108=0;}
 a->f56=parent->f41c;a->b35=1;}
 if(a->s28<=60){a->b12c=0;if((a->b33+dat_0c2d6f84->flags)&1)a->b12c=1;}
 if(--a->s28<=0){a->f264=0;func_0c18c11a((struct LinkedActor *)a,owner);return;}func_0c18c080((struct LinkedActor *)a,owner);
}

extern void func_0c04ae74(struct Actor *,int),func_0c1d5da8(struct Actor *,int),func_0c0346da(struct Actor *,int);
extern void func_0c037d0c(struct Actor *),func_0c037688(struct Actor *);
void func_0c18c080(struct LinkedActor *a,struct LinkedActor *owner)
{
 struct Actor *target;
 if(!a->b35)return;
 if(A(a)->b19e){target=A(a)->p1b0;
  if(!target->b411){A(a)->b4=2;A(a)->f96=(unsigned char)target->b13c;A(a)->f108=10.714285f;
   if((short)target->w424>(short)target->w420){A(a)->f108=15.0f;func_0c04ae74(target,1);func_0c1d5da8(target,4);}
   func_0c0346da(A(a),42);func_0c18c11a(a,owner);return;
  }
  A(a)->b19e=0;
 }
 func_0c037d0c(A(a));
}
void func_0c18c11a(struct LinkedActor *a,struct LinkedActor *owner)
{
 struct Actor *actor=(struct Actor *)a,*target=actor->p1b0;
 if(target){actor->f52=target->f52;actor->f56=target->f56+actor->f96;}
 actor->f96+=actor->f108;actor->f108-=2.1428571f;if(actor->f108<0)actor->f108=0;
 if((actor->f264-=0.02f)<0){actor->b4=3;actor->b12c=0;actor->f264=0;}
}
void func_0c18c182(struct LinkedActor *a,struct LinkedActor *owner){func_0c037688((struct Actor *)a);}
