#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern int func_0c0447bc(struct Actor *);
extern void func_0c043352(struct Actor *),func_0c0442fa(struct Actor *),func_0c02a0c4(struct Actor *,int,int);
extern struct LinkedActor *func_0c1b4f20(struct LinkedActor *),*func_0c1b5070(struct LinkedActor *,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
void func_0c0fe650(struct Actor *a)
{
 int zero,one,mode;struct Actor *other;register float speed;
 a->b3f8=2;a->b328=5;a->f52+=a->f92;a->f92+=a->f104;func_0c02a026(a);zero=0;
 if(a->b141){
  a->b141=zero;a->f92=-63.3333321f;a->f104=0;if(a->b1d2)a->f92=-a->f92;
  a->b1a1=a->s30+53;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;
  dat_0c2f83f8->arr[a->b2]++;func_0c1b4f20((struct LinkedActor *)a);one=1;
  func_0c1b5070((struct LinkedActor *)a,(a->s30&one)^one,0);func_0c1b5070((struct LinkedActor *)a,(a->s30&one)^one,one);
 }
 if(--a->s28==0){
  speed=-6.66666651f;
  if(a->b19e&&!(a->b19e&1)&&func_0c0447bc(a)){
   other=a->p1b0;other->f52+=a->b1d2?-26.666666031f:26.666666031f;other->f56=a->f41c;other->b1f9=zero;
   a->b7++;a->f92=speed;a->f104=1.66666663f;
   if(a->b1d2){a->f92=-a->f92;a->f104=-a->f104;}mode=5;
  }else{
   a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;a->b6++;a->b7=zero;
   a->f92=speed;a->f104=0.41666666f;if(a->b1d2){a->f92=-a->f92;a->f104=-a->f104;}mode=8;
  }
  func_0c02a0c4(a,22,mode);
 }
}
void func_0c0fe824(struct Actor *a)
{
 int mode;
 a->b3f8=2;a->b328=5;a->f52+=a->f92;a->f92+=a->f104;
 if(a->f92>0)func_0c043352(a);
 if(func_0c02a026(a)<0){
  a->s28=20;if(++a->s30==3){a->b7++;mode=6;}else{a->b7--;mode=(a->s30&1)*2+1;}
  func_0c0442fa(a);func_0c02a0c4(a,22,mode);
 }else if(a->b141&1){a->b141=0;a->f92=0;a->f104=0;}
}
