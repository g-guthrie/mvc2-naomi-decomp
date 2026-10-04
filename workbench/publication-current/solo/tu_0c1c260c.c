#include "objects.h"
struct Float4_1c260c { float x,y,z,w; };
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern struct ActorGlobalRoot *dat_0c2d9654;
extern unsigned char dat_0c2d7088[];
extern int table_0c25c870[];
extern struct Vec3_tu5_03 table_0c25c888[],dat_0c25c8dc;
extern unsigned char table_0c25c908[];
extern struct Float4_1c260c dat_0c25c8e8;
extern void func_0c1c2710(struct Obj_tu5_03 *);
void func_0c1c2628(int);
void func_0c1c260c(void)
{
 int index,limit=6;
 for(index=0;index<limit;index++)func_0c1c2628(index);
}
void func_0c1c2628(int index)
{
 struct Obj_tu5_03 *q;struct Actor *owner;
 if((q=func_0c0374da(0,11,1))){
 q->b12c=1;q->p16=func_0c1c2710;
 q->l84=(int)((void **)dat_0c2d9654->p0)[table_0c25c870[index]];
 owner=(struct Actor *)(dat_0c2d7088+index*0x5a4);
 q->pos=table_0c25c888[table_0c25c908[owner->b2*3+owner->b411]];
 q->lcc=0x10c31;
 *(struct Vec3_tu5_03 *)&q->f80=dat_0c25c8dc;
 q->b32=index;q->b33=owner->b411;
 *(struct Float4_1c260c *)&q->f116=dat_0c25c8e8;
 q->p24=(struct Obj_tu5_03 *)owner;
 }
}
