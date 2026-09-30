#include "objects.h"
struct EffectParameter_1464f4 {char scale,angle,pad,animation;};
extern struct EffectParameter_1464f4 dat_0c24fc18[];
extern void func_0c029e70(struct Actor *,int,char),func_0c02894c(struct Actor *,int);
void func_0c1464f4(struct Actor *a)
{
 struct Actor *source=a->p20;struct EffectParameter_1464f4 *parameter;
 a->b5++;a->s28=10;a->s30=0xc80;*(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&source->f52;
 a->f80=1.5f;a->f84=1.5f;parameter=&dat_0c24fc18[a->b35];a->b36=8;((struct LinkedActor *)a)->b49=parameter->scale;a->b34=parameter->angle;
 if(a->w130)a->b34=(32-a->b34)&31;
 func_0c029e70(a,27,parameter->animation);
}
void func_0c146568(struct Actor *a)
{
 struct Actor *source=a->p20;
 a->f80-=0.1000000015f;a->f84-=0.1000000015f;a->s30-=200;*(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&source->f52;func_0c02894c(a,a->s30);
 if(!--a->s28){a->b5++;a->f80=0.5f;a->f84=0.5f;a->s28=6;}
}
void func_0c1465ca(struct Actor *a)
{
 struct Actor *source=a->p20;
 a->s30+=200;*(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&source->f52;func_0c02894c(a,a->s30);
 if(!--a->s28){a->b5++;a->s28=6;}
}
void func_0c14660c(struct Actor *a)
{
 struct Actor *source=a->p20;
 a->s30-=200;*(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&source->f52;func_0c02894c(a,a->s30);
 if(!--a->s28){a->b5=2;a->s28=6;}
}
