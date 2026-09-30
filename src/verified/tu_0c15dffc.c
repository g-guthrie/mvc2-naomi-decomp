#include "objects.h"
extern struct MotionGlobal_0c2d9260 dat_0c2d9260;
extern short dat_0c250f0a[];
extern void func_0c02a0c4(struct Actor *,int,int);
extern void func_0c0346da(struct Actor *,int);
extern char func_0c02a026(struct Actor *);
extern void func_0c037d0c(struct Actor *);
void func_0c15dffc(struct Actor *a,struct Actor *owner)
{
 a->f52+=a->f92;
 a->f92+=a->f104;
 a->f56+=a->f96;
 a->f96+=a->f108;
 if(!*(int *)&a->pad5ba[4]){
  if(a->f92<0.0f){if(a->f52<=dat_0c2d9260.f88+53.3333321f)goto bounce;}
  else if(a->f52>=dat_0c2d9260.f8c-53.3333321f)goto bounce;
  goto ground;
 bounce:
  *(int *)&a->pad5ba[4]=255;a->f92=0.0f;a->f104=0.0f;
 }
 ground:
 if(a->f56<=owner->f41c){a->b5=a->b5+1;a->f56=owner->f41c;a->s28=dat_0c250f0a[0];a->b36=15;func_0c02a0c4(a,23,5);func_0c0346da(a,75);}
 func_0c02a026(a);func_0c037d0c(a);
}
