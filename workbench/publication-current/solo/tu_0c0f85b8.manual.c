#include "objects.h"
extern void func_0c02a39a(struct Actor *,int),func_0c02a684(struct Actor *,int,int,int);
void func_0c0f85b8(struct Actor *a)
{
 struct ActorSubByteState *state=(struct ActorSubByteState *)&a->sub2a4;int zero=0;
 if(state->b0 && *(unsigned short *)&a->b158!=0x1600){state->b0=zero;func_0c02a39a(a,0);}
 a->w3e4=2;
 if(!state->b4){if(!state->b5)return;state->b4++;a->b19e=zero;state->b7=state->b6=zero;}
 if(state->b4){
  if(!a->w420 || (!state->b5 && (state->b6 || !(a->b14a&0xe0)))){
   state->b5=zero;state->b4=zero;a->b205=zero;func_0c02a39a(a,0);return;
  }
  if(a->b19e){a->b205=zero;state->b6=-1;}
  state->b7++;state->b7&=7;func_0c02a684(a,0,(signed char)state->b7+a->b37*10+2,1);
 }
}
