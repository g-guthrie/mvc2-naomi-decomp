#include "objects.h"
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern short dat_0c2463bc[];
extern void func_0c0c4f04(struct Actor *,short *),func_0c02a0c4(struct Actor *,int,int),func_0c0432ca(struct Actor *),func_0c0429a4(struct Actor *,struct LinkedActorVec3 *,int);
extern struct LinkedActor *func_0c1accee(struct Actor *,unsigned char);
extern char func_0c02a026(struct Actor *);
void func_0c0c3526(struct Actor *);
void func_0c0c3494(struct Actor *a)
{
 struct ActorSub2a4 *state=&a->sub2a4;int zero=0;
 if(a->b255==6){a->b3f0=255;a->b3f1=16;}
 a->b6++;((unsigned char *)state)[24]=zero;((unsigned char *)state)[4]=255;((unsigned char *)state)[10]=255;
 a->f92=0;a->f96=0;a->f104=0;a->f108=0;a->b1a1=78;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;
 func_0c1accee(a,1);func_0c02a0c4(a,22,17);if(a->b1f9!=2)func_0c0432ca(a);func_0c0c3526(a);
}
void func_0c0c3526(struct Actor *a)
{
 struct ActorSub2a4 *state=&a->sub2a4;struct LinkedActorVec3 position;
 a->b3f8=2;a->b328=5;func_0c02a026(a);
 if(!a->b141){a->b6++;a->b3f0=0;a->b3f1=0;((unsigned char *)state)[11]=4;((unsigned char *)state)[10]=255;func_0c0c4f04(a,dat_0c2463bc);position.x=-13.333333f;position.y=105.0f;position.z=0;func_0c0429a4(a,&position,1);}
}
