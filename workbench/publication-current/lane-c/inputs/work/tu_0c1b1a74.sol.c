#include "objects.h"
extern void func_0c037688(struct LinkedActor *),func_0c02a0c4(struct LinkedActor *,int,int),func_0c02a026(struct LinkedActor *);
extern struct LinkedActor *func_0c1b1982(struct LinkedActor *);
extern struct ActorMotionFloat2 dat_0c25ae00[];
extern unsigned char dat_0c25ae4c[];
void func_0c1b1b66(struct LinkedActor *,unsigned char);
void func_0c1b1a74(struct LinkedActor *a,struct LinkedActor *parent)
{
 struct LinkedActor *child;float x,y;
 if(a->b4==0){a->b4++;a->sdc=parent->sdc;a->sdc.b12c=1;a->b2=parent->b2;a->b1=parent->b1;a->v80.x=parent->v80.x;a->v80.y=parent->v80.y;a->b1a3=parent->b1a3;a->b1a4=parent->b1a4;a->b48=parent->b48;a->v80=parent->v80;a->b36=parent->b36;a->f52=parent->f52;a->f56=parent->f56;a->id0=0;a->s28=1;a->sdc.b12c=0;}
 if(a->wcc.dword_value!=(unsigned short)parent->sdc.w158.short_value){func_0c037688(a);return;}
 if(--a->s28<=0){a->s28=16;child=func_0c1b1982(a);if(child){a->id0++;a->id0&=3;y=dat_0c25ae00[a->id0].y;child->f56=a->f56+y;x=dat_0c25ae00[a->id0].x;if(a->sdc.w130)x=-x;child->f52=a->f52+x;}}
}
void func_0c1b1b66(struct LinkedActor *a,unsigned char animation){func_0c02a0c4(a,23,dat_0c25ae4c[animation]);}
void func_0c1b1ba4(struct LinkedActor *a,struct LinkedActor *parent)
{
 if(a->b4==0){a->b4++;a->sdc=parent->sdc;a->sdc.b12c=1;a->b2=parent->b2;a->b1=parent->b1;a->v80.x=parent->v80.x;a->v80.y=parent->v80.y;a->b1a3=parent->b1a3;a->b1a4=parent->b1a4;a->b48=parent->b48;a->v80=parent->v80;a->b36=parent->b36;a->f108=0.0f;a->f104=0.0f;a->f92=0.208333328f;a->f96=-1.07142854f;if(a->sdc.w130)a->f92=-a->f92;func_0c1b1b66(a,17);a->s28=16;a->s30=11;}
 else{
 if(a->wcc.dword_value!=(unsigned short)parent->sdc.w158.short_value){func_0c037688(a);return;}
 if(--a->s28<=0){a->s28=16;if(--a->s30<=0){func_0c037688(a);return;}func_0c1b1b66(a,a->s30);}
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c02a026(a);
 }
}
