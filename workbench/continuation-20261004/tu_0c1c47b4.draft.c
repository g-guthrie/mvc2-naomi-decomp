/* Unverified 32-object radial allocator: correct276-byte size and pools; call and register scheduling unresolved. */
#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void func_0c1c4942(struct LinkedActor *);
extern void ***dat_0c2d9658;
extern struct LinkedActorVec3 dat_0c25dafc;
struct LinkedActor *func_0c1c47b4(void)
{
 struct LinkedActor *first,*a;unsigned char i;float half,turn,scale;
 if((first=func_0c0374da(0,5,1))){
 first->sdc.b12c=1;first->p16=func_0c1c4942;first->p84=(*dat_0c2d9658)[0];
 *(struct LinkedActorVec3 *)&first->f52=dat_0c25dafc;
 ((struct Obj_tu5_03 *)first)->angles.scalar.l44=0;((struct Obj_tu5_03 *)first)->lcc=0x805;((int *)first)[0xd8/4]=0;
 half=0.5f;turn=360.0f;scale=737280.0f;
 for(i=1;i<32;i++){
 if(!(a=func_0c0374da(0,5,1)))return a;
 a->sdc.b12c=1;a->p16=func_0c1c4942;a->p84=(*dat_0c2d9658)[0];
 *(struct LinkedActorVec3 *)&a->f52=dat_0c25dafc;
 ((struct Obj_tu5_03 *)a)->lcc=0x805;
 ((struct Obj_tu5_03 *)a)->angles.scalar.l44=(int)(i*scale/turn+half)&65535;
 ((int *)a)[0xd8/4]=0;
 }
 }return first;
}
