#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c0429a4(struct Actor *,struct LinkedActorVec3 *,int),func_0c1b0b40(struct Actor *,int),func_0c02a684(struct Actor *,int,int,int);
void func_0c0cffcc(struct Actor *a)
{
 struct LinkedActorVec3 v;
 a->b3f8=2;
 a->b328=5;
 a->b3f1=a->b255==6?2:0;
 a->b6++;
 a->b3f0=0;
 a->b3f1=0;
 v.x=0.0f;
 v.y=162.857132f;
 v.z=0.0f;
 func_0c0429a4(a,&v,1);
}
void func_0c0d0020(struct Actor *a)
{
 a->b3f8=2;
 a->b328=5;
 func_0c02a026(a);
 if(a->s28==15){
  func_0c1b0b40(a,4);
  func_0c02a684(a,3,2,1);
 }
 if(--a->s28<0){
  a->b6++;
  a->s28=15;
  func_0c02a0c4(a,22,1);
  a->f96=0.0f;
  a->f108=0.0f;
  a->f92=-13.33333302f;
  a->f104=0.1041666642f;
  if(a->w130){
   a->f92=-a->f92;
   a->f104=-a->f104;
  }
 }
}
