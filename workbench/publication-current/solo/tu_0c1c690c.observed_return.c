#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern struct ActorGlobalRoot *dat_0c2d9658;
extern struct ActorFlags *dat_0c2d6f84;
extern unsigned char dat_0c2fb158[];
extern struct Vec3_tu5_03 table_0c25e298[][3];
extern void func_0c02fe52(struct Obj_tu5_03 *);
extern void (*table_0c25e2e0[])(struct Obj_tu5_03 *);
void func_0c1c69fa(struct Obj_tu5_03 *);
struct Obj_tu5_03 *func_0c1c690c(struct Actor *parent,char transient)
{
 struct Obj_tu5_03 *q;struct ActorGlobalRoot *root;unsigned char mode;
 if(transient&&dat_0c2d6f84->b81==7)return (struct Obj_tu5_03 *)7;
 if((q=func_0c0374da(0,5,1))){
 q->b12c=1;q->p24=(struct Obj_tu5_03 *)parent;q->b32=parent->b524;q->b33=parent->s30;
 root=dat_0c2d9658;
 if(parent->b524){q->l44=0x8000;q->l84=(int)((void **)root->p0)[178];}
 else {q->l44=0;q->l84=(int)((void **)root->p0)[177];}
 mode=dat_0c2fb158[51];
 if(mode==3)q->pos=table_0c25e298[parent->b524][0];
 else q->pos=table_0c25e298[parent->b524][mode];
 q->lcc=0x801;*(int *)((char *)q+0xd8)=dat_0c2fb158[51];
 if(transient)q->p16=func_0c02fe52;else q->p16=func_0c1c69fa;
 }
 return q;
}
void func_0c1c69fa(struct Obj_tu5_03 *q){table_0c25e2e0[q->b4](q);}
