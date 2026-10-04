#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c1d4610(struct Actor *,struct LinkedActorVec3 *),func_0c048ce6(struct Actor *),func_0c02a0c4(struct Actor *,int,int),func_0c025762(void),func_0c03489c(struct Actor *);
extern void (*table_0c247d30[])(struct Actor *),(*table_0c247d38[])(struct Actor *);
void func_0c0c9adc(struct Actor *a)
{
 struct LinkedActorVec3 position;float zero=0;
 position.x=zero;if(a->b1d3>=0){position.x=-6.66666651f;if(a->b1d2)position.x=-position.x;if(a->b1d3)position.x=-position.x;}
 a->f92=position.x;a->f104=zero;a->f96=zero;a->f108=-0.5357143f;
 if(a->b34&1){a->b1d2^=1;a->w130=a->b1d2;}
 position.x=-73.333328f;position.y=107.142853f;func_0c1d4610(a,&position);
 a->b1a0=10;a->f92=zero;a->f104=zero;a->f96/=2.0f;a->f108=-0.80357140303f;func_0c048ce6(a);func_0c02a0c4(a,15,1);
}
void func_0c0c9b98(struct Actor *a){a->b1ea=1;table_0c247d30[a->b1f7&63](a);}
void func_0c0c9bb6(struct Actor *a){table_0c247d38[a->b6](a);}
void func_0c0c9bc8(struct Actor *a)
{
 func_0c02a026(a);if(a->b141==1){struct Actor *other;a->b6++;a->b141=0;other=a->p1c8;other->p1b4=a;other->b1d2=a->b1d2^1;other->b1a1=32;other->b1f6=1;func_0c025762();func_0c03489c(a);}
}
