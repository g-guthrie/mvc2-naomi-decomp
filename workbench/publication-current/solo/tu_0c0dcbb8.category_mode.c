#include "objects.h"
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern short dat_0c248c64[][2];
extern char dat_0c248e4c[],dat_0c248e50[],dat_0c248e54[];
extern char func_0c02a026(struct Actor *);
extern void func_0c0442fa(struct Actor *),func_0c02a39a(struct Actor *,int),func_0c0432ca(struct Actor *),func_0c048bb0(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c0344a0(struct Actor *,int),func_0c0437b8(struct Actor *);
extern struct LinkedActor *func_0c166704(struct Actor *,unsigned char);
void func_0c0dcbb8(register struct Actor *a)
{
 int zero=0,category;register int index;
 a->b6++;a->b1f9=zero;func_0c0442fa(a);func_0c02a39a(a,zero);func_0c0432ca(a);
 /* Retail tests category before this common helper call. */
 func_0c048bb0(a,a->i204?8:8);
 a->f92=0;a->f96=0;a->f104=0;a->f108=0;
 category=a->i204;index=(category&1)*2+(unsigned char)a->b1a3;
 a->s28=dat_0c248c64[category][(unsigned char)a->b1a3];a->b1a1=dat_0c248e4c[index];
 a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;
 func_0c02a0c4(a,21,dat_0c248e50[index]);
}
void func_0c0dcc62(struct Actor *a)
{
 func_0c02a026(a);
 if(a->b141){a->b141=0;func_0c166704(a,a->i204?6:0);func_0c0344a0(a,30);a->b27b=0;a->b27a=16;}
 if(--a->s28<=0){a->b6++;func_0c02a0c4(a,21,dat_0c248e54[a->i204*2+(unsigned char)a->b1a3]);}
}
void func_0c0dccd8(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
