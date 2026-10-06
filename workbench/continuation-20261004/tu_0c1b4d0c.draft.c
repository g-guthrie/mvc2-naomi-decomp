/* Unverified motion-table attachment family:266/416 equal bytes at correct total size; offset indexing and scheduling unresolved. */
#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void (*table_0c25b0c0[])(struct LinkedActor *);
extern short dat_0c25b0a4[];
extern int dat_0c25b0b0[];
extern void func_0c02a0c4(struct LinkedActor *,int,int);
void func_0c1b4d46(struct LinkedActor *);
struct LinkedActor *func_0c1b4d0c(struct LinkedActor *parent,struct LinkedActor *owner,int mode){
 struct LinkedActor *a;if((a=func_0c0374da(0,3,1))){a->w38=0x2b00;a->b32=mode;a->p16=func_0c1b4d46;a->p20=parent;a->p24=owner;}return a;
}
void func_0c1b4d46(struct LinkedActor *a){table_0c25b0c0[a->b4](a);}
void func_0c1b4d58(struct LinkedActor *a){
 struct LinkedActor *owner=a->p20;short *offsets;int dx,dy,index,*motion;
 a->b4++;a->sdc=owner->sdc;a->sdc.b12c=1;
 a->b2=owner->b2;a->b1=owner->b1;a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;
 a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;a->v80=owner->v80;a->b36=owner->b36;
 a->b36=0;a->sdc.w130=owner->sdc.w130;
 ((struct Actor *)a)->b13c=16;((struct Actor *)a)->pad6bb=16;((struct Actor *)a)->b13e=16;((struct Actor *)a)->b13f=16;
 *(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&owner->f52;
 index=a->b32*2;offsets=dat_0c25b0a4+index;dy=offsets[1];dx=offsets[0];motion=dat_0c25b0b0;
 a->f92=*motion++*1.66666663f/65536.0f;a->f104=*motion++*1.66666663f/65536.0f;
 a->f96=*motion++*2.1428571f/65536.0f;a->f108=*motion*2.1428571f/65536.0f;
 if(a->sdc.w130){a->f92=-a->f92;dx=-dx;a->f104=-a->f104;}
 a->f52+=dx*1.66666663f;a->f56+=dy*2.1428571f;func_0c02a0c4(a,23,10);
}
