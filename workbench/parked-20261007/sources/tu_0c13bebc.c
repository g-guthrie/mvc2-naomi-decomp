#include "objects.h"
#define A(a) ((struct Actor *)(a))
#define V(p) (*(struct LinkedActorVec3 *)&(p)->f52)
struct Flags_0c2f8338 { unsigned char pad0[59]; unsigned char b59; unsigned short w60; };
extern struct Flags_0c2f8338 dat_0c2f8338;
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c02a0c4(struct LinkedActor *,int,int),func_0c037d0c(struct LinkedActor *),func_0c037688(struct LinkedActor *);
void func_0c13bebc(struct LinkedActor *a,struct LinkedActor *owner)
{
 a->sdc=owner->sdc;a->sdc.b12c=1;
 a->b2=owner->b2;a->b1=owner->b1;a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;
 a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;a->v80=owner->v80;
 a->b36=owner->b36;a->b4++;a->sdc.b12c=0;
 a->sdc.w130=a->b33?0:1;a->pad11[0]=66;a->pad11[1]=66;
 V(a)=V(a->p20);
 func_0c02a0c4(a,23,a->s28+16);
}
void func_0c13bf52(struct LinkedActor *a,struct LinkedActor *owner)
{
 struct LinkedActor *source=a->p20;
 int zero;
 if(dat_0c2f8338.w60&1<<dat_0c2f8338.b59)return;
 zero=0;
 if(owner->b5||A(owner)->b1d0!=29||owner->s30)goto close;
 if(!source->sdc.b141)return;
 A(a)->b1a1=A(a)->b14b;A(a)->w1ac=zero;A(a)->b19e=zero;*(unsigned int *)&A(a)->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
 func_0c037d0c(a);return;
close:
 a->b4=2;a->sdc.b12c=zero;
}
void func_0c13bfc2(struct LinkedActor *a){func_0c037688(a);}
