#include "objects.h"
extern signed char func_0c02a026(struct LinkedActor *);
extern void func_0c02a0c4(struct LinkedActor *,int,int),func_0c181fb0(struct LinkedActor *,int),func_0c037688(struct LinkedActor *);
void func_0c1bbfcc(struct LinkedActor *,struct LinkedActor *),func_0c1bc070(struct LinkedActor *,struct LinkedActor *),func_0c1bc07e(struct LinkedActor *,struct LinkedActor *);
void func_0c1bbe90(struct LinkedActor *a,struct LinkedActor *parent)
{
 if(a->b32){func_0c1bbfcc(a,parent);return;}
 if(!a->b33){
 if(((struct Actor *)parent)->f41c+377.14285f>a->f56)a->f56+=4.28571415f;
 if(a->b5==0){
 a->sdc.b12c^=1;func_0c02a026(a);
 if(a->s28==30)func_0c02a0c4(a,22,19);
 if(a->s28>80&&a->sdc.b141){if((a->b34+=32)&0x80){a->s30^=1;func_0c181fb0(a,a->s30);}}
 if(parent->b1d0==29&&parent->b5==0&&--a->s28>=0)return;
 a->b5++;a->sdc.b12c|=2;func_0c02a0c4(a,22,18);
 }else if(func_0c02a026(a)<0){a->b4++;a->sdc.b12c=0;}
 }else{
 if(parent->b5!=0||((struct Actor *)parent)->b0==0){func_0c1bc07e(a,parent);return;}
 ((struct Obj_tu5_03 *)a)->pos=((struct Obj_tu5_03 *)parent)->pos;func_0c02a026(a);
 }
}
void func_0c1bbfcc(struct LinkedActor *a,struct LinkedActor *parent)
{
 if(a->s28){
 func_0c02a026(a);a->b36=a->sdc.b141?0:7;
 if(parent->b1d0==29&&parent->b5==0){
 if(a->s28>60&&a->s28<120){if((a->b34+=32)&0x80){a->s30^=1;func_0c181fb0(a,a->s30);}}
 if(--a->s28>0)return;
 }
 a->s28=0;func_0c02a0c4(a,22,72);
 }else if(func_0c02a026(a)<0)func_0c1bc070(a,parent);
}
void func_0c1bc070(struct LinkedActor *a,struct LinkedActor *parent){a->b4++;a->sdc.b12c=0;}
void func_0c1bc07e(struct LinkedActor *a,struct LinkedActor *parent){a->b4++;((struct Actor *)a)->b0=0;a->sdc.b12c=0;func_0c037688(a);}
