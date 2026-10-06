/* Unverified selection-position constructor. Void ABI retained pending caller evidence; native suppression path leaves R0 incidental. */
#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern struct ActorFlags *dat_0c2d6f84;
extern struct SelectionFlags59e8 dat_0c2fb158;
extern void ***dat_0c2d9658;
extern struct LinkedActorVec3 dat_0c25e298[][3];
extern void func_0c02fe52(struct LinkedActor *);
extern void (*table_0c25e2e0[])(struct LinkedActor *);
void func_0c1c69fa(struct LinkedActor *);
void func_0c1c690c(struct Actor *owner,char fixed)
{
 struct LinkedActor *a;unsigned char mode;
 if(fixed && dat_0c2d6f84->b81==7)return;
 if((a=func_0c0374da(0,5,1))){
 a->sdc.b12c=1;a->p24=(struct LinkedActor *)owner;a->b32=owner->b524;a->b33=owner->s30;
 if(owner->b524){((struct Obj_tu5_03 *)a)->angles.scalar.l44=0x8000;a->p84=(*dat_0c2d9658)[178];}
 else{((struct Obj_tu5_03 *)a)->angles.scalar.l44=0;a->p84=(*dat_0c2d9658)[177];}
 mode=dat_0c2fb158.pad50[1];
 if(mode==3)*(struct LinkedActorVec3 *)&a->f52=dat_0c25e298[owner->b524][0];
 else *(struct LinkedActorVec3 *)&a->f52=dat_0c25e298[owner->b524][mode];
 ((int *)a)[0xcc/4]=0x801;((int *)a)[0xd8/4]=dat_0c2fb158.pad50[1];
 if(fixed)a->p16=func_0c02fe52;else a->p16=func_0c1c69fa;
 }
}
void func_0c1c69fa(struct LinkedActor *a){table_0c25e2e0[a->b4](a);}
