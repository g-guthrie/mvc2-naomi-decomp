#include "objects.h"
extern struct ActorGlobalRoot *dat_0c2d9650;
extern int *dat_0c260b2c,dat_0c260b3c;
extern float table_0c260b58[];
extern struct LinkedActorVec3 table_0c260b64[];
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *);
extern float func_0c1ec2c0(int),func_0c1ebd40(int);
extern int func_0c1ec190(void);
void func_0c1ce344(struct Obj_tu5_03 *q) {
 if(++q->w30%4==0) {
 if(++q->w28>=dat_0c260b3c){func_0c037688(q);return;}
 q->l84=((int *)dat_0c2d9650->p0)[dat_0c260b2c[q->w28]];
 }
 q->pos.x+=q->f92;q->pos.z+=q->f100;
}
void func_0c1ce3ae(struct Vec3_tu5_03 *point,int mode,int index) {
 struct Obj_tu5_03 *q;int angle;
 if((q=func_0c0374da(0,5,1))!=0) {
 q->b12c=1;q->p16=func_0c1ce344;q->lcc=0x119;q->pos=*point;
 angle=(int)((index*60)*65536.0f/360.0f+0.5f)&65535;
 q->f92=table_0c260b58[mode]*func_0c1ec2c0(angle);
 q->f100=table_0c260b58[mode]*func_0c1ebd40(angle);
 q->angles.scalar.l48=func_0c1ec190()%16384;
 ((struct LinkedActor *)q)->v80=table_0c260b64[mode];
 q->f80*=50.0f;q->f84*=50.0f;q->f88*=1.0f;
 q->l84=((int *)dat_0c2d9650->p0)[dat_0c260b2c[q->w28]];q->w30=0;
 }
}
void func_0c1ce4fa(struct Vec3_tu5_03 *point,char mode) {
 int i;if(mode<=2)for(i=0;i<6;i++)func_0c1ce3ae(point,mode,i);
}
void func_0c1ce52c(struct Obj_tu5_03 *q) {
 q->l84=((int *)dat_0c2d9650->p0)[dat_0c260b2c[q->w28]];
 q->pos.x+=q->f92;q->pos.z+=q->f100;
 if(++q->w28>=dat_0c260b3c)func_0c037688(q);
}
