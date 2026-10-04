#include "objects.h"
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c0442fa(struct Actor *),func_0c02a39a(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c0432ca(struct Actor *),func_0c025900(struct Actor *,char,char),func_0c0429a4(struct Actor *,struct LinkedActorVec3 *,int);
extern char func_0c02a026(struct Actor *);
void func_0c097ce6(struct Actor *);
void func_0c097c50(register struct Actor *a)
{
 register int zero;
 if(a->b255==6){a->b3f0=255;a->b3f1=16;}
 a->b6++;zero=0;*(int *)&a->pad10c[24]=zero;func_0c0442fa(a);func_0c02a39a(a,zero);
 a->f92=0;a->f96=0;a->f104=0;a->f108=0;a->f56=a->f41c;
 a->b1fc=zero;a->b1f9=zero;a->b1a1=57;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;
 func_0c02a0c4(a,22,zero);func_0c0432ca(a);func_0c097ce6(a);
}
void func_0c097ce6(struct Actor *a)
{
 struct LinkedActorVec3 position;
 a->b3f8=2;a->b328=5;a->b3f1=a->b255==6?2:0;func_0c02a026(a);
 if(a->b141){a->b6++;func_0c025900(a,13,a->b2?4:3);a->b3f0=0;a->b3f1=0;position.x=20.0f;position.y=231.42856f;position.z=0;func_0c0429a4(a,&position,1);}
}
