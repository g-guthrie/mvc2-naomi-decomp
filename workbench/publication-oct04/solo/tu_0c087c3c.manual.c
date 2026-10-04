#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *),func_0c048bb0(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c0451f2(struct Actor *),func_0c043324(struct Actor *),func_0c0437b8(struct Actor *),func_0c044f1c(struct Actor *);
extern struct LinkedActor *func_0c140384(struct LinkedActor *,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern int dat_0c22f2c8[];
extern void (*table_0c24248c[])(struct Actor *),(*table_0c2424a0[])(struct Actor *);
#define MOVE a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108
#define CLEAR_RECORD a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++
void func_0c0880b6(struct Actor *,int);
void func_0c087c3c(struct Actor *a)
{
 struct ActorSubByteState *state=(struct ActorSubByteState *)&a->sub2a4;int zero=0;
 a->b6++;a->b7=zero;a->f56=a->f41c;a->b1f9=zero;a->b1fc=zero;state->b4=zero;
 func_0c0442fa(a);func_0c0432ca(a);func_0c048bb0(a,5);a->b1a1=a->b1a3+48;CLEAR_RECORD;func_0c02a0c4(a,21,a->b1a3);
}
void func_0c087cba(struct Actor *a){table_0c24248c[a->b7](a);}
void func_0c087ccc(struct Actor *a)
{
 int zero;
 func_0c02a026(a);if(a->b141&1){a->b7++;zero=0;a->b141=zero;func_0c0451f2(a);
  if(!a->b19e){a->b1a1=a->b1a3+100;CLEAR_RECORD;}func_0c0880b6(a,0);
 }
}
void func_0c087d36(struct Actor *a){MOVE;func_0c02a026(a);if(a->b141&1){a->b7++;a->b141=0;func_0c0880b6(a,1);}}
void func_0c087dcc(struct Actor *a)
{
 struct ActorSubByteState *state=(struct ActorSubByteState *)&a->sub2a4;
 int zero=0;register float stopped=0.0f;
 MOVE;if(!(a->f92*a->f104<0.0f))a->f92=stopped;a->f104=stopped;func_0c02a026(a);
 if(a->b141&1){int request=zero;char hit=a->b19e;
  if(hit&&!(hit&1)){if(a->b525||(a->w34e&0x300))request=1;}
  state->b4|=request;
 }
 if(!(a->f96>0.0f)){
  a->b7++;a->f92=stopped;a->f104=stopped;
  if(state->b4){a->f96+=10.714285f;a->b1a1=a->b1a3+51;CLEAR_RECORD;func_0c02a0c4(a,21,2);return;}
  a->b7++;a->f96=!a->b1a3?2.1428571f:4.28571415f;a->f108=-1.60714281f;func_0c02a0c4(a,21,3);
 }
}
void func_0c087f38(struct Actor *a)
{
 MOVE;if(!(a->f92*a->f104<0.0f))a->f92=0.0f;a->f104=0.0f;
 if(func_0c02a026(a)<0){a->b7++;a->f96=-12.85714245f;a->f108=-1.60714281f;func_0c02a0c4(a,21,4);}
}
void func_0c087fc4(struct Actor *a)
{
 int zero,animation;
 MOVE;func_0c02a026(a);
 if(a->f41c>a->f56){a->b6++;zero=0;a->b7=zero;a->f56=a->f41c;a->b1f9=zero;a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;
  animation=((a->b19e&1)||(unsigned char)a->b1a3==1)?6:5;func_0c02a0c4(a,21,animation);func_0c043324(a);
 }
}
void func_0c088094(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0880b6(struct Actor *a,int group)
{
 int *row=dat_0c22f2c8+group*8;row+=(unsigned char)a->b1a3*4;
 a->f92=(float)*row++*1.66666663f/65536.0f;a->f104=(float)*row++*1.66666663f/65536.0f;
 a->f96=(float)*row++*2.1428571f/65536.0f;a->f108=(float)*row*2.1428571f/65536.0f;
 if(a->w130){a->f92=-a->f92;a->f104=-a->f104;}
}
void func_0c08812c(struct Actor *a){table_0c2424a0[a->b6](a);}
void func_0c08813e(struct Actor *a)
{
 int zero=0,tag,animation;
 a->b6++;
 if(a->b1f9!=2){a->b1f9=zero;a->f56=a->f41c;a->b1fc=zero;func_0c0442fa(a);func_0c0432ca(a);tag=54;animation=7;}
 else {a->b1d4++;a->f92=1.66666663f;a->f104=0.0f;a->f96=12.85714245f;a->f108=-0.66964281f;a->w130=a->b1d2;
  if(a->w130){a->f92=-a->f92;a->f104=-a->f104;}tag=57;animation=9;
 }
 a->b1a1=tag+a->b1a3;CLEAR_RECORD;func_0c02a0c4(a,21,a->b1a3+animation);
}
void func_0c08823c(struct Actor *a)
{
 int airborne=0;
 if(a->b1f9==2){MOVE;if(a->f41c>a->f56){a->f56=a->f41c;a->b1f9=0;func_0c044f1c(a);return;}airborne=1;}
 func_0c02a026(a);if(a->b141&1){a->b6++;func_0c048bb0(a,5);func_0c140384((struct LinkedActor *)a,airborne);}
}
