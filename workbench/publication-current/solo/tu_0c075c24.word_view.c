#include "objects.h"
union StatusWord_075c24 { short word; struct { signed char low,high; } bytes; };
extern char func_0c02a026(struct Actor *);
extern int func_0c0427f2(struct Actor *),func_0c042780(struct Actor *);
extern void func_0c044f1c(struct Actor *),func_0c02a0c4(struct Actor *,int,int),func_0c03edcc(struct Actor *),func_0c03f004(struct Actor *,struct Actor *);
extern void (*table_0c241284[])(struct Actor *,struct Actor *);
void func_0c075c24(struct Actor *a)
{
 struct Actor *child=a->p1c8;
 struct ActorSub2a4 *sub=&a->sub2a4;
 if((a->b141!=8||a->b142==1)&&((union StatusWord_075c24 *)sub)[6].bytes.high){a->b141=8;a->b142=4;}
 ((union StatusWord_075c24 *)sub)[6].bytes.high=0;
 if(func_0c02a026(a)<0&&((union StatusWord_075c24 *)sub)[6].bytes.low<0){
 a->b19d=-128;a->b1ed=0;func_0c044f1c(a);return;
 }
 if(((union StatusWord_075c24 *)sub)[6].bytes.low>0){
 if(func_0c0427f2(a))a->b142=1;
 child->s25c--;
 if(func_0c042780(child)){((union StatusWord_075c24 *)sub)[6].bytes.low=-1;func_0c02a0c4(a,15,3);}
 }
 table_0c241284[a->b141>>1](a,child);
}
void func_0c075cd8(struct Actor *a){func_0c03edcc(a);}
void func_0c075cde(struct Actor *a,struct Actor *child){child->s28^=1;func_0c03f004(a,child);}
