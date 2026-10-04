#include "model_1b526c.h"
extern short dat_0c2f6830;
extern struct LinkedActor *func_0c0374da(int,int,int);
extern struct MotionGlobal_0c2d9260 dat_0c2d9260;
extern void (*dat_0c25b0d8[])(struct LinkedActor *);
extern void func_0c1b5450(struct LinkedActor *);
extern void func_0c02a0c4(struct LinkedActor *,int,int);
void func_0c1b531a(struct LinkedActor *);
int func_0c1b526c(struct LinkedActor *parent,unsigned char mode)
{
 struct LinkedActor *root,*child;int i;
 if(dat_0c2f6830<=13)return 0;
 root=func_0c0374da(0,3,1);((struct MeActor *)root)->w26=0x2b03;
 root->b33=mode;root->p24=parent;root->p16=func_0c1b531a;
 for(i=0;i<6;i++){
 child=func_0c0374da(0,3,1);((struct MeActor *)child)->w26=0x2b03;
 child->b35=i;child->b32=0;child->b33=mode;child->p20=root;child->p16=func_0c1b5450;
 }
 for(i=0;i<6;i++){
 child=func_0c0374da(0,3,1);((struct MeActor *)child)->w26=0x2b03;
 child->b35=i;child->b32=1;child->b33=mode;child->p20=root;child->p16=func_0c1b5450;
 }
 return 1;
}
void func_0c1b531a(struct LinkedActor *a){dat_0c25b0d8[a->b4](a);}
void func_0c1b532c(struct LinkedActor *a)
{
 struct LinkedActor *parent=a->p24,*child=a;int count;
 for(count=13;count!=0;count--){
 child->sdc=parent->sdc;child->sdc.b12c=1;child->b2=parent->b2;child->b1=parent->b1;
 child->v80.x=parent->v80.x;child->v80.y=parent->v80.y;
 child->b1a3=parent->b1a3;child->b1a4=parent->b1a4;child->b48=parent->b48;
 child->v80=parent->v80;child->b36=parent->b36;child=(struct LinkedActor *)((struct Actor *)child)->p12;
 }
 a->b4++;a->sdc.w130=(unsigned char)a->b33;
 a->f52=dat_0c2d9260.f88+320.0f;a->f56=dat_0c2d9260.f94+240.0f;
 func_0c02a0c4(a,23,20);
}
