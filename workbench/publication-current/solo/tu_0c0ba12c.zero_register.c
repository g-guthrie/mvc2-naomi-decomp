#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern unsigned int func_0c02849a(void);
extern int func_0c028642(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c042ed6(struct Actor *,struct LinkedActorVec3 *),func_0c0bbb16(struct Actor *),func_0c0442fa(struct Actor *);
extern struct LinkedActor *func_0c15a68c(struct LinkedActor *,unsigned char,unsigned char),*func_0c1a94b0(struct LinkedActor *,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*dat_0c245508[])(struct Actor *),(*table_0c245538[])(struct Actor *);
void func_0c0ba12c(struct Actor *a){dat_0c245508[a->b1e9](a);}
void func_0c0ba140(struct Actor *a)
{
 register int zero=0;struct LinkedActorVec3 position;
 switch(a->b6){
 case 0:a->b1f9=zero;a->b6++;func_0c02a0c4(a,21,0);func_0c15a68c((struct LinkedActor *)a,0,0);a->s28=10;a->s30=zero;a->b34=zero;break;
 case 1:func_0c02a026(a);if(a->b141){a->b6++;a->b141=zero;position.x=-(a->f80*101.666664124f);position.y=a->f84*165.0f;position.z=a->f60;func_0c042ed6(a,&position);}break;
 case 2:
  a->b328=5;
  if(--a->s30<=0){a->s30=func_0c02849a()&7;
   if((a->b34=(a->b34+1)&1)){a->s30+=8;a->s28--;func_0c15a68c((struct LinkedActor *)a,6,a->s28);}
   else func_0c15a68c((struct LinkedActor *)a,6,func_0c02849a()%3+128);if(a->s28<=0)a->b6++;
  }
 case 3:if(func_0c02a026(a)<0){a->f92=0;a->f96=0;a->f104=0;a->f108=0;func_0c0bbb16(a);}break;
 }
}
void func_0c0ba29c(struct Actor *a){table_0c245538[a->b6](a);}
void func_0c0ba2ae(struct Actor *a)
{
 register int zero=0;
 a->b1f9=zero;a->b6++;func_0c02a0c4(a,21,1);a->s28=zero;a->s30=3;a->b7=zero;if(!func_0c028642(a))func_0c0442fa(a);
 a->b1a1=50;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;
}
void func_0c0ba318(struct Actor *a)
{
 func_0c02a026(a);if(!a->b141){a->b6++;func_0c1a94b0((struct LinkedActor *)a,0);a->f92=-26.666666031f;a->f104=0;a->f96=25.714285f;a->f108=-1.60714281f;if(a->b1d2)a->f92=-a->f92;a->b32=0;a->b1f9=2;}
}
