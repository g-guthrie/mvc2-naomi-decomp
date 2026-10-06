/* Unverified frame-driven placement callback: 360 linked bytes against 356 native; final clear and register scheduling remain. */
#include "objects.h"
extern struct EffectFramePlacement20 dat_0c25b134[][9];
extern void func_0c029f0e(struct Actor *,unsigned char,unsigned char,int),func_0c037688(struct LinkedActor *);
void func_0c1b62e8(struct LinkedActor *a,struct LinkedActor *owner)
{
 struct EffectFramePlacement20 *entry;float offset;
 if(!a->b4){
 a->b4++;a->sdc=owner->sdc;a->sdc.b12c=1;
 a->b2=owner->b2;a->b1=owner->b1;a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;
 a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;a->v80=owner->v80;a->b36=owner->b36;
 a->sdc.b12c=0;a->s30=0;return;
 }
 a->b36=owner->b36;
 if((unsigned short)owner->sdc.w158.short_value==0x1500 || (unsigned short)owner->sdc.w158.short_value==0x1510){
 if(owner->sdc.b141){
 if(a->s30==owner->sdc.b141)return;
 a->s30=owner->sdc.b141;
 entry=dat_0c25b134[(unsigned char)a->b33];
 entry+=a->s30-1;
 if((signed char)(a->sdc.b12c=entry->enabled)){
 func_0c029f0e((struct Actor *)a,27,18,entry->frame);
 a->v80.x=entry->scale_x;a->v80.y=entry->scale_y;
 offset=entry->offset_x;a->f56=owner->f56+entry->offset_y;
 if(!owner->sdc.w130)offset=-offset;
 a->f52=owner->f52+offset;
 }
 }else{a->sdc.b12c=0;a->s30=0;}
 }else{a->v80.y=1.0f;a->v80.x=1.0f;func_0c037688(a);}
}
