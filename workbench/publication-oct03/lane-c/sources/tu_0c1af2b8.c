#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void func_0c02a0c4(struct LinkedActor *,int,int);
extern char func_0c02a026(struct LinkedActor *);
extern void func_0c037688(struct LinkedActor *);
extern void (*dat_0c259fb0[])(struct LinkedActor *);
extern void (*dat_0c259fc0[])(struct LinkedActor *);
void func_0c1af356(struct LinkedActor *);
void func_0c1af470(struct LinkedActor *);
void func_0c1af3f2(struct LinkedActor *);
void func_0c1af4ae(struct LinkedActor *);
void func_0c1af4f8(struct LinkedActor *);
void func_0c1af504(struct LinkedActor *);
struct LinkedActor *func_0c1af2b8(struct LinkedActor *parent,char immediate)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,3,0))!=0){
  a->p24=parent;
  a->w38=0x1e04;
  a->p16=func_0c1af356;
  if(immediate){
   a->p16=func_0c1af470;
   a->sdc=a->p24->sdc;
  a->sdc.b12c=1;
  a->b2=a->p24->b2;
  a->b1=a->p24->b1;
  a->v80.x=a->p24->v80.x;
  a->v80.y=a->p24->v80.y;
  a->b1a3=a->p24->b1a3;
  a->b1a4=a->p24->b1a4;
  a->b48=a->p24->b48;
  a->v80=a->p24->v80;
  a->b36=a->p24->b36;
   a->sdc.b12c=0;
  }
 }
 return a;
}
void func_0c1af356(struct LinkedActor *a)
{
 dat_0c259fb0[a->b4](a);
}
void func_0c1af368(struct LinkedActor *a)
{
 a->b4++;
 a->sdc=a->p24->sdc;
  a->sdc.b12c=1;
  a->b2=a->p24->b2;
  a->b1=a->p24->b1;
  a->v80.x=a->p24->v80.x;
  a->v80.y=a->p24->v80.y;
  a->b1a3=a->p24->b1a3;
  a->b1a4=a->p24->b1a4;
  a->b48=a->p24->b48;
  a->v80=a->p24->v80;
  a->b36=a->p24->b36;
 a->sdc.b12c=1;
 a->b36=0;
 a->sdc.w130=0;
 func_0c02a0c4(a,23,17);
 func_0c1af3f2(a);
}
void func_0c1af3f2(struct LinkedActor *a)
{
 a->f52=a->p24->f52;
 a->f56=a->p24->f56;
 if(a->sdc.b141<0)a->b36=0;else a->b36=7;
 if(((struct MeActor *)a->p24)->blk_dc.b159==21){
  switch(a->p24->sdc.w158.bytes[0]){
   case 6:case 8:case 9:
    func_0c02a026(a);
    return;
  }
 }
 a->b4++;
 func_0c1af4f8(a);
}
void func_0c1af470(struct LinkedActor *a)
{
 dat_0c259fc0[a->b4](a);
}
void func_0c1af482(struct LinkedActor *a)
{
 a->b4++;
 a->sdc.b12c=1;
 a->b36=0;
 a->sdc.w130=0;
 func_0c02a0c4(a,23,17);
 func_0c1af4ae(a);
}
void func_0c1af4ae(struct LinkedActor *a)
{
 struct LinkedActor *parent;
 a->f52=a->p24->f52;
 a->f56=a->p24->f56;
 if(a->sdc.b141<0)a->b36=0;else a->b36=7;
 parent=a->p24;
 if(((struct MeActor *)parent)->blk_dc.b159!=22 || parent->sdc.w158.bytes[0]!=10){
  a->b4++;
  func_0c1af4f8(a);
 }else{
  func_0c02a026(a);
 }
}
void func_0c1af4f8(struct LinkedActor *a)
{
 a->b4++;
 a->sdc.b12c=0;
 func_0c1af504(a);
}
void func_0c1af504(struct LinkedActor *a)
{
 func_0c037688(a);
}
