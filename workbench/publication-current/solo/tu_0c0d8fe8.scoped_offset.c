#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern int func_0c0447bc(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c0437b8(struct Actor *),func_0c043324(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c248a58[])(struct Actor *);
void func_0c0d8fe8(struct Actor *a)
{
 register float divisor;int mode;
 a->b3f8=2;a->b328=5;a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c02a026(a);divisor=8.0f;
 if(a->b19e){if(func_0c0447bc(a)){a->b6++;{struct Actor *other=a->p1b0;float offset;offset=a->b1d2?100.0f:-100.0f;other->f52=offset+a->f52;other->f56=a->f56;other->b1f9=0;a->f92/=divisor;mode=3;goto action;}}a->s28=1;}
 if(--a->s28==0){a->b6=4;a->f92/=divisor;mode=1;goto action;}return;
action:func_0c02a0c4(a,22,mode);
}
void func_0c0d90c0(struct Actor *a,struct Actor *target)
{
 int zero;struct Actor *enemy;register float fzero=0;
 a->b3f8=2;a->b328=5;
 enemy=a->p20c;if(enemy->b1!=target->b1){a->f92=fzero;a->f96=fzero;a->f104=fzero;a->f108=fzero;func_0c0437b8(a);return;}
 zero=0;
 if(!a->b7){
  a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c02a026(a);
  if(a->b141){a->b7++;a->b141=zero;a->f92/=4.0f;a->f96=17.142857f;a->f108=-2.1428571f;}
  if(a->b14b){a->b1a1=a->b14b;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;a->b14b=zero;}
 }else{
  a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;if(!a->b141)func_0c02a026(a);
  if(a->b14b){a->b1a1=a->b14b;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;a->b14b=zero;}
  if(!(a->f56>a->f41c)){a->b6++;a->f56=a->f41c;a->b1f9=zero;a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;a->f92=fzero;a->f96=fzero;a->f104=fzero;a->f108=fzero;func_0c043324(a);func_0c02a0c4(a,1,3);}
 }
}
void func_0c0d92c6(struct Actor *a)
{
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;if(func_0c02a026(a)<0){a->f92=0;a->f96=0;a->f104=0;a->f108=0;func_0c0437b8(a);}
}
void func_0c0d9332(struct Actor *a){table_0c248a58[a->b6](a);}
