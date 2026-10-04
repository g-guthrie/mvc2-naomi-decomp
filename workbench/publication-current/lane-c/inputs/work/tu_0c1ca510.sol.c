#include "objects.h"
extern struct ActorGlobalRoot *dat_0c2d966c;
extern struct ActorFlags *dat_0c2d6f84;
extern unsigned char table_0c25edf8[];
extern struct Vec3_tu5_03 table_0c25edfc[],table_0c25ee38[],table_0c25ee74,table_0c25ee80[],table_0c25eebc,dat_0c2d926c;
extern void (*table_0c25eec8[])(struct Obj_tu5_03 *);
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *);
void func_0c1ca608(struct Obj_tu5_03 *);
void func_0c1ca510(int mode,int index) {
 struct Obj_tu5_03 *q;struct Vec3_tu5_03 *position,*angles;
 if((q=func_0c0374da(0,5,1))!=0) {
 q->b12c=0;q->b32=mode;((struct Actor *)q)->b34=index;q->p16=func_0c1ca608;
 q->l84=((int *)dat_0c2d966c->p0)[table_0c25edf8[mode]];
 q->f80=1;q->f84=1;q->f88=1;q->lcc=0x81f;q->w28=0;q->w30=30;
 switch(mode) {
 case 0:case 3:position=&table_0c25edfc[index];angles=&table_0c25ee80[index];break;
 case 1:position=&table_0c25ee38[index];angles=&table_0c25ee80[index];break;
 case 2:position=&table_0c25ee74;angles=&table_0c25eebc;break;
 }
 q->pos=*position;
 q->angles.scalar.first=(int)(angles->x*65536.0f/360.0f+0.5f)&65535;
 q->angles.scalar.l44=(int)(angles->y*65536.0f/360.0f+0.5f)&65535;
 q->angles.scalar.l48=(int)(angles->z*65536.0f/360.0f+0.5f)&65535;
 }
}
void func_0c1ca608(struct Obj_tu5_03 *q) {
 if(dat_0c2d6f84->b3!=4||dat_0c2d6f84->b8d) {func_0c037688(q);return;}
 if(dat_0c2d6f84->s14==3)table_0c25eec8[q->b32](q);
}
void func_0c1ca68c(struct Obj_tu5_03 *q) {
 struct Vec3_tu5_03 *start=&table_0c25edfc[((struct Actor *)q)->b34],*end=&dat_0c2d926c;
 q->b12c=1;
 if(q->w30) {
 q->w30--;
 q->pos.x=start->x+(end->x-start->x)/30.0f*q->w30;
 q->pos.y=start->y+(end->y-start->y)/30.0f*q->w30;
 q->pos.z=start->z+(end->z-start->z)/30.0f*q->w30;
 }
}
void func_0c1ca706(struct Obj_tu5_03 *q) {
 float scale;
 if(q->w30) {q->w30--;return;}
 q->b12c=1;
 if(q->w28==30)scale=179.19999695f;
 else {q->w28++;scale=q->w28*127.1999969f/30.0f+1.0f;}
 q->f80=scale;
}
void func_0c1ca74a(struct Obj_tu5_03 *q) {
 if(q->w28++==30) {q->w28=0;q->b12c^=1;}
}
