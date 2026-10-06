/* Unverified complete388-byte slot-transition callback:327/336 instruction bytes equal;386 linked bytes, final pool padding incomplete. */
#include "objects.h"
extern struct Vec3_tu5_03 dat_0c25c888[];
extern struct EffectScale4 dat_0c25c8e8,dat_0c25c8f8;
extern signed char dat_0c2f836e[];
extern float func_0c1ebd40(int);
void func_0c1c2710(struct Obj_tu5_03 *a){
 struct Actor *owner=(struct Actor *)a->p24;int slot=owner->b411;
 if(a->b33!=slot){
 struct Vec3_tu5_03 *target=&dat_0c25c888[slot*2+owner->b2];
 *(struct Vec3_tu5_03 *)&a->f92=*target;a->b33=slot;a->w28=32;a->w30=0;
 }
 if(a->w28){
 if(a->w28==16){a->w30+=0x8000;a->pos=*(struct Vec3_tu5_03 *)&a->f92;}
 a->f80=func_0c1ebd40(a->w30);a->w28--;a->w30+=0x400;
 }
 a->f120=dat_0c25c8e8.f120;a->f124=dat_0c25c8e8.f124;a->f128=dat_0c25c8e8.f128;
 if(owner->w2a0){a->f120=dat_0c25c8f8.f120;a->f124=dat_0c25c8f8.f124;a->f128=dat_0c25c8f8.f128;}
 if(!owner->pad1d7[5] && (short)owner->w420<=0)a->b12c=0;
 if(a->b12c){
 if(!owner->pad1d7[5] || owner->b0)return;
 if(dat_0c2f836e[owner->b2]>=3 && !owner->b411)goto reset;
 a->f116-=0.03125;
 if(a->f116<0.0f){a->b12c=0;a->f116=0.0f;}
 return;
 }
 if(owner->pad1d7[5] || (short)owner->w420<=0)return;
 a->b12c=1;
 reset:a->f116=1.0f;
}
