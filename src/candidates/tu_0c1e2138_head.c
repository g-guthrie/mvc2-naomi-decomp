#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern struct ActorGlobalRoot *dat_0c2d964c;
extern struct Vec3_tu5_03 dat_0c2632a0[],dat_0c2632c0[],dat_0c2632e0,dat_0c2632ec;
extern int dat_0c2632b8[],dat_0c2632d8[];
extern float func_0c1ec2c0(int);
#pragma inline(sol_one_2138)
static float sol_one_2138(void){return 1.0f;}
void func_0c1e2138(struct Obj_tu5_03 *a)
{
 switch(a->b4){
 case 0:
  a->w28++;
  if(a->w28>=1440)a->w28=0;
  switch(a->b32){
  case 0:{float divisor=sol_one_2138();divisor+=divisor;
 a->arr64[0]=(int)(a->w28/divisor*65536.0/360.0+0.5)&65535;break;}
  case 1:a->arr64[0]=(int)(a->w28/4.0*65536.0/360.0+0.5)&65535;break;
  }
  break;
 }
}
void func_0c1e21ba(int n)
{
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,5,1))!=0){
  a->b12c=1;a->p16=func_0c1e2138;
  a->l84=(*(int (*)[68])&(*(union ActorGlobalEntry (*)[68])dat_0c2d964c->p0)[n])[1];
  a->lcc=0x807;a->pos=dat_0c2632a0[n];a->l44=dat_0c2632b8[n];a->b32=n;
 }
}
