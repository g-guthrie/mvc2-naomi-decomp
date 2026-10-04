#include "objects.h"
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c02a39a(struct Actor *,int),func_0c048bb0(struct Actor *,int),func_0c0344a0(struct Actor *,int),func_0c0442fa(struct Actor *),func_0c0cfebe(struct Actor *),func_0c02a0c4(struct Actor *,int,int);
extern char func_0c02a026(struct Actor *);
extern struct LinkedActor *func_0c162414(struct Actor *,unsigned char,unsigned char);
void func_0c0d17f8(struct Actor *a)
{
 int zero,animation;
 a->b6++;a->s28=5;func_0c02a39a(a,0);func_0c048bb0(a,5);zero=0;
 if(a->b1e9==12){
  if(a->b1f9==2){a->f92/=16.0f;a->f96/=8.0f;a->f108/=64.0f;a->f104=0;func_0c0344a0(a,43);func_0c0442fa(a);}else func_0c0cfebe(a);
  a->b1a1=72;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;animation=a->b1a3+13;
 }else{
  func_0c0cfebe(a);a->b1a1=50;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;animation=a->b1a3+3;
 }
 func_0c02a0c4(a,21,animation);
}
void func_0c0d18e2(struct Actor *a)
{
 func_0c02a026(a);if(a->b141==2){int zero=0;a->b141=zero;a->b27b=zero;a->b27a=16;
  if(a->b1e9==12)func_0c162414(a,1,0);else func_0c162414(a,0,0);
  *(int *)&a->pad10c[40]=zero;a->b6++;
 }
}
