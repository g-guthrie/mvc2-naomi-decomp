#include "selector_model.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern unsigned int func_0c02849a(void);
extern int func_0c02850e(struct LinkedActor *);
extern void func_0c02a026(struct LinkedActor *),func_0c02a18c(struct LinkedActor *,int,int,int);
extern void (*table_0c25b988[])(struct LinkedActor *),(*table_0c25b998[])(struct LinkedActor *),(*table_0c25b9b8[])(struct LinkedActor *),(*table_0c25bb08[])(struct LinkedActor *);
extern float dat_0c25b964[],dat_0c25bac4[],dat_0c25ba34[][4];
extern short dat_0c25b9d8[];
extern signed char dat_0c25b9ea[][8];
extern struct ActorMotionFloat2 dat_0c25bae8[],dat_0c25bb18[],dat_0c25bb58[];
void func_0c1bb224(struct LinkedActor *),func_0c1bb590(struct LinkedActor *),func_0c1bb5ee(struct LinkedActor *),func_0c1bb640(struct LinkedActor *),func_0c1bb676(struct LinkedActor *),func_0c1bb4ae(struct LinkedActor *),func_0c1bb4fc(struct LinkedActor *),func_0c1bb548(struct LinkedActor *);
struct LinkedActor *func_0c1bb1d0(struct LinkedActor *parent)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,3,0))!=0){a->p16=func_0c1bb224;a->p24=parent;a->b1=parent->b1;a->w38=0x3502;
 a->f52=parent->f52;a->f56=parent->f56;a->b32=(func_0c02849a()&3)+4;a->b33=0;}
 return a;
}
void func_0c1bb224(struct LinkedActor *a){table_0c25b988[a->b4](a);}
void func_0c1bb236(struct LinkedActor *a)
{
 struct LinkedActor *parent;
 a->b4++;parent=a->p24;a->sdc=parent->sdc;a->sdc.b12c=1;a->b2=parent->b2;a->b1=parent->b1;
 a->v80.x=parent->v80.x;a->v80.y=parent->v80.y;a->b1a3=parent->b1a3;a->b1a4=parent->b1a4;a->b48=parent->b48;a->v80=parent->v80;a->b36=parent->b36;
 table_0c25b998[a->b32](a);a->b6=0;a->b5=0;
}
void func_0c1bb2ae(struct LinkedActor *a)
{
 struct Actor *parent=(struct Actor *)a->p24;
 a->f52=parent->f52;a->f56=parent->f41c;a->b36=10;func_0c1bb5ee(a);
 a->s28=0;a->sdc.b141=0;a->s30=1;func_0c1bb590(a);
}
void func_0c1bb2e6(struct LinkedActor *a)
{
 struct Actor *parent=(struct Actor *)a->p24;
 a->f52=parent->f52;a->f56=parent->f41c;a->b36=12;func_0c1bb5ee(a);func_0c1bb640(a);
 a->s28=0;a->sdc.b141=0;a->s30=1;func_0c1bb590(a);
}
void func_0c1bb34c(struct LinkedActor *a)
{
 struct Actor *parent=(struct Actor *)a->p24;
 a->f52=parent->f52;a->f56=parent->f41c;a->b36=0;func_0c1bb5ee(a);
 a->s28=0;a->sdc.b141=0;a->s30=1;func_0c1bb590(a);
}
void func_0c1bb386(struct LinkedActor *a){table_0c25b9b8[a->b32](a);}
void func_0c1bb39a(struct LinkedActor *a)
{
 if(!a->b5){func_0c1bb676(a);func_0c1bb4ae(a);}
 else{if(!func_0c02850e(a))a->b4++;func_0c1bb676(a);func_0c1bb548(a);}
}
void func_0c1bb3d0(struct LinkedActor *a)
{
 if(!a->b5){
 a->f52=a->f52+a->f92;a->f92=a->f92+a->f104;a->f56=a->f56+a->f96;a->f96=a->f96+a->f108;
 func_0c1bb4fc(a);
 }else{
 if(!func_0c02850e(a))a->b4++;
 a->f52=a->f52+a->f92;a->f92=a->f92+a->f104;a->f56=a->f56+a->f96;a->f96=a->f96+a->f108;
 func_0c1bb548(a);
 }
}
void func_0c1bb46c(struct LinkedActor *a)
{
 if(!a->b5){func_0c1bb676(a);func_0c1bb4fc(a);}
 else{if(!func_0c02850e(a))a->b4++;func_0c1bb676(a);func_0c1bb548(a);}
}
void func_0c1bb4ae(struct LinkedActor *a)
{
 float distance;
 int n;
 distance=((struct Actor *)a->p24)->f41c+dat_0c25b964[a->b32]-a->f56+17.142857f;
 if(distance<0.0f)distance=-distance;
 n=(int)(distance/2.1428571f)/8;
 if(a->s28>n)func_0c1bb548(a);else{a->s28=n;func_0c1bb590(a);}
}
void func_0c1bb4fc(struct LinkedActor *a)
{
 float distance;
 int n;
 distance=((struct Actor *)a->p24)->f41c+dat_0c25b964[a->b32]-a->f56+17.142857f;
 if(distance<0.0f)distance=-distance;
 n=(int)(distance/2.1428571f)/16;
 if(a->s28>n)func_0c1bb548(a);else{a->s28=n;func_0c1bb590(a);}
}
void func_0c1bb548(struct LinkedActor *a)
{
 func_0c02a026(a);a->s30=((struct Actor *)a)->b142;
 if(a->sdc.b141<0)a->sdc.b12c=0;else a->sdc.b12c=1;
}
void func_0c1bb590(struct LinkedActor *a)
{
 if(a->s28>=dat_0c25b9d8[a->b32]){a->s28=dat_0c25b9d8[a->b32];a->b5++;}
 func_0c02a18c(a,18,dat_0c25b9ea[a->b32][a->s28],a->sdc.b141&127);
 ((struct Actor *)a)->b142=a->s30;
}
void func_0c1bb5ee(struct LinkedActor *a)
{
 float *row;
 float offset;
 row=dat_0c25ba34[a->b32];offset=row[func_0c02849a()&3];
 if(a->sdc.w130)offset=-offset;a->f52=a->f52+offset;a->f56-=dat_0c25bac4[a->b32];
}
void func_0c1bb640(struct LinkedActor *a)
{
 unsigned char index;
 struct ActorMotionFloat2 *pair;
 a->f104=0.0f;a->f92=0.0f;index=func_0c02849a()&3;pair=&dat_0c25bae8[index];a->f96=pair->x;a->f108=pair->y;
}
void func_0c1bb676(struct LinkedActor *a){table_0c25bb08[a->b6](a);}
void func_0c1bb688(struct LinkedActor *a)
{
 unsigned char index;
 struct ActorMotionFloat2 *pair;
 a->b6++;index=func_0c02849a()&7;pair=&dat_0c25bb18[index];a->f92=pair->x;a->f104=pair->y;
 index=func_0c02849a()&7;pair=&dat_0c25bb58[index];a->f96=pair->x;a->f108=pair->y;
}
