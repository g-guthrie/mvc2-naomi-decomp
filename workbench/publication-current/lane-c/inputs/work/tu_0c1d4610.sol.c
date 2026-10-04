#include "objects.h"
extern struct ActorGlobalRoot *dat_0c2d9650;
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *),func_0c03499e(struct Obj_tu5_03 *),func_0c1d975e(struct Obj_tu5_03 *);
extern int func_0c1ec190(void);
void func_0c1d465c(struct Vec3_tu5_03 *);
void func_0c1d4690(struct Vec3_tu5_03 *,int);
void func_0c1d47ac(struct Obj_tu5_03 *);
void func_0c1d4610(struct Obj_tu5_03 *q,struct Vec3_tu5_03 *offset) {
 struct Vec3_tu5_03 point;
 if(q->w130)point.x=q->pos.x-offset->x;else point.x=q->pos.x+offset->x;
 point.y=q->pos.y+offset->y;point.z=q->pos.z;
 func_0c1d465c(&point);func_0c03499e(q);
}
void func_0c1d465c(struct Vec3_tu5_03 *point) {
 int i,j;for(i=0;i<5;i++)for(j=0;j<3;j++)func_0c1d4690(point,j);
}
void func_0c1d4690(struct Vec3_tu5_03 *point,int selector) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,7,1))!=0) {
 q->b12c=1;q->p16=func_0c1d47ac;
 q->l84=((int *)dat_0c2d9650->p0)[selector+121];q->pos=*point;
 q->f92=func_0c1ec190()%30-15;
 q->f96=func_0c1ec190()%30-15;
 q->f100=func_0c1ec190()%30-15;
 q->f104=-q->f92/30.0f;q->f108=-q->f96/30.0f;q->f112=-q->f100/30.0f;
 q->f116=1.0f;q->angles.scalar.l48=func_0c1ec190()%65536;q->lcc=39;
 }
}
void func_0c1d47ac(struct Obj_tu5_03 *q) {
 if(++q->w28>30){func_0c037688(q);return;}
 func_0c1d975e(q);q->angles.scalar.first+=q->angles.scalar.l48;
 q->angles.scalar.l44+=q->angles.scalar.l48/2;
 q->f116-=0.0166666675359f;
}
