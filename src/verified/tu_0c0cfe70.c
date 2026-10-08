#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c0344a0(struct Actor *,int),func_0c0442fa(struct Actor *),func_0c02a39a(struct Actor *,int),func_0c0432ca(struct Actor *);
extern void (*dat_0c2482a8[])(struct Actor *);
extern void (*dat_0c2482dc[])(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
void func_0c0cfe70(struct Actor *a)
{
 if(!a->b6){
  a->b6++;
  func_0c02a0c4(a,19,5);
 }
 else func_0c02a026(a);
}
void func_0c0cfe8a(struct Actor *a)
{
 if(!a->b6){
  a->b6++;
  func_0c02a0c4(a,19,4);
 }
 else func_0c02a026(a);
}
void func_0c0cfea4(struct Actor *a)
{
 if(!a->b6){
  a->b6++;
  func_0c02a0c4(a,19,6);
 }
 else func_0c02a026(a);
}
void func_0c0cfebe(struct Actor *a)
{
 func_0c0344a0(a,43);
 a->f92=0.0f;
 a->f96=0.0f;
 a->f104=0.0f;
 a->f108=0.0f;
 a->b1fc=0;
 a->b1f9=0;
 a->f56=a->f41c;
 func_0c0442fa(a);
 func_0c02a39a(a,0);
 func_0c0432ca(a);
}
void func_0c0cff06(struct Actor *a)
{
 dat_0c2482a8[a->b1e9](a);
}
void func_0c0cff1a(struct Actor *a)
{
 dat_0c2482dc[a->b6](a);
}
void func_0c0cff2c(struct Actor *a)
{
 if(a->b255==6){
  a->b3f0=255;
  a->b3f1=16;
 }
 a->b6++;
 a->s28=15;
 func_0c0cfebe(a);
 a->b1a1=57;
 a->w1ac=0;
 a->b19e=0;
 a->p1c4=0;
 goto l;l:dat_0c2f83f8->arr[a->b2]++;
 a->w1ac|=0x200;
 func_0c02a0c4(a,22,0);
}
