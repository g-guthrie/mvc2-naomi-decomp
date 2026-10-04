#include "objects.h"
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern char func_0c02a026(struct Actor *);
extern void func_0c0442fa(struct Actor *),func_0c02a39a(struct Actor *,int),func_0c048bb0(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c0c201a(struct Actor *),func_0c0438de(struct Actor *);
extern void (*table_0c246b88[])(struct Actor *);
void func_0c0c402c(struct Actor *);
void func_0c0c3fac(struct Actor *a)
{
 int zero=0;
 a->b7++;func_0c0442fa(a);func_0c02a39a(a,0);
 a->f92/=8.0f;a->f104=0;a->f96/=8.0f;a->f108/=64.0f;func_0c048bb0(a,5);
 a->b1a1=72;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;
 func_0c02a0c4(a,21,14);func_0c0c402c(a);
}
void func_0c0c402c(struct Actor *a)
{
 struct ActorSub2a4 *state;state=&a->sub2a4;
 func_0c0c201a(a);func_0c02a026(a);if(a->b141){a->b7++;((unsigned char *)state)[9]=1;}
}
void func_0c0c4062(struct Actor *a){func_0c0c201a(a);if(func_0c02a026(a)<0){a->f96=0;a->f108=0;func_0c0438de(a);}}
void func_0c0c4092(struct Actor *a){a->x364[0]=0;table_0c246b88[a->b6](a);}
