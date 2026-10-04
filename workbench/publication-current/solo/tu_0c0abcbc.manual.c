#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c0437b8(struct Actor *),func_0c043014(struct Actor *,struct LinkedActorVec3 *),func_0c04be40(struct Actor *);
extern struct LinkedActor *func_0c1a1a34(struct Actor *,unsigned char,unsigned char);
extern void (*table_0c2445f4[])(struct Actor *,struct ActorSub2a4 *),(*table_0c244618[])(struct Actor *,struct ActorSub2a4 *);
void func_0c0abcbc(struct Actor *a)
{
 if(func_0c02a026(a)<=0){a->b6++;func_0c02a0c4(a,21,24);func_0c1a1a34(a,4,0);func_0c1a1a34(a,5,0);}
}
void func_0c0abcfa(struct Actor *a)
{
 struct LinkedActorVec3 position;
 if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
 if(a->b141){a->f52+=a->b1d2?a->b141*1.66666663f:-(a->b141*1.66666663f);a->b141=0;}
 if(a->b140==1){a->b140=0;position.x=0;/* Retail adds to the existing stack component here. */position.y+=102.85714f;func_0c043014(a,&position);}
}
void func_0c0abd90(struct Actor *a)
{
 a->b328=5;
 if(a->b6!=0 && a->b6!=8){a->b202|=128;a->b1eb=2;func_0c04be40(a);}
 table_0c2445f4[a->b6](a,&a->sub2a4);
}
void func_0c0abdd8(struct Actor *a){table_0c244618[a->b7](a,&a->sub2a4);}
