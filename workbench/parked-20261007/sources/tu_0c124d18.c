#include "objects.h"
extern void func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *),func_0c0437b8(struct Actor *);
extern void func_0c02a39a(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c0346da(struct Actor *,int);
extern char func_0c02a026(struct Actor *);
extern struct Actor *func_0c037d54(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c24d728[])(struct Actor *);
void func_0c124d7e(struct Actor *,struct ActorSub2a4 *);
void func_0c124d18(struct Actor *a,struct ActorSub2a4 *sub)
{
 a->b6++;func_0c0442fa(a);func_0c02a39a(a,0);func_0c0432ca(a);
 a->b1a1=1;a->w1ac=0;a->b19e=0;*(unsigned int *)&a->p1c4=0;
 dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,7,1);func_0c0346da(a,21);func_0c124d7e(a,sub);
}
void func_0c124d7e(struct Actor *a,struct ActorSub2a4 *sub){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c124da0(struct Actor *a){table_0c24d728[a->b6](a);}
struct Actor *func_0c124db2(struct Actor *a)
{
 struct Actor *p;
 int flag;
 if(!(a->b34=(a->w1fa&0x0c00)>>10))goto fail;
 if(!a->b1fe){
  if((unsigned char)a->b1a3==1){
   if((p=func_0c037d54(a))==0)goto fail;
   flag=1;goto done;
  }
 }
 if((unsigned char)a->b1fe!=1)goto fail;
 if((unsigned char)a->b1a3!=1)goto fail;
 if((p=func_0c037d54(a))==0)goto fail;
 flag=0;
done:
 a->b1f7=flag;return p;
fail:
 return 0;
}
