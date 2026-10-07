#include "objects.h"
extern struct AttachFrame_0c25b134 dat_0c25b134[][9];
extern void func_0c029f0e(struct LinkedActor *,int,int,int);
extern void func_0c037688(struct LinkedActor *);
void func_0c1b62e8(struct LinkedActor *a,struct LinkedActor *owner)
{
 int zero=0;
 if(!a->b4){
  a->b4++;a->sdc=owner->sdc;a->sdc.b12c=1;a->b2=owner->b2;a->b1=owner->b1;
  a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;a->v80=owner->v80;a->b36=owner->b36;
  a->sdc.b12c=zero;a->s30=zero;
  return;
 }
 a->b36=owner->b36;
 if((unsigned short)owner->sdc.w158.short_value==0x1500||(unsigned short)owner->sdc.w158.short_value==0x1510){
  if(owner->sdc.b141){
   struct AttachFrame_0c25b134 *frame;
   float x;
   if(a->s30==owner->sdc.b141)return;
   a->s30=owner->sdc.b141;
   frame=dat_0c25b134[(unsigned char)a->b33]+a->s30-1;
   if(!(a->sdc.b12c=frame->b0))return;
   func_0c029f0e(a,27,18,frame->w2);
   a->v80.x=frame->f4;a->v80.y=frame->f8;
   x=frame->f12;
   a->f56=owner->f56+frame->f16;
   if(!owner->sdc.w130)x=-x;
   a->f52=owner->f52+x;
  }
  else a->s30=(char)(a->sdc.b12c=zero);
  return;
 }
 a->v80.y=1.0f;a->v80.x=1.0f;
 func_0c037688(a);
}
