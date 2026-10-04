#include "objects.h"
struct SolTimeValue { int tick; float value; };
extern struct ActorGlobalRoot *dat_0c2d9650;
extern struct LinkedActorVec3 dat_0c260ed4;
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *),func_0c1d975e(struct Obj_tu5_03 *);
extern int func_0c1ec190(void);
extern float func_0c1ec2c0(int),func_0c1ebd40(int);
extern struct SolTimeValue dat_0c260ee0[];
extern struct SolTimeValue dat_0c260ef8[];
extern struct SolTimeValue dat_0c260f10[];
extern struct SolTimeValue dat_0c260f28[];
extern struct SolTimeValue dat_0c260f38[];
extern struct SolTimeValue dat_0c260f58[];
extern struct SolTimeValue dat_0c260f68[];
extern struct SolTimeValue dat_0c260f78[];
extern struct SolTimeValue dat_0c260f88[];
extern struct SolTimeValue dat_0c260f98[];
extern struct SolTimeValue dat_0c260fa8[];
extern struct SolTimeValue dat_0c260fd0[];
void func_0c1d1684(struct Obj_tu5_03 *);
void func_0c1d1818(struct Obj_tu5_03 *);
void func_0c1d19ac(struct Obj_tu5_03 *);
void func_0c1d1b40(struct Obj_tu5_03 *);
void func_0c1d1cd4(struct Obj_tu5_03 *);
void func_0c1d1e80(struct Obj_tu5_03 *);
void func_0c1d1684(struct Obj_tu5_03 *a) {
 struct SolTimeValue *x,*y,*z;
 a->w28++;if(a->w28>15){func_0c037688(a);return;}
 if(a->w28>=dat_0c260ee0[a->b4+1].tick)a->b4++;
 if(a->w28>=dat_0c260ef8[(unsigned char)a->b5+1].tick)a->b5++;
 if(a->w28>=dat_0c260f10[a->b6+1].tick)a->b6++;
 x=&dat_0c260ee0[a->b4];y=&dat_0c260ef8[(unsigned char)a->b5];z=&dat_0c260f10[a->b6];
 a->f80+=(x[1].value-x[0].value)/(float)(x[1].tick-x[0].tick);
 a->f84+=(y[1].value-y[0].value)/(float)(y[1].tick-y[0].tick);
 a->f88+=(z[1].value-z[0].value)/(float)(z[1].tick-z[0].tick);
}
void func_0c1d1784(struct Vec3_tu5_03 *point) { struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,7,1))!=0){a->b12c=1;a->p16=func_0c1d1684;a->l84=((int *)dat_0c2d9650->p0)[66];a->lcc=17;a->pos=*point;((struct LinkedActor *)a)->v80=dat_0c260ed4;a->f116=0.0f;a->f120=0.0f;a->f124=0.0f;a->f128=0.0f;}
}
void func_0c1d1818(struct Obj_tu5_03 *a) {
 struct SolTimeValue *x,*y,*z;
 a->w28++;if(a->w28>15){func_0c037688(a);return;}
 if(a->w28>=dat_0c260f28[a->b4+1].tick)a->b4++;
 if(a->w28>=dat_0c260f38[(unsigned char)a->b5+1].tick)a->b5++;
 if(a->w28>=dat_0c260f58[a->b6+1].tick)a->b6++;
 x=&dat_0c260f28[a->b4];y=&dat_0c260f38[(unsigned char)a->b5];z=&dat_0c260f58[a->b6];
 a->f80+=(x[1].value-x[0].value)/(float)(x[1].tick-x[0].tick);
 a->f84+=(y[1].value-y[0].value)/(float)(y[1].tick-y[0].tick);
 a->f88+=(z[1].value-z[0].value)/(float)(z[1].tick-z[0].tick);
}
void func_0c1d1918(struct Vec3_tu5_03 *point) { struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,7,1))!=0){a->b12c=1;a->p16=func_0c1d1818;a->l84=((int *)dat_0c2d9650->p0)[67];a->lcc=17;a->pos=*point;((struct LinkedActor *)a)->v80=dat_0c260ed4;a->f116=0.0f;a->f120=0.0f;a->f124=0.0f;a->f128=0.0f;}
}
void func_0c1d19ac(struct Obj_tu5_03 *a) {
 struct SolTimeValue *x,*y,*z;
 a->w28++;if(a->w28>15){func_0c037688(a);return;}
 if(a->w28>=dat_0c260f68[a->b4+1].tick)a->b4++;
 if(a->w28>=dat_0c260f78[(unsigned char)a->b5+1].tick)a->b5++;
 if(a->w28>=dat_0c260f88[a->b6+1].tick)a->b6++;
 x=&dat_0c260f68[a->b4];y=&dat_0c260f78[(unsigned char)a->b5];z=&dat_0c260f88[a->b6];
 a->f80+=(x[1].value-x[0].value)/(float)(x[1].tick-x[0].tick);
 a->f84+=(y[1].value-y[0].value)/(float)(y[1].tick-y[0].tick);
 a->f88+=(z[1].value-z[0].value)/(float)(z[1].tick-z[0].tick);
}
void func_0c1d1aac(struct Vec3_tu5_03 *point) { struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,7,1))!=0){a->b12c=1;a->p16=func_0c1d19ac;a->l84=((int *)dat_0c2d9650->p0)[68];a->lcc=17;a->pos=*point;((struct LinkedActor *)a)->v80=dat_0c260ed4;a->f116=0.0f;a->f120=0.0f;a->f124=0.0f;a->f128=0.0f;}
}
void func_0c1d1b40(struct Obj_tu5_03 *a) {
 struct SolTimeValue *x,*y,*z;
 a->w28++;if(a->w28>15){func_0c037688(a);return;}
 if(a->w28>=dat_0c260f98[a->b4+1].tick)a->b4++;
 if(a->w28>=dat_0c260fa8[(unsigned char)a->b5+1].tick)a->b5++;
 if(a->w28>=dat_0c260fd0[a->b6+1].tick)a->b6++;
 x=&dat_0c260f98[a->b4];y=&dat_0c260fa8[(unsigned char)a->b5];z=&dat_0c260fd0[a->b6];
 a->f80+=(x[1].value-x[0].value)/(float)(x[1].tick-x[0].tick);
 a->f84+=(y[1].value-y[0].value)/(float)(y[1].tick-y[0].tick);
 a->f88+=(z[1].value-z[0].value)/(float)(z[1].tick-z[0].tick);
}
void func_0c1d1c40(struct Vec3_tu5_03 *point) { struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,7,1))!=0){a->b12c=1;a->p16=func_0c1d1b40;a->l84=((int *)dat_0c2d9650->p0)[69];a->lcc=17;a->pos=*point;((struct LinkedActor *)a)->v80=dat_0c260ed4;a->f116=0.0f;a->f120=0.0f;a->f124=0.0f;a->f128=0.0f;}
}
void func_0c1d1cd4(struct Obj_tu5_03 *a) { a->w28++;if(a->w28>30){func_0c037688(a);return;}func_0c1d975e(a);a->f116-=0.0333333351f;}
void func_0c1d1d0c(struct Vec3_tu5_03 *point,int index) { struct Obj_tu5_03 *a;int angle;float radius;
 if((a=func_0c0374da(0,7,1))!=0){a->b12c=1;a->p16=func_0c1d1cd4;a->l84=((int *)dat_0c2d9650->p0)[70];a->lcc=33;a->pos=*point;((struct LinkedActor *)a)->v80=dat_0c260ed4;radius=10.0f;angle=(int)((float)(index*36)*65536.0f/360.0f+0.5f)&65535;a->f92=func_0c1ec2c0(angle)*radius;a->f96=(float)(func_0c1ec190()%20+30);a->f100=func_0c1ebd40(angle)*radius;a->f104=-a->f92/30.0f;a->f108=-a->f96/30.0f;a->f112=-a->f100/30.0f;a->f116=1.0f;}
}
void func_0c1d1df2(struct Vec3_tu5_03 *point){int i;for(i=0;i<10;i++)func_0c1d1d0c(point,i);}
void func_0c1d1e64(struct Vec3_tu5_03 *point){func_0c1d1784(point);func_0c1d1918(point);func_0c1d1aac(point);func_0c1d1c40(point);func_0c1d1df2(point);}
void func_0c1d1e80(struct Obj_tu5_03 *a){int angle;
 if(++a->w28>=40)a->w28=0;a->pos=a->p20->pos;angle=(int)((float)(a->b32*90+a->w28*360/40)*65536.0f/360.0f+0.5f)&65535;a->pos.x+=func_0c1ec2c0(angle)*50.0f;a->pos.y+=250.0f;angle=(int)((float)(a->b32*90+a->w28*360/40)*65536.0f/360.0f+0.5f)&65535;a->pos.z+=func_0c1ebd40(angle)*50.0f;a->angles.scalar.l44+=3277;if(++a->w30>300)func_0c037688(a);
}
