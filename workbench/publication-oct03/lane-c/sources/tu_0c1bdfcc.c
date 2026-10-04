#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern struct ActorFlags *dat_0c2d6f84;
extern signed char dat_0c2f837c;
extern void func_0c037688(struct LinkedActor *);
extern void func_0c02a0c4(struct LinkedActor *,int,int);
extern char func_0c02a026(struct LinkedActor *),func_0c029fc4(struct LinkedActor *);
extern void func_0c029e70(struct LinkedActor *,int,int),func_0c029f0e(struct LinkedActor *,int,int,int);
extern void func_0c188d04(struct LinkedActor *,struct LinkedActor *);
void func_0c1be04c(struct LinkedActor *),func_0c1be17e(struct LinkedActor *);
struct LinkedActor *func_0c1bdfcc(struct LinkedActor *parent)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,3,0))!=0){
  a->p16=func_0c1be04c;a->b33=0;a->b32=0;a->p24=parent;
  a->b1=parent->b1;a->w38=0x3801;
 }
 return a;
}
struct LinkedActor *func_0c1be008(struct LinkedActor *parent)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,4,0))!=0){
  a->p16=func_0c1be17e;a->b33=0;a->b32=0;a->p24=parent;
  a->b1=parent->b1;a->w38=0x3801;
  a->wcc.dword_value=(unsigned short)parent->sdc.w158.short_value;
 }
 return a;
}
void func_0c1be04c(struct LinkedActor *a)
{
 struct LinkedActor *parent=a->p24;
 if(a->b4>=2){func_0c037688(a);return;}
 if(!a->b4){
  a->b4++;a->sdc=parent->sdc;a->sdc.b12c=1;
  a->b2=parent->b2;a->b1=parent->b1;
  a->v80.x=parent->v80.x;a->v80.y=parent->v80.y;
  a->b1a3=parent->b1a3;a->b1a4=parent->b1a4;a->b48=parent->b48;
  a->v80=parent->v80;a->b36=parent->b36;
  if(dat_0c2d6f84->b3==4){func_0c037688(a);return;}
  a->f52=parent->f52;a->f56=parent->f56;a->s28=0;a->b49--;
 }
 a->sdc.b12c=0;a->b36=parent->b36;
 if(parent->sdc.b12c){
  unsigned short animation;
  a->f52=parent->f52;a->f56=parent->f56;a->sdc.w130=parent->sdc.w130;
  animation=((signed char *)&((struct Actor *)parent)->w150)[1];
  if(animation){
   a->sdc.b12c=1;
   if(a->s28!=animation){a->s28=animation;func_0c02a0c4(a,23,animation);}
   else if(!dat_0c2f837c)func_0c02a026(a);
  }else a->s28=animation;
 }else a->sdc.b12c=0;
}
void func_0c1be17e(struct LinkedActor *a)
{
 struct LinkedActor *parent=a->p24;
 if(a->b4>=2||a->wcc.dword_value!=(unsigned short)parent->sdc.w158.short_value){func_0c037688(a);return;}
 if(!a->b4){
  a->b4++;a->sdc=parent->sdc;a->sdc.b12c=1;
  a->b2=parent->b2;a->b1=parent->b1;
  a->v80.x=parent->v80.x;a->v80.y=parent->v80.y;
  a->b1a3=parent->b1a3;a->b1a4=parent->b1a4;a->b48=parent->b48;
  a->v80=parent->v80;a->b36=parent->b36;
  a->f96=342.85712f;a->f92=13.33333302f;
  if(a->sdc.w130)a->f92=-a->f92;
  a->f52=parent->f52+a->f92;a->f56=parent->f56+a->f96;a->b49=-8;
  func_0c029e70(a,27,0);
 }else if(!a->b5){
  a->f52=parent->f52+a->f92;a->f56=parent->f56+a->f96;
  a->b36=parent->b36;a->b49=-8;
  if(func_0c029fc4(a)<0){a->b5++;a->b34=0;func_0c029f0e(a,27,1,0);}
 }else {
  if(parent->sdc.b141>=0){
   if(a->b34!=parent->sdc.b141){
    a->b34=parent->sdc.b141;
    func_0c029f0e(a,27,1,a->b34);func_0c188d04(a,parent);
   }
   a->f52=parent->f52+a->f92;a->f56=parent->f56+a->f96;
  }else {a->sdc.b12c=0;a->b4++;a->b5=0;}
 }
}
