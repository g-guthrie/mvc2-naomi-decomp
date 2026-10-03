#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c048bb0(struct Actor *,int),func_0c0442fa(struct Actor *),func_0c0344a0(struct Actor *,int),func_0c0432ca(struct Actor *),func_0c02a0c4(struct Actor *,int,int),func_0c0437b8(struct Actor *),func_0c0451f2(struct Actor *);
extern struct LinkedActor *func_0c165b30(struct LinkedActor *,unsigned char,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern struct LinkedActorVec3 dat_0c2489d4[];
extern void (*table_0c2489c0[])(struct Actor *);
void func_0c0d8190(struct Actor *a)
{
 int zero=0;
 a->b6++;a->b1a1=48;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;
 func_0c048bb0(a,5);func_0c0442fa(a);a->f92=0;a->f96=0;a->f104=0;a->f108=0;a->f56=a->f41c;a->b1f9=zero;
 func_0c0344a0(a,21);func_0c165b30((struct LinkedActor *)a,1,zero);func_0c0432ca(a);func_0c02a0c4(a,21,zero);
}
void func_0c0d8218(struct Actor *a)
{
 if(func_0c02a026(a)<0){a->b6++;func_0c02a0c4(a,21,1);return;}
 if(((unsigned char *)&a->w150)[1]&1){((unsigned char *)&a->w150)[1]&=~1;func_0c0344a0(a,30);func_0c165b30((struct LinkedActor *)a,0,0);}
}
void func_0c0d826c(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0d828e(struct Actor *a){table_0c2489c0[a->b6](a);}
void func_0c0d82a0(struct Actor *a)
{
 int zero=0;
 a->b6++;
 if(a->b255==3){a->b1a1=81;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;}
 else{a->b1a1=a->b1a3?53:51;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;func_0c048bb0(a,10);}
 func_0c0442fa(a);a->f56=a->f41c;a->b1f9=zero;
 if(a->b1d2)a->f92=dat_0c2489d4[(unsigned char)a->b1a3].x;else a->f92=-dat_0c2489d4[(unsigned char)a->b1a3].x;
 a->f96=dat_0c2489d4[(unsigned char)a->b1a3].y;a->f108=dat_0c2489d4[(unsigned char)a->b1a3].z;a->f104=0;
 func_0c165b30((struct LinkedActor *)a,2,0);func_0c0432ca(a);a->b158=a->b1a3?4:2;func_0c02a0c4(a,21,a->b158);
}
void func_0c0d83fc(struct Actor *a)
{
 func_0c02a026(a);if(((unsigned char *)&a->w150)[1]&1){a->b6++;func_0c0451f2(a);func_0c165b30((struct LinkedActor *)a,7,0);}
}
