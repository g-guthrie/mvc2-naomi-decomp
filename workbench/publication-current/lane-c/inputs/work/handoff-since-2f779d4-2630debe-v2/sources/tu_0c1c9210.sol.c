#include "selector_model.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern struct Vec3_tu5_03 dat_0c230398[][2];
extern struct CharacterState5a4 dat_0c2d7088[];
extern struct ActorGlobalRoot *dat_0c2d965c;
extern struct ActorFlags *dat_0c2d6f84;
extern void func_0c037688(struct Obj_tu5_03 *);
void func_0c1c9318(struct Obj_tu5_03 *);
void func_0c1c9210(struct Obj_tu5_03 *a)
{
 struct Vec3_tu5_03 *start=&dat_0c230398[a->b32][0],*end=start+1;
 a->pos.x=start->x+(end->x-start->x)/30.0f*a->w28;
 a->pos.y=start->y+(end->y-start->y)/30.0f*a->w28;
 a->pos.z=start->z+(end->z-start->z)/30.0f*a->w28;
}
void func_0c1c927a(int index)
{
 struct Obj_tu5_03 *a;int remainder=index%3;
 if(remainder!=1&&dat_0c2d7088[index/3+2*remainder].selector52c==remainder+24)return;
 if((a=func_0c0374da(0,5,1))!=0){a->b12c=1;a->b32=index;a->p16=func_0c1c9318;a->l84=dat_0c2d965c->p0->entries[index+1].value;a->pos=dat_0c230398[index][0];a->lcc=0x0801;a->w28=0;}
}
void func_0c1c9318(struct Obj_tu5_03 *a)
{
 if(dat_0c2d6f84->b3!=2||dat_0c2d6f84->s14!=3)func_0c037688(a);
 else if(a->w28!=30){a->w28++;func_0c1c9210(a);}
}
