/* UNVERIFIED DRAFT: complete function bodies; not registered or credited. */
#include "objects.h"
#define L(a) ((struct LinkedActor *)(a))
#define CONTEXT(a) ((struct MotionContext8a3 *)&(a)->sub2a4)
#define CX(a) (CONTEXT(a)->vx)
#define CY(a) (CONTEXT(a)->vy)
extern short dat_0c2f6830;
extern struct Dat_13bb5c dat_0c2f8338;
extern struct Actor *func_0c0374da(int,int,int);
extern void func_0c037688(struct Actor *),func_0c044788(struct Actor *,struct Actor *),func_0c02a18c(struct Actor *,int,int,int),func_0c03edcc(struct Actor *,struct Actor *);
extern void (*table_0c257ee0[])(struct Actor *,struct Actor *);
extern short **table_0c257ed8[];
extern unsigned char table_0c257e50[];
extern short table_0c257d30[][4],table_0c257e30[][2];
void func_0c194dce(struct Actor *),func_0c194ee2(struct Actor *,struct Actor *),func_0c194f1e(struct Actor *,struct Actor *),func_0c194ffe(struct Actor *,struct Actor *),func_0c19508c(struct Actor *,struct Actor *);
int func_0c195208(struct Actor *,struct Actor *),func_0c1952ae(struct Actor *);
int func_0c194d4c(struct Actor *owner,int count,int mode,int visible)
{int i;struct Actor *a;if(dat_0c2f6830<=count)return 0;if(count>12)count=12;for(i=0;i<count;i++){
 if((a=func_0c0374da(0,3,1))){a->w38=0x0c02;a->b35=i;a->b32=mode;a->b33=visible;a->s30=count;L(a)->p16=(void (*)(struct LinkedActor *))func_0c194dce;L(a)->p24=L(owner);}if(visible)visible--;}
 return i;}
void func_0c194dce(struct Actor *a)
{struct Actor *owner=(struct Actor *)L(a)->p24;if(a->b35)return;table_0c257ee0[a->b4](a,owner);}
void func_0c194df0(struct Actor *a,struct Actor *owner)
{struct MotionContext8a3 *context=CONTEXT(owner);func_0c194f1e(a,owner);a->b4++;a->f52=owner->f52+context->vx;a->f56=owner->f56+context->vy;a->p1b0=(struct Actor *)table_0c257ed8[a->b32];func_0c1952ae(a);func_0c195208(a,owner);func_0c19508c(a,owner);func_0c194ffe(a,owner);}
void func_0c194e68(struct Actor *a,struct Actor *owner)
{int phase;struct ActorSub2a4 *context=&owner->sub2a4;if(dat_0c2f8338.w3c&(1<<dat_0c2f8338.b3b))return;
 if(owner->b1e9!=3)goto cleanup;phase=(signed char)context->b7;if(phase==2 || phase==-1){
 cleanup:a->b4=2;func_0c194ee2(a,owner);return;}
 a->b36=owner->b36;L(a)->b49=8;func_0c195208(a,owner);func_0c19508c(a,owner);func_0c194ffe(a,owner);}
void func_0c194ee2(struct Actor *a,struct Actor *owner)
{int i,count=a->s30;struct Actor *child;for(i=1;i<count;i++){child=a->p12;child->b12c=0;func_0c037688(child);}func_0c037688(a);}
void func_0c194f1e(struct Actor *a,struct Actor *owner)
{
 int i,count=a->s30,one=1;struct Actor *last;
 for(i=0;i<count;i++){
 last=a;L(a)->sdc=L(owner)->sdc;a->b12c=one;a->b2=owner->b2;a->b1=owner->b1;
 L(a)->v80.x=L(owner)->v80.x;L(a)->v80.y=L(owner)->v80.y;L(a)->b1a3=L(owner)->b1a3;L(a)->b1a4=L(owner)->b1a4;
 L(a)->b48=L(owner)->b48;L(a)->v80=L(owner)->v80;a->b36=owner->b36;a->b36=owner->b36;((struct LinkedActor *)a)->b49=8;
 *(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&owner->f52;a->b12c=a->b33?1:0;a=a->p12;
 }
 func_0c044788(owner,last);last->b12c=1;last->b15a=-1;last->b36=last->p1c8->b36;L(last)->b49=-2;
}
void func_0c194ffe(struct Actor *a,struct Actor *owner)
{int i,count=a->s30;unsigned char seen=0;unsigned int bank;for(i=0;i<count-1;i++){bank=table_0c257e50[a->b35]+16;func_0c02a18c(a,23,bank,a->b34);if(!a->b12c && !seen){seen=1;a->b12c=1;}a=a->p12;}func_0c02a18c(a,15,10,((a->b34+2)&31)>>2);func_0c03edcc(a,a->p1c8);}
void func_0c19508c(struct Actor *a,struct Actor *owner)
{
 int i,count;short *row;struct MotionContext8a3 *context=CONTEXT(owner);struct Actor *next;float dx,dy,nx,ny;
 
 row=&table_0c257d30[a->b34][2];dx=*row++*1.66666663f;dy=*row*2.1428571f;if(a->w130)dx=-dx;
 a->f52=owner->f52+context->vx-dx;a->f56=owner->f56+context->vy-dy;
 count=a->s30;
 for(i=1;i<count-1;i++){
 next=a->p12;if(!next->b12c){dx=dy=nx=ny=0;}else{row=&table_0c257d30[a->b34][0];dx=*row++*1.66666663f;dy=*row*2.1428571f;
 row=&table_0c257d30[next->b34][2];nx=*row++*1.66666663f;ny=*row*2.1428571f;
 if(a->w130){nx=-nx;dx=-dx;}}next->f52=a->f52+dx-nx;next->f56=a->f56+dy-ny;a=next;
 }
 next=a->p12;row=&table_0c257d30[a->b34][0];dx=*row++*1.66666663f;dy=*row*2.1428571f;
 row=&table_0c257e30[((next->b34+2)&31)>>2][0];nx=*row++*1.66666663f;ny=*row*2.1428571f;
 if(a->w130){nx=-nx;dx=-dx;}next->f52=a->f52+dx-nx;next->f56=a->f56+dy-ny;
}
int func_0c195208(struct Actor *a,struct Actor *owner)
{int i,count,result=1;struct Actor *next;a->b34=owner->b34;if(a->s28){a->s28--;count=a->s30;
 for(i=1;i<count;i++){next=a->p12;next->f96+=next->f100;next->f108=a->f108+next->f96;if(next->f108<0)next->f108+=256.0f;if(!(next->f108<256.0f))next->f108-=256.0f;next->b34=(owner->b34+(((unsigned char)(int)next->f108+4)>>3))&31;a=next;}}else result=func_0c1952ae(a);return result;}
int func_0c1952ae(struct Actor *a)
{short **cursor=(short **)a->p1b0,*record;int advanced=1,i,count;struct Actor *next;record=*cursor++;if(!record){cursor-=2;record=*cursor++;advanced=0;}a->p1b0=(struct Actor *)cursor;
 a->f108=a->f104;a->f104=*record++;a->f112=(a->f104-a->f108)* *record;if(a->f112<0)a->f112+=256.0f;a->f112*=*record++;a->f112/=12.0f;a->s28=*record;a->f108=0;count=a->s30;
 for(i=1;i<count;i++){next=a->p12;next->f108=a->f108+next->f96;next->f112=a->f112;next->s28=a->s28;next->f100=a->f112/a->s28;if(next->f108<0)next->f108+=256.0f;if(!(next->f108<256.0f))next->f108-=256.0f;a=next;}return advanced;}
