#include "objects.h"
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern float dat_0c248c5c[];
extern float func_0c0db7e0(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c043324(struct Actor *);
extern void (*table_0c248e40[])(struct Actor *);
void func_0c0dca3c(struct Actor *a)
{
 float stopped;
 func_0c02a026(a);
 if(a->b14b){int zero=0;a->b1a1=a->b14b;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;a->b14b=zero;}
 stopped=0.0f;
 if(a->b141){a->b141=0;a->f96=dat_0c248c5c[(unsigned char)a->b1a3];a->f108=-0.80357140303f;a->f92/=2.0f;a->f56+=10.0f;}
 if(func_0c0db7e0(a)<0.0f){a->f92=stopped;a->f104=stopped;}
 if(a->f96<0.0f){a->b6++;a->f92=stopped;a->f104=stopped;a->f96=-2.1428571f;func_0c02a0c4(a,21,a->b1a3+8);}
}
void func_0c0dcb08(struct Actor *a)
{
 float stopped;
 func_0c02a026(a);stopped=0.0f;
 if(func_0c0db7e0(a)<0.0f){a->f92=stopped;a->f104=stopped;}
 if(a->f41c>a->f56){a->b6=4;a->f92=stopped;a->f96=stopped;a->f104=stopped;a->f108=stopped;a->f56=a->f41c;func_0c02a0c4(a,21,a->b1a3+10);func_0c043324(a);}
}
void func_0c0dcb74(struct Actor *a){table_0c248e40[a->b6](a);}
