#include "objects.h"
extern void func_0c191980(struct Actor *,int),func_0c13b79c(struct Actor *,int),func_0c0344a0(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c241200[])(struct Actor *),(*table_0c24120c[])(struct Actor *);
void func_0c0749c4(struct Actor *a)
{
 int zero=0;
 a->b3f8=2;a->b328=5;a->b6++;a->b7=zero;a->s28=17;a->s30=zero;a->b1a3=zero;
 a->f92=-8.33333302f;if(a->b1d2)a->f92=-a->f92;
 func_0c191980(a,5);func_0c13b79c(a,0);func_0c0344a0(a,31);func_0c02a0c4(a,22,7);
}
void func_0c074a30(struct Actor *a)
{
 int zero=0,animation;
 a->b3f8=2;a->b328=5;
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(!a->b1fd){
 if(func_0c02a026(a)>=0)goto done;
 if(!--a->s28)goto finish;
 a->s30^=1;func_0c13b79c(a,a->s30);func_0c0344a0(a,31);
 a->b1a1=a->s28+65;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;
 dat_0c2f83f8->arr[a->b2]++;
 func_0c02a0c4(a,22,a->s30+7);return;
 }
 if((signed char)a->b1fd==(1<<a->b1d2))goto done;
 finish:a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;
 a->b6++;a->b7=zero;a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;
 animation=67;if(a->b255==4||a->b255==5)animation=98;
 a->b1a1=animation;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;
 dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,22,10);return;
 done:return;
}
void func_0c074bb0(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c074bd2(struct Actor *a){table_0c241200[a->b6](a);}
void func_0c074be4(struct Actor *a){table_0c24120c[a->b7](a);}
