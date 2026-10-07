#include "objects.h"
extern void (*table_0c24e188[])(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern struct MotionGlobal_0c2d9260 dat_0c2d9260;
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c04be40(struct Actor *),func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *),func_0c1bee94(struct Actor *);
extern void func_0c1d1622(struct LinkedActorVec3 *,int);
int func_0c12fd06(struct Actor *a),func_0c12fd48(struct Actor *a),func_0c12fdec(struct Actor *a),func_0c12ff04(struct Actor *a),func_0c12ff90(struct Actor *a);
void func_0c130042(struct Actor *a),func_0c130060(struct Actor *a);
void func_0c12fab0(struct Actor *a)
{
 if(func_0c12fdec(a))return;
 if(func_0c12ff04(a))return;
 if(func_0c12fd06(a))return;
 func_0c02a026(a);
}
void func_0c12fadc(struct Actor *a)
{
 if(func_0c12fdec(a))return;
 if(func_0c12ff90(a))return;
 func_0c12fd48(a);
 func_0c02a026(a);
 if(a->b14b){a->b14b=0;dat_0c2d9260.b5=1;dat_0c2d9260.b6=1;}
 if(!a->b141){a->f52+=a->f92;a->f92+=a->f104;}
}
void func_0c12fb3c(struct Actor *a)
{
 if(func_0c02a026(a)<0){func_0c130060(a);return;}
 else if(a->b141&&a->l2c4>0){
  if(!(a->b525&&a->b19e)){if(!(a->w34e&0x360)&&!(a->w352&0x360))goto skip;}{
   unsigned char dir;
   a->b141=0;a->w352=0;a->l2c4-=30;func_0c130042(a);
   dir=a->w130;if(a->w340&0x800)dir=0;if(a->w340&0x400)dir=1;
   a->b1d2=dir;a->w130=dir;
   a->b1a1=125;a->w1ac=0;a->b19e=0;a->p1c4=0;dat_0c2f83f8->arr[a->b2]++;
   a->w1ac|=0x800;func_0c02a0c4(a,22,13);
  }
 }
 skip:
 if(a->b14b){
  struct LinkedActorVec3 v;
  a->b14b=0;dat_0c2d9260.b5=1;dat_0c2d9260.b6=1;
  v.x=-300.0f;if(a->w130)v.x=-v.x;
  v.x+=a->f52;v.y=a->f56;func_0c1d1622(&v,-1);
 }
}
void func_0c12fc94(struct Actor *a)
{
 if(func_0c12fdec(a))return;
 a->f52+=a->f92;a->f92+=a->f104;
 if(func_0c02a026(a)<0){func_0c130060(a);return;}
 else if(a->b14b){a->b14b=0;a->b1a1=124;a->w1ac=0;a->b19e=0;a->p1c4=0;dat_0c2f83f8->arr[a->b2]++;}
}
int func_0c12fd06(struct Actor *a)
{
 int dir=0;
 if(a->f52<a->p20c->f52)dir=1;
 if(a->b1d2!=dir){
 a->b32=0;a->w130=dir;a->b1d2=dir;func_0c02a0c4(a,22,6);return 1;
 }
 return 0;
}
int func_0c12fd48(struct Actor *a)
{
 int dir=0;int save;int anim;unsigned int n;
 if(a->f52<a->p20c->f52)dir=1;
 if(a->b1d2!=dir){
 a->w130=dir;a->b1d2=dir;
 save=a->b142;anim=(char)a->b140;
 n=7;if(a->w34a&0x800)n=14;
 func_0c02a0c4(a,22,n);
 for(;;){if((char)a->b140==anim){a->b142=save;break;}a->b142=1;func_0c02a026(a);}
 return 1;
 }
 return 0;
}
int func_0c12fdec(struct Actor *a)
{
 int in,dirbits;struct Actor *t;int dir;
 if(a->l2c4>0){
 in=a->w34e|a->w352;dirbits=a->w340;t=a->p20c;
 if(a->b525){
  float d=t->f52-a->f52;
  in=0;
  if(d>0.0f)dirbits=0x400;else{dirbits=0x800;d=-d;}
  if(!(d>266.66666f))in=0x200;
 }
 if(in&0x360){
 a->w352=0;a->b32=2;*(int *)((unsigned char *)&a->sub2a4+32)-=30;a->f92=0.0f;func_0c130042(a);
 dir=0;if(a->f52<t->f52)dir=1;
 if(dirbits&0x800)dir=0;if(dirbits&0x400)dir=1;
 a->w130=dir;
 a->b1a1=125;a->w1ac=0;a->b19e=0;a->p1c4=0;dat_0c2f83f8->arr[a->b2]++;
 a->w1ac|=0x800;func_0c02a0c4(a,22,10);return 1;
 }
 }
 return 0;
}
int func_0c12ff04(struct Actor *a)
{
 int in;unsigned int n;int dir;float f;
 in=a->w340;
 if(a->b525){
  float d=a->p20c->f52-a->f52;
  in=0;if(d>266.66666f)in=0x400;
  if(-266.66666f>d)in=0x800;
 }
 if(in&0xc00){
 a->b32=1;
 f=5.0f;if(in&0x800)f=-5.0f;a->f92=f;
 func_0c130042(a);
 n=7;dir=0;if(a->f92>0.0f)dir=1;
 if((short)a->w130!=dir)n=14;
 func_0c02a0c4(a,22,n);return 1;
 }
 return 0;
}
int func_0c12ff90(struct Actor *a)
{
 int in,in2;unsigned int n;float f;
 in=a->w340;
 in&=0xc00;if(a->b525)in=0xc00;
 if(!in){
  a->b32=0;func_0c130042(a);
  n=12;if(a->w34c&0x400)n=6;
  func_0c02a0c4(a,22,n);return 1;
 }
 in2=a->w342;
 in2&=0xc00;if(a->b525)in2=0xc00;
 if(in!=in2){
  f=5.0f;n=7;if(a->w34a&0x400){f=-5.0f;n=14;}
  a->f92=f;func_0c02a0c4(a,22,n);
 }
 return 0;
}
void func_0c130042(struct Actor *a)
{
 unsigned char dir=0;if(a->f52<a->p20c->f52)dir=1;
 a->b1d2=dir;a->w130=dir;
}
void func_0c130060(struct Actor *a)
{
 a->b32=0;a->b1d2=a->w130;a->f92=0.0f;func_0c02a0c4(a,22,12);
}
void func_0c13007c(struct Actor *a)
{
 a->b1eb=2;a->i204=3;func_0c04be40(a);table_0c24e188[a->b6](a);
}
void func_0c1300a6(struct Actor *a)
{
 a->b6++;a->b202=0x80;func_0c0442fa(a);func_0c0432ca(a);
 a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;
 a->f56=a->f41c;
 a->b1f9=0;a->b1a1=124;a->w1ac=0;a->b19e=0;a->p1c4=0;dat_0c2f83f8->arr[a->b2]++;
 func_0c1bee94(a);func_0c02a0c4(a,22,5);
}
