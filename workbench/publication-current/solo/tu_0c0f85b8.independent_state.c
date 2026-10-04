#include "objects.h"
extern void func_0c02a39a(struct Actor *,int),func_0c02a684(struct Actor *,int,int,int);

#define S(a) ((struct ActorSubByteState *)&(a)->sub2a4)
void func_0c0f85b8(struct Actor *a)
{
 int zero=0;
 if(S(a)->b0 && *(unsigned short *)&a->b158!=0x1600){S(a)->b0=zero;func_0c02a39a(a,0);}
 a->w3e4=2;
 if(!S(a)->b4 && S(a)->b5){S(a)->b4++;a->b19e=zero;S(a)->b7=S(a)->b6=zero;}
 if(S(a)->b4){
  if(!a->w420 || (!S(a)->b5 && (S(a)->b6 || !(a->b14a&0xe0)))){
   S(a)->b5=zero;S(a)->b4=zero;a->b205=zero;func_0c02a39a(a,0);return;
  }
  if(a->b19e){a->b205=zero;S(a)->b6=-1;}
  S(a)->b7++;S(a)->b7&=7;func_0c02a684(a,0,(signed char)S(a)->b7+a->b37*10+2,1);
 }
}
