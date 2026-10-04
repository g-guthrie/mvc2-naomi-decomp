#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c043352(struct Actor *),func_0c044df4(struct Actor *),func_0c0437b8(struct Actor *);
extern void func_0c02a39a(struct Actor *,int),func_0c02a684(struct Actor *,int,int,int),func_0c0346da(struct Actor *,int);
extern struct LinkedActor *func_0c144cdc(struct LinkedActor *,unsigned char),*func_0c1458a0(struct LinkedActor *,unsigned char);
extern void func_0c19996c(struct LinkedActor *,char),func_0c19cffc(struct LinkedActorVec3 *,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern struct ActorFlags *dat_0c2d6f84;
void func_0c095dd6(struct Actor *),func_0c095e58(struct Actor *),func_0c095f2a(struct Actor *),func_0c096058(struct Actor *),func_0c096218(struct Actor *);
#define RECORD(tag) a->b1a1=(tag);a->w1ac=zero;a->b19e=zero;a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++
#define FRAME_MOVE if(a->w150){if(!a->w130)a->f52+=*(short *)&a->w150*1.66666663f;else a->f52-=*(short *)&a->w150*1.66666663f;a->w150=zero;}
void func_0c095dc8(struct Actor *a){func_0c043352(a);func_0c095dd6(a);}
void func_0c095dd6(struct Actor *a)
{
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c044df4(a);
 if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c096218(a);else func_0c096058(a);}
 else {if(a->b1f9==1)func_0c095f2a(a);else func_0c095e58(a);}
}
void func_0c095e58(struct Actor *a)
{
 int zero=0;
 if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
 switch(a->b1e8){
 case 2:if(a->b141){a->b141=zero;RECORD(2);}break;
 case 1:if(a->b141){a->b141=zero;RECORD(1);}break;
 case 0:break;
 }
 FRAME_MOVE
}
void func_0c095f2a(struct Actor *a)
{
 int zero=0;
 if(func_0c02a026(a)<0){func_0c02a39a(a,0);func_0c0437b8(a);return;}
 switch(a->b1e8){
 case 0:break;
 case 1:
  if(!a->b6&&a->b141){a->b6++;a->s28=1;a->s30=0;}
  if(a->b6==1&&a->b141){
   if(--a->s28<=0){func_0c144cdc((struct LinkedActor *)a,0);func_0c144cdc((struct LinkedActor *)a,1);a->s28=10;}
   a->s30++;if(a->s30&2)func_0c02a39a(a,0);else func_0c02a684(a,3,3,1);
  }break;
 case 2:if(!a->b6&&a->b141){a->b6++;func_0c19996c((struct LinkedActor *)a,1);}break;
 }
 FRAME_MOVE
}
void func_0c096058(struct Actor *a)
{
 int zero=0;
 switch(a->b1e8){
 case 2:
  if(!(a->w340&0x20))a->b7=1;
  if(!a->b6){func_0c02a026(a);if(a->b141){if(a->b7)a->b6+=2;else {a->b6++;a->s28=90;}return;}}
  if(a->b6==1){if(--a->s28<=0||a->b7)a->b6++;}
  if(a->b6==2){func_0c02a026(a);if(a->b141){a->b6++;func_0c0346da(a,23);func_0c1458a0((struct LinkedActor *)a,0);}}
  else if(a->b6==3){if(func_0c02a026(a)<0){func_0c0437b8(a);return;}}
  break;
 case 1:
  if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
  if(!a->b6&&a->b141){a->b6++;func_0c19996c((struct LinkedActor *)a,13);}
  if(a->b140){a->b140=zero;RECORD(4);}break;
 case 0:
  if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
  if(a->b141){a->b141=zero;RECORD(25);}break;
 }
 FRAME_MOVE
}
void func_0c096218(struct Actor *a)
{
 int zero=0;register float offset=0.0f;struct LinkedActorVec3 point;
 if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
 switch(a->b1e8){
 case 0:if(a->b141){a->b141=zero;RECORD(9);}break;
 case 1:break;
 case 2:
  if(!a->b525){
   if(a->w34a&0x800){if(!a->b1d2)a->f52+=-5.0f;else a->f52-=-5.0f;}
   else if(a->w34a&0x400){if(!a->b1d2)a->f52+=4.1666665f;else a->f52-=4.1666665f;}
  }
  if(!(dat_0c2d6f84->flags&15)){point=*(struct LinkedActorVec3 *)&a->f52;point.x+=offset;point.y+=offset;func_0c19cffc(&point,(short)a->w130,0);}break;
 }
 FRAME_MOVE
}
