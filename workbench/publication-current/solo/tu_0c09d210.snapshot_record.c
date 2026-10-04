#include "objects.h"
extern void func_0c03edcc(struct Actor *,struct Actor *),func_0c02a0c4(struct Actor *,int,int);
extern char func_0c02a026(struct Actor *);
struct SeparationSnapshot { float *child_x,*parent_x; float values[3]; };
void func_0c09d210(register struct Actor *a)
{
 struct SeparationSnapshot saved;register float *delta;
 saved.parent_x=saved.values;saved.child_x=saved.values+1;delta=saved.values+2;
 a->b6++;*saved.parent_x=a->f52;*saved.child_x=a->p1c8->f52;*delta=a->p1c8->f52-a->f52;
 func_0c03edcc(a,a->p1c8);*delta=a->p1c8->f52-a->f52-*delta;*delta/=16.0f;
 a->f52=*saved.parent_x;a->p1c8->f52=*saved.child_x;
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
