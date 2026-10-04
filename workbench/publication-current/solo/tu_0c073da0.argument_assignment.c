#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c13b79c(struct Actor *,int),func_0c0344a0(struct Actor *,int);
extern void func_0c0437b8(struct Actor *),func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c2411a4[])(struct Actor *),(*table_0c2411b0[])(struct Actor *);
void func_0c073da0(struct Actor *a)
{
 int one=1,zero=0,variant;
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(a->b1fd&&(signed char)a->b1fd!=(one<<a->b1d2))goto finish;
 if(func_0c02a026(a)>=0){
 if((signed char)a->b32>0||a->s28<=1)return;
 if(!a->b525){
 if((unsigned short)(a->w348|a->w352)&0x300){a->b32=255;a->w352=zero;}
 }else if(!a->b411)a->b32=255;
 return;
 }
 if(!--a->s28)goto finish;
 a->s30^=1;
 if(a->s30){
 if(a->b32)a->b32=zero;
 else {a->b32=one;a->s28=one;}
 if(a->s28==1)a->b32=one;
 }
 func_0c13b79c(a,a->s30);
 func_0c02a0c4(a,21,(variant=a->s30*3+(unsigned char)a->b1a3+25));func_0c0344a0(a,31);return;
 finish:a->b6++;a->b7=zero;a->f92=0.0f;a->f104=0.0f;
 func_0c02a0c4(a,21,a->b1a3+31);
}
void func_0c073f0c(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c073f2e(struct Actor *a){table_0c2411a4[a->b6](a);}
void func_0c073f40(struct Actor *a)
{
 int zero=0;float stopped=0.0f;
 a->b6++;a->b1f9=zero;a->f56=a->f41c;
 a->f92=stopped;a->f96=stopped;a->f104=stopped;a->f108=stopped;
 a->b1a1=a->b1a3+90;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;
 dat_0c2f83f8->arr[a->b2]++;
 func_0c0442fa(a);func_0c0432ca(a);func_0c02a0c4(a,21,a->b1a3+36);
}
void func_0c073fb2(struct Actor *a){table_0c2411b0[a->b6](a);}
