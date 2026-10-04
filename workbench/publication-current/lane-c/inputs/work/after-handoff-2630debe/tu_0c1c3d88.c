#include "model_1c3c00.h"
extern int **dat_0c2d9654;
extern struct Vec3_tu5_03 dat_0c25d3f8[][2];
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c037688(struct Obj_tu5_03 *);
void func_0c1c3f42(struct Obj_tu5_03 *);
void func_0c1c3d88(struct Obj_tu5_03 *a)
{
 a->b4++;a->b12c=1;a->lcc=21;
 if(a->b32==0){
  a->l84=(*dat_0c2d9654)[108];
  a->pos.y=-70.0f;a->pos.z=-200.0f;
  a->f80=2.0f;a->f84=2.0f;a->f88=1.0f;
  a->pos.x=(1-2*a->w130)*47.0f;
  a->f104=(1-2*a->w130)*150.0f;
  a->angles.scalar.first=(1-a->w130)*32768;
  a->w28=9;
  a->f92=(a->f104-a->pos.x)/15.0f;
  a->f96=4.66666651f;
 }else{
  unsigned char variant=0;
  a->f80=2.0f;a->f84=2.0f;a->f88=1.0f;
  a->l84=(*dat_0c2d9654)[108+((struct LinkedActor *)a)->b1a4/2];
  if(((struct Actor *)a->p24)->b259!=3)variant=1;
  a->pos=dat_0c25d3f8[a->b33+variant][0];
  /* Three contiguous target coordinates occupy the existing float fields. */
  *(struct Vec3_tu5_03 *)&a->f104=dat_0c25d3f8[a->b33+variant][1];
  if(a->w130==0){a->pos.x=-a->pos.x;a->f104=-a->f104;}
  a->w28=10;a->angles.scalar.first=(1-a->w130)*32768;
  a->f92=(a->f104-a->pos.x)/10.0f;
  a->f96=(a->f108-a->pos.y)/10.0f;
  a->f100=(a->f112-a->pos.z)/10.0f;
 }
 func_0c1c3f42(a);
}
void func_0c1c3f42(struct Obj_tu5_03 *a)
{
 if(a->b32==0){
  if(a->b5==0){
   a->pos.x+=a->f92;a->pos.y+=a->f96;
   a->f80-=0.0666666701f;a->f84-=0.0666666701f;
   if(--a->w28<=0){a->b5++;a->f92/=20.0f;a->w28=4;}
   return;
  }
  if(--a->w28<=0){a->w28=4;a->pos.x+=a->f92;}
 }else if(a->b5==0){
  a->pos.x+=a->f92;a->pos.y+=a->f96;a->pos.z+=a->f100;
  a->f80-=0.1f;a->f84-=0.1f;
  if(--a->w28<=0){a->b5++;a->f80=1.0f;a->f84=1.0f;
   a->pos=*(struct Vec3_tu5_03 *)&a->f104;
  }
 }
 /* The same root's byte 6 controls the lifetime of this effect. */
 if(dat_0c2f83f8->pad[6]==0){a->b4++;a->b12c=0;}
}
void func_0c1c4074(struct Obj_tu5_03 *a){a->b4++;a->b12c=0;}
void func_0c1c4082(struct Obj_tu5_03 *a){func_0c037688(a);}
