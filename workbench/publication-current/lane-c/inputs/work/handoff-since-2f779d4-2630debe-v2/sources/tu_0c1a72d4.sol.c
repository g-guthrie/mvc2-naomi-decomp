#include "selector_model.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern struct ActorEffectOffset6 dat_0c259254[];
extern signed char dat_0c22a81c[];
extern void (*table_0c259310[])(struct LinkedActor *);
extern void (*table_0c259320[])(struct LinkedActor *,struct LinkedActor *);
extern void (*table_0c259378[])(struct LinkedActor *,struct LinkedActor *);
extern void func_0c029e70(struct LinkedActor *,int,int),func_0c029f0e(struct LinkedActor *,int,int,int);
extern char func_0c029fc4(struct LinkedActor *);
extern unsigned int func_0c02849a(void);
void func_0c1a7372(struct LinkedActor *),func_0c1a7482(struct LinkedActor *),func_0c1a769e(struct LinkedActor *,struct LinkedActor *);
struct LinkedActor *func_0c1a72d4(struct LinkedActor *parent,unsigned char n)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,3,0))!=0){a->p16=func_0c1a7372;a->p24=parent;a->b32=n;}
 return a;
}
struct LinkedActor *func_0c1a7302(struct LinkedActor *parent,unsigned char n)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,4,0))!=0){a->p16=func_0c1a7372;a->p24=parent;a->b32=n;}
 return a;
}
struct LinkedActor *func_0c1a7330(struct LinkedActor *parent,struct LinkedActor *other,unsigned char n,unsigned char variant)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,3,0))!=0){a->p16=func_0c1a7372;a->p24=parent;a->p20=other;a->b32=n;a->b35=variant;}
 return a;
}
void func_0c1a7372(struct LinkedActor *a){table_0c259310[a->b4](a);}
void func_0c1a7384(struct LinkedActor *a)
{
 struct LinkedActor *parent=a->p24;
 struct ActorEffectOffset6 *entry;
 a->b4++;a->w38=0x1800;a->sdc=parent->sdc;a->sdc.b12c=1;
 a->b2=parent->b2;a->b1=parent->b1;a->v80.x=parent->v80.x;a->v80.y=parent->v80.y;
 a->b1a3=parent->b1a3;a->b1a4=parent->b1a4;a->b48=parent->b48;a->v80=parent->v80;a->b36=parent->b36;
 entry=&dat_0c259254[a->b32];a->b36=entry->layer;
 if(!a->sdc.w130)a->f52=parent->f52+entry->x*1.66666663f;
 else a->f52=parent->f52-entry->x*1.66666663f;
 a->f56=parent->f56+entry->y*2.1428571f;
 func_0c029e70(a,27,entry->animation);func_0c1a7482(a);
}
void func_0c1a7482(struct LinkedActor *a){table_0c259320[a->b32](a,a->p24);}
void func_0c1a7498(struct LinkedActor *a,struct LinkedActor *parent)
{
 struct ActorEffectOffset6 *entry;
 short direction;
 if(((struct Actor *)parent)->b1d0!=21||((struct Actor *)parent)->b1e9!=2||(unsigned short)parent->sdc.w158.short_value!=0x1502||!((struct Actor *)parent)->b140){a->b4++;a->sdc.b12c=0;return;}
 entry=&dat_0c259254[a->b32];direction=parent->sdc.w130;a->sdc.w130=direction;
 if(!direction)a->f52=parent->f52+entry->x*1.66666663f;
 else a->f52=parent->f52-entry->x*1.66666663f;
 a->f56=parent->f56+entry->y*2.1428571f;
 func_0c029f0e(a,27,entry->animation,((struct Actor *)parent)->b140&15);
}
void func_0c1a7546(struct LinkedActor *a,struct LinkedActor *parent)
{
 short direction;
 table_0c259378[(unsigned char)a->b5](a,parent);direction=parent->sdc.w130;a->sdc.w130=direction;
 if(!direction)a->f52=parent->f52+a->f92;else a->f52=parent->f52-a->f92;
 a->f56=parent->f56+a->f96;a->b36=parent->b36;
}
void func_0c1a75c2(struct LinkedActor *a,struct LinkedActor *parent)
{
 struct ActorEffectOffset6 *entry;
 a->b5++;a->b49=-1;((struct LinkedActorControl4 *)&a->sdc.b12c)->mode=-1;((struct LinkedActorControl4 *)&a->sdc.b12c)->counter=dat_0c22a81c[parent->b1a4];
 a->s28=(func_0c02849a()&31)+60;((struct Actor *)a)->f264=0.0f;((struct Actor *)a)->f100=0.0125f;
 entry=&dat_0c259254[a->b32];
 a->f92=(entry->x+(short)(func_0c02849a()&63))*1.66666663f;
 a->f96=(entry->y+(short)(func_0c02849a()&63))*2.1428571f;
 entry=&dat_0c259254[a->b32];
 func_0c029f0e(a,27,entry->animation+func_0c02849a()%3,func_0c02849a()%10);
 func_0c1a769e(a,parent);
}
void func_0c1a769e(struct LinkedActor *a,struct LinkedActor *parent)
{
 func_0c029fc4(a);
 if(((struct Actor *)parent)->b1d0){a->b5=3;((struct Actor *)a)->f100=0.05f;return;}
 ((struct Actor *)a)->f264+=((struct Actor *)a)->f100;
 if(!(((struct Actor *)a)->f264<0.3f)){a->b5++;((struct Actor *)a)->f264=0.3f;}
}
