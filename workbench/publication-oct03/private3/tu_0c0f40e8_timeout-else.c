/* UNVERIFIED COMPLETE C DRAFT. Not registered; no decompilation credit.
 * Nine complete functions; first seven bodies exact, whole section inexact. Shared effect vector/control flow remains unresolved. */
#include "objects.h"
extern void func_0c025900(struct Actor *,int,int),func_0c048ce6(struct Actor *),func_0c02a0c4(struct Actor *,int,int);
/* The positioning helper reads only x/y; it takes z from the actor. */
extern void func_0c1d4610(struct Actor *,struct LinkedActorVec3 *);
extern char func_0c02a026(struct Actor *);
extern int func_0c0427f2(struct Actor *),func_0c042780(struct Actor *);
extern void func_0c0437b8(struct Actor *),func_0c04b02a(struct Actor *),func_0c0346da(struct Actor *,int),func_0c0426c2(struct Actor *,int),func_0c0427be(struct Actor *,int);
extern void func_0c1ce916(struct LinkedActorVec3 *,int,int,int);
extern void (*table_0c24a2dc[])(struct Actor *),(*table_0c24a2e8[])(struct Actor *);
void func_0c0f430c(struct Actor *);

void func_0c0f40e8(struct Actor *a)
{
 struct LinkedActorVec3 v;
 if(!(a->b34&2)){a->b1d2^=1;a->w130=(unsigned char)a->b1d2;}
 func_0c025900(a,5,5);v.x=-83.33333f;v.y=158.57143f;
 func_0c1d4610(a,&v);a->b1a0=10;func_0c048ce6(a);func_0c02a0c4(a,15,1);
}
void func_0c0f414a(struct Actor *a)
{
 struct LinkedActorVec3 v;
 a->b1d2^=1;a->w130=a->b1d2;
 if(!(a->b34&2)){a->b1d2^=1;a->w130=a->b1d2;}
 func_0c025900(a,5,5);v.x=-83.33333f;v.y=158.57143f;
 func_0c1d4610(a,&v);a->b1a0=10;func_0c048ce6(a);func_0c02a0c4(a,15,3);
}
void func_0c0f41bc(struct Actor *a){a->b1ea=1;table_0c24a2dc[a->b1f7&63](a);}
void func_0c0f41da(struct Actor *a)
{
 float zero=0;
 struct Actor *p;
 if(!a->b6){a->b6++;a->f92=a->b1d2?-7.5f:7.5f;a->f104=zero;a->f96=4.28571415f;a->f108=-0.2678571343422f;}
 if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
 if(a->b141){
  a->b141=0;p=a->p1c8;p->p1b4=a;p->b1f6=1;p->b1f9=2;
  func_0c025900(a,0,0);p->b1a1=32;p->b1d2=a->b1d2;
 }
 if(!a->b140){
  a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
  if(!(a->f56>a->f41c)){a->f96=zero;a->f108=zero;a->f56=a->f41c;}
 }
}
void func_0c0f42fa(struct Actor *a){table_0c24a2e8[a->b6](a);}
void func_0c0f430c(struct Actor *a)
{
 struct Actor *p=a->p1c8;
 p->p1b4=a;p->b1f6=1;p->b1f9=2;func_0c025900(a,0,0);
 p->b1a1=34;p->b1d2=a->b1d2^1;func_0c02a0c4(a,15,2);
}
void func_0c0f4354(struct Actor *a)
{
 a->b6++;func_0c0426c2(a->p1c8,30);func_0c0427be(a,3);a->s28=64;
}
void func_0c0f43b0(struct Actor *a)
{
 struct LinkedActorVec3 position;
 float height;register float left,right;
 func_0c02a026(a);height=122.142853f;left=-95.0f;right=95.0f;
 if(--a->s28<=0){
  func_0c0f430c(a);a->b6++;
  position.y=a->f56+height;position.x=a->w130?right:left;goto effect;
 }else{
 if(func_0c0427f2(a))a->b142=1;
 if(func_0c042780(a->p1c8)){func_0c0f430c(a);a->b6++;goto done;}
 if(a->b141){
 a->b141=0;a->p1c8->p1b4=a;a->p1c8->b1a1=33;func_0c04b02a(a);
 position.y=a->f56+height;position.x=a->w130?right:left;
effect:
 position.x+=a->f52;position.z=a->f60;
 func_0c1ce916(&position,(short)a->w130,1,0);func_0c0346da(a,0);
 }
 }
done:
 ;
}
void func_0c0f4498(struct Actor *a)
{
 if(func_0c02a026(a)<0)func_0c0437b8(a);
}
