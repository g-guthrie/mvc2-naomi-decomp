#include "objects.h"
extern void func_0c045248(struct Actor *,int);
void func_0c0d26d8(struct Actor *a)
{
 int zero=0; a->b5=zero;a->b7=zero;a->b6=zero;
 switch(a->b4c9){
 case 0:a->b1e9=6;break;
 case 1:a->b1e9=5;break;
 case 2:((volatile unsigned char *)a)[0x1e9]=4;break;
 default:goto done;
 }
 ((char *)a)[0x1a3]=1;
 done:func_0c045248(a,21);
}
