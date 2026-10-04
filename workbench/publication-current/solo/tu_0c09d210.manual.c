#include "objects.h"
extern void func_0c03edcc(struct Actor *,struct Actor *),func_0c02a0c4(struct Actor *,int,int);
extern char func_0c02a026(struct Actor *);
void func_0c09d210(struct Actor *a)
{
 struct LinkedActorVec3 saved;float *parent_x=&saved.x,*child_x=&saved.y;register float *delta=&saved.z;
 a->b6++;*parent_x=a->f52;*child_x=a->p1c8->f52;*delta=a->p1c8->f52-a->f52;
 func_0c03edcc(a,a->p1c8);*delta=a->p1c8->f52-a->f52-*delta;*delta/=16.0f;
 a->f52=*parent_x;a->p1c8->f52=*child_x;
 a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;
 a->p1c8->f92=0.0f;a->p1c8->f96=0.0f;a->p1c8->f104=0.0f;a->p1c8->f108=0.0f;
 a->p1c8->f92=*delta;a->f92=-*delta;a->s28=16;
}
void func_0c09d2d6(struct Actor *a)
{
 func_0c02a026(a);
 if(a->p1c8->b1fd){a->f52+=a->f92;a->f92+=a->f104;}
 else{a->p1c8->f52+=a->p1c8->f92;a->p1c8->f92+=a->p1c8->f104;}
 if(--a->s28==0){a->b6++;a->s28=2;a->b34=0;func_0c03edcc(a,a->p1c8);func_0c02a0c4(a,15,2);}
}
