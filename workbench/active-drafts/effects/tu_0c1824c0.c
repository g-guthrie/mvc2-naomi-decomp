/* UNVERIFIED DRAFT: complete function bodies; not registered or credited. */
/* Private six-function effects group. 0x182668 is the preceding dispatcher literal. */
#include "objects.h"
#define CAPTURED(a) (*(struct Actor **)&(a)->pad5ba[0])
#define ATTACHED(a) (*(struct Actor **)&(a)->pad7e[0])
extern int func_0c0447bc(struct Actor *),func_0c028642(struct Actor *),func_0c042728(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c1bc0ac(struct Actor *,int),func_0c037d0c(struct Actor *),func_0c037688(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c0445fe(struct Actor *,struct Actor *),func_0c0426c2(struct Actor *,int),func_0c0437b8(struct Actor *),func_0c04392e(struct Actor *);
extern short table_0c255730[2],table_0c255734[];
void func_0c1828da(struct Actor *,struct Actor *),func_0c1828d4(struct Actor *,struct Actor *);

#define L(a) ((struct LinkedActor *)(a))
extern struct Actor *func_0c0374da(int,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c255708[])(struct Actor *,struct Actor *),(*table_0c255724[])(struct Actor *,struct Actor *);
extern float table_0c255718[];
void func_0c1824f2(struct Actor *);
struct Actor *func_0c1824c0(struct Actor *owner)
{struct Actor *a;if((a=func_0c0374da(0,1,0))){L(a)->p16=(void (*)(struct LinkedActor *))func_0c1824f2;L(a)->p24=L(owner);a->b1=owner->b1;a->w38=0x3603;}return a;}
void func_0c1824f2(register struct Actor *a)
{table_0c255708[a->b4](a,(struct Actor *)L(a)->p24);}
void func_0c182506(struct Actor *a,struct Actor *owner)
{
 int zero;short dx;float velocity;
 a->b4++;L(a)->sdc=L(owner)->sdc;a->b12c=1;a->b2=owner->b2;a->b1=owner->b1;
 a->f80=owner->f80;a->f84=owner->f84;a->b1a3=owner->b1a3;a->pad7cc[0]=owner->pad7cc[0];L(a)->b48=L(owner)->b48;L(a)->v80=L(owner)->v80;
 a->b36=owner->b36;a->b36=8;zero=0;a->b33=zero;a->pad178[0x19c-0x178]=66;a->b19d=66;
 a->b1a1=51;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
 a->w1ac|=512;*(int *)&owner->sub2a4.b20=4;a->i204=zero;a->pad6bb[2]=32;a->pad6bb[1]=32;
 dx=a->w130?72:-72;a->f52=owner->f52+dx*1.66666663f;a->f56=owner->f56+137.142853f;
 velocity=table_0c255718[(unsigned char)a->b1a3];if(a->w130)velocity=-velocity;a->f92=velocity;
 a->f108=0;a->f96=0;a->f104=0;func_0c02a0c4(a,23,5);
}
void func_0c182612(struct Actor *a,struct Actor *owner)
{*(int *)&owner->sub2a4.b20=4;table_0c255724[a->b5](a,owner);}
void func_0c18266c(struct Actor *a,struct Actor *owner)
{
 if(owner->b5 || a->b19f)goto stopped;
 if(a->b19e){
  if(!func_0c0447bc(a))goto stopped;
  a->b5++;a->b36=8;func_0c1828da(a,owner);func_0c02a0c4(a,23,4);return;
 }
 func_0c02a026(a);
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 a->b33+=64;if(!a->b33)func_0c1bc0ac(a,0);
 if(func_0c028642(a)){func_0c037d0c(a);return;}
 goto released;
stopped:func_0c1bc0ac(a,1);
released:func_0c1828d4(a,owner);
}
void func_0c182754(struct Actor *a,struct Actor *owner)
{
 struct Actor *child=a->p1b0;
 func_0c02a026(a);if(child->b1a0)return;
 a->b5++;func_0c02a0c4(child,14,0);func_0c0445fe(a,child);CAPTURED(a)=owner->p1c8;
 a->s28=owner->b411?60:90;func_0c0426c2(owner->p1c8,1);
 child->b1f6=6;owner->b1f7=194;child->b1f7=194;owner->b1ea=1;owner->b15a=-1;
 if(child->b1f9==2){child->f92/=4.0f;child->f104/=4.0f;if(child->f96>0)child->f96/=4.0f;child->f108=-0.80357140303f;}
}
void func_0c182830(struct Actor *a,struct Actor *owner)
{
 struct Actor *target=CAPTURED(a);
 func_0c1828da(a,owner);
 if(target->b19f && target->b5==3)goto stopped;
 if(ATTACHED(target)!=a)goto stopped;
 if(func_0c042728(target))a->s28-=3;
 if(--a->s28>=0)return;
 target->b1f6=0;target->b1ef=8;
 if((short)target->w420>0){if(target->b1f9!=2)func_0c0437b8(target);else func_0c04392e(target);}
stopped:func_0c1bc0ac(a,2);func_0c1828d4(a,owner);
}
void func_0c1828c6(struct Actor *a,struct Actor *owner)
{a->b4++;a->b12c=0;}
void func_0c1828d4(struct Actor *a,struct Actor *owner)
{func_0c037688(a);}
void func_0c1828da(struct Actor *a,struct Actor *owner)
{
 struct Actor *parent=a->p1b0;short dx=table_0c255730[0];int dy;
 if(parent->w130)dx=-dx;
 a->f52=parent->f52+dx*1.66666663f;
 dy=table_0c255730[1]+table_0c255734[a->i204];a->f56=parent->f56+dy*2.1428571f;
 a->i204++;a->i204&=3;
}
