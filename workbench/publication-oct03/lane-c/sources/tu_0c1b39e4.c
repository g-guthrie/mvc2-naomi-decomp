#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern short dat_0c25afa4[];
extern signed char dat_0c25afc4[];
extern void (*dat_0c25afb4[])(struct LinkedActor *);
extern void func_0c02a0c4(struct LinkedActor *,int,int);
extern char func_0c02a026(struct LinkedActor *);
extern void func_0c037688(struct LinkedActor *);
void func_0c1b3ac0(struct LinkedActor *);
void func_0c1b3b8c(struct LinkedActor *);
void func_0c1b3bb4(struct LinkedActor *);
void func_0c1b3bc0(struct LinkedActor *);
struct LinkedActor *func_0c1b39e4(struct LinkedActor *parent,char variant)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,3,0))!=0){
  a->p16=func_0c1b3ac0;
  a->p24=parent;
  a->w38=0x2702;
  a->b32=variant;
  a->s28=0;
 }
 if((a=func_0c0374da(0,3,0))!=0){
  a->p16=func_0c1b3ac0;
  a->p24=parent;
  a->w38=0x2702;
  a->b32=variant;
  a->s28=1;
 }
 return a;
}
void func_0c1b3a4c(struct LinkedActor *a)
{
 float offset;
 a->f52=a->p24->f52;
 a->f56=a->p24->f56;
 offset=dat_0c25afa4[a->b32*2]*1.66666663f;
 if(a->sdc.w130)offset=-offset;
 a->f52+=offset;
 a->f56+=dat_0c25afa4[a->b32*2+1];
 if(a->s28)a->f56-=34.2857132f;
}
void func_0c1b3ac0(struct LinkedActor *a)
{
 dat_0c25afb4[a->b4](a);
}
void func_0c1b3af0(struct LinkedActor *a)
{
 a->b4++;
 a->sdc=a->p24->sdc;a->sdc.b12c=1;
 a->b2=a->p24->b2;a->b1=a->p24->b1;
 a->v80.x=a->p24->v80.x;a->v80.y=a->p24->v80.y;
 a->b1a3=a->p24->b1a3;a->b1a4=a->p24->b1a4;
 a->b48=a->p24->b48;a->v80=a->p24->v80;
 a->b36=a->p24->b36;
 a->sdc.b12c=1;
 a->b36=0;
 a->sdc.w130^=dat_0c25afc4[a->b32];
 func_0c1b3a4c(a);
 func_0c02a0c4(a,23,36);
 func_0c1b3b8c(a);
}
void func_0c1b3b8c(struct LinkedActor *a)
{
 func_0c1b3a4c(a);
 if(func_0c02a026(a)<0){a->b4++;func_0c1b3bb4(a);}
}
void func_0c1b3bb4(struct LinkedActor *a)
{
 a->b4++;
 a->sdc.b12c=0;
 func_0c1b3bc0(a);
}
void func_0c1b3bc0(struct LinkedActor *a)
{
 func_0c037688(a);
}
