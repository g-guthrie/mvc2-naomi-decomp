/* Unverified full-section draft; see README.md for remaining differences. */
/* Clear action substates and select one of three follow-up states. */
#include "objects.h"
extern void func_0c045248(struct Actor *,unsigned char);
void func_0c0d26d8(struct Actor *a){
 int zero=0;a->b5=zero;a->b7=zero;a->b6=zero;
 switch(a->b4c9){
 case 0:a->b1e9=6;goto enable;
 case 1:a->b1e9=5;goto enable;
 default:goto done;
 case 2:a->b1e9=4;
 }
 enable:a->b1a3=1;
 done:func_0c045248(a,21);
}
