#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c025900(struct Actor *,char,char),func_0c04b02a(struct Actor *),func_0c1ceafe(struct Actor *,struct LinkedActorVec3 *),func_0c034946(struct Actor *,int),func_0c03edcc(struct Actor *,struct Actor *),func_0c03f004(struct Actor *,struct Actor *),func_0c045248(struct Actor *,int);
extern unsigned char dat_0c248f3c[],dat_0c248f42[];
void func_0c0dec0c(struct Actor *a)
{
 struct LinkedActorVec3 position;
 func_0c02a026(a);
 if(a->b141){
  func_0c025900(a,0,0);a->b6++;a->b141=0;
  a->p1c8->p1b4=a;a->p1c8->b1a1=34;func_0c04b02a(a);
  a->p1c8->b1f6=1;a->p1c8->b1a1=35;
  position.x=-106.666664124f;position.y=137.142853f;func_0c1ceafe(a,&position);
  func_0c034946(a->p1c8,1);
  a->f96=8.5714283f;a->f108=-0.80357140303f;a->f92=6.66666651f;a->f104=0;
  if(a->w130)a->f92=-a->f92;
 }
}
void func_0c0decb8(struct Actor *a)
{
 float offset;
 if(a->p1c8->b14b>0)func_0c03edcc(a->p1c8,a);else func_0c03f004(a->p1c8,a);
 if(a->b1f6)return;
 if(a->p1c8->b140){
  a->p1c8->b140=0;
  offset=((signed char*)&a->p1c8->w150)[1]==1?1:0;
  if(((signed char*)&a->p1c8->w150)[1]==2)offset=-1;
  if(!a->p1c8->w130)offset=-offset;
  a->f52+=offset;
 }
}
void func_0c0ded74(struct Actor *a)
{
 a->b6=a->b7=a->b5=0;a->b1e9=dat_0c248f3c[(signed char)a->b4c9+a->i204*3];func_0c045248(a,29);
}
void func_0c0ded9a(struct Actor *a)
{
 a->b6=a->b7=a->b5=0;a->b1e9=dat_0c248f42[(signed char)a->b4c9+a->i204*3];func_0c045248(a,29);
}
void func_0c0dedc0(struct Actor *a)
{
 int zero=0,one=1;a->b6=a->b7=a->b5=zero;
 switch(a->b4c9){case 0:a->b1e9=zero;goto strength;case 1:a->b1e9=5;goto strength;case 2:a->b1e9=one;strength:a->b1a3=one;break;}
 func_0c045248(a,21);
}
