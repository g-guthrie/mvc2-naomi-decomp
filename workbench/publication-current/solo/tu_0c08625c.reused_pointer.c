#include "objects.h"
extern void func_0c045248(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
void func_0c08625c(struct Actor *a)
{
 int zero=0,one=1;
 a->b5=zero;a->b7=zero;a->b6=zero;
 switch(a->b4c9){
  case 0:a->b1e9=zero;a->b1a3=zero;break;
  case 1:a->b1e9=one;goto strength;
  case 2:a->b1e9=3;
  strength:a->b1a3=one;break;
 }
 func_0c045248(a,21);
}
void func_0c08629e(struct Actor *a)
{
 int zero=0,one=1;
 a->b5=zero;a->b7=zero;a->b6=zero;
 switch(a->b4c9){
  case 0:a->b1e9=zero;a->b1a3=zero;break;
  case 1:a->b1e9=one;goto strength;
  case 2:a->b1e9=3;
  strength:a->b1a3=one;break;
 }
 func_0c045248(a,21);
}
int func_0c0862e0(struct Actor *a)
{
 void *record=&a->sub2a4;
 if(a->b1!=11 || ((char *)record)[14] || !((char *)record)[16] || !*(struct Actor **)record)return 0;
 record=*(struct Actor **)record;
 func_0c02a0c4(a,20,a->f56+102.85714f>((struct Actor *)record)->f56?0:1);
 return 1;
}
