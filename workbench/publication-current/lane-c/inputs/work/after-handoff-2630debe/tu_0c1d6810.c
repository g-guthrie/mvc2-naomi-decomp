#include "model_1d6810.h"
extern struct NumericHudSource dat_0c2f8338;
extern struct ActorFlags *dat_0c2d6f84;
extern struct MotionGlobal_0c2d9260 dat_0c2d9260;
extern float dat_0c2d926c;
extern int **dat_0c2d9650;
extern struct Obj_tu5_03 *func_0c0374ee(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *);
extern void func_0c033ed6(int),func_0c033ef8(int);
extern int func_0c1ebc70(float,float);
void func_0c1d684a(void);
void func_0c1d68a2(struct Obj_tu5_03 *);
void func_0c1d692c(void);
void func_0c1d698a(struct Obj_tu5_03 *);
void func_0c1d6abe(struct Obj_tu5_03 *);
void func_0c1d6b86(struct Obj_tu5_03 *);
void func_0c1d6bcc(struct Obj_tu5_03 *);
void func_0c1d6810(void)
{
 func_0c1d684a();func_0c1d692c();
 if(dat_0c2f8338.state72!=8 || dat_0c2d6f84->b8b || dat_0c2f8338.mode69==2)func_0c033ed6(1);
}
void func_0c1d684a(void)
{
 struct Obj_tu5_03 *a=func_0c0374ee(0,9,1);
 if(a){a->b12c=1;a->p16=func_0c1d698a;a->l84=(*dat_0c2d9650)[238];a->pos.x=dat_0c2d926c;a->pos.z=-100000.0f;a->lcc=11;a->w28=0;func_0c1d6bcc(a);func_0c1d68a2(a);}
}
void func_0c1d68a2(struct Obj_tu5_03 *parent)
{
 struct Obj_tu5_03 *a=func_0c0374ee(0,9,1);
 if(a){a->b12c=1;a->p16=func_0c1d6abe;a->l84=(*dat_0c2d9650)[239];a->lcc=11;a->p200=&parent->f136;a->pos.z=60000.0f;a->w28=0;}
}
void func_0c1d692c(void)
{
 struct Obj_tu5_03 *a=func_0c0374ee(0,9,1);
 if(a){a->b12c=1;a->p16=func_0c1d6b86;a->l84=(*dat_0c2d9650)[240];a->pos.x=dat_0c2d9260.f12;a->pos.y=dat_0c2d9260.f_a8;a->pos.z=-40000.0f;a->lcc=43;a->w28=0;a->f116=1.0f;func_0c1d6bcc(a);}
}
void func_0c1d698a(struct Obj_tu5_03 *a)
{
 a->pos.x=dat_0c2d926c;
 if(a->w28==0){func_0c1d6bcc(a);a->w28++;return;}
 if(a->w28>10){
  if(a->w28<=35)a->pos.z+=200.0f;
  else if(a->w28<=60)a->pos.z+=400.0f;
  else if(a->w28<=85)a->pos.z+=800.0f;
  else if(a->w28<=110)a->pos.z+=1200.0f;
  else if(a->w28<=135)a->pos.z+=1600.0f;
  else if(a->w28<=160)a->pos.z+=2000.0f;
  else if(a->w28<=185)a->pos.z+=1000.0f;
  else{
   func_0c037688(a);
   if(dat_0c2f8338.state72!=8 || dat_0c2d6f84->b8b || dat_0c2f8338.mode69==2)func_0c033ef8(60);
   return;
  }
 }
 a->w28++;func_0c1d6bcc(a);
}
void func_0c1d6abe(struct Obj_tu5_03 *a)
{
 if(a->w28!=0 && a->w28>10){
  if(a->w28<=35){a->pos.z+=400.0f;a->angles.scalar.l48+=437;}
  else if(a->w28<=60)a->angles.scalar.l48+=728;
  else if(a->w28<=85){a->pos.z+=-600.0f;a->angles.scalar.l48+=1893;}
  else if(a->w28<=110){a->pos.z+=600.0f;a->angles.scalar.l48+=874;}
  else if(a->w28<=135)a->pos.z+=-600.0f;
  else{func_0c037688(a);return;}
 }
 a->w28++;
}
void func_0c1d6b86(struct Obj_tu5_03 *a)
{
 a->pos.x=dat_0c2d926c;
 if(a->w28>=80)a->f116-=0.0142857144f;
 if(a->w28>=150){func_0c037688(a);return;}
 func_0c1d6bcc(a);a->w28++;
}
void func_0c1d6bcc(struct Obj_tu5_03 *a)
{
 float distance=dat_0c2d9260.f20;
 a->pos.y=(distance-a->pos.z)*(dat_0c2d9260.f_a8-dat_0c2d9260.f16)/distance;
 a->angles.scalar.first=func_0c1ebc70(a->pos.y,dat_0c2d9260.f20-a->pos.z);
 if(dat_0c2d9260.f20-a->pos.z<0.0f)a->angles.scalar.first+=32768;
 a->pos.y+=dat_0c2d9260.f16;
}
