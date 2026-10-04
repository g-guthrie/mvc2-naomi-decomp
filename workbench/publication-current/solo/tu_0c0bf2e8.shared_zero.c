#include "objects.h"
extern void func_0c025900(struct Actor *,char,char),func_0c02a0c4(struct Actor *,int,int);
void func_0c0bf2e8(struct Actor *a)
{
 struct Actor *other=a->p1c8;
 a->b3f8=2;a->b328=5;a->b1ea=1;a->b1ed=2;a->b1f5=2;
 if(--a->s28){
  a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
  other->f52+=other->f92;other->f92+=other->f104;other->f56+=other->f96;other->f96+=other->f108;
 }else{
  int zero=0;
  a->b6++;a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;
  other->p1b4=a;other->b1f6=1;other->b1a1=34;other->b1d2=other->w130=other->b1d2^1;
  func_0c025900(a,zero,zero);
  if(a->b1d2)a->f92=6.66666651f;else a->f92=-6.66666651f;
  a->f104=zero;a->f96=zero;a->f108=-0.80357140303f;func_0c02a0c4(a,1,10);
 }
}
