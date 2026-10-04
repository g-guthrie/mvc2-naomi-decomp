#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c1aede8(struct Actor *),func_0c1618dc(struct Actor *,int,float,float),func_0c02a0c4(struct Actor *,int,int),func_0c0437b8(struct Actor *);
extern int func_0c047bbe(struct Actor *);
extern void (*table_0c248058[])(struct Actor *);
void func_0c0cd364(struct Actor *a)
{
 a->b3f8=2;a->b328=5;func_0c02a026(a);
 if(a->b141){float x=195.0f,y=113.571426f;a->b141=0;a->b6++;func_0c1aede8(a);func_0c1618dc(a,0,x,y);}
}
void func_0c0cd3be(struct Actor *a,struct ActorSub2a4 *context)
{
 a->b3f8=2;a->b328=5;func_0c02a026(a);
 if((signed char)context->b3>0 && func_0c047bbe(a)){context->b3--;a->s28++;}
 if(--a->s28<=0){int zero=0;a->b6++;a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;func_0c02a0c4(a,22,2);}
}
void func_0c0cd436(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0cd458(struct Actor *a){table_0c248058[a->b6](a);}
