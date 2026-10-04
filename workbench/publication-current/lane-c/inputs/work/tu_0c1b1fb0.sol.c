#include "objects.h"
extern void func_0c02a0c4(struct LinkedActor *,int,int);
extern char func_0c02a026(struct LinkedActor *);
extern void func_0c1d53e4(struct LinkedActor *);
extern void func_0c0346da(struct LinkedActor *,int);
void func_0c1b1fb0(struct LinkedActor *a,struct LinkedActor *parent)
{
 float offset,distance;
 if(!a->b4){
  a->b4++;
  a->sdc=parent->sdc; a->sdc.b12c=1;
  a->b2=parent->b2; a->b1=parent->b1;
  a->v80.x=parent->v80.x; a->v80.y=parent->v80.y;
  a->b1a3=parent->b1a3; a->b1a4=parent->b1a4;
  a->b48=parent->b48; a->v80=parent->v80;
  a->b36=parent->b36;
  a->b49-=8;
  a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;
  offset=640.0f;a->f92=-11.666666031f;
  if(a->sdc.w130){offset=-640.0f;a->f92=-a->f92;}
  a->f52=parent->f52+offset;a->f56=parent->f56;
  func_0c02a0c4(a,19,10);
  ((struct Actor *)a)->b0=1;
  func_0c1d53e4(a);
 }else{
  a->b36=parent->b36;
  if(!a->b5){
   a->f52+=a->f92;a->f92+=a->f104;
   func_0c02a026(a);
   distance=parent->f52-a->f52;
   if(distance<0.0f)distance=-distance;
   if(distance<426.66666f){
    a->b5++;
    ((struct Actor *)parent)->sub2a4.s12=1;
    offset=53.3333321f;a->f104=0.416666657f;
    if(a->sdc.w130){offset=-53.3333321f;a->f104=-a->f104;}
    a->f52-=offset;
    func_0c02a0c4(a,19,11);
    func_0c0346da(parent,41);
   }
  }else{
   if((unsigned char)a->b5==1){
    float old=a->f92;
    a->f52+=old;
    a->f92+=a->f104;
    if(a->f92*old<0.0f)a->b5++;
   }
   func_0c02a026(a);
  }
 }
}
