#include "objects.h"
#define A(a) ((struct Actor *)(a))
extern short dat_0c2f6830;
extern struct MotionGlobal_0c2d9260 dat_0c2d9260;
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void (*table_0c25b0d8[])(struct LinkedActor *);
extern void func_0c02a0c4(struct LinkedActor *,int,int),func_0c1b5450(struct LinkedActor *);
void func_0c1b531a(struct LinkedActor *);
int func_0c1b526c(struct LinkedActor *parent,unsigned char mode)
{
 struct LinkedActor *head,*a;
 int i;
 if(dat_0c2f6830<=13)return 0;
 head=func_0c0374da(0,3,1);
 head->w38=0x2b03;head->b33=mode;head->p24=parent;head->p16=func_0c1b531a;
 for(i=0;i<6;i++){
  a=func_0c0374da(0,3,1);
  a->w38=0x2b03;a->b35=i;a->b32=0;a->b33=mode;a->p20=head;a->p16=func_0c1b5450;
 }
 for(i=0;i<6;i++){
  a=func_0c0374da(0,3,1);
  a->w38=0x2b03;a->b35=i;a->b32=1;a->b33=mode;a->p20=head;a->p16=func_0c1b5450;
 }
 return 1;
}
void func_0c1b531a(struct LinkedActor *a){table_0c25b0d8[a->b4](a);}
void func_0c1b532c(struct LinkedActor *a)
{
 struct LinkedActor *owner=a->p24,*c=a;
 int n;
 for(n=0;n<13;n++){
  c->sdc=owner->sdc;c->sdc.b12c=1;
  c->b2=owner->b2;c->b1=owner->b1;c->v80.x=owner->v80.x;c->v80.y=owner->v80.y;
  c->b1a3=owner->b1a3;c->b1a4=owner->b1a4;c->b48=owner->b48;c->v80=owner->v80;
  c->b36=owner->b36;
  c=(struct LinkedActor *)A(c)->p12;
 }
 a->b4++;a->sdc.w130=(unsigned char)a->b33;
 a->f52=dat_0c2d9260.f88+320.0f;
 a->f56=dat_0c2d9260.f94+240.0f;
 func_0c02a0c4(a,23,20);
}
