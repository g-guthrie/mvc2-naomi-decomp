#include "objects.h"
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern char func_0c02a026(struct Actor *);
extern void func_0c0344a0(struct Actor *,int),func_0c043324(struct Actor *),func_0c02a0c4(struct Actor *,int,int),func_0c0437b8(struct Actor *);
void func_0c0ee064(struct Actor *a,struct ActorSub2a4 *context)
{
 register int zero=0;
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c02a026(a);
 if(!context->b2 && a->b19e){context->b2=1;func_0c0344a0(a,3);}
 if(a->b141){
  a->b141=zero;
  if(a->b255!=3)a->b1a1=a->b1a3?53:49;else a->b1a1=67;
  a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;
 }
 if(!(a->f56>a->f41c)){
  a->b7++;a->f56=a->f41c;a->b1f9=zero;a->f92=0;a->f96=0;a->f104=0;a->f108=0;
  func_0c043324(a);func_0c02a0c4(a,21,2);
 }
}
void func_0c0ee16c(struct Actor *a)
{
 if(func_0c02a026(a)>=0)return;
 a->f92=0;a->f96=0;a->f104=0;a->f108=0;func_0c0437b8(a);
}
