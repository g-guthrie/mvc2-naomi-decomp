#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0442fa(struct Actor *),func_0c048bb0(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c0451f2(struct Actor *),func_0c0432ca(struct Actor *),func_0c043324(struct Actor *),func_0c0437b8(struct Actor *);
extern struct LinkedActor *func_0c1af2b8(struct LinkedActor *,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern signed char dat_0c247f88[];
extern void (*table_0c247f8c[])(struct Actor *,struct ActorSub2a4 *),(*table_0c247fa0[])(struct Actor *);
#define CLEAR_RECORD a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++
void func_0c0cb830(struct Actor *a)
{
 float previous;
 a->f56+=(previous=a->f96);a->f96+=a->f108;
 if(previous>0.0f&&a->f96<0.0f)a->f108=-1.60714281f;
}
void func_0c0cb862(struct Actor *a,struct ActorSub2a4 *state)
{
 int zero;char event;
 if((unsigned char)state->b0<=0)return;if(state->b1<=0)return;if(!a->b140)return;
 zero=0;event=a->b140;a->b140=zero;
 if(a->b19e){if(a->b19e&1){if(--state->b1<=0)return;}else{if((unsigned char)--state->b0<=0)return;}}
 a->b1a1=event;CLEAR_RECORD;
}
void func_0c0cb8d2(struct Actor *a){table_0c247f8c[a->b6](a,&a->sub2a4);}
void func_0c0cb8e8(struct Actor *a,struct ActorSub2a4 *state)
{
 float horizontal;int zero;
 func_0c0442fa(a);zero=0;a->f56=a->f41c;a->b6++;a->b1fc=zero;a->b1f9=zero;func_0c048bb0(a,10);
 if(!a->b1a3){horizontal=13.33333302f;a->f96=17.142857f;}else{horizontal=20.0f;a->f96=34.285714f;}
 if(!a->b1d2)horizontal=-horizontal;a->f92=horizontal;
 a->f104=a->b1d2?-0.8333333135f:0.8333333135f;a->f108=-1.07142854f;
 a->b1a1=a->b1a3+51;CLEAR_RECORD;
 state->b0=dat_0c247f88[(unsigned char)a->b1a3*2];state->b1=dat_0c247f88[(unsigned char)a->b1a3*2+1];
 func_0c02a0c4(a,21,a->b1a3+2);
}
void func_0c0cb9ee(struct Actor *a,struct ActorSub2a4 *state)
{
 func_0c02a026(a);func_0c0cb862(a,state);
 if(!a->b141){a->b6++;func_0c0451f2(a);func_0c0432ca(a);}
}
void func_0c0cba2c(struct Actor *a)
{
 float previous;
 func_0c0cb830(a);a->f52+=(previous=a->f92);a->f92+=a->f104;
 if(previous*a->f92<0.0f)a->b6++;
 func_0c02a026(a);
}
void func_0c0cba9c(struct Actor *a)
{
 func_0c0cb830(a);
 if(a->f56>a->f41c){if(!a->b141)func_0c02a026(a);}
 else {a->b6++;a->b1f9=0;a->f56=a->f41c;func_0c043324(a);}
}
void func_0c0cbae6(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0cbb08(struct Actor *a)
{
 int zero;
 if(a->b141>0){zero=0;a->b141=zero;a->b1a1=a->b1a3+58;CLEAR_RECORD;}
}
void func_0c0cbb40(struct Actor *a){table_0c247fa0[a->b6](a);}
void func_0c0cbb52(struct Actor *a)
{
 int zero;float horizontal;
 a->b6++;func_0c0442fa(a);func_0c0432ca(a);func_0c048bb0(a,8);
 zero=0;a->f56=a->f41c;a->b1a1=a->b1a3+58;CLEAR_RECORD;
 a->f96=6.428571224213f;a->f108=-0.80357140303f;func_0c0451f2(a);
 horizontal=a->b1a3?6.25f:4.16666651f;a->f92=a->b1d2?horizontal:-horizontal;a->f104=0.0f;func_0c02a0c4(a,21,4);
}
void func_0c0cbc2c(struct Actor *a)
{
 register float previous=a->f96;
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(previous*a->f96>0.0f){func_0c02a026(a);return;}
 a->b6++;func_0c1af2b8((struct LinkedActor *)a,0);a->s28=(unsigned char)a->b1a3*2+1;func_0c02a0c4(a,21,6);func_0c0cbb08(a);
}
void func_0c0cbcae(struct Actor *a)
{
 if(a->b141<0){a->b141=0;if(--a->s28<0){a->b6++;func_0c02a0c4(a,21,5);return;}}
 a->f52+=a->f92;a->f92+=a->f104;func_0c02a026(a);func_0c0cbb08(a);
}
