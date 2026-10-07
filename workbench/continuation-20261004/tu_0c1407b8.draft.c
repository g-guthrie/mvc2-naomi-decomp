/* Unverified:588 linked bytes against604 retail; flag-address caching differs. */
/* Linked-actor ownership, release flags and timed recovery. */
#include "objects.h"
#define LINK(a) (*(struct Actor **)&(a)->pad7e[0])
#define POSITION(a) (*(struct LinkedActorVec3 *)&(a)->f52)
extern char func_0c02a026(struct Actor *);
extern void func_0c0344a0(struct Actor *,int),func_0c194a10(struct Actor *,int),func_0c0426c2(struct Actor *,int),func_0c0437b8(struct Actor *),func_0c04392e(struct Actor *);
extern int func_0c042780(struct Actor *);
void func_0c1407b8(struct Actor *a,struct Actor *owner){
 struct Actor *partner=a->p20;
 unsigned char *flags=(unsigned char *)owner+0x2a4;
 int zero=0,index;
 partner->b1eb=2;POSITION(a)=POSITION(partner);
 if(LINK(LINK(a))!=a){a->b5++;a->s28=zero;goto draw_partner;}
 index=a->b35;
 if(partner->b19f){
 a->b5=3;a->s28=zero;flags[index+1]&=0xfd;flags[index+1]|=0x80;
 if(!partner->w420)partner->b1f6=7;else partner->b1f6=zero;
 func_0c0344a0(a,35);func_0c194a10(a,a->b34);return;
 }
 func_0c02a026(a);
 if(a->b141){a->b5++;partner->b12c=zero;draw_partner:func_0c0426c2(partner,8);}
}
void func_0c140888(struct Actor *a,struct Actor *owner){
 unsigned char *flags=(unsigned char *)owner+0x2a4;
 struct Actor *partner;int zero=0,index;
 if(LINK(LINK(a))!=a){a->b4=2;a->s28=zero;goto finish;}
 func_0c02a026(a);partner=a->p20;index=a->b35;
 partner->b1eb=2;POSITION(a)=POSITION(partner);
 if(partner->b19f){if(partner->b5!=3){a->b142=1;func_0c02a026(a);}else{a->s28=zero;flags[index+1]|=0x80;}}
 partner->b12c=zero;
 if(func_0c042780(partner)){a->b142=1;a->s28-=(unsigned char)a->b1a3*4+3;}
 if(--a->s28>=0)return;
 a->b5++;flags[index+1]&=0xfd;
 if(!partner->w420){partner->b1f6=7;goto finish;}
 partner->b1f6=zero;
 if(!(flags[index+1]&0x80)){
 if(a->b1a3)partner->b1ef=8;
 if(partner->b1f9!=2)func_0c0437b8(partner);else func_0c04392e(partner);
 }
 finish:func_0c0344a0(a,35);func_0c194a10(a,a->b34);
}
