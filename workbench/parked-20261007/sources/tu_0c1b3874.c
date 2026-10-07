#include "objects.h"
#define A(a) ((struct Actor *)(a))
extern short table_0c25af98[];
extern void func_0c02a0c4(struct LinkedActor *,int,int),func_0c037688(struct LinkedActor *);
extern char func_0c02a026(struct LinkedActor *);
void func_0c1b393a(struct LinkedActor *),func_0c1b39ac(struct LinkedActor *);
void func_0c1b3874(struct LinkedActor *a)
{
 struct LinkedActor *owner=a->p24;
 char anim;
 a->b4++;a->sdc=a->p24->sdc;a->sdc.b12c=1;
 a->b2=a->p24->b2;a->b1=a->p24->b1;a->v80.x=a->p24->v80.x;a->v80.y=a->p24->v80.y;
 a->b1a3=a->p24->b1a3;a->b1a4=a->p24->b1a4;a->b48=a->p24->b48;a->v80=a->p24->v80;
 a->b36=a->p24->b36;a->sdc.b12c=1;a->b36=15;a->s28=0;
 a->f52=owner->f52;
 a->f56=A(owner)->f41c+table_0c25af98[a->b32]*2.1428571f;
 if(a->b32)anim=23;else anim=0;
 func_0c02a0c4(a,23,anim);
 func_0c1b393a(a);
}
void func_0c1b393a(struct LinkedActor *a)
{
 struct LinkedActor *owner=a->p24;
 char anim;
 a->f52=owner->f52;
 if(owner->b1d0!=29){a->b4++;func_0c1b39ac(a);}
 else{
  if(!a->b5&&a->p24->f96<0.0f){
   a->b5++;
   if(a->b32)anim=25;else anim=24;
   func_0c02a0c4(a,23,anim);
  }
  func_0c02a026(a);
 }
}
void func_0c1b39ac(struct LinkedActor *a){a->b4++;a->sdc.b12c=0;func_0c037688(a);}
