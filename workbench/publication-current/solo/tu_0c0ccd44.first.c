#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *),func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *),func_0c02a0c4(struct Actor *,int,int),func_0c0429a4(struct Actor *,struct LinkedActorVec3 *,int),func_0c0451f2(struct Actor *),func_0c043324(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c248020[])(struct Actor *);
extern void (*table_0c248040[])(struct Actor *,struct ActorSub2a4 *);
#define CLEAR_RECORD a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++
#define HORIZONTAL a->f52+=a->f92;a->f92+=a->f104
void func_0c0cd162(struct Actor *),func_0c0cd1ae(struct Actor *);
void func_0c0ccd44(struct Actor *a){a->b1f5=2;func_0c02a026(a);if(--a->s28<=0){a->p20c->b1ed=48;func_0c0437b8(a);}}
void func_0c0ccd7c(struct Actor *a)
{
 float previous=a->f96;
 a->f56+=a->f96;a->f96+=a->f108;
 if(previous*a->f96<0.0f)a->f108=-1.2053571f;
}
void func_0c0ccdae(struct Actor *a)
{
 int zero;
 if(a->b14b){a->b1a1=a->b14b;zero=0;CLEAR_RECORD;a->b14b=zero;}
}
void func_0c0ccde4(struct Actor *a){table_0c248020[a->b6](a);}
void func_0c0ccdf6(struct Actor *a)
{
 int zero;
 a->b6++;if(a->b255==6){a->b3f0=255;a->b3f1=16;}func_0c0442fa(a);func_0c0432ca(a);
 zero=0;a->f56=a->f41c;a->b1f9=zero;a->b1a1=79;CLEAR_RECORD;func_0c02a0c4(a,22,zero);
}
void func_0c0cce6a(struct Actor *a)
{
 struct LinkedActorVec3 point;int zero;
 a->b3f8=2;a->b328=5;a->b3f1=a->b255==6?2:0;func_0c02a026(a);
 if(a->b141){
  a->b6++;zero=0;a->b141=zero;a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;
  a->f92=a->b1d2?16.666666031f:-16.666666031f;a->f104=a->b1d2?-0.625f:0.625f;
  a->b3f0=zero;a->b3f1=zero;point.x=-25.0f;point.y=100.71428f;point.z=0.0f;func_0c0429a4(a,&point,1);
 }
}
void func_0c0ccf4a(struct Actor *a){a->b3f8=2;a->b328=5;a->b6++;func_0c02a0c4(a,22,7);func_0c0ccdae(a);}
void func_0c0ccfa4(struct Actor *a)
{
 int zero;
 a->b3f8=2;a->b328=5;HORIZONTAL;
 if(a->f104*a->f92>0.0f){a->f92=0.0f;a->f104=0.0f;}
 func_0c02a026(a);func_0c0ccdae(a);zero=0;
 if(a->b141<0)a->b141=zero;
 if(a->b141==2){a->b141=zero;a->f92=a->b1d2?16.666666031f:-16.666666031f;a->f104=a->b1d2?-0.625f:0.625f;}
 if(a->b141){a->b6++;a->f92=a->b1d2?20.0f:-20.0f;a->f104=a->b1d2?-0.625f:0.625f;a->f96=34.285714f;a->f108=-1.07142854f;}
}
void func_0c0cd0b4(struct Actor *a){a->b3f8=2;a->b328=5;HORIZONTAL;func_0c02a026(a);func_0c0ccdae(a);if(!a->b141){a->b6++;func_0c0451f2(a);}}
void func_0c0cd10a(struct Actor *a)
{
 a->b3f8=2;a->b328=5;HORIZONTAL;
 if(a->f104*a->f92>0.0f){a->b6++;a->f92=0.0f;a->f104=0.0f;a->b3f9=0;a->b3f8=0;a->b327=0;a->b328=0;}
 func_0c0cd162(a);
}
void func_0c0cd162(struct Actor *a)
{
 func_0c0ccd7c(a);
 if(a->f41c>a->f56){a->b6++;a->f56=a->f41c;func_0c043324(a);func_0c0cd1ae(a);return;}
 if(!a->b141){func_0c02a026(a);func_0c0ccdae(a);}
}
void func_0c0cd1ae(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0cd1d0(struct Actor *a){table_0c248040[a->b6](a,&a->sub2a4);}
