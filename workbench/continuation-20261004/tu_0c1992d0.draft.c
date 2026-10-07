/* Unverified complete324-byte section; animation selector allocation differs. */
/* Follow an owner's attack animation and select a randomized effect variant. */
#include "objects.h"
extern unsigned int func_0c02849a(void);
extern void func_0c02a0c4(struct LinkedActor *,int,int),func_0c037688(struct LinkedActor *);
void func_0c19933e(struct LinkedActor *,struct LinkedActor *);
void func_0c1992d0(struct LinkedActor *a,struct LinkedActor *owner){
 int zero=0;
 a->sdc=owner->sdc;a->sdc.b12c=1;a->b2=owner->b2;a->b1=owner->b1;
 a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;
 a->b48=owner->b48;a->v80=owner->v80;a->b36=owner->b36;
 a->b4++;a->sdc.b12c=zero;a->b36=owner->b36;a->b49=-8;a->sdc.w130=zero;
 func_0c19933e(a,owner);
}
void func_0c19933e(register struct LinkedActor *a,register struct LinkedActor *owner){
 register int selector;
 if(owner->b5 || owner->sdc.w158.bytes[1]!=20 || (owner->sdc.w158.bytes[0]!=2 && owner->sdc.w158.bytes[0]!=1))goto done;
 a->b36=owner->b36;a->b49=-8;
 *(struct Vec3_tu5_03 *)&a->f52=*(struct Vec3_tu5_03 *)&owner->f52;
 selector=1;
 if(owner->sdc.b141&1){
 owner->sdc.b141^=1;a->sdc.b12c=selector;
 selector=(func_0c02849a()&selector)*2+((struct Actor *)owner)->b1d2;
 if(a->b32==2)selector+=21;else selector+=25;
 func_0c02a0c4(a,23,selector);
 }
 if(!(owner->sdc.b141&2))return;
 done:a->b4=2;a->sdc.b12c=0;
}
void func_0c1993e8(struct LinkedActor *a){func_0c037688(a);}
