#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(struct Obj_tu5_03 *,int,int);
extern void func_0c037688(struct Obj_tu5_03 *),func_0c02a026(struct Obj_tu5_03 *),func_0c02a0c4(struct Obj_tu5_03 *,int,int);
extern void (*dat_0c25ae20[])(struct Obj_tu5_03 *,struct Actor *);
extern struct ActorVec2 dat_0c25ae00[];
extern char dat_0c25ae4c[];
void func_0c1b1a34(struct Obj_tu5_03 *);
struct Obj_tu5_03 *func_0c1b1910(struct Actor *owner,unsigned char variant){struct Obj_tu5_03 *a;if(variant!=10)a=func_0c0374da(0,3,0);else a=func_0c0374da(0,4,0);if(!a)return 0;a->p16=func_0c1b1a34;a->b32=variant;a->b33=0;a->p24=(struct Obj_tu5_03 *)owner;((struct LinkedActor *)a)->b1=owner->b1;((struct LinkedActor *)a)->w38=0x2200;a->lcc=(unsigned short)((struct LinkedActor *)owner)->sdc.w158.short_value;return a;}
struct Obj_tu5_03 *func_0c1b1982(struct Obj_tu5_03 *parent){struct Obj_tu5_03 *a;if((a=func_0c0374da(0,3,0))!=0){a->p16=func_0c1b1a34;a->b32=1;a->b33=0;a->p24=parent->p24;((struct LinkedActor *)a)->b1=((struct LinkedActor *)parent)->b1;((struct LinkedActor *)a)->w38=0x2200;a->lcc=parent->lcc;}return a;}
struct Obj_tu5_03 *func_0c1b19c6(struct Actor *owner,unsigned char variant){struct Obj_tu5_03 *a;if((a=func_0c0374da(0,3,0))!=0){a->p16=func_0c1b1a34;a->p24=(struct Obj_tu5_03 *)owner;((struct LinkedActor *)a)->w38=0x2200;((struct LinkedActor *)a)->b1=owner->b1;a->b32=variant;a->b33=0;}if((a=func_0c0374da(0,3,0))!=0){a->p16=func_0c1b1a34;a->p24=(struct Obj_tu5_03 *)owner;((struct LinkedActor *)a)->w38=0x2200;((struct LinkedActor *)a)->b1=owner->b1;a->b32=variant;a->b33=1;}return a;}
void func_0c1b1a34(struct Obj_tu5_03 *a){struct Actor *owner=(struct Actor *)a->p24;if(a->b4>=2){func_0c037688(a);return;}dat_0c25ae20[a->b32](a,owner);}
void func_0c1b1a74(struct Obj_tu5_03 *a,struct Actor *owner){struct Obj_tu5_03 *child;struct ActorVec2 *row;float x;if(!a->b4){
a->b4++;((struct LinkedActor *)a)->sdc=((struct LinkedActor *)owner)->sdc;a->b12c=1;
((struct LinkedActor *)a)->b2=owner->b2;((struct LinkedActor *)a)->b1=owner->b1;a->f80=owner->f80;a->f84=owner->f84;
((struct LinkedActor *)a)->b1a3=((struct LinkedActor *)owner)->b1a3;((struct LinkedActor *)a)->b1a4=((struct LinkedActor *)owner)->b1a4;
((struct LinkedActor *)a)->b48=((struct LinkedActor *)owner)->b48;((struct LinkedActor *)a)->v80=((struct LinkedActor *)owner)->v80;((struct Actor *)a)->b36=owner->b36;
a->pos.x=owner->f52;a->pos.y=owner->f56;a->i208=0;a->w28=1;a->b12c=0;}
if(a->lcc!=(unsigned short)((struct LinkedActor *)owner)->sdc.w158.short_value){func_0c037688(a);return;}if(--a->w28>0)return;a->w28=16;if((child=func_0c1b1982(a))!=0){a->i208++;a->i208&=3;row=&dat_0c25ae00[a->i208];child->pos.y=a->pos.y+row->y;x=row->x;if(a->w130)x=-x;child->pos.x=a->pos.x+x;}}
void func_0c1b1b66(struct Obj_tu5_03 *a,unsigned char frame){func_0c02a0c4(a,23,dat_0c25ae4c[frame]);}
void func_0c1b1ba4(struct Obj_tu5_03 *a,struct Actor *owner){if(!a->b4){
a->b4++;((struct LinkedActor *)a)->sdc=((struct LinkedActor *)owner)->sdc;a->b12c=1;
((struct LinkedActor *)a)->b2=owner->b2;((struct LinkedActor *)a)->b1=owner->b1;a->f80=owner->f80;a->f84=owner->f84;
((struct LinkedActor *)a)->b1a3=((struct LinkedActor *)owner)->b1a3;((struct LinkedActor *)a)->b1a4=((struct LinkedActor *)owner)->b1a4;
((struct LinkedActor *)a)->b48=((struct LinkedActor *)owner)->b48;((struct LinkedActor *)a)->v80=((struct LinkedActor *)owner)->v80;((struct Actor *)a)->b36=owner->b36;
a->f108=0.0f;a->f104=0.0f;a->f92=0.208333328366f;a->f96=-1.07142853737f;if(a->w130)a->f92=-a->f92;func_0c1b1b66(a,17);a->w28=16;a->w30=11;return;}
if(a->lcc!=(unsigned short)((struct LinkedActor *)owner)->sdc.w158.short_value){func_0c037688(a);return;}if(--a->w28<=0){a->w28=16;if(--a->w30<=0){func_0c037688(a);return;}func_0c1b1b66(a,a->w30);}a->pos.x+=a->f92;a->f92+=a->f104;a->pos.y+=a->f96;a->f96+=a->f108;func_0c02a026(a);}
