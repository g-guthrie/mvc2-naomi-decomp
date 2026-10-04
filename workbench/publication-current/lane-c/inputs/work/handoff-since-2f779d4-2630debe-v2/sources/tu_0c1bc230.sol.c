#include "selector_model.h"
extern unsigned int func_0c02849a(void);
extern void func_0c02a0c4(struct LinkedActor *,int,int);
void func_0c1bc230(struct LinkedActor *a)
{
 short speed=func_0c02849a()&0xf0;
 if(a->f92>0.0f)speed=-speed;
 a->f92=speed*1.66666663f/256.0f;
 a->f96=((func_0c02849a()&255)-128)*2.1428571f/256.0f;
 a->s28=(func_0c02849a()&31)+16;
 func_0c02a0c4(a,23,7);
}
void func_0c1bc2a0(struct LinkedActor *a)
{
 short speed=func_0c02849a()&63;int animation;
 if(a->f92>0.0f)speed=-speed;
 a->f92=speed*1.66666663f/256.0f;
 a->f96=((func_0c02849a()&63)-32)*16*2.1428571f/256.0f;
 a->s28=(func_0c02849a()&31)+8;
 animation=6;if((func_0c02849a()&3)==0)animation=7;
 func_0c02a0c4(a,23,animation);
}
