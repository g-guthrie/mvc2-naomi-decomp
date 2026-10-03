#include "objects.h"
extern unsigned int func_0c02849a(void);
extern char func_0c02a026(struct Actor *);
extern int func_0c043628(struct Actor *),func_0c03916c(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c0437b8(struct Actor *),func_0c0344a0(struct Actor *,int),func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *),func_0c048bb0(struct Actor *,int);
extern struct LinkedActor *func_0c1b5834(struct LinkedActor *,int);
extern unsigned char dat_0c2f837e;
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c24ad24[])(struct Actor *),(*table_0c24ad2c[])(struct Actor *),(*table_0c24ad54[])(struct Actor *);
void func_0c0fd9cc(struct Actor *a){a->b32=(func_0c02849a()&1)+1;a->b12c=1;func_0c02a0c4(a,18,(signed char)a->b32+255);if(a->b32==2)func_0c1b5834((struct LinkedActor *)a,2);}
void func_0c0fda12(struct Actor *a){if(func_0c02a026(a)<0){a->b5++;func_0c02a0c4(a,0,0);}}
void func_0c0fda3c(struct Actor *a){if(func_0c02a026(a)<0){a->b5++;func_0c02a0c4(a,0,0);}}
void func_0c0fda66(struct Actor *a){table_0c24ad24[a->b6](a);}
void func_0c0fda78(struct Actor *a)
{
 int zero=0,action;
 a->b6++;
 switch(a->b32){case 0:
  a->b33=(func_0c02849a()&15)%3;
  if(!dat_0c2f837e||func_0c043628(a)>1){a->b32=2;a->b33=zero;action=zero;}
  else{action=a->b33&1;if(a->b33!=2){a->b326=255;func_0c1b5834((struct LinkedActor *)a,a->b33);}}
  break;
 case 2:a->b33=zero;action=zero;break;case 1:case 3:case 4:action=3;break;}
 func_0c02a0c4(a,19,action);
}
void func_0c0fdb48(struct Actor *a)
{
 int action;
 if(a->b1d0==22&&func_0c03916c(a)){func_0c0437b8(a);return;}
 switch(a->b32){case 0:
  if((a->b33&127)!=2)a->b326=255;
  if((a->b33&127)==1){func_0c02a026(a);if(a->b33&128){a->b33=3;func_0c0344a0(a,17);func_0c02a0c4(a,19,2);}}
  else{if(a->b14b){a->b14b=0;if(a->b33)action=15;if(a->b33==2)action=16;func_0c0344a0(a,action);}func_0c02a026(a);}break;
 case 2:case 1:case 3:case 4:func_0c02a026(a);break;}
}
void func_0c0fdc3e(struct Actor *a){table_0c24ad2c[a->b1e9](a);}
void func_0c0fdc52(struct Actor *a){table_0c24ad54[a->b6](a);}
void func_0c0fdc64(struct Actor *a)
{
 int zero=0;a->b6++;a->b1f9=zero;a->f56=a->f41c;a->s28=20;if(a->b1a3)a->s28=32;a->f92=0;a->f96=0;a->f104=0;a->f108=0;
 a->b1a1=a->b1a3+48;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c0442fa(a);func_0c0432ca(a);func_0c048bb0(a,5);func_0c02a0c4(a,21,a->b1a3);
}
