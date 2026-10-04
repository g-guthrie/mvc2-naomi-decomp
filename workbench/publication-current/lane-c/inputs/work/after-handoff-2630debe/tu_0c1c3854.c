#include "selector_model.h"
extern int **dat_0c2d9654;
extern int dat_0c25d368[],dat_0c25d3e0[],dat_0c25d3ec[];
extern struct Vec3_tu5_03 dat_0c25d374[];
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern unsigned int func_0c02849a(void);
extern void func_0c034a1c(int);
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *);
extern int func_0c026a86(struct Obj_tu5_03 *);
extern void func_0c026932(int);
extern void func_0c1c409c(int);
void func_0c1c38da(int);
void func_0c1c3912(struct Obj_tu5_03 *);
void func_0c1c3b60(struct Obj_tu5_03 *);
void func_0c1c3bb4(struct Obj_tu5_03 *);
void func_0c1c3854(int mode)
{
 struct Obj_tu5_03 *a;
 func_0c1c38da(mode);
 if((a=func_0c0374da(0,11,1))!=0){
  a->b12c=0;a->p16=func_0c1c3912;
  a->l84=(*dat_0c2d9654)[dat_0c25d368[mode]];
  a->lcc=5;a->pos=dat_0c25d374[mode*3];
  a->angles.scalar.first=dat_0c25d3e0[mode];a->b32=mode;
  if(a->b32==0)a->i208=80;else a->i208=0;
 }
}
void func_0c1c38da(int mode)
{
 switch(mode){case 0:func_0c034a1c(func_0c02849a()%3+6);break;
 case 1:func_0c034a1c(9);break;case 2:break;default:break;}
}
void func_0c1c3912(struct Obj_tu5_03 *a)
{
 struct Vec3_tu5_03 *from=&dat_0c25d374[a->b32*3+a->w30],*to=from+1;
 switch(a->b4){
 case 0:
  if(func_0c026a86(a))break;
  if(--a->i208>0)break;
  a->b12c=1;a->b4++;
  if(a->b32==2){
   if((signed char)dat_0c2f83f8->pad[62]<0){func_0c1c409c(1);func_0c037688(a);break;}
   func_0c034a1c(40);
  }
  /* Initialization proceeds into the first movement frame. */
 case 1:
  if(a->b32==0||a->b32==1)func_0c1c3b60(a);
  a->pos.x=from->x+(to->x-from->x)/15.0f*a->w28;
  a->pos.z=from->z+(to->z-from->z)/15.0f*a->w28;
  if(++a->w28>=15){a->b4++;a->w28=0;a->w30++;a->pos=*to;}
  break;
 case 2:
  if(a->b32<2&&a->w28<15)a->pos.x=from->x+(a->w28%2)*0.2f;
  if(++a->w28>=dat_0c25d3ec[a->b32]){
   a->b4++;a->w28=0;if(a->b32==1)func_0c026932(a->b32);
  }
  break;
 case 3:
  if(a->b32==0||a->b32==1)func_0c1c3b60(a);
  a->pos.x=from->x+(to->x-from->x)/15.0f*a->w28;
  a->pos.z=from->z+(to->z-from->z)/15.0f*a->w28;
  if(++a->w28>=15)func_0c037688(a);
  break;
 default:break;
 }
}
void func_0c1c3b60(struct Obj_tu5_03 *parent)
{
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,11,1))!=0){
  a->b12c=1;a->p16=func_0c1c3bb4;a->l84=parent->l84;
  a->lcc=parent->lcc|32;a->pos=parent->pos;
  a->angles.scalar.first=parent->angles.scalar.first;a->f116=0.5f;
 }
}
void func_0c1c3bb4(struct Obj_tu5_03 *a)
{
 a->f116-=0.1f;
 if(!(a->f116>0.0f))func_0c037688(a);
}
