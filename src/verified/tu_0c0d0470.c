#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c03edcc(struct Actor *,struct Actor *);
void func_0c0d0470(struct Actor *a)
{
 struct Actor *t=a->p1c8;
 a->b3f8=2;
 a->b328=5;
 a->b1ea=1;
 a->b1ed=2;
 func_0c02a026(a);
 if(a->b141){
  a->f52+=a->f92;
  a->f92+=a->f104;
  a->f56+=a->f96;
  a->f96+=a->f108;
  if(a->b141<0){
   *(int *)&a->pad10c[0x2f0-0x2cc]=35;
   a->b141=0;
   a->b6++;
   a->f92=-3.3333333f;
   a->f104=0.0520833321f;
   a->f96=4.28571415f;
   a->f108=-0.2678571343422f;
   t->f92=0.0f;
   t->f96=0.0f;
   t->f104=0.0f;
   t->f108=0.0f;
   t->f92=(a->f52-t->f52)/16.0f;
   t->f96=(t->f41c-t->f56)/8.0f;
   if(!a->w130){
    a->f92=-a->f92;
    a->f104=-a->f104;
   }
   return;
  }
 }
 func_0c03edcc(a,a->p1c8);
}
