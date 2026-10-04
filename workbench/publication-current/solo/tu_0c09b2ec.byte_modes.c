#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c048bb0(struct Actor *,int),func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *),func_0c02a0c4(struct Actor *,int,int);
extern struct LinkedActor *func_0c148d54(struct Actor *,unsigned char,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c24355c[])(struct Actor *,struct ActorSub2a4 *);
#define READY(p) (*(char *)&(p)->w8)
void func_0c09b3e6(struct Actor *,struct ActorSub2a4 *);
void func_0c09b2ec(struct Actor *a){table_0c24355c[a->b6](a,&a->sub2a4);}
void func_0c09b302(struct Actor *a,struct ActorSub2a4 *context)
{
 int zero;
 a->b6++;zero=0;if(a->b255==3)a->b1a1=83;else a->b1a1=54;
 a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;
 func_0c048bb0(a,5);func_0c0442fa(a);a->f56=a->f41c;a->b1f9=zero;
 a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;
 if(func_0c148d54(a,0,0))READY(context)=zero;else READY(context)=1;
 func_0c0432ca(a);func_0c02a0c4(a,21,a->b1a3+15);
}
void func_0c09b3b6(struct Actor *a,struct ActorSub2a4 *context)
{
 if(func_0c02a026(a)<0){a->b6++;func_0c09b3e6(a,context);}
}
void func_0c09b3e6(struct Actor *a,struct ActorSub2a4 *context)
{
 func_0c02a026(a);
 if(READY(context)){a->b6++;func_0c02a0c4(a,21,a->b1a3+17);}
}
