/* UNVERIFIED complete draft; whole linked comparison fails. Do not register or count as decompilation credit.
 * Uses published objects.h at 7c9b572. Actor byte 0x13d, when used, is accessed through its existing pad6bb member. */
#include "objects.h"
#define A(a) ((struct Actor *)(a))
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void func_0c02a0c4(struct LinkedActor *,int,int),func_0c037d0c(struct LinkedActor *),func_0c037688(struct LinkedActor *);
extern signed char func_0c02a026(struct LinkedActor *);
extern int func_0c028642(struct LinkedActor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern struct ActorSub2a4 *dat_0c2fb3a4;
extern short *dat_0c2fb3a8;
extern void (*table_0c252068[])(struct LinkedActor *);
void func_0c1689e0(struct LinkedActor *),func_0c168b4a(struct LinkedActor *),func_0c168c9a(struct LinkedActor *);
struct LinkedActor *func_0c1689b4(struct LinkedActor *owner)
{struct LinkedActor *a;if((a=func_0c0374da(0,1,0))){a->p16=func_0c1689e0;a->p24=owner;a->w38=0x2503;}return a;}
void func_0c1689e0(struct LinkedActor *a)
{dat_0c2fb3a4=&A(a->p24)->sub2a4;dat_0c2fb3a8=&a->wcc.short_value;table_0c252068[a->b4](a);}
void func_0c168a06(struct LinkedActor *a)
{
 int collision;float shift;
 a->b4++;a->sdc=a->p24->sdc;a->sdc.b12c=1;
 a->b2=a->p24->b2;a->b1=a->p24->b1;a->v80.x=a->p24->v80.x;a->v80.y=a->p24->v80.y;
 a->b1a3=a->p24->b1a3;a->b1a4=a->p24->b1a4;a->b48=a->p24->b48;a->v80=a->p24->v80;
 a->b36=a->p24->b36;A(a)->b19c=66;A(a)->b19d=66;*dat_0c2fb3a8=a->p24->sdc.w158.short_value;a->sdc.b12c=1;
 a->f52=a->p24->f52;a->f56=a->p24->f56;a->f56+=180.0f;a->f60=a->p24->f60;
 shift=63.3333321f;if(a->sdc.w130)a->f52+=shift;else a->f52-=shift;
 if(a->b1a3){a->s28=60;collision=80;}else{a->s28=20;collision=70;}
 A(a)->b1a1=collision;A(a)->w1ac=0;A(a)->b19e=0;A(a)->p1c4=0;dat_0c2f83f8->arr[a->b2]++;
 func_0c02a0c4(a,20,4);func_0c168b4a(a);
}
void func_0c168b4a(struct LinkedActor *a)
{
 float shift;
 if(!func_0c028642(a) || *dat_0c2fb3a8!=a->p24->sdc.w158.short_value){func_0c168c9a(a);return;}
 a->f52=a->p24->f52;a->f56=a->p24->f56;a->f56+=180.0f;a->f60=a->p24->f60;
 shift=63.3333321f;if(a->sdc.w130)a->f52+=shift;else a->f52-=shift;
 if(a->b6){if(func_0c02a026(a)<0){dat_0c2fb3a4->b2=1;func_0c168c9a(a);}}
 else{
 if(a->sdc.b141){a->sdc.b141=0;if(a->b1a3)A(a)->b1a1=80;else A(a)->b1a1=70;
 A(a)->w1ac=0;A(a)->b19e=0;A(a)->p1c4=0;dat_0c2f83f8->arr[a->b2]++;}
 if(A(a)->b19f){a->b6++;func_0c02a0c4(a,20,5);return;}
 func_0c02a026(a);if(--a->s28<0){a->s28=0;if(a->sdc.b141){a->b6++;func_0c02a0c4(a,20,5);}}
 }
 func_0c037d0c(a);
}
void func_0c168c9a(struct LinkedActor *a){a->b4++;a->sdc.b12c=0;}
void func_0c168ca8(struct LinkedActor *a){func_0c037688(a);}
