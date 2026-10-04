#include "objects.h"
extern struct Actor *func_0c037d54(struct Actor *);
extern void (*table_0c2421d4[])(struct Actor *);
extern void func_0c025900(struct Actor *,char,char),func_0c1d4610(struct Actor *,struct LinkedActorVec3 *),func_0c048ce6(struct Actor *),func_0c02a0c4(struct Actor *,int,int);
struct Actor *func_0c085d28(struct Actor *a)
{
 struct Actor *result;
 if(!(a->w1fa&0xc00) || a->b1f9==1 || !a->b1a3)return 0;
 if(a->b1fe){if(a->b1f9==2)return 0;if(!(result=func_0c037d54(a)))return 0;a->b1f7=1;}
 else if(a->b1f9==2){if(!(result=func_0c037d54(a)))return 0;a->b1f7=2;}
 else{if(!(result=func_0c037d54(a)))return 0;a->b1f7=0;}
 return result;
}
void func_0c085dae(struct Actor *a){table_0c2421d4[a->b1f7&63](a);}
void func_0c085dc6(struct Actor *a)
{
 struct LinkedActorVec3 position;
 if(a->w1fa&0x800){a->b1d2^=1;a->w130^=1;}
 func_0c025900(a,5,5);a->b1a0=10;a->b6=0;position.x=-53.3333321f;position.y=137.142853f;func_0c1d4610(a,&position);func_0c048ce6(a);func_0c02a0c4(a,15,0);
}
