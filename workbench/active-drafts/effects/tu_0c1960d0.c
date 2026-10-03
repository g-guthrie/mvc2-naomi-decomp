/* UNVERIFIED DRAFT: complete function bodies; not registered or credited. */
#include "objects.h"
#define L(a) ((struct LinkedActor *)(a))
#define CONTEXT(a) ((struct MotionContext8a3 *)&(a)->sub2a4)
extern short dat_0c2f6830;
extern struct Actor *func_0c0374da(int,int,int);
extern struct Dat_13bb5c dat_0c2f8338;
extern void func_0c037688(struct Actor *),func_0c1952ae(struct Actor *),func_0c195208(struct Actor *,struct Actor *),func_0c044788(struct Actor *,struct Actor *),func_0c02a18c(struct Actor *,int,int,int),func_0c03edcc(struct Actor *,struct Actor *);
extern unsigned char table_0c257e50[];
extern short table_0c257d30[][4],table_0c257e30[][2];
extern struct Actor *table_0c257f80[];
extern void (*table_0c257f88[])(struct Actor *,struct Actor *);
void func_0c196142(struct Actor *),func_0c1962a8(struct Actor *,struct Actor *),func_0c196360(struct Actor *,struct Actor *),func_0c1963e4(struct Actor *,struct Actor *);
int func_0c1960d0(struct Actor *owner,int count,int mode)
{
 int i;struct Actor *a;if(dat_0c2f6830<=count)return 0;if(count>12)count=12;
 for(i=0;i<count;i++)if((a=func_0c0374da(0,3,1))){a->w38=0x0c05;a->b35=i;a->b32=mode;a->s30=count;L(a)->p16=(void (*)(struct LinkedActor *))func_0c196142;L(a)->p24=L(owner);}
 return i;
}
void func_0c196142(struct Actor *a)
{
 struct Actor *owner=(struct Actor *)L(a)->p24;struct MotionContext8a3 *context=CONTEXT(owner);
 if(a->b35)return;
 if(owner->b1e9!=6 || owner->b5 || owner->b1d0!=29 || ((struct ActorActionResult56 *)context)->result==-1)a->b4=2;
 table_0c257f88[a->b4](a,owner);
}
void func_0c19618e(struct Actor *a,struct Actor *owner)
{
 struct MotionContext8a3 *context=CONTEXT(owner);
 func_0c1962a8(a,owner);a->b4++;a->f52=owner->f52+context->vx;a->f56=owner->f56+context->vy;
 a->p1b0=table_0c257f80[a->b32];func_0c1952ae(a);func_0c1963e4(a,owner);func_0c196360(a,owner);
}
void func_0c19620c(struct Actor *a,struct Actor *owner)
{
 struct MotionContext8a3 *context=CONTEXT(owner);int phase;
 if(dat_0c2f8338.w3c&(1<<dat_0c2f8338.b3b))return;
 func_0c195208(a,owner);func_0c1963e4(a,owner);func_0c196360(a,owner);
 phase=((struct ActorActionResult56 *)context)->result;if(phase==2 || phase==-1)a->b4=2;
}
void func_0c19626c(struct Actor *a,struct Actor *owner)
{int i,count=a->s30;struct Actor *child;for(i=1;i<count;i++){child=a->p12;child->b12c=0;func_0c037688(child);}func_0c037688(a);}
void func_0c1962a8(struct Actor *a,struct Actor *owner)
{
 int i,count=a->s30,one=1;struct Actor *last;
 for(i=0;i<count;i++){
 last=a;L(a)->sdc=L(owner)->sdc;a->b12c=one;a->b2=owner->b2;a->b1=owner->b1;
 L(a)->v80.x=L(owner)->v80.x;L(a)->v80.y=L(owner)->v80.y;L(a)->b1a3=L(owner)->b1a3;L(a)->b1a4=L(owner)->b1a4;
 L(a)->b48=L(owner)->b48;L(a)->v80=L(owner)->v80;a->b36=owner->b36;a->b36=7;
 *(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&owner->f52;a=a->p12;
 }
 func_0c044788(owner,last);last->b15a=-1;
}
void func_0c196360(struct Actor *a,struct Actor *owner)
{
 int i,count=a->s30;unsigned int bank;
 for(i=0;i<count-1;i++){bank=table_0c257e50[a->b35]+16;func_0c02a18c(a,23,bank,a->b34);a=a->p12;}
 func_0c02a18c(a,15,10,((a->b34+2)&31)>>2);func_0c03edcc(a,a->p1c8);
}
void func_0c1963e4(struct Actor *a,struct Actor *owner)
{
 int i,count;short *row,*endpoint;struct Actor *next;float dx,dy,nx,ny;
 struct MotionContext8a3 *context=CONTEXT(owner);
 row=(short *)table_0c257d30+(unsigned int)(a->b34*4+2);dx=*row++*1.66666663f;dy=*row*2.1428571f;if(a->w130)dx=-dx;
 a->f52=owner->f52+context->vx-dx;a->f56=owner->f56+context->vy-dy;
 count=a->s30;
 for(i=1;i<count-1;i++){
 next=a->p12;endpoint=(short *)table_0c257e30;row=&table_0c257d30[a->b34][0];dx=*row++*1.66666663f;dy=*row*2.1428571f;
 row=(short *)table_0c257d30+(unsigned int)(next->b34*4+2);nx=*row++*1.66666663f;ny=*row*2.1428571f;
 if(a->w130){dx=-dx;nx=-nx;}next->f52=a->f52+dx-nx;next->f56=a->f56+dy-ny;a=next;
 }
 next=a->p12;endpoint=(short *)table_0c257e30;row=&table_0c257d30[a->b34][0];dx=*row++*1.66666663f;dy=*row*2.1428571f;
 row=endpoint+((((next->b34+2)&31)>>2)*2);nx=*row++*1.66666663f;ny=*row*2.1428571f;
 if(a->w130){dx=-dx;nx=-nx;}next->f52=a->f52+dx-nx;next->f56=a->f56+dy-ny;
}
