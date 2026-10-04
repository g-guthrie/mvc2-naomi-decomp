#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c043324(struct Actor *),func_0c02a0c4(struct Actor *,int,int),func_0c0437b8(struct Actor *),func_0c0421f4(struct Actor *),func_0c0420f8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0438de(struct Actor *),func_0c041e0e(struct Actor *),func_0c045248(struct Actor *,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern float dat_0c2d926c;
extern void (*table_0c245b94[])(struct Actor *);
void func_0c0bd448(struct Actor *),func_0c0bd4e0(struct Actor *),func_0c0bd48a(struct Actor *),func_0c0bd566(struct Actor *);
void func_0c0bd39c(struct Actor *a)
{
 if(a->b19e&&!a->s30)a->s30=1;
 func_0c02a026(a);
 if(!(a->f56>a->f41c)){a->b7++;a->b1fc=0;a->pad9b[0]=0;a->b1f9=1;a->f56=a->f41c;a->f92=0;a->f96=0;a->f104=0;a->f108=0;func_0c043324(a);func_0c02a0c4(a,10,4);}
}
void func_0c0bd410(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0bd432(struct Actor *a){func_0c0421f4(a);func_0c0420f8(a);func_0c0bd448(a);}
void func_0c0bd448(struct Actor *a)
{
 func_0c042018(a);func_0c0421b8(a);if((unsigned char)a->b1fe==1)func_0c0bd4e0(a);else func_0c0bd48a(a);if(func_0c044e52(a))func_0c044f1c(a);
}
void func_0c0bd48a(struct Actor *a){if(func_0c02a026(a)<0)func_0c0438de(a);}
void func_0c0bd4e0(struct Actor *a)
{
 int zero;
 if(a->b1e8==2)goto mode_two;
 if(a->b1e8==0)goto basic;
 if(a->b1e8==1)goto basic;
 return;
mode_two:
 if(a->b6){func_0c0bd566(a);return;}
 if(func_0c02a026(a)<0)goto cleanup;
 if(a->b14b){a->b1a1=a->b14b;zero=0;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;a->b14b=zero;}
 return;
basic:
 if(func_0c02a026(a)>=0)return;
cleanup:
 func_0c0438de(a);
}
void func_0c0bd566(struct Actor *a){table_0c245b94[a->b7](a);}
void func_0c0bd578(struct Actor *a)
{
 if(!a->b19e){if(func_0c02a026(a)<0)func_0c0438de(a);return;}
 a->b7++;a->b1fc=0;
 if(a->f52<dat_0c2d926c+-160.0f){a->b1d3=a->b1d2?0:1;}
 else if(a->f52>dat_0c2d926c+160.0f){a->b1d3=a->b1d2?1:0;}
 func_0c041e0e(a);
}
void func_0c0bd61c(struct Actor *a)
{
 int mode;
 if(func_0c02a026(a)>=0)return;
 a->b1d6=17;a->b1d4=0;func_0c045248(a,3);
 if(a->b1d3==0)mode=14;else if(a->b1d3==1)mode=15;else if(a->b1d3==-1)mode=13;else return;
 func_0c02a0c4(a,1,mode);
}
