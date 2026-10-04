#include "objects.h"
extern char dat_0c2f8398;
extern struct ActorGlobalRoot *dat_0c2d9650;
extern struct LinkedActorVec3 dat_0c260d64;
extern float table_0c260d70[],table_0c260d80[],table_0c260d90[],table_0c260db8[],table_0c260dec[];
extern int table_0c260da0[],table_0c260dd0[];
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *);
extern float func_0c1ce8c4(void *,void *,int);
extern void func_0c1cef62(struct Vec3_tu5_03 *,int,char,char);
void func_0c1d0058(struct Obj_tu5_03 *),func_0c1d00b8(struct Obj_tu5_03 *),func_0c1d013e(struct Obj_tu5_03 *),func_0c1d0202(struct Obj_tu5_03 *),func_0c1d027c(struct Obj_tu5_03 *);
void func_0c1d0074(struct Obj_tu5_03 *,char),func_0c1d00fa(struct Obj_tu5_03 *,char),func_0c1d01cc(struct Obj_tu5_03 *,char),func_0c1d0246(struct Obj_tu5_03 *,char);
void func_0c1cff0c(struct Vec3_tu5_03 *point,int unused,int mode,char flags,char category) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,category,1))!=0) {
 dat_0c2f8398++;q->b12c=0;q->p16=func_0c1d0058;q->pos=*point;q->lcc=0x181;
 if(mode==1){q->lcc|=16;((struct LinkedActor *)q)->v80=dat_0c260d64;}
 func_0c1d0074(q,category);func_0c1d00fa(q,category);func_0c1d01cc(q,category);func_0c1d0246(q,category);
 func_0c1cef62(point,mode,flags,category);
 }
}
void func_0c1cffac(struct Vec3_tu5_03 *point,int unused,int mode,int unused2,char category) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,category,1))!=0) {
 dat_0c2f8398++;q->b12c=0;q->p16=func_0c1d0058;q->pos=*point;q->lcc=0x181;
 if(mode==1){q->lcc|=16;((struct LinkedActor *)q)->v80=dat_0c260d64;}
 func_0c1d0074(q,category);func_0c1d00fa(q,category);func_0c1d01cc(q,category);func_0c1d0246(q,category);
 }
}
void func_0c1d0058(struct Obj_tu5_03 *q) {
 if(q->w28>10){dat_0c2f8398--;func_0c037688(q);return;}q->w28++;
}
void func_0c1d0074(struct Obj_tu5_03 *parent,char category) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,category,1))!=0) {
 q->b12c=1;q->p16=func_0c1d00b8;q->l84=((int *)dat_0c2d9650->p0)[82];q->lcc=0x400;q->p200=&parent->f136;
 }
}
void func_0c1d00b8(struct Obj_tu5_03 *q) {
 float value;
 if(q->w28>=4){func_0c037688(q);return;}
 value=func_0c1ce8c4(table_0c260d70,&q->b4,q->w28);q->f120=value;q->f124=value;q->f128=q->f120;q->w28++;
}
void func_0c1d00fa(struct Obj_tu5_03 *parent,char category) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,category,1))!=0) {
 q->b12c=1;q->p16=func_0c1d013e;q->l84=((int *)dat_0c2d9650->p0)[83];q->lcc=0x410;q->p200=&parent->f136;
 }
}
void func_0c1d013e(struct Obj_tu5_03 *q) {
 float value;
 if(q->w28>=5){func_0c037688(q);return;}
 value=func_0c1ce8c4(table_0c260d80,&q->b4,q->w28);q->f80=value;q->f84=value;
 value=func_0c1ce8c4(table_0c260d90,&q->b5,q->w28);q->f120=value;q->f124=value;q->f128=q->f120;q->w28++;
}
void func_0c1d01cc(struct Obj_tu5_03 *parent,char category) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,category,1))!=0) {
 q->b12c=1;q->p16=func_0c1d0202;q->lcc=0x400;q->p200=&parent->f136;
 }
}
void func_0c1d0202(struct Obj_tu5_03 *q) {
 float value;
 if(q->w28>=6){func_0c037688(q);return;}
 q->l84=((int *)dat_0c2d9650->p0)[table_0c260da0[q->w28]];
 value=table_0c260db8[q->w28];q->f120=value;q->f124=value;q->f128=q->f120;q->w28++;
}
void func_0c1d0246(struct Obj_tu5_03 *parent,char category) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,category,1))!=0) {
 q->b12c=1;q->p16=func_0c1d027c;q->lcc=0x400;q->p200=&parent->f136;
 }
}
void func_0c1d027c(struct Obj_tu5_03 *q) {
 float value;
 if(q->w28>=7){func_0c037688(q);return;}
 q->l84=((int *)dat_0c2d9650->p0)[table_0c260dd0[q->w28]];
 value=table_0c260dec[q->w28];q->f120=value;q->f124=value;q->f128=q->f120;q->w28++;
}
