#include "objects.h"
extern void func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *);
extern void func_0c02a39a(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern char func_0c02a026(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c0429a4(struct Actor *,struct LinkedActorVec3 *,int);
void func_0c11511c(struct Actor *,struct ActorSub2a4 *);
void func_0c115064(struct Actor *a,struct ActorSub2a4 *sub)
{
 int zero=0;
 if(a->b255==6){a->b3f0=255;a->b3f1=16;}
 a->b6++;func_0c0442fa(a);func_0c02a39a(a,0);
 if(a->b1f9!=2){a->f56=a->f41c;func_0c0432ca(a);}
 sub->b7=zero;((char *)sub)[8]=1;((char *)sub)[9]=zero;
 a->b1a1=51;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
 a->f92=0;a->f96=0;a->f104=0;a->f108=0;
 a->f96=25.714285f;
 func_0c02a0c4(a,22,zero);a->s28=50;func_0c11511c(a,sub);
}
void func_0c11511c(struct Actor *a,struct ActorSub2a4 *sub)
{
 struct LinkedActorVec3 position;
 a->b3f8=2;a->b328=5;a->b3f1=a->b255==6?2:0;func_0c02a026(a);
 if(a->b141){
 a->b6++;
 position.x=-21.666666031f;position.y=222.857132f;position.z=0;
 a->b3f0=0;a->b3f1=0;func_0c0429a4(a,&position,1);
 }
}
