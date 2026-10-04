/* UNVERIFIED complete draft: 1393/1500 bytes; linked extent 1500; zero verified credit. */
/* Packed command selection and action callbacks, 0c0e9110..0c0e96ec. */
#include "objects.h"
extern int func_0c0435ce(struct Actor *,float),func_0c0435f0(struct Actor *,float,float);
extern void func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c043352(struct Actor *),func_0c044df4(struct Actor *),func_0c0437b8(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern float dat_0c2499f0[];
extern unsigned char dat_0c249894[],dat_0c249898[],dat_0c24989c[],dat_0c2498a0[],dat_0c2498a4[],dat_0c2498a8[],dat_0c2498ac[],dat_0c2498b0[],dat_0c2498b4[],dat_0c2498b8[],dat_0c2498bc[],dat_0c2498c0[];
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*dat_0c249a50[])(struct Actor *),(*dat_0c249a60[])(struct Actor *),(*dat_0c249a6c[])(struct Actor *);
extern struct ActorMotionFloat2 dat_0c249a78[];
void func_0c0e9150(struct Actor *);
void func_0c0e9162(struct Actor *);
void func_0c0e9324(struct Actor *);
void func_0c0e9508(struct Actor *);
void func_0c0e95be(struct Actor *);
void func_0c0e95e0(struct Actor *);
void func_0c0e9602(struct Actor *);
void func_0c0e9624(struct Actor *);
void func_0c0e9110(struct Actor *a)
{
 if(a->b201)func_0c0e9150(a);
 if(!((struct MaskObject *)a)->b1fe && (a->b1d6&15))goto select;
 if(!((struct MaskObject *)a)->b1fe)return;
 if(!(a->b1d6&240))return;
 select:func_0c0e9150(a);
}
void func_0c0e9150(struct Actor *a)
{
 if((unsigned char)a->b1fe==1)func_0c0e9324(a);else func_0c0e9162(a);
}
void func_0c0e9162(struct Actor *a)
{
 int zero=0;
 switch(a->b1e8){
 case 0:
  if(func_0c0435f0(a,dat_0c2499f0[12],dat_0c2499f0[18])){a->b158=6;a->b1a1=60;}
  else{a->b158=zero;a->b1a1=12;}
  func_0c0346da(a,20);
  if(!a->b1fc)a->p3f4=dat_0c249894;else a->p3f4=dat_0c2498ac;
  a->b1a7=zero;break;
 case 1:
  if(func_0c0435ce(a,dat_0c2499f0[13])){a->b158=7;a->b1a1=61;}
  else{a->b158=1;a->b1a1=13;}
  func_0c0346da(a,21);
  if(!a->b1fc)a->p3f4=dat_0c249898;else a->p3f4=dat_0c2498b0;
  a->b1a7=1;break;
 case 2:
  {unsigned char pose;
   if(func_0c0435f0(a,dat_0c2499f0[14],dat_0c2499f0[19])){a->b158=8;pose=62;}
   else{a->b158=2;pose=14;}
   a->b1a1=pose;
  }
  func_0c0346da(a,22);
  if(a->w1fa&4096){a->b158=9;a->b1e8=96;a->b1a1=18;}
  if(!a->b1fc)a->p3f4=dat_0c24989c;else a->p3f4=dat_0c2498b4;
  a->b1a7=2;break;
 }
 a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;
 dat_0c2f83f8->arr[a->b2]++;
 func_0c02a0c4(a,11,a->b158);
 if(a->b1d6&15)a->b1d6--;
}
void func_0c0e9324(struct Actor *a)
{
 int zero=0;
 switch(a->b1e8){
 case 0:
  {unsigned char pose;
   if(func_0c0435ce(a,dat_0c2499f0[15])){a->b158=6;pose=63;}
   else{a->b158=zero;pose=15;}
   a->b1a1=pose;
  }
  func_0c0346da(a,20);
  if(a->w1fa&4096){a->b158=9;a->b1e8=97;a->b1a1=19;}
  if(!a->b1fc)a->p3f4=dat_0c2498a0;else a->p3f4=dat_0c2498b8;
  a->b1a7=zero;break;
 case 1:
  {unsigned char pose;
   if(func_0c0435ce(a,dat_0c2499f0[16])){a->b158=7;pose=64;}
   else{a->b158=1;pose=16;}
   a->b1a1=pose;
  }
  func_0c0346da(a,21);
  if(a->w1fa&4096){a->b158=10;a->b1e8=98;a->b1a1=20;}
  if(!a->b1fc)a->p3f4=dat_0c2498a4;else a->p3f4=dat_0c2498bc;
  a->b1a7=1;break;
 case 2:
  {unsigned char pose;
   if(func_0c0435ce(a,dat_0c2499f0[17])){a->b158=8;pose=65;}
   else{a->b158=2;pose=17;}
   a->b1a1=pose;
  }
  func_0c0346da(a,22);
  if(a->w1fa&4096){a->b158=11;a->b1e8=99;a->b1a1=21;}
  if(!a->b1fc)a->p3f4=dat_0c2498a8;else a->p3f4=dat_0c2498c0;
  a->b1a7=2;break;
 }
 a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;
 dat_0c2f83f8->arr[a->b2]++;
 func_0c02a0c4(a,12,a->b158);
 if(a->b1d6&240)a->b1d6-=16;
}
void func_0c0e94e6(struct Actor *a){dat_0c249a50[a->b1ff](a);}
void func_0c0e94fa(struct Actor *a){func_0c043352(a);func_0c0e9508(a);}
void func_0c0e9508(struct Actor *a)
{
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 func_0c044df4(a);
 if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0e9624(a);else func_0c0e9602(a);}
 else{if(a->b1f9==1)func_0c0e95e0(a);else func_0c0e95be(a);}
}
void func_0c0e95be(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0e95e0(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0e9602(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0e9624(struct Actor *a){dat_0c249a60[(unsigned char)a->b1a3](a);}
void func_0c0e9638(struct Actor *a)
{
 if(!a->b6){if(func_0c02a026(a)<0)func_0c0437b8(a);}
 else dat_0c249a6c[a->b7](a);
}
void func_0c0e9672(struct Actor *a)
{
 func_0c02a026(a);
 if(a->b141){a->b7++;
  a->f92=dat_0c249a78[(unsigned char)a->b1a3].x;
  a->f104=dat_0c249a78[(unsigned char)a->b1a3].y;
  if(a->b1d2){a->f92=-a->f92;a->f104=-a->f104;}
 }
}
