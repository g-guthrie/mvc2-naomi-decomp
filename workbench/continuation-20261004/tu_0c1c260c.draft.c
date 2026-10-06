/* Unverified six-item setup and allocator: full size260, allocator register/load scheduling unresolved. */
#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void func_0c1c2710(struct LinkedActor *);
extern int dat_0c25c870[];
extern void ***dat_0c2d9654;
extern unsigned char dat_0c2d7088[],dat_0c25c908[];
extern struct LinkedActorVec3 dat_0c25c888[],dat_0c25c8dc;
extern struct EffectScale4 dat_0c25c8e8;
void func_0c1c2628(int);
void func_0c1c260c(void){int i;for(i=0;i<6;i++)func_0c1c2628(i);}
void func_0c1c2628(int index)
{
 struct LinkedActor *a;struct Actor *owner;int position;
 owner=(struct Actor *)(dat_0c2d7088+index*0x5a4);
 if((a=func_0c0374da(0,11,1))){
 a->sdc.b12c=1;a->p16=func_0c1c2710;
 a->p84=(*dat_0c2d9654)[dat_0c25c870[index]];
 position=dat_0c25c908[owner->b2*3+owner->b411];
 *(struct LinkedActorVec3 *)&a->f52=dat_0c25c888[position];
 a->wcc.dword_value=0x10c31;a->v80=dat_0c25c8dc;
 a->b32=index;a->b33=owner->b411;
 *(struct EffectScale4 *)&((struct Actor *)a)->f116=dat_0c25c8e8;
 a->p24=(struct LinkedActor *)owner;
 }
}
