#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c043324(struct Actor *),func_0c04c010(struct Actor *,struct Actor *,int),func_0c04b02a(struct Actor *),func_0c025762(void);
void func_0c0d05ac(struct Actor *a)
{
 a->b3f8=2;
 a->b328=5;
 a->b1ea=1;
 a->b1ed=2;
 func_0c02a026(a);
 a->f52+=a->f92;
 a->f92+=a->f104;
 a->f56+=a->f96;
 a->f96+=a->f108;
 a->p1c8->f52+=a->p1c8->f92;
 a->p1c8->f92+=a->p1c8->f104;
 a->p1c8->f56+=a->p1c8->f96;
 a->p1c8->f96+=a->p1c8->f108;
 if(a->p1c8->f41c>a->p1c8->f56){
  a->p1c8->f92=0.0f;
  a->p1c8->f96=0.0f;
  a->p1c8->f104=0.0f;
  a->p1c8->f108=0.0f;
  a->p1c8->f56=a->p1c8->f41c;
  a->p1c8->b12c=0;
 }
 if(a->f41c>a->f56){
  a->b3f9=0;
  a->b3f8=0;
  a->b327=0;
  a->b328=0;
  a->f56=a->f41c;
  a->b6++;
  a->s28=36;
  func_0c043324(a);
  func_0c02a0c4(a,22,7);
  func_0c04c010(a->p1c8,a,1);
  a->p1c8->b1f6=16;
  a->b1a1=a->p1c8->b1a1=60;
  a->p1c8->f56=a->f41c+51.42857f;
  a->p1c8->b12c=1;
  func_0c04b02a(a);
  *(int *)&a->pad10c[0x2f0-0x2cc]=36;
  func_0c025762();
 }
}
