/* Unverified:316 linked bytes against308 retail bytes. */
/* Owner-driven animation overlays; internal cleanup labels are not callbacks. */
#include "objects.h"
#define A(a) ((struct Actor *)(a))
extern signed char func_0c029fc4(struct LinkedActor *);
extern void func_0c029f0e(struct LinkedActor *,unsigned char,unsigned char,int);
extern void func_0c029e70(struct LinkedActor *,unsigned char,unsigned char);
extern void func_0c037688(struct LinkedActor *);
void func_0c19025c(struct LinkedActor *a){if(func_0c029fc4(a)<0)a->b4=2;}
void func_0c19027a(struct LinkedActor *a){
 struct LinkedActor *owner=a->p24;
 signed char frame=((signed char *)&A(owner)->w150)[1];
 if(frame){
 a->sdc.b12c=1;*(struct Vec3_tu5_03 *)&a->f52=*(struct Vec3_tu5_03 *)&owner->f52;
 a->sdc.w130=owner->sdc.w130;A(a)->f264=A(owner)->f264;
 a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;
 if(frame<0){frame&=127;a->f56=A(owner)->f41c;}
 if(frame!=a->s28){func_0c029f0e(a,27,a->b34+1,frame);a->s28=frame;}
 }else{int zero=0;a->sdc.b12c=zero;a->s28=zero;}
}
void func_0c190300(struct LinkedActor *a){
 struct LinkedActor *owner=a->p24;unsigned char style;
 if(!*(signed char *)&A(owner)->w150){a->b4=2;return;}
 a->sdc.b12c=0;*(struct Vec3_tu5_03 *)&a->f52=*(struct Vec3_tu5_03 *)&owner->f52;
 if((style=owner->sdc.b141>>6)!=0){a->sdc.b12c=1;func_0c029e70(a,27,(style&3)+11);}
}
void func_0c19035e(struct LinkedActor *a){a->b4++;a->sdc.b12c=0;}
void func_0c19036c(struct LinkedActor *a){func_0c037688(a);}
