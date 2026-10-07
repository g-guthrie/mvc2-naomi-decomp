/* Unverified full section:225/232 bytes match; seven register bytes differ. */
/* Action selectors and a target-height dependent follow-up. */
#include "objects.h"
extern void func_0c045248(struct Actor *,unsigned char);
extern void func_0c02a0c4(struct Actor *,int,int);
void func_0c08625c(struct Actor *a){
 int zero=0,one=1;a->b5=zero;a->b7=zero;a->b6=zero;
 switch(a->b4c9){
 case 0:a->b1e9=zero;a->b1a3=zero;goto done;
 case 1:a->b1e9=one;goto enable;
 default:goto done;
 case 2:a->b1e9=3;
 }
 enable:a->b1a3=one;
 done:func_0c045248(a,21);
}
void func_0c08629e(struct Actor *a){
 int zero=0,one=1;a->b5=zero;a->b7=zero;a->b6=zero;
 switch(a->b4c9){
 case 0:a->b1e9=zero;a->b1a3=zero;goto done;
 case 1:a->b1e9=one;goto enable;
 default:goto done;
 case 2:a->b1e9=3;
 }
 enable:a->b1a3=one;
 done:func_0c045248(a,21);
}
int func_0c0862e0(struct Actor *a){
 struct ActorSub2a4 *state=&a->sub2a4;struct Actor *target;
 /* In this action, the first state word is a target pointer and byte14 a flag. */
 if(a->b1!=11 || *(unsigned char *)&state->s14 || !state->byte16 || !*(struct Actor **)state)return 0;
 target=*(struct Actor **)state;
 if(a->f56+102.85714f>target->f56)func_0c02a0c4(a,20,0);
 else func_0c02a0c4(a,20,1);
 return 1;
}
