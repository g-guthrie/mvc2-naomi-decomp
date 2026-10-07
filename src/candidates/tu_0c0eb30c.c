/* Candidate: zero/owner not in callee-saved r13/r12 as retail (no r12 save) (214/316) */
#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c025900(struct Actor *,int,int),func_0c03489c(struct Actor *);
extern void func_0c1ce916(struct LinkedActorVec3 *,int,int,int);
void func_0c0eb30c(struct Actor *a)
{
 struct LinkedActorVec3 v;
 char zero;
 a->b3f8=2;a->b328=5;a->b1ea=1;a->b1ed=2;a->b1f5=2;
 func_0c02a026(a);
 if(a->b141){
  zero=0;
  if(a->b141>0){
   struct Actor *o;
   a->b6++;a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;a->b141=zero;
   o=a->p1c8;o->p1b4=a;o->b1f6=1;o->b1f9=zero;
   func_0c025900(a,0,0);
   o->b1a1=34;
   a->f104=0;a->f108=0;a->f96=17.142857f;a->f108=-0.401785702f;a->f92=1.25f;
   if(!a->b1d2)a->f92=-a->f92;
  }else{
   struct Actor *o;
   a->b141=zero;
   o=a->p1c8;o->p1b4=a;o->b1a1=39;
   v.x=a->f52+-133.33333f;if(!a->b1d2)v.x=a->f52+133.33333f;v.y=a->f56;
   func_0c1ce916(&v,o->w130,1,16);func_0c03489c(a);
  }
 }
}
