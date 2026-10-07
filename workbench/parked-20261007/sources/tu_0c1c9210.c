#include "objects.h"
extern struct ActorGlobalRoot *dat_0c2d965c;
extern struct Vec3_tu5_03 dat_0c230398[];
extern struct ActorFlags *dat_0c2d6f84;
extern unsigned char dat_0c2d7088[];
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *);
void func_0c1c9318(struct Obj_tu5_03 *q);
#pragma inline(lerp)
static void lerp(struct Obj_tu5_03 *q,struct Vec3_tu5_03 *start,struct Vec3_tu5_03 *end){
 q->pos.x=start->x+(end->x-start->x)/30.0f*q->w28;
 q->pos.y=start->y+(end->y-start->y)/30.0f*q->w28;
 q->pos.z=start->z+(end->z-start->z)/30.0f*q->w28;
}
void func_0c1c9210(struct Obj_tu5_03 *q){struct Vec3_tu5_03 *start=&dat_0c230398[q->b32*2];lerp(q,start,start+1);}
void func_0c1c927a(int index)
{
 struct Obj_tu5_03 *q;
 int side;
 if((side=index%3)!=1&&((struct Actor *)(dat_0c2d7088+(side*2+index/3)*0x5a4))->b52c==side+24)return;
 if((q=func_0c0374da(0,5,1))!=0){
 q->b12c=1;q->b32=index;q->p16=func_0c1c9318;
 q->l84=((int *)dat_0c2d965c->p0)[index+1];
 q->pos=dat_0c230398[index*2];
 q->lcc=0x801;q->w28=0;
 }
}
void func_0c1c9318(struct Obj_tu5_03 *q)
{
 if(dat_0c2d6f84->b3==2&&dat_0c2d6f84->s14!=3){if(q->w28!=30){q->w28++;func_0c1c9210(q);}}
 else func_0c037688(q);
}
