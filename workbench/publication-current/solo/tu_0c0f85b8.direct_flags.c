#include "objects.h"
extern void func_0c02a39a(struct Actor *,int),func_0c02a684(struct Actor *,int,int,int);
#define ACTIVE(a) (*(unsigned char *)((char *)(a)+0x2a8))
#define TRIGGER(a) (*(unsigned char *)((char *)(a)+0x2a9))
void func_0c0f85b8(struct Actor *a)
{
 int zero=0;
 if(a->sub2a4.b0 && *(unsigned short *)&a->b158!=0x1600){a->sub2a4.b0=zero;func_0c02a39a(a,0);}
 a->w3e4=2;
 if(!ACTIVE(a)){
  if(!TRIGGER(a))return;
  ACTIVE(a)++;a->b19e=zero;a->sub2a4.b6=zero;a->sub2a4.b7=zero;
 }
 if(ACTIVE(a)){
  if(a->w420 && (TRIGGER(a)||(!a->sub2a4.b6 && ((unsigned char)a->b14a&0xe0))))goto animate;
  TRIGGER(a)=zero;ACTIVE(a)=zero;a->b205=zero;func_0c02a39a(a,0);return;
 animate:
  if(a->b19e){a->b205=zero;*(char *)&a->sub2a4.b6=-1;}
  a->sub2a4.b7++;a->sub2a4.b7&=7;
  func_0c02a684(a,0,a->sub2a4.b7+a->pad2[0]*10+2,1);
 }
}
