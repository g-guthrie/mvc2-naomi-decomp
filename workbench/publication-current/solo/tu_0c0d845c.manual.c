#include "objects.h"
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c043324(struct Actor *);
void func_0c0d845c(struct Actor *a)
{
 a->f52=a->f52+a->f92;a->f92=a->f92+a->f104;a->f56=a->f56+a->f96;a->f96=a->f96+a->f108;
 if(((signed char *)&a->w150)[1]>=0){
  func_0c02a026(a);
  if(a->b141){int zero=0;a->b141=zero;if(a->b255==3)a->b1a1=82;else a->b1a1=54;
   a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;
  }
 }
 if(a->f96<0.0f){a->b6++;func_0c02a0c4(a,21,5);}
}
void func_0c0d8510(struct Actor *a)
{
 a->f52=a->f52+a->f92;a->f92=a->f92+a->f104;a->f56=a->f56+a->f96;a->f96=a->f96+a->f108;
 if(((signed char *)&a->w150)[1]>=0)func_0c02a026(a);
 if(!(a->f56>a->f41c)){a->b6++;a->f56=a->f41c;a->b1f9=0;func_0c043324(a);func_0c02a0c4(a,21,6);}
}
