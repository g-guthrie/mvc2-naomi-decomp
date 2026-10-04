#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern struct LinkedActor *func_0c1476d0(struct Actor *,unsigned char);
extern void func_0c0437b8(struct Actor *),func_0c048bb0(struct Actor *,int),func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *),func_0c02a39a(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c243510[])(struct Actor *,struct ActorSub2a4 *),(*table_0c243518[])(struct Actor *);
void func_0c09a95c(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c09a97e(struct Actor *a){table_0c243510[a->b6](a,&a->sub2a4);}
void func_0c09a994(struct Actor *a)
{
 int zero;
 a->b6++;zero=0;if(a->b1a3)a->b1a1=70;else a->b1a1=50;
 a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;
 func_0c048bb0(a,5);func_0c0442fa(a);a->f56=a->f41c;a->b1f9=zero;
 a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;
 func_0c0432ca(a);func_0c02a39a(a,0);func_0c02a0c4(a,21,5);
}
void func_0c09aa22(struct Actor *a)
{
 if(func_0c02a026(a)<0){a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;func_0c0437b8(a);return;}
 if(!a->b141)return;
 a->b141=0;func_0c1476d0(a,a->b1a3?2:0);a->b27b=0;a->b27a=16;
}
void func_0c09aa88(struct Actor *a){struct Actor *p=a;table_0c243518[p->b6](a);}
