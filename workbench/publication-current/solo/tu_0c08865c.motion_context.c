#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c08a46a(struct Actor *,struct MotionContext8a3 *),func_0c02a0c4(struct Actor *,int,int);
void func_0c08865c(struct Actor *a,struct MotionContext8a3 *state)
{
 if(((struct ActorSubByteState *)state)->b5==1){
  a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
  func_0c02a026(a);func_0c08a46a(a,state);
  if(((signed char)a->b1fd&(1<<(a->b1d2^1))) || !((1u<<a->b34)&0xfc00000fu))((struct ActorSubByteState *)state)->b5=2;
 }else{
  a->b6++;a->b7=0;a->f92=-5.0f;a->f104=0;a->f96=5.35714245f;a->f108=-0.5357143f;
  if(a->w130){a->f92=-a->f92;a->f104=-a->f104;}
  func_0c02a0c4(a,21,(signed char)a->b32*3+13);
 }
}
