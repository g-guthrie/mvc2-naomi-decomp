#include "objects.h"
extern int dat_0c2d9634;
extern unsigned int func_0c02849a(void);
extern void func_0c0346da(struct Actor *,int),func_0c1ce9f0(struct LinkedActorVec3 *,int,int,int),func_0c04c010(struct Actor *,struct Actor *,int),func_0c025900(struct Actor *,char,char),func_0c1af0ec(struct Actor *,int);
void func_0c0ccbc4(struct Actor *a)
{
 struct LinkedActorVec3 position;int one=1;
 a->b3f8=2;a->b328=5;a->b1ea=one;dat_0c2d9634=2;a->b1ed=2;a->b1f5=2;
 if(--a->s30<=0){
  a->s30=4;func_0c0346da(a,(func_0c02849a()&one)==0);
  position.x=(float)(func_0c02849a()&127u)*1.66666663f;position.y=(float)(func_0c02849a()&63u)*2.1428571f;
  if(func_0c02849a()&one)position.x=-position.x;
  if(func_0c02849a()&one)position.y=-position.y;
  position.x=position.x+a->f52;position.y=position.y+(a->f56+205.71428f);position.z=a->f60;func_0c1ce9f0(&position,(short)a->w130,1,0);
 }
 if(--a->s28<=0){
  struct Actor *other;int zero=0;
  a->b6++;a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;other=a->p1c8;func_0c04c010(other,a,14);
  other->p1b4=a;other->b1f6=8;other->b1f9=zero;func_0c025900(a,zero,zero);other->b1a1=34;a->s28=64;func_0c1af0ec(a,2);dat_0c2d9634=zero;
 }
}
