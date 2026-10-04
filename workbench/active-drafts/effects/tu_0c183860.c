/* UNVERIFIED DRAFT: complete function bodies; not registered or credited. */
/* Private cached-offset effects state machine, translated from retail. */
#include "objects.h"
#define L(a) ((struct LinkedActor *)(a))
#define CACHE(a) ((short *)&(a)->i204)
extern struct Actor *func_0c0374da(int,int,int);
extern void func_0c037688(struct Actor *),func_0c184e04(struct Actor *,struct Actor *),func_0c02a0c4(struct Actor *,int,int);
extern char func_0c02a026(struct Actor *);
extern struct MotionGlobal_0c2d9260 dat_0c2d9260;
extern void (*table_0c255804[])(struct Actor *,struct Actor *),(*table_0c25582c[])(struct Actor *),(*table_0c25583c[])(struct Actor *,struct Actor *),(*table_0c255854[])(struct Actor *);
void func_0c1838ae(struct Actor *),func_0c183a70(struct Actor *,struct Actor *);
struct Actor *func_0c183860(struct Actor *parent,unsigned char mode,char variant)
{
 struct Actor *a;if((a=func_0c0374da(0,1,1))){L(a)->p16=(void (*)(struct LinkedActor *))func_0c1838ae;a->w38=0x3701;L(a)->p24=L(parent)->p24;a->p20=parent;a->b1=parent->b1;a->b32=mode;a->b33=variant;}return a;
}
void func_0c1838ae(register struct Actor *a)
{struct Actor *owner=(struct Actor *)L(a)->p24;if((unsigned char)owner->b159!=22){func_0c184e04(a,owner);return;}table_0c255804[a->b32](a,owner);}
void func_0c1838d8(struct Actor *a)
{table_0c25582c[a->b4](a);}
void func_0c183904(struct Actor *a,struct Actor *owner)
{
 short *cache=CACHE(a);int zero,one=1;
 a->b4++;L(a)->sdc=L(owner)->sdc;a->b12c=one;a->b2=owner->b2;a->b1=owner->b1;
 a->f80=owner->f80;a->f84=owner->f84;a->b1a3=owner->b1a3;a->pad7cc[0]=owner->pad7cc[0];L(a)->b48=L(owner)->b48;L(a)->v80=L(owner)->v80;
 a->b36=owner->b36;a->b12c=one;L(a)->b49=2;zero=0;((unsigned char *)cache)[4]=zero;*cache=zero;
 owner->f92=0;owner->f96=0;owner->f104=0;owner->f108=0;
 a->f92=6.66666651f;a->f56=owner->f41c+68.57143f;a->f60=owner->f60;func_0c02a0c4(a,22,2);
 func_0c183860(a,1,0);func_0c183860(a,1,1);func_0c183860(a,1,2);func_0c183a70(a,owner);
}
void func_0c1839d4(struct Actor *a,struct Actor *owner)
{short *cache=CACHE(a);struct MotionGlobal_0c2d9260 *global=&dat_0c2d9260;cache[1]=!a->w130?global->f8c:global->f88;if((float)*cache>213.33333f)*cache=213;}
void func_0c183a08(struct Actor *a,struct Actor *owner)
{short *cache=CACHE(a);*cache+=a->f92;}
void func_0c183a20(struct Actor *a,struct Actor *owner)
{short *cache=CACHE(a);int value=*cache;if(!a->w130)value=-value;value=(short)value;value+=cache[1];a->f52=value;}
void func_0c183a70(register struct Actor *a,struct Actor *owner)
{
 unsigned char *state=(unsigned char *)&owner->sub2a4;
 if(owner->b5 || (unsigned char)owner->b159!=22){a->b4++;return;}
 if(state[14])a->b12c=0;a->b36=owner->b36;table_0c25583c[a->b5](a,owner);
}
void func_0c183ab8(struct Actor *a,struct Actor *owner)
{
 short *cache=CACHE(a);func_0c1839d4(a,owner);func_0c183a08(a,owner);func_0c183a20(a,owner);
 if(!((float)*cache<200.0f)){*cache=213;func_0c183a20(a,owner);a->s28=18;a->b5++;}
}
void func_0c183b02(struct Actor *a,struct Actor *owner)
{func_0c1839d4(a,owner);func_0c183a20(a,owner);func_0c02a026(a);if(--a->s28==0){a->b5++;func_0c02a0c4(a,22,23);func_0c183860(a,9,0);}}
void func_0c183b4e(struct Actor *a,struct Actor *owner)
{
 unsigned char *cache=(unsigned char *)&a->i204;func_0c1839d4(a,owner);func_0c183a20(a,owner);func_0c02a026(a);
 if(!owner->b12c){a->b5++;func_0c02a0c4(a,22,2);cache[4]=1;}
}
void func_0c183bb4(struct Actor *a,struct Actor *owner)
{
 unsigned char *cache=(unsigned char *)&a->i204,*state=(unsigned char *)&owner->sub2a4;
 func_0c1839d4(a,owner);func_0c183a20(a,owner);func_0c02a026(a);
 if(!state[12]){a->b5++;a->b12c=1;cache[4]=0;a->s28=24;}
}
void func_0c183c06(struct Actor *a,struct Actor *owner)
{func_0c1839d4(a,owner);func_0c183a20(a,owner);if(--a->s28==0){a->b5++;a->f92=-13.33333302f;a->s28=14;}}
void func_0c183c40(struct Actor *a,struct Actor *owner)
{func_0c1839d4(a,owner);func_0c183a08(a,owner);func_0c183a20(a,owner);if(--a->s28==0)a->b4++;}
void func_0c183c72(struct Actor *a)
{table_0c255854[a->b4](a);}
