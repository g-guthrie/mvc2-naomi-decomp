#include "objects.h"
extern void (*dat_0c24dca8[])(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern unsigned char dat_0c24db50[],dat_0c24db54[],dat_0c24db58[],dat_0c24db5c[],dat_0c24db60[],dat_0c24db64[];
extern void func_0c02a0c4(struct Actor *,int,int),func_0c0344a0(struct Actor *,int),func_0c0346da(struct Actor *,int);
static void select_0c129a6c(struct Actor *a);
static void punch_0c129a78(struct Actor *a);
void func_0c129b44(struct Actor *a);
void func_0c129a44(struct Actor *a)
{
 if((a->b1fe==0&&(a->b1d6&15))||(a->b1fe!=0&&(a->b1d6&0xf0)))select_0c129a6c(a);
}
static void select_0c129a6c(struct Actor *a)
{
 if(!a->b1fe)punch_0c129a78(a);
 else func_0c129b44(a);
}
static void punch_0c129a78(struct Actor *a)
{
 int zero=0;int id;unsigned int snd,k;
 switch(a->b1e8){
 case 0:a->p3f4=dat_0c24db50;id=12;snd=30;k=zero;a->b1a7=k;break;
 case 1:a->p3f4=dat_0c24db54;id=13;k=1;snd=31;a->b1a7=k;break;
 case 2:a->p3f4=dat_0c24db58;k=2;snd=32;id=14;a->b1a7=k;break;
 }
 a->b1a1=id;a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
 func_0c0344a0(a,snd);func_0c02a0c4(a,11,k);
 if(a->b1d6&15)a->b1d6--;
}
void func_0c129b44(struct Actor *a)
{
 int zero=0;int id,snd,k;
 switch(a->b1e8){
 case 0:a->p3f4=dat_0c24db5c;id=15;snd=20;k=zero;a->b1a7=k;break;
 case 1:a->p3f4=dat_0c24db60;id=16;snd=21;k=1;a->b1a7=k;break;
 case 2:
  if((a->w1fa&0x1000)&&a->f56-a->f41c>240.0f){
   snd=22;k=5;id=19;a->b6=1;a->b1d6&=15;a->b1fc=zero;a->p3f4=dat_0c24db64;
   a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;
  }else{
   k=2;snd=22;id=17;a->b6=zero;a->p3f4=dat_0c24db64;a->b1a7=k;
  }
  break;
 }
 a->b1a1=id;a->w1ac=zero;a->b19e=zero;a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
 func_0c0346da(a,snd);func_0c02a0c4(a,12,k);
 if(a->b1d6&0xf0)a->b1d6-=16;
}
void func_0c129c42(struct Actor *a)
{
 dat_0c24dca8[a->b1ff](a);
}
