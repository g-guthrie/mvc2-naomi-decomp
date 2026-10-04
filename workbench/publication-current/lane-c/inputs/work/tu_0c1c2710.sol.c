#include "objects.h"
extern struct Vec3_tu5_03 dat_0c25c888[];
extern float dat_0c25c8e8[],dat_0c25c8f8[];
extern signed char dat_0c2f836e[];
extern float func_0c1ebd40(int);
void func_0c1c2710(struct Obj_tu5_03 *a) {
 struct Actor *owner=(struct Actor *)a->p24;
 int pulse=owner->b411;
 if(a->b33!=pulse) {
  *(struct Vec3_tu5_03 *)&a->f92=dat_0c25c888[pulse*2+owner->b2];
  a->b33=pulse;a->w28=32;a->w30=0;
 }
 if(a->w28) {
  if(a->w28==16) {a->w30+=0x8000;a->pos=*(struct Vec3_tu5_03 *)&a->f92;}
  a->f80=func_0c1ebd40(a->w30);a->w28--;a->w30+=0x400;
 }
 a->f120=dat_0c25c8e8[1];a->f124=dat_0c25c8e8[2];a->f128=dat_0c25c8e8[3];
 if(owner->w2a0) {a->f120=dat_0c25c8f8[1];a->f124=dat_0c25c8f8[2];a->f128=dat_0c25c8f8[3];}
 if(!owner->pad1d7[5] && (short)owner->w420<=0) a->b12c=0;
 if(a->b12c) {
  if(!owner->pad1d7[5] || owner->b0) return;
  if(dat_0c2f836e[owner->b2]>=3 && !owner->b411) {a->f116=1.0f;return;}
  a->f116-=0.03125f;
  if(a->f116<0.0f) {a->b12c=0;a->f116=0.0f;}
 } else {
  if(!owner->pad1d7[5] && (short)owner->w420>0) {a->b12c=1;a->f116=1.0f;}
 }
}
