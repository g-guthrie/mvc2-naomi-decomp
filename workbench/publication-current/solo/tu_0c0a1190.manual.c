#include "objects.h"
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern char func_0c02a026(struct Actor *);
extern void func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *),func_0c02a0c4(struct Actor *,int,int),func_0c09e43a(struct Actor *),func_0c09e45e(struct Actor *),func_0c0437b8(struct Actor *),func_0c14aa48(struct Actor *,int);
extern void func_0c0429a4(struct Actor *,struct LinkedActorVec3 *,int);
extern void (*table_0c243a44[])(struct Actor *);
void func_0c0a1190(struct Actor *a)
{
 int zero;
 if(a->b255==6){a->b3f0=255;a->b3f1=16;}
 a->b6++;zero=0;a->b1a1=63;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;
 func_0c0442fa(a);a->b1f9=zero;func_0c0432ca(a);a->b35=zero;func_0c02a0c4(a,22,zero);
}
void func_0c0a11fe(struct Actor *a)
{
 struct ActorSub2a4 *sub=&a->sub2a4;struct LinkedActorVec3 position;
 func_0c09e43a(a);
 if(a->b141==1){a->b141=0;position.x=0.0f;position.y=171.42856f;func_0c0429a4(a,&position,*(short *)sub==0);}
 if(a->b141==2){a->b6++;a->b141=0;func_0c14aa48(a,7);}
 func_0c02a026(a);
}
void func_0c0a126a(struct Actor *a)
{
 func_0c09e43a(a);if(a->b141==3){a->b6++;a->b141=0;}func_0c02a026(a);
}
void func_0c0a1292(struct Actor *a){func_0c09e45e(a);if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0a12b8(struct Actor *a){struct Actor *p=a;table_0c243a44[p->b6](a);}
