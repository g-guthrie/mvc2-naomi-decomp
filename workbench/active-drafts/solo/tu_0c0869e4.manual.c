#include "objects.h"
extern unsigned char dat_0c2d7088[];
extern void func_0c044cbc(struct Actor *),func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern int dat_0c242214[],dat_0c242218[],dat_0c24221c[],dat_0c242220[],dat_0c242224[],dat_0c242228[];
extern void (*table_0c2423e0[])(struct Actor *);
void func_0c0869f0(struct Actor *,struct ActorSub2a4 *),func_0c086a9a(struct Actor *),func_0c086b56(struct Actor *),func_0c086bec(struct Actor *),func_0c086ca6(struct Actor *);
void func_0c0869e4(struct Actor *a){struct ActorSub2a4 *state=&a->sub2a4;func_0c0869f0(a,state);}
void func_0c0869f0(struct Actor *a,struct ActorSub2a4 *state)
{
 int i=0,limit=3,minimum=2,mask=128;unsigned char *status=dat_0c2d7088+(1>>a->b2)*0x5a4;
 do{if((((unsigned char *)state)[i+1]&mask)&&status[5]<minimum)((unsigned char *)state)[i+1]^=128;i++;status+=0xb48;}while(i<limit);
}
void func_0c086a44(struct Actor *a){table_0c2423e0[a->b1ff](a);}
void func_0c086a58(struct Actor *a)
{
 func_0c044cbc(a);if(!a->b1fe){if(!a->b1f9)func_0c086a9a(a);else func_0c086b56(a);}else{if(!a->b1f9)func_0c086bec(a);else func_0c086ca6(a);}
}
void func_0c086a9a(struct Actor *a)
{
 int zero=0,kind,animation;
 switch(a->b1e8){case 0:a->p3f4=dat_0c242214;a->b1a7=0;kind=0;animation=20;break;case 1:a->p3f4=dat_0c242218;a->b1a7=1;kind=1;animation=21;break;case 2:a->p3f4=dat_0c24221c;a->b1a7=2;kind=2;animation=22;break;}
 a->b1a1=kind;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c0346da(a,animation);func_0c02a0c4(a,7,kind);
}
void func_0c086b56(struct Actor *a)
{
 int zero=0,kind,animation,stance;
 switch(a->b1e8){case 0:a->p3f4=dat_0c242214;a->b1a7=0;kind=0;animation=20;stance=6;break;case 1:a->p3f4=dat_0c242218;a->b1a7=1;kind=1;animation=21;stance=7;break;case 2:a->p3f4=dat_0c24221c;a->b1a7=2;kind=2;animation=22;stance=8;break;}
 a->b1a1=stance;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c0346da(a,animation);func_0c02a0c4(a,9,kind);
}
void func_0c086bec(struct Actor *a)
{
 int zero=0,kind,animation,stance;
 switch(a->b1e8){case 0:a->p3f4=dat_0c242220;a->b1a7=0;kind=0;animation=20;stance=3;break;case 1:a->p3f4=dat_0c242224;a->b1a7=1;kind=1;animation=21;stance=4;break;case 2:a->p3f4=dat_0c242228;a->b1a7=2;kind=2;animation=22;stance=5;break;}
 a->b1a1=stance;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c0346da(a,animation);func_0c02a0c4(a,8,kind);
}
void func_0c086ca6(struct Actor *a)
{
 int zero=0,kind,animation,stance;
 switch(a->b1e8){case 0:a->p3f4=dat_0c242220;a->b1a7=0;kind=0;animation=20;stance=9;break;case 1:a->p3f4=dat_0c242224;a->b1a7=1;kind=1;animation=21;stance=10;break;case 2:a->p3f4=dat_0c242228;a->b1a7=2;kind=2;animation=22;stance=11;break;}
 a->b1a1=stance;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c0346da(a,animation);func_0c02a0c4(a,10,kind);
}
