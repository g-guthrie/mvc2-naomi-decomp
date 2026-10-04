#include "objects.h"
extern float dat_0c24abec[][2];
extern struct LinkedActor *func_0c1b4f20(struct Actor *),*func_0c1b5070(struct Actor *,unsigned char,unsigned char);
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int);
void func_0c0fdd18(struct Actor *a)
{
 a->b1f5=2;
 if(a->b141){
  a->b141=0;a->f92=dat_0c24abec[(unsigned char)a->b1a3][0];a->f104=dat_0c24abec[(unsigned char)a->b1a3][1];
  if(a->b1d2){a->f92=-a->f92;a->f104=-a->f104;}
  func_0c1b4f20(a);func_0c1b5070(a,1,0);func_0c1b5070(a,1,1);
 }
 if(a->b19e && (a->b19e&1))a->s28=1;
 func_0c02a026(a);
 if(--a->s28==0){
  int animation;float acceleration=0.208333328f;
  a->b6++;a->b1f5=0;
  if(a->b19e && !(a->b19e&1)){a->f92=-8.333333f;a->f104=acceleration;animation=3;}
  else{a->f92=-5.0f;a->f104=acceleration;animation=4;}
  if(a->b1d2){a->f92=-a->f92;a->f104=-a->f104;}
  func_0c02a0c4(a,21,animation);
 }
 a->f52+=a->f92;a->f92+=a->f104;
}
