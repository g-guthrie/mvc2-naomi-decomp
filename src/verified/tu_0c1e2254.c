#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern struct ActorGlobalRoot *dat_0c2d964c;
extern float func_0c1ec2c0(int);
extern struct Vec3_tu5_03 dat_0c2632c0[];
extern int dat_0c2632d8[];
void func_0c1e23da(struct Obj_tu5_03 *);
void func_0c1e2254(struct Obj_tu5_03 *a)
{
 switch(a->b4){
 case 0:
  a->w28+=2;
  if(a->w28>=360)a->w28=0;
  {float degrees=360.0f;register float half=0.5f;
  a->arr64[0]=(int)(func_0c1ec2c0((int)(a->w28*65536.0f/degrees+half)&65535)*2949120.0f/degrees+half)&65535;
  }
  break;
 }
}
void func_0c1e22c6(int n)
{
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,5,1))!=0){
  a->b12c=1;a->p16=func_0c1e2254;
  a->l84=(*(int (*)[36])dat_0c2d964c->p0)[3];a->lcc=0x807;
  a->pos=dat_0c2632c0[n];a->l44=dat_0c2632d8[n];a->w28=(short)n*180;
  func_0c1e23da(a);
 }
}
void func_0c1e2368(struct Obj_tu5_03 *a)
{
 switch(a->b4){
 case 0:
  a->w28+=3;
  if(a->w28>=360)a->w28=0;
  {float degrees=360.0f;register float half=0.5f;
  a->arr64[0]=(int)(func_0c1ec2c0((int)(a->w28*65536.0f/degrees+half)&65535)*1310720.0f/degrees+half)&65535;
  }
  break;
 }
}
void func_0c1e23da(struct Obj_tu5_03 *parent)
{
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,5,1))!=0){
  a->b12c=1;a->p16=func_0c1e2368;
  a->l84=(*(int (*)[36])dat_0c2d964c->p0)[7];a->lcc=0x803;
  a->p200=&parent->f136;
 }
}
void func_0c1e241e(struct Obj_tu5_03 *a)
{
 switch(a->b4){
 case 0:
  a->w28++;
  if(a->w28>=360)a->w28=0;
  {float units=65536.0f,degrees=360.0f;register float half=0.5f;
  a->arr64[0]=(int)((-90.0f+func_0c1ec2c0((int)(a->w28*units/degrees+half)&65535)*45.0f)*units/degrees+half)&65535;
  }
  break;
 }
}
