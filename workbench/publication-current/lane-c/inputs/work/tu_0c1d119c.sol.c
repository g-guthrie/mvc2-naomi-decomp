#include "objects.h"
extern struct ActorGlobalRoot *dat_0c2d9650;
extern struct LinkedActorVec3 dat_0c260ec8;
extern char dat_0c2f836b;
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *),func_0c1d108c(struct Obj_tu5_03 *),func_0c02725c(int,int);
void func_0c1d11f0(struct Obj_tu5_03 *),func_0c1d1368(struct Obj_tu5_03 *),func_0c1d14de(struct Obj_tu5_03 *);
void func_0c1d119c(struct Vec3_tu5_03 *point) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,7,1))!=0) {
 q->b12c=1;q->p16=func_0c1d108c;q->l84=((int *)dat_0c2d9650->p0)[64];
 q->pos=*point;((struct LinkedActor *)q)->v80=dat_0c260ec8;q->lcc=49;
 }
}
void func_0c1d11f0(struct Obj_tu5_03 *q) {
 q->w28++;
 switch(q->b4) {case 0:if(q->w28>=7)q->b4++;break;case 1:q->f80+=0.046000000094f;q->f88+=0.046000000094f;break;}
 switch((unsigned char)q->b5) {case 0:q->f84+=0.57099998003f;if(q->w28>=7)q->b5++;break;case 1:q->f84-=0.307999998362f;break;}
 switch(q->b6) {
 case 0:q->f116+=0.15999999644f;q->f120+=0.15999999644f;q->f124+=0.15999999644f;q->f128+=0.15999999644f;if(q->w28>=6)q->b6++;break;
 case 1:q->f116-=0.0829999968493f;q->f120-=0.0829999968493f;q->f124-=0.0829999968493f;q->f128-=0.0829999968493f;if(q->w28>=18)q->b6++;break;
 case 2:break;
 }
 if(q->w28>20)func_0c037688(q);
}
void func_0c1d1314(struct Vec3_tu5_03 *point) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,7,1))!=0) {
 q->b12c=1;q->p16=func_0c1d11f0;q->l84=((int *)dat_0c2d9650->p0)[65];
 q->pos=*point;((struct LinkedActor *)q)->v80=dat_0c260ec8;q->lcc=57;
 }
}
void func_0c1d1368(struct Obj_tu5_03 *q) {
 q->w28++;
 switch(q->b4) {case 0:q->f80+=0.0500000007501f;q->f88+=0.0500000007501f;if(q->w28>=20)q->b4++;break;}
 switch((unsigned char)q->b5) {case 0:q->f84+=0.1875f;if(q->w28>=8)q->b5++;break;case 1:q->f84+=-0.125f;break;}
 switch(q->b6) {
 case 0:q->f116+=0.142857149258f;q->f120+=0.142857149258f;q->f124+=0.142857149258f;q->f128+=0.142857149258f;if(q->w28>=7)q->b6++;break;
 case 1:if(q->w28>=17)q->b6++;break;
 case 2:q->f116+=-0.333333343301f;q->f120+=-0.333333343301f;q->f124+=-0.333333343301f;q->f128+=-0.333333343301f;break;
 }
 if(q->w28>20)func_0c037688(q);
}
void func_0c1d148a(struct Vec3_tu5_03 *point) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,7,1))!=0) {
 q->b12c=1;q->p16=func_0c1d1368;q->l84=((int *)dat_0c2d9650->p0)[66];
 q->pos=*point;((struct LinkedActor *)q)->v80=dat_0c260ec8;q->lcc=57;
 }
}
void func_0c1d14de(struct Obj_tu5_03 *q) {
 q->w28++;
 switch(q->b4) {case 0:q->f80+=0.0500000007501f;q->f88+=0.0500000007501f;break;}
 switch((unsigned char)q->b5) {case 0:q->f84+=-0.025000000375f;break;}
 switch(q->b6) {
 case 0:q->f116+=0.1000000015f;q->f120+=0.1000000015f;q->f124+=0.1000000015f;q->f128+=0.1000000015f;if(q->w28>=10)q->b6++;break;
 case 1:if(q->w28>=13)q->b6++;break;
 case 2:q->f116+=-0.142857149258f;q->f120+=-0.142857149258f;q->f124+=-0.142857149258f;q->f128+=-0.142857149258f;break;
 }
 if(q->w28>20)func_0c037688(q);
}
void func_0c1d15ce(struct Vec3_tu5_03 *point) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,7,1))!=0) {
 q->b12c=1;q->p16=func_0c1d14de;q->l84=((int *)dat_0c2d9650->p0)[67];
 q->pos=*point;((struct LinkedActor *)q)->v80=dat_0c260ec8;q->lcc=57;
 }
}
void func_0c1d1622(struct Vec3_tu5_03 *point,int selector) {
 if(selector>=0){dat_0c2f836b=1;func_0c02725c(selector,4);}
 func_0c1d119c(point);func_0c1d1314(point);func_0c1d148a(point);func_0c1d15ce(point);
}
