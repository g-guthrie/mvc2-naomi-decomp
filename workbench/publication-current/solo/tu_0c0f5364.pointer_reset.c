#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c043352(struct Actor *),func_0c044df4(struct Actor *),func_0c0437b8(struct Actor *),func_0c0438de(struct Actor *),func_0c0421f4(struct Actor *),func_0c0420f8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c044cbc(struct Actor *),func_0c048bb0(struct Actor *,int);
extern unsigned char func_0c044e52(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern unsigned char dat_0c24a3c0[],dat_0c24a3d8[],dat_0c24a3c4[],dat_0c24a3dc[],dat_0c24a3c8[],dat_0c24a3e0[],dat_0c24a3cc[],dat_0c24a3e4[],dat_0c24a3d0[],dat_0c24a3e8[],dat_0c24a3d4[],dat_0c24a3ec[];
extern void (*table_0c24a470[])(struct Actor *);
#define CLEAR_RECORD a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++
#define MOVE a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108
void func_0c0f538c(struct Actor *),func_0c0f539e(struct Actor *),func_0c0f54b4(struct Actor *),func_0c0f55f6(struct Actor *),func_0c0f56a0(struct Actor *),func_0c0f570c(struct Actor *),func_0c0f572e(struct Actor *),func_0c0f5750(struct Actor *),func_0c0f5788(struct Actor *),func_0c0f57f0(struct Actor *),func_0c0f5812(struct Actor *);
void func_0c0f5364(struct Actor *a)
{
 if((a->b1fe==0&&(a->b1d6&15))||(a->b1fe!=0&&(a->b1d6&0xf0)))func_0c0f538c(a);
}
void func_0c0f538c(struct Actor *a){if((unsigned char)a->b1fe==1)func_0c0f54b4(a);else func_0c0f539e(a);}
void func_0c0f539e(struct Actor *a)
{
 int zero=0;
 switch(a->b1e8){
 case 0:a->b158=zero;a->b1a1=12;func_0c0346da(a,20);if(!a->b1fc)a->p3f4=dat_0c24a3c0;else a->p3f4=dat_0c24a3d8;a->b1a7=zero;break;
 case 1:a->b158=1;a->b1a1=13;func_0c0346da(a,21);if(!a->b1fc)a->p3f4=dat_0c24a3c4;else a->p3f4=dat_0c24a3dc;a->b1a7=1;break;
 case 2:a->b158=2;a->b1a1=14;func_0c0346da(a,22);if(!a->b1fc)a->p3f4=dat_0c24a3c8;else a->p3f4=dat_0c24a3e0;a->b1a7=2;break;
 }
 CLEAR_RECORD;func_0c02a0c4(a,11,a->b158);if(a->b1d6&15)a->b1d6--;
}
void func_0c0f54b4(struct Actor *a)
{
 int zero=0;
 switch(a->b1e8){
 case 0:a->b158=zero;a->b1a1=15;func_0c0346da(a,20);if(!a->b1fc)a->p3f4=dat_0c24a3cc;else a->p3f4=dat_0c24a3e4;a->b1a7=zero;break;
 case 1:a->b158=1;a->b1a1=16;func_0c0346da(a,21);if(!a->b1fc)a->p3f4=dat_0c24a3d0;else a->p3f4=dat_0c24a3e8;a->b1a7=1;break;
 case 2:a->b158=2;a->b1a1=17;func_0c0346da(a,22);if(!a->b1fc)a->p3f4=dat_0c24a3d4;else a->p3f4=dat_0c24a3ec;a->b1a7=2;break;
 }
 CLEAR_RECORD;func_0c02a0c4(a,12,a->b158);if(a->b1d6&0xf0)a->b1d6-=16;
}
void func_0c0f55d4(struct Actor *a){table_0c24a470[a->b1ff](a);}
void func_0c0f55e8(struct Actor *a){func_0c043352(a);func_0c0f55f6(a);}
void func_0c0f55f6(struct Actor *a)
{
 MOVE;func_0c044df4(a);
 if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0f5750(a);else func_0c0f572e(a);}
 else{if(a->b1f9==1)func_0c0f570c(a);else func_0c0f56a0(a);}
}
void func_0c0f56a0(struct Actor *a)
{
 int zero;
 if(a->b1e8==1){
  if(func_0c02a026(a)<0)goto destroy;
  if(a->b141!=0){a->b1a1=25;zero=0;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;a->b141=zero;}
 }else if(func_0c02a026(a)<0){destroy:func_0c0437b8(a);return;}
}
void func_0c0f570c(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0f572e(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0f5750(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0f5772(struct Actor *a){func_0c0421f4(a);func_0c0420f8(a);func_0c0f5788(a);}
void func_0c0f5788(struct Actor *a)
{
 func_0c042018(a);func_0c0421b8(a);if((unsigned char)a->b1fe==1)func_0c0f5812(a);else func_0c0f57f0(a);if(func_0c044e52(a))func_0c044f1c(a);
}
void func_0c0f57f0(struct Actor *a){if(func_0c02a026(a)<0)func_0c0438de(a);}
void func_0c0f5812(struct Actor *a){if(func_0c02a026(a)<0)func_0c0438de(a);}
void func_0c0f5834(struct Actor *a)
{
 int zero;
 if(!a->b6){func_0c044cbc(a);a->b6++;zero=0;a->b1f9=zero;func_0c02a0c4(a,20,5);func_0c0346da(a,22);a->b1a1=75;CLEAR_RECORD;func_0c048bb0(a,5);}
 if(a->b1ff==3)func_0c043352(a);MOVE;func_0c044df4(a);if(func_0c02a026(a)<0)func_0c0437b8(a);
}
