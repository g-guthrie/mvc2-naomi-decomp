#include "objects.h"
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c0442fa(struct Actor *),func_0c0c72d2(struct Actor *),func_0c0438de(struct Actor *);
extern void func_0c048bb0(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c1605d8(struct Actor *,int);
extern char func_0c02a026(struct Actor *);
extern void (*table_0c247988[])(struct Actor *);
void func_0c0c7538(struct Actor *);
void func_0c0c74c0(struct Actor *a)
{
 int zero;
 a->b7++;func_0c0442fa(a);
 a->f92/=8.0f;a->f104=0.0f;a->f96/=8.0f;a->f108/=64.0f;func_0c048bb0(a,10);
 zero=0;a->b1a1=52;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;
 dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,21,5);func_0c0c7538(a);
}
void func_0c0c7538(struct Actor *a)
{
 func_0c0c72d2(a);func_0c02a026(a);
 if(!a->b141){a->b7++;a->b141=0;func_0c1605d8(a,(signed char)a->b1a3+2);}
}
void func_0c0c7570(struct Actor *a)
{
 func_0c0c72d2(a);
 if(func_0c02a026(a)<0){a->f96=0.0f;a->f108=0.0f;func_0c0438de(a);}
}
void func_0c0c759e(struct Actor *a){struct Actor *p=a;table_0c247988[p->b6](a);}
