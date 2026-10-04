#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern short dat_0c25bc4c[],dat_0c25bc50[],dat_0c25bc70[];
extern void (*dat_0c25bc94[])(struct LinkedActor *,struct LinkedActor *),(*dat_0c25bca4[])(struct LinkedActor *);
void func_0c1bc15e(struct LinkedActor *);
struct LinkedActor *func_0c1bc0ac(struct LinkedActor *parent,unsigned short variant)
{
 struct LinkedActor *a;short *offset=dat_0c25bc50;unsigned char count=8,i;
 if(variant==0){offset=dat_0c25bc4c;count=1;}if(variant==2){offset=dat_0c25bc70;count=9;}
 for(i=0;i<count;i++){
 a=func_0c0374da(0,3,0);
 if(a){a->p16=func_0c1bc15e;a->p24=parent;a->b1=parent->b1;a->b32=variant;((struct MeActor *)a)->w26=0x3602;a->wcc.pointer_value=parent->p24;a->f92=parent->f92;a->f52=parent->f52+*offset++*1.66666663f;a->f56=parent->f56+*offset++*2.1428571f;}
 }return a;
}
void func_0c1bc15e(struct LinkedActor *a)
{
 struct LinkedActor *parent=a->wcc.pointer_value;
 ((union ActorParameter4 *)&((struct Actor *)parent)->sub2a4.b20)->integer=4;
 dat_0c25bc94[a->b4](a,parent);
}
void func_0c1bc17c(struct LinkedActor *a,struct LinkedActor *parent)
{
 a->b4++;a->sdc=parent->sdc;a->sdc.b12c=1;a->b2=parent->b2;a->b1=parent->b1;a->v80.x=parent->v80.x;a->v80.y=parent->v80.y;a->b1a3=parent->b1a3;a->b1a4=parent->b1a4;a->b48=parent->b48;a->v80=parent->v80;a->b36=8;a->f104=0.0f;a->f108=0.0f;dat_0c25bca4[a->b32](a);
}
