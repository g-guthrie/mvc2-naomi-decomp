#include "objects.h"
extern void (*table_0c248794[])(struct Actor *),(*table_0c2487a4[])(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c025900(struct Actor *,char,char),func_0c1d4610(struct Actor *,struct LinkedActorVec3 *),func_0c02a0c4(struct Actor *,int,int),func_0c0427be(struct Actor *,int),func_0c0426c2(struct Actor *,int);
#define LOW(a) (*(unsigned int *)&(a)->pad13c[2])
#define HIGH(a) (*(unsigned int *)&(a)->pad13c[6])
void func_0c0d6094(struct Actor *a)
{
 struct LinkedActorVec3 position;struct Actor *other;
 func_0c025900(a,6,6);a->b1a0=10;position.x=-120.0f;position.y=120.0f;position.z=0;func_0c1d4610(a,&position);
 other=a->p1c8;if((LOW(other)&0u)|(HIGH(other)&0x04000000u))a->p1c8->f56=a->f41c+68.57143f;
 func_0c02a0c4(a,15,6);
}
void func_0c0d6106(struct Actor *a){a->b1ea=1;table_0c248794[a->b1f7&63](a);}
void func_0c0d6124(struct Actor *a){table_0c2487a4[a->b6](a);}
void func_0c0d6136(struct Actor *a)
{
 func_0c02a026(a);
 if(a->b141){
  struct Actor *other;
  a->b6++;a->b141=0;func_0c0427be(a,3);func_0c0426c2(a->p1c8,48);a->s28=120;a->s30=0;
  if(!(a->b34&2)){a->b1d2^=1;a->w130=a->b1d2;}
  other=a->p1c8;if(!((LOW(other)&0x20000000u)|(HIGH(other)&0x04000000u)))a->p1c8->f56=a->f41c;
 }
}
