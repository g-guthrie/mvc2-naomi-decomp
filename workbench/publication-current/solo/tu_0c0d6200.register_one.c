#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern int func_0c0427f2(struct Actor *),func_0c042780(struct Actor *);
extern void func_0c04b02a(struct Actor *),func_0c0346da(struct Actor *,int);
extern void func_0c1cea66(struct Actor *,struct Vec3_tu5_03 *,int),func_0c02a0c4(struct Actor *,int,int);
void func_0c0d6200(struct Actor *a)
{
 struct Actor *child=a->p1c8;register int one;struct Vec3_tu5_03 point;
 func_0c02a026(a);one=1;
 if(func_0c0427f2(a))a->b142=one;
 if(!a->s30){
 if(func_0c042780(a->p1c8))goto ready;
 if(a->s30)goto checked;
 if(!--a->s28)goto ready;
 if(a->s30||child->w420)goto checked;
 ready:a->s30=one;
 }
 checked:
 if(!a->b141)return;
 if(a->b141>0){
 child->b1a1=(a->b141&one)?33:34;
 func_0c04b02a(a);func_0c0346da(a,15);a->b141=0;
 point.x=-110.0f;point.y=139.28571f;point.z=0.0f;
 func_0c1cea66(a,&point,1);return;
 }
 if(a->s30){a->b6++;func_0c02a0c4(a,15,1);}
}
