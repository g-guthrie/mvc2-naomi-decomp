/* Unverified four-function allocation family: 349/356 equal bytes; seven final-store scheduling bytes remain. */
#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern signed char dat_0c22a81c[];
extern void (*table_0c259620[])(struct LinkedActor *),(*table_0c259634[])(struct LinkedActor *);
void func_0c1a95be(struct LinkedActor *);
struct LinkedActor *func_0c1a94b0(struct LinkedActor *owner,char mode)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,3,0))){
 a->p16=func_0c1a95be;a->p24=owner;a->b32=mode;a->w38=0x1a00;a->s30=owner->sdc.w158.short_value;
 }return a;
}
void func_0c1a94f2(struct LinkedActor *owner,struct LinkedActorVec3 *position,char mode)
{
 struct LinkedActor *a;
 if((signed char)((struct Actor *)owner)->sub2a4.b2>5)return;
 if((a=func_0c0374da(0,4,0))){
 a->p16=func_0c1a95be;a->p24=owner;
 a->sdc=owner->sdc;a->sdc.b12c=1;
 a->b2=owner->b2;a->b1=owner->b1;
 a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;
 a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;
 a->b48=owner->b48;a->v80=owner->v80;a->b36=owner->b36;
 ((struct Actor *)a)->f264=1.0f;
 ((struct LinkedActorPrefix12c *)&a->sdc.b12c)->b12d=-1;
 ((struct LinkedActorPrefix12c *)&a->sdc.b12c)->w12e=dat_0c22a81c[owner->b1a4];
 a->sdc.b12c=0;a->b32=1;a->b33=mode;
 *(struct LinkedActorVec3 *)&a->f52=*position;
 ((unsigned short *)a)[19]=0x1a00;((struct Actor *)owner)->sub2a4.b2++;
 }
}
void func_0c1a95be(struct LinkedActor *a){table_0c259620[a->b32](a);}
void func_0c1a95d2(struct LinkedActor *a){table_0c259634[a->b4](a);}
