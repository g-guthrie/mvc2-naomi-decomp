#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c1d4610(struct Actor *,struct LinkedActorVec3 *),func_0c048ce6(struct Actor *),func_0c025762(void),func_0c03489c(struct Actor *),func_0c0437b8(struct Actor *),func_0c04b02a(struct Actor *),func_0c034946(struct Actor *,int),func_0c1ce916(struct LinkedActorVec3 *,int,int,int),func_0c0438de(struct Actor *),func_0c03edcc(struct Actor *,struct Actor *),func_0c045248(struct Actor *,int);
extern float dat_0c24a858[][2];
void func_0c0fa080(struct Actor *a)
{
 struct Actor *child=a->p1c8;struct LinkedActorVec3 position;int one=1,zero=0,two=2;
 a->b1ea=one;
 if(!a->b6){position.x=dat_0c24a858[a->b1f7][0];position.y=dat_0c24a858[a->b1f7][1];func_0c1d4610(a,&position);func_0c048ce6(a);a->b1a0=10;((unsigned char *)&a->sub2a4)[5]=zero;a->b6++;}
 switch(a->b1f7){
 case 0:
  if(func_0c02a026(a)<0){func_0c0437b8(a);break;}
  if(a->b141){a->b141=zero;child->p1b4=a;child->b1f6=two;child->b1f9=two;func_0c025762();child->b1a1=32;child->b1d2=a->b1d2^1;func_0c03489c(a->p1c8);}
  break;
 case 1:
  if(func_0c02a026(a)<0){func_0c0437b8(a);break;}
  if(!a->b141)break;
  if(a->b141>0){child->p1b4=a;child->b1a1=33;func_0c04b02a(a);}
  else{child->p1b4=a;child->b1f6=one;child->b1f9=two;func_0c025762();child->b1a1=34;child->b1d2=a->b1d2^1;}
  func_0c034946(child,2);a->b141=zero;
  position.x=-171.66666f;if(a->w130)position.x=-position.x;position.x+=a->f52;position.y=a->f56+182.142853f;
  func_0c1ce916(&position,a->b1d2,2,0);a->b141=zero;
  break;
 case 2:
  if(func_0c02a026(a)<0){func_0c0438de(a);break;}
  if(a->b141){child->p1b4=a;child->b1f6=one;child->b1f9=two;func_0c025762();child->b1a1=35;child->b1d2=a->b1d2^1;}
  break;
 }
}
void func_0c0fa272(struct Actor *a){func_0c03edcc(a->p1c8,a);}
void func_0c0fa280(struct Actor *a)
{
 int one=1;a->b6=a->b7=a->b5=0;
 switch(a->b4c9){case 0:case 1:case 2:a->b1e9=one;break;}
 func_0c045248(a,29);
}
void func_0c0fa2a4(struct Actor *a)
{
 int one=1;a->b6=a->b7=a->b5=0;
 switch(a->b4c9){case 0:case 1:case 2:a->b1e9=one;break;}
 func_0c045248(a,29);
}
