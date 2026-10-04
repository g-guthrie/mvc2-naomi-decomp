#include "model_1b48fc.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern unsigned char dat_0c25b048[],dat_0c25b056[];
extern struct NumericHudSource dat_0c2f8338;
extern void (*dat_0c25b064[])(struct LinkedActor *,struct LinkedActor *);
extern void func_0c029e70(struct LinkedActor *,int,int),func_0c029fc4(struct LinkedActor *),func_0c037688(struct LinkedActor *);
void func_0c1b4952(struct LinkedActor *);
void func_0c1b49e8(struct LinkedActor *,struct LinkedActor *);
struct LinkedActor *func_0c1b48fc(struct LinkedActor *parent)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,4,0))!=0){a->p16=func_0c1b4952;a->p24=parent;a->b32=0;((struct MeActor *)a)->w26=0x2a03;}
 if((a=func_0c0374da(0,4,0))!=0){a->p16=func_0c1b4952;a->p24=parent;a->b32=1;((struct MeActor *)a)->w26=0x2a03;}
 return a;
}
void func_0c1b4952(struct LinkedActor *a){dat_0c25b064[a->b4](a,a->p24);}
void func_0c1b4966(struct LinkedActor *a,struct LinkedActor *parent)
{
 a->b4++;a->sdc=parent->sdc;a->sdc.b12c=1;a->b2=parent->b2;a->b1=parent->b1;
 a->v80.x=parent->v80.x;a->v80.y=parent->v80.y;a->b1a3=parent->b1a3;a->b1a4=parent->b1a4;a->b48=parent->b48;
 a->v80=parent->v80;a->b36=parent->b36;
 ((struct Obj_tu5_03 *)a)->pos=((struct Obj_tu5_03 *)parent)->pos;a->s28=-1;
 if(a->b32){a->wcc.pointer_value=(struct LinkedActor *)dat_0c25b056;a->b49=1;}
 else{a->wcc.pointer_value=(struct LinkedActor *)dat_0c25b048;a->b49=2;}
 func_0c1b49e8(a,parent);
}
void func_0c1b49e8(struct LinkedActor *a,struct LinkedActor *parent)
{
 short selector,animation,offset;
 if(a->b1!=parent->b1){a->b4++;a->sdc.b12c=0;return;}
 a->sdc.b12c=0;if(!parent->sdc.b12c)return;
 ((struct Obj_tu5_03 *)a)->pos=((struct Obj_tu5_03 *)parent)->pos;
 a->sdc.w130=parent->sdc.w130;a->b36=parent->b36;
 selector=((struct Actor *)parent)->w150.bytes[1];
 if(selector>13){a->s28=-1;return;}
 if(a->s28!=selector){
 a->s28=selector;animation=((unsigned char *)a->wcc.pointer_value)[selector];
 if(animation==0){a->s28=-1;return;}func_0c029e70(a,27,animation);
 }else if(!dat_0c2f8338.paused44 && !(dat_0c2f8338.flags6 & (1 << (a->b2^1))))func_0c029fc4(a);
 a->sdc.b12c=1;
 if(!a->b32 && selector==13){offset=a->sdc.w130?-10:10;a->f52+=offset*1.66666663f;a->f56+=12.8571424f;}
}
void func_0c1b4b10(struct LinkedActor *a,struct LinkedActor *parent){a->b4++;a->sdc.b12c=0;}
void func_0c1b4b1e(struct LinkedActor *a,struct LinkedActor *parent){func_0c037688(a);}
