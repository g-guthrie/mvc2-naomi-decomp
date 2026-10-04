#include "objects.h"
extern void func_0c02a39a(struct Actor *,int),func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c044cbc(struct Actor *);
extern struct LinkedActor *func_0c1b0b40(struct LinkedActor *,unsigned char),*func_0c1623e0(struct LinkedActor *,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c24824c[])(struct Actor *);
extern unsigned char dat_0c248192[],dat_0c248196[],dat_0c24819a[],dat_0c24819e[],dat_0c2481a2[],dat_0c2481a6[],dat_0c2481aa[],dat_0c2481c2[],dat_0c2481ae[],dat_0c2481c6[],dat_0c2481b2[],dat_0c2481ca[],dat_0c2481b6[],dat_0c2481ce[],dat_0c2481ba[],dat_0c2481d2[],dat_0c2481be[],dat_0c2481d6[];
#define CLEAR_RECORD a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++
void func_0c0cebfe(struct Actor *),func_0c0cec7c(struct Actor *),func_0c0ced4a(struct Actor *),func_0c0cedf6(struct Actor *),func_0c0ceee4(struct Actor *),func_0c0cefca(struct Actor *),func_0c0cf020(struct Actor *),func_0c0cf13c(struct Actor *);
void func_0c0ceb54(struct Actor *a){table_0c24824c[a->b1ff](a);}
void func_0c0ceb68(struct Actor *a)
{
 int zero;
 func_0c02a39a(a,0);
 if(a->b1fe==0&&a->b1f9==0&&a->b1e8==2&&(a->w1fa&0xc00)){
  func_0c0346da(a,22);a->f104*=2.0f;zero=0;a->b1a7=2;a->p3f4=0;a->b6=2;a->b1f9=2;a->b1a1=21;CLEAR_RECORD;func_0c02a0c4(a,20,5);return;
 }
 func_0c0cebfe(a);
}
void func_0c0cebfe(struct Actor *a)
{
 a->b6=0;func_0c02a39a(a,0);func_0c044cbc(a);
 if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0ceee4(a);else func_0c0cedf6(a);}
 else {if(a->b1f9==1)func_0c0ced4a(a);else func_0c0cec7c(a);}
}
void func_0c0cec7c(struct Actor *a)
{
 int zero,one=1;struct Tbl_ub3_01 **statistics;
 func_0c0346da(a,(char)a->b1e8+20);zero=0;statistics=&dat_0c2f83f8;
 switch(a->b1e8){
 case 0:a->p3f4=dat_0c248192;a->b1a7=zero;a->pad2a2[0]=one;break;
 case 1:a->p3f4=dat_0c248196;a->b1a7=one;break;
 case 2:a->p3f4=dat_0c24819a;a->b1a7=2;
  if(a->w1fa&0xc00){a->p3f4=0;a->b6=one;a->b1a1=18;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;(*statistics)->arr[a->b2]++;func_0c02a0c4(a,7,6);return;}break;
 }
 a->b1a1=a->b1e8;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;(*statistics)->arr[a->b2]++;func_0c02a0c4(a,7,(char)a->b1e8);
}
void func_0c0ced4a(struct Actor *a)
{
 int zero=0;
 switch(a->b1e8){case 0:a->p3f4=dat_0c248192;a->b1a7=zero;break;case 1:a->p3f4=dat_0c248196;a->b1a7=1;break;case 2:a->p3f4=dat_0c24819a;a->b1a7=2;break;}
 func_0c0346da(a,(char)a->b1e8+20);a->b1a1=a->b1e8+6;CLEAR_RECORD;func_0c02a0c4(a,9,(char)a->b1e8);
}
void func_0c0cedf6(struct Actor *a)
{
 int zero=0,animation=(unsigned char)a->b1e8,tag=(unsigned char)a->b1e8+3;
 switch(a->b1e8){
 case 0:a->p3f4=dat_0c24819e;a->b1a7=zero;break;
 case 1:a->p3f4=dat_0c2481a2;a->b1a7=1;break;
 case 2:a->p3f4=dat_0c2481a6;a->b1a7=2;
  if(a->w1fa&0x800){animation=6;a->b6=1;tag=19;func_0c1b0b40((struct LinkedActor *)a,22);}else func_0c1623e0((struct LinkedActor *)a,0);break;
 }
 func_0c0346da(a,(char)a->b1e8+20);a->b1a1=tag;CLEAR_RECORD;func_0c02a0c4(a,8,animation);
}
void func_0c0ceee4(struct Actor *a)
{
 int zero=0,animation=(unsigned char)a->b1e8,tag=(unsigned char)a->b1e8+9;
 switch(a->b1e8){
 case 0:a->p3f4=dat_0c24819e;a->b1a7=zero;break;
 case 1:a->p3f4=dat_0c2481a2;a->b1a7=1;break;
 case 2:a->p3f4=dat_0c2481a6;a->b1a7=2;if(a->w1fa&0x400){func_0c1623e0((struct LinkedActor *)a,1);animation=3;tag=20;}break;
 }
 func_0c0346da(a,(char)a->b1e8+20);a->b1a1=tag;CLEAR_RECORD;func_0c02a0c4(a,10,animation);
}
void func_0c0cef90(struct Actor *a)
{
 func_0c02a39a(a,0);if((a->b1fe==0&&(a->b1d6&15))||(a->b1fe!=0&&(a->b1d6&0xf0)))func_0c0cefca(a);
}
void func_0c0cefca(struct Actor *a){func_0c02a39a(a,0);if((unsigned char)a->b1fe==1)func_0c0cf13c(a);else func_0c0cf020(a);}
void func_0c0cf020(struct Actor *a)
{
 int zero=0,animation;
 switch(a->b1e8){
case 0:a->b1a1=12;animation=0;func_0c0346da(a,20);if(!a->b1fc)a->p3f4=dat_0c2481aa;else a->p3f4=dat_0c2481c2;a->b1a7=zero;break;
case 1:a->b1a1=13;animation=1;func_0c0346da(a,21);if(!a->b1fc)a->p3f4=dat_0c2481ae;else a->p3f4=dat_0c2481c6;a->b1a7=1;break;
case 2:a->b1a1=14;animation=2;func_0c0346da(a,22);if(!a->b1fc)a->p3f4=dat_0c2481b2;else a->p3f4=dat_0c2481ca;a->b1a7=2;break;
}
 CLEAR_RECORD;func_0c02a0c4(a,11,animation+3);if(a->b1d6&15)a->b1d6--;
}
void func_0c0cf13c(struct Actor *a)
{
 int zero=0,animation;
 switch(a->b1e8){
case 0:a->b1a1=15;animation=0;func_0c0346da(a,20);if(!a->b1fc)a->p3f4=dat_0c2481b6;else a->p3f4=dat_0c2481ce;a->b1a7=zero;break;
case 1:a->b1a1=16;animation=1;func_0c0346da(a,21);if(!a->b1fc)a->p3f4=dat_0c2481ba;else a->p3f4=dat_0c2481d2;a->b1a7=1;break;
case 2:a->b1a1=17;animation=2;func_0c0346da(a,22);if(!a->b1fc)a->p3f4=dat_0c2481be;else a->p3f4=dat_0c2481d6;a->b1a7=2;func_0c1623e0((struct LinkedActor *)a,2);break;
}
 CLEAR_RECORD;func_0c02a0c4(a,12,animation+3);if(a->b1d6&240)a->b1d6-=16;
}
