#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *),func_0c043352(struct Actor *),func_0c043324(struct Actor *),func_0c0451f2(struct Actor *),func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c025900(struct Actor *,int,int),func_0c0429a4(struct Actor *,struct LinkedActorVec3 *,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c24a23c[])(struct Actor *);
void func_0c0f3206(struct Actor *),func_0c0f3252(struct Actor *);

void func_0c0f2d5c(struct Actor *a)
{
 a->b1f5=2;a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 func_0c02a026(a);
 if(!(a->f56>a->f41c)){
  a->b6++;a->f56=a->f41c;a->f96=0;a->f108=0;
  a->f104=a->b1d2?-0.8333333135f:0.8333333135f;
 }
}
void func_0c0f2de6(struct Actor *a)
{
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(a->f104*a->f92>0.0f){func_0c0437b8(a);return;}
 func_0c043352(a);func_0c02a026(a);
}
void func_0c0f2e4e(struct Actor *a)
{
 float previous;
 if((previous=a->f96,a->f56+=previous,a->f96+=a->f108,previous*a->f96)<0.0f)a->f108=-1.2053571f;
}
void func_0c0f2e80(struct Actor *a)
{
 if(a->b140){
  int zero=0;
  a->b1a1=a->b140;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;
  dat_0c2f83f8->arr[a->b2]++;a->b140=zero;
 }
}
void func_0c0f2edc(struct Actor *a){table_0c24a23c[a->b6](a);}
void func_0c0f2eee(struct Actor *a)
{
 int zero;
 a->b6++;if(a->b255==6){a->b3f0=255;a->b3f1=16;}
 func_0c0442fa(a);func_0c0432ca(a);zero=0;
 a->f56=a->f41c;a->b1f9=zero;a->b1a1=73;
 a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;
 dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,22,zero);
}
void func_0c0f2f62(struct Actor *a)
{
 struct LinkedActorVec3 position;
 a->b3f8=2;a->b328=5;a->b3f1=a->b255==6?2:0;func_0c02a026(a);
 if(a->b141){
  a->b6++;a->b141=0;a->f92=0;a->f96=0;a->f104=0;a->f108=0;
  a->f92=a->b1d2?16.666666031f:-16.666666031f;
  a->f104=a->b1d2?-0.625f:0.625f;
  a->b3f0=0;a->b3f1=0;position.x=-40.0f;position.y=51.42857f;position.z=0;
  func_0c0429a4(a,&position,1);
 }
}
void func_0c0f3058(struct Actor *a)
{
 float previous;
 a->b3f8=2;a->b328=5;
 if((previous=a->f92,a->f52+=previous,a->f92+=a->f104,previous*a->f92)<0.0f)a->f92=0;
 a->f104=0;func_0c02a026(a);func_0c0f2e80(a);
 if(a->b141==2){
  a->b141=0;a->f92=a->b1d2?16.666666031f:-16.666666031f;
  a->f104=a->b1d2?-0.625f:0.625f;
 }
 if(a->b141){
  a->b6++;a->f92=a->b1d2?20.0f:-20.0f;
  a->f104=a->b1d2?-0.625f:0.625f;a->f96=34.2857132f;a->f108=-1.07142854f;
 }
}
void func_0c0f3158(struct Actor *a)
{
 a->b3f8=2;a->b328=5;a->f52+=a->f92;a->f92+=a->f104;
 func_0c02a026(a);func_0c0f2e80(a);
 if(!a->b141){a->b6++;func_0c0451f2(a);}
}
void func_0c0f31ae(struct Actor *a)
{
 a->b3f8=2;a->b328=5;a->f52+=a->f92;a->f92+=a->f104;
 if(a->f104*a->f92>0.0f){
  int zero=0;
  a->b6++;a->f92=0;a->f104=0;
  a->b3f8=a->b3f9=zero;a->b327=zero;a->b328=zero;
 }
 func_0c0f3206(a);
}
void func_0c0f3206(struct Actor *a)
{
 func_0c0f2e80(a);func_0c0f2e4e(a);
 if(a->f56<a->f41c){a->b6++;a->f56=a->f41c;func_0c043324(a);func_0c0f3252(a);}
 else if(!a->b141)func_0c02a026(a);
}
void func_0c0f3252(struct Actor *a)
{
 if(func_0c02a026(a)<0)func_0c0437b8(a);
}
