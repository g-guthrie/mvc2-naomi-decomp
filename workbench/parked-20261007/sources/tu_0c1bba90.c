#include "objects.h"
#define A(a) ((struct Actor *)(a))
extern struct ActorFlags *dat_0c2d6f84;
extern int func_0c02849a(void);
extern void func_0c029e70(struct LinkedActor *,int,int),func_0c037688(struct LinkedActor *);
extern char func_0c029fc4(struct LinkedActor *);
void func_0c1bbb68(struct LinkedActor *,struct LinkedActor *);
void func_0c1bba90(struct LinkedActor *a,struct LinkedActor *owner)
{
 float scale;
 int r;
 a->b4++;a->sdc=owner->sdc;a->sdc.b12c=1;
 a->b2=owner->b2;a->b1=owner->b1;a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;
 a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;a->v80=owner->v80;
 a->b36=owner->b36;a->b36=8;
 a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;
 r=(unsigned char)func_0c02849a();{int c=128;r=(r-c)<<7;}scale=65536.0f;
 a->f92=(float)r*1.66666663f/scale;
 r=(unsigned char)func_0c02849a();r=(r+96)<<10;a->f96=(float)r*2.1428571f/scale;
 a->f108=-0.401785702f;
 func_0c029e70(a,27,(func_0c02849a()&3)+9);
 func_0c1bbb68(a,owner);
}
void func_0c1bbb68(struct LinkedActor *a,struct LinkedActor *owner)
{
 func_0c029fc4(a);
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 a->sdc.b12c=(dat_0c2d6f84->flags+a->b34)&1;
 if(!(a->f56>A(owner)->f41c))a->b4++;
}
void func_0c1bbbe2(struct LinkedActor *a){a->b4++;a->sdc.b12c=0;func_0c037688(a);}
