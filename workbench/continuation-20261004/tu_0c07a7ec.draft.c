/* Unverified full-section draft; see README.md for remaining differences. */
/* Reset substates, select the follow-up branch, and request action 21. */
#include "objects.h"
extern void func_0c045248(struct Actor *,unsigned char);
void func_0c07a7ec(struct Actor *a){
 int zero=0,one=1;
 a->b5=zero;a->b7=zero;a->b6=zero;
 switch(a->b4c9){
 case 1:a->b1e9=zero;break;
 case 0:case 2:{struct ActorSub2a4Extended *sub=(struct ActorSub2a4Extended *)&a->sub2a4;a->b1e9=one;sub->s34=one;break;}
 }
 a->b1a3=one;func_0c045248(a,21);
}
