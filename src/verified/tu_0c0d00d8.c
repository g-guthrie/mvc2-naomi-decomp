#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern int func_0c0447bc(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c025900(struct Actor *,int,int),func_0c044548(struct Actor *,struct Actor *);
void func_0c0d00d8(struct Actor *a)
{
 a->b3f8=2;
 a->b328=5;
 a->f52+=a->f92;
 a->f92+=a->f104;
 a->f56+=a->f96;
 a->f96+=a->f108;
 func_0c02a026(a);
 if(a->b19e){
  if(func_0c0447bc(a)){
   func_0c025900(a,13,7);
   a->b6=6;
   a->s28=47;
   a->s30=0;
   func_0c02a0c4(a,22,4);
   a->b1f7=194;
   func_0c044548(a,a->p1b0);
  }
  else{
   a->b3f9=0;
   a->b3f8=0;
   a->b327=0;
   a->b328=0;
   a->b1f9=2;
   a->b6=4;
   a->f92=-1.66666663f;
   a->f104=0.00651041651145f;
   a->f96=12.85714245f;
   a->f108=-0.5357143f;
   if(!a->w130){
    a->f92=-a->f92;
    a->f104=-a->f104;
   }
   func_0c02a0c4(a,22,2);
  }
  a->b1a0=10;
 }
 else if(--a->s28<0){
  a->b6=5;
  func_0c02a0c4(a,22,3);
  a->b3f9=0;
  a->b3f8=0;
  a->b327=0;
  a->b328=0;
 }
}
