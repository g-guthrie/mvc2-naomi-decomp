/* Unverified 276-byte effect family. Two ground-height load register bytes remain; literal pools match. */
#include "objects.h"
extern void func_0c029e70(struct Actor *,unsigned char,unsigned char);
extern char func_0c029fc4(struct LinkedActor *);
extern void (*table_0c259664[])(struct LinkedActor *);
void func_0c1a98b8(struct LinkedActor *);
void func_0c1a9814(struct LinkedActor *a)
{
 a->b4++;a->sdc=a->p24->sdc;a->sdc.b12c=1;
 a->b2=a->p24->b2;a->b1=a->p24->b1;
 a->v80.x=a->p24->v80.x;a->v80.y=a->p24->v80.y;
 a->b1a3=a->p24->b1a3;a->b1a4=a->p24->b1a4;
 a->b48=a->p24->b48;a->v80=a->p24->v80;
 a->b36=a->p24->b36;a->b36=0;
 func_0c029e70((struct Actor *)a,27,5);
 if(a->b33)a->sdc.w130^=1;
 a->v80.x*=0.800000012f;a->v80.y*=0.800000012f;
 func_0c1a98b8(a);
}
void func_0c1a98b8(struct LinkedActor *a)
{
 if(func_0c029fc4(a)<0){a->b4++;a->sdc.b12c=0;}
 else {
 *(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&a->p24->f52;
 a->f56=((struct Actor *)a->p24)->f41c;
 }
}
void func_0c1a98f4(struct LinkedActor *a){table_0c259664[a->b4](a);}
