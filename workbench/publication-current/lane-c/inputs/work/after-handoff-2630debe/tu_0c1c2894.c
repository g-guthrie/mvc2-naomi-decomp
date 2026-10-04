#include "model_1c2894.h"
extern struct ActorFlags *dat_0c2d6f84;
extern struct CharacterState5a4 dat_0c2d7088[];
extern struct Actor *dat_0c2f8350[];
extern struct Vec3_tu5_03 dat_0c25c910[][2],dat_0c25c940;
extern void (*dat_0c25ce8c[])(struct Actor *,struct Actor *);
extern void (*dat_0c25ce9c[])(struct Actor *,struct Actor *);
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
void func_0c1c28b0(int);
void func_0c1c292e(struct Obj_tu5_03 *);
void func_0c1c2894(void)
{if(dat_0c2d6f84->i20!=64){func_0c1c28b0(0);func_0c1c28b0(1);}}
void func_0c1c28b0(int side)
{
 struct Obj_tu5_03 *a=func_0c0374da(0,12,1);int i;
 if(a==0)return;
 a->b12c=1;a->p16=func_0c1c292e;a->l84=0;a->lcc=0;
 ((struct LinkedActor *)a)->b2=side;
 a->pos=dat_0c25c910[side][0];
 *(struct Vec3_tu5_03 *)&a->f80=dat_0c25c940;
 a->p24=(struct Obj_tu5_03 *)&dat_0c2d7088[side];
 ((struct LinkedActor *)a)->b1=dat_0c2d7088[side].b1;
 for(i=0;i<4;i++)((struct EffectCounterTail *)a)->counters[i]=0;
}
void func_0c1c292e(struct Obj_tu5_03 *obj)
{
 struct Actor *a=(struct Actor *)obj;
 a->p138=dat_0c2f8350[a->b2*3];
 dat_0c25ce8c[a->b4](a,a->p138);
}
void func_0c1c295a(struct Actor *a,struct Actor *parent)
{
 a->b4++;a->w12e=0;a->w134=0;a->w130=0;
 a->b13f=0;a->b13e=0;a->b32=0;
 if(parent->b525)a->b13e=255;
}
void func_0c1c2990(struct Actor *a,struct Actor *parent)
{
 a->w134=a->w12e;
 if(a->b13f<parent->b1ee){a->b13f=parent->b1ee;parent->b1ee=0;}
 if(a->b13f)a->b13f--;
 dat_0c25ce9c[a->b32](a,parent);
}
