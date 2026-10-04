/* UNVERIFIED complete draft; whole linked comparison fails. Do not register or count as decompilation credit.
 * Uses published objects.h at 7c9b572. Actor byte 0x13d, when used, is accessed through its existing pad6bb member. */
#include "objects.h"
#define A(a) ((struct Actor *)(a))
extern signed char func_0c02a026(struct LinkedActor *);
extern void func_0c02a0c4(struct LinkedActor *,int,int),func_0c037d0c(struct LinkedActor *),func_0c037688(struct LinkedActor *);
extern int func_0c02850e(struct LinkedActor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern int dat_0c252798[];
extern unsigned char dat_0c2d7088[];
void func_0c1706b2(struct LinkedActor *),func_0c170704(struct LinkedActor *,struct LinkedActor *);
void func_0c1704ac(struct LinkedActor *a,struct LinkedActor *owner)
{
 if(func_0c02a026(a)<0){a->b5++;A(a)->b13e=32;A(a)->b13f=32;func_0c02a0c4(a,23,28);func_0c1706b2(a);func_0c170704(a,owner);
 A(a)->b1a1=(signed char)a->b32+62;A(a)->w1ac=0;A(a)->b19e=0;A(a)->p1c4=0;dat_0c2f83f8->arr[a->b2]++;func_0c037d0c(a);}
}
void func_0c170524(struct LinkedActor *a,struct LinkedActor *owner)
{
 func_0c02a026(a);a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c170704(a,owner);
 if(!func_0c02850e(a)){a->b4=2;a->sdc.b12c=0;return;}
 if(a->f56<A(owner)->f41c){a->b5++;a->f56=A(owner)->f41c;func_0c037d0c(a);func_0c02a0c4(a,23,29);return;}
 if(A(a)->b19f){a->b5=3;func_0c02a0c4(a,23,30);return;}if(!A(a)->b19e)func_0c037d0c(a);
}
void func_0c170610(struct LinkedActor *a,struct LinkedActor *owner)
{
 if(func_0c02a026(a)<0){func_0c1706b2(a);if(A(a)->b19e){A(a)->b1a1=(signed char)a->b32+62;A(a)->w1ac=0;A(a)->b19e=0;A(a)->p1c4=0;dat_0c2f83f8->arr[a->b2]++;}a->b5--;func_0c02a0c4(a,23,28);}
 if(A(a)->b19f){a->b5=3;func_0c02a0c4(a,23,30);return;}func_0c037d0c(a);
}
void func_0c17068a(struct LinkedActor *a,struct LinkedActor *owner)
{if(func_0c02a026(a)<0){a->b4++;a->sdc.b12c=0;}}
void func_0c1706ac(struct LinkedActor *a,struct LinkedActor *owner){func_0c037688(a);}
void func_0c1706b2(struct LinkedActor *a)
{int *motion=dat_0c252798+a->b32*2;float x=*motion++*1.66666663f/65536.0f;if(a->sdc.w130)x=-x;a->f92=x;a->f104=0.0f;a->f96=*motion*2.1428571f/65536.0f;a->f108=-1.2053571f;}
void func_0c170704(struct LinkedActor *a,struct LinkedActor *owner)
{
 struct Actor *target=(struct Actor *)(dat_0c2d7088+(1>>(owner->b2&1))*0x5a4);
 int i;float scale=2.1428571f;
 for(i=0;i<3;i++,target=(struct Actor *)((unsigned char *)target+0xb48)){
 if(target->b0){float radius=(target->b13c+target->pad6bb)*scale;
 float dx=a->f52-target->f52,dy=a->f56-target->f56+target->pad6bb*scale-radius;
 if(radius*radius>dy*dy+dx*dx){if(!a->b33){a->b33=1;func_0c02a0c4(a,23,27);break;}}
 else if(a->b33){a->b33=0;func_0c02a0c4(a,23,28);}
 }}
}
