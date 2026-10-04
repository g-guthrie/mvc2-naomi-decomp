#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern int func_0c0427f2(struct Actor *),func_0c042780(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c04b02a(struct Actor *),func_0c0257ec(void),func_0c025762(void),func_0c042018(struct Actor *),func_0c0438de(struct Actor *),func_0c044f1c(struct Actor *);
extern void func_0c1ce916(struct LinkedActorVec3 *,int,int,int),func_0c034946(struct Actor *,int),func_0c0344a0(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern void (*table_0c24a608[])(struct Actor *);
void func_0c0f7dd4(struct Actor *a)
{
 struct LinkedActorVec3 position;int character;
 func_0c02a026(a);a->s28--;
 if(a->s28<=0)goto wait_animation;
 if(func_0c0427f2(a))a->b142=1;
 if(func_0c042780(a->p1c8))goto wait_animation;
 if(!a->b141)return;
 if(a->b141<0){
  a->b141=0;a->p1c8->p1b4=a;a->p1c8->b1a1=35;func_0c04b02a(a);
  position.y=a->f56+17.142857f;position.x=a->w130?26.666666031f:-26.666666031f;
  position.x+=a->f52;position.z=a->f60;func_0c1ce916(&position,(short)a->w130,1,0);
  func_0c034946(a->p1c8,0);func_0c0344a0(a,3);return;
 }
 goto activate;
wait_animation:
 for(;;){a->b142=1;func_0c02a026(a);if(a->b141>0)break;}
activate:
 a->b6++;func_0c0257ec();a->b141=0;a->p1c8->p1b4=a;a->p1c8->b1f6=3;a->p1c8->b1a1=33;
 character=a->b1;
 if(character==28||character==49)a->p1c8->b1d2^=1;
}
void func_0c0f7f24(struct Actor *a)
{
 a->b6++;a->f96=23.57143f;a->f108=-0.9375f;a->f92=a->b1d2?-4.16666651f:4.16666651f;
 a->b1f9=2;func_0c025762();func_0c02a0c4(a,15,3);
}
void func_0c0f7f6e(struct Actor *a)
{
 func_0c042018(a);
 if(func_0c02a026(a)<0){a->b1d3=1;func_0c0438de(a);return;}
 if(func_0c044e52(a))func_0c044f1c(a);
}
void func_0c0f7fb0(struct Actor *a){struct Actor *p=a;table_0c24a608[p->b6](a);}
