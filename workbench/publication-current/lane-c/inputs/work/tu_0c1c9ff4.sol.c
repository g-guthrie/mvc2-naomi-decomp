#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern unsigned char dat_0c25ec74[];
extern struct Vec3_tu5_03 dat_0c25ec78[],dat_0c25ec9c[],dat_0c2306f4[],dat_0c230700[];
extern int **dat_0c2d966c;
extern struct ActorFlags *dat_0c2d6f84;
extern void func_0c037688(struct Obj_tu5_03 *);
void func_0c1ca0f8(struct Obj_tu5_03 *);
void func_0c1c9ff4(int selector) {
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,5,1))!=0) {
 a->b12c=1;a->b32=selector;a->p16=func_0c1ca0f8;a->l84=(*dat_0c2d966c)[dat_0c25ec74[selector]];a->pos=dat_0c25ec78[selector];
 a->angles.scalar.first=((int)(dat_0c25ec9c[0].x*65536.0f/360.0f+0.5f))&0xffff;
 a->angles.scalar.l44=((int)(dat_0c25ec9c[0].y*65536.0f/360.0f+0.5f))&0xffff;
 a->angles.scalar.l48=((int)(dat_0c25ec9c[0].z*65536.0f/360.0f+0.5f))&0xffff;
 *(struct Vec3_tu5_03 *)&a->f80=dat_0c2306f4[0];a->lcc=0xc1f;a->f120=1.0f;a->f124=1.0f;a->f128=1.0f;
 if(selector==2) {a->pos=dat_0c230700[(signed char)dat_0c2d6f84->pad143[0]];if(dat_0c2d6f84->pad143[0]==58) {a->f80=0.75f;a->f84=0.75f;a->f88=0.75f;}}
 }
}
void func_0c1ca0f8(struct Obj_tu5_03 *a) {
 if(dat_0c2d6f84->b2>=3) {
  if(a->f120>=0.5f) {a->f120-=0.01f;a->f124=a->f120;a->f128=a->f120;}
 } else if(dat_0c2d6f84->b8d) func_0c037688(a);
}
