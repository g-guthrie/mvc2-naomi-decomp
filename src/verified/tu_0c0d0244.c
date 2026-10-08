#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern unsigned int func_0c02849a(void);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c043324(struct Actor *),func_0c0437b8(struct Actor *),func_0c0ce574(struct Actor *),func_0c1b0b40(struct Actor *,int);
extern void func_0c04b02a(struct Actor *),func_0c04c010(struct Actor *,struct Actor *,int),func_0c1cea66(struct Actor *,struct LinkedActorVec3 *,int),func_0c03edcc(struct Actor *,struct Actor *);
void func_0c0d0244(struct Actor *a)
{
 func_0c02a026(a);
 a->f52+=a->f92;
 a->f92+=a->f104;
 a->f56+=a->f96;
 a->f96+=a->f108;
 if(a->f56<a->f41c){
  a->f92=0.0f;
  a->f96=0.0f;
  a->f104=0.0f;
  a->f108=0.0f;
  a->f56=a->f41c;
  a->b1f9=0;
  func_0c043324(a);
  func_0c0437b8(a);
 }
}
void func_0c0d02c8(struct Actor *a)
{
 if(func_0c02a026(a)<0)func_0c0ce574(a);
}
void func_0c0d02ea(struct Actor *a)
{
 unsigned char r;
 struct LinkedActorVec3 v;
 register float y;
 a->b3f8=2;
 a->b328=5;
 a->b1ea=1;
 a->b1ed=2;
 func_0c02a026(a);
 if(--a->s28<0){
  if(a->s30==0){
   a->s28=63;
   a->s30++;
   func_0c02a0c4(a,22,5);
   func_0c1b0b40(a,3);
   *(int *)&a->pad10c[0x2f0-0x2cc]=33;
  }
  else{
   *(int *)&a->pad10c[0x2f0-0x2cc]=34;
   a->b6++;
   a->s28=63;
   func_0c02a0c4(a,22,6);
   a->f92=0.0f;
   a->f104=0.0f;
   a->f96=6.428571224213f;
   a->f108=-0.066964284f;
  }
 }
 else if(a->b141){
  a->b141=0;
  a->p1c8->p1b4=a;
  if(a->s30==0){goto l;l:a->p1c8->b1a1=58;}
  else a->p1c8->b1a1=59;
  func_0c04b02a(a);
  func_0c04c010(a->p1c8,a,1);
  y=120.0f;
  if(a->s30){
   v.x=-60.0f;
   v.y=y;
   func_0c1cea66(a,&v,3);
  }
  else{
   r=func_0c02849a()&7;
   v.x=-123.33333f;
   v.y=y;
   func_0c1cea66(a,&v,r+9);
  }
 }
 func_0c03edcc(a,a->p1c8);
}
