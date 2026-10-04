#include "objects.h"
extern signed char func_0c029fc4(struct LinkedActor *);
extern void func_0c029e70(struct LinkedActor *,int,int),func_0c029f0e(struct LinkedActor *,int,int,int);
extern struct LinkedActor *func_0c0374da(struct LinkedActor *,int,int);
extern void func_0c1a7372(struct LinkedActor *);
extern short table_0c2592d8[][2];
extern unsigned char table_0c259254[][6];
extern void (*table_0c2593d8[])(struct LinkedActor *,struct LinkedActor *),(*table_0c2593e0[])(struct LinkedActor *,struct LinkedActor *),(*table_0c2593e8[])(struct LinkedActor *,struct LinkedActor *);
void func_0c1a7f1c(struct LinkedActor *,struct LinkedActor *);
void func_0c1a7fe4(struct LinkedActor *,struct LinkedActor *);
void func_0c1a80b4(struct LinkedActor *,struct LinkedActor *);
void func_0c1a8162(struct LinkedActor *,struct LinkedActor *);
void func_0c1a7ed8(struct LinkedActor *a,struct LinkedActor *parent) {
 struct LinkedActor *source=a->p20;
 a->b5++;a->sdc.b12c=1;((struct Actor *)a)->f264=1.0f;a->s28=5;
 a->b49=source->b49-1;func_0c029e70(a,27,(char)source->sdc.w158.bytes[0]);
 func_0c1a7f1c(a,parent);
}
void func_0c1a7f1c(struct LinkedActor *a,struct LinkedActor *parent) {
 if(--a->s28==0){a->b5++;a->s28=10;}
}
void func_0c1a7f36(struct LinkedActor *a,struct LinkedActor *parent) {
 ((struct Actor *)a)->f264-=0.1000000015f;
 if(!(((struct Actor *)a)->f264>0)){a->b4++;a->sdc.b12c=0;}
}
void func_0c1a7f5c(struct LinkedActor *a,struct LinkedActor *parent){table_0c2593d8[(unsigned char)a->b5](a,parent);}
void func_0c1a7f6e(struct LinkedActor *a,struct LinkedActor *parent) {
 a->b5++;a->sdc.b12c=1;((struct Actor *)a)->f264=1.0f;
 if(!a->sdc.w130)a->f52=parent->f52+table_0c2592d8[a->b35][0]*1.66666663f;
 else a->f52=parent->f52-table_0c2592d8[a->b35][0]*1.66666663f;
 a->f56=parent->f56+table_0c2592d8[a->b35][1]*2.1428571f;
 func_0c1a7fe4(a,parent);
}
void func_0c1a7fe4(struct LinkedActor *a,struct LinkedActor *parent) {
 if(func_0c029fc4(a)<0){a->b4++;a->sdc.b12c=0;}
}
void func_0c1a8006(struct LinkedActor *a,struct LinkedActor *parent) {
 if(((struct Actor *)parent)->b140!=1||parent->b1d0!=22){a->b4++;a->sdc.b12c=0;return;}
 a->sdc.w130=parent->sdc.w130;a->f52=parent->f52;a->f56=parent->f56;
}
void func_0c1a8066(struct LinkedActor *a,struct LinkedActor *parent){table_0c2593e0[(unsigned char)a->b5](a,parent);}
void func_0c1a8078(struct LinkedActor *a,struct LinkedActor *parent) {
 struct LinkedActor *child;
 a->b5++;((struct Actor *)a)->i72=0x2600;
 if((child=func_0c0374da(a,3,2))!=0){child->p16=func_0c1a7372;child->p24=a;child->b32=18;}
 func_0c1a80b4(a,parent);
}
void func_0c1a80b4(struct LinkedActor *a,struct LinkedActor *parent) {
 if(func_0c029fc4(a)<0){a->b4++;a->sdc.b12c=0;}
}
void func_0c1a80d6(struct LinkedActor *a,struct LinkedActor *parent) {
 unsigned char *row;
 if(parent->b4>=2){a->b4++;a->sdc.b12c=0;return;}
 a->sdc.b12c=parent->sdc.b141;
 if(parent->sdc.b141) {
 ((struct Actor *)a)->i72=((struct Actor *)parent)->i72;
 row=table_0c259254[a->b32];func_0c029f0e(a,27,(char)row[5],(char)((struct Actor *)parent)->b140);
 }
}
void func_0c1a8138(struct LinkedActor *a,struct LinkedActor *parent){table_0c2593e8[(unsigned char)a->b5](a,parent);}
void func_0c1a814a(struct LinkedActor *a,struct LinkedActor *parent) {
 a->b5++;a->f56=((struct Actor *)parent->p24)->f41c;a->v80.y=1.5f;
 func_0c1a8162(a,parent);
}
void func_0c1a8162(struct LinkedActor *a,struct LinkedActor *parent) {
 if(func_0c029fc4(a)<0){a->b4++;a->sdc.b12c=0;}
}
