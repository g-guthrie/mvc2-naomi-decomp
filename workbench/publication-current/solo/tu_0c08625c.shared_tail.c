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
 unsigned char *sub=(unsigned char *)&a->sub2a4;
 struct Actor *target;
 if(a->b1!=11 || sub[14] || !sub[16] || !*(struct Actor **)sub)return 0;
 target=*(struct Actor **)sub;
 func_0c02a0c4(a,20,a->f56+102.85714f>target->f56?0:1);
 return 1;
}
