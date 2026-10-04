/* Partial retail-backed translation; unregistered and uncredited. */
#include "objects.h"
extern void func_0c025900(struct Actor *,int,int),func_0c1bfb78(struct Actor *);
extern void func_0c0344a0(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern unsigned char dat_0c2422d6[];
extern struct MotionGlobal_0c2d9260 dat_0c2d9260;
extern float func_0c1ebd40(int),func_0c1ec2c0(int);
extern void func_0c025762(struct Actor *),func_0c0442fa(struct Actor *),func_0c0438de(struct Actor *),func_0c044f1c(struct Actor *),func_0c043324(struct Actor *),func_0c0437b8(struct Actor *);
extern unsigned char dat_0c2f833b,dat_0c2422e6[];
extern int func_0c02849a(void);
int func_0c089890(struct Actor *,struct ActorSubLaunchState36 *,int);
int func_0c0898f0(struct Actor *,struct ActorSubLaunchState36 *);
int func_0c089988(struct Actor *,struct ActorSubLaunchState36 *);
void func_0c0899ec(struct Actor *,unsigned char);
int func_0c089a68(struct Actor *,struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c0429a4(struct Actor *,struct LinkedActorVec3 *,int);
extern int func_0c02887e(struct LinkedActorVec3 *,struct LinkedActorVec3 *);
extern void (*table_0c2424fc[])(struct Actor *),(*table_0c242508[])(struct Actor *);
void func_0c0890d0(struct Actor *a)
{
 struct LinkedActorVec3 position;
 a->b3f8=2;a->b328=5;a->b3f1=a->b255==6?2:0;
 if(func_0c02a026(a)<0){
  a->b6++;a->b7=0;a->b3f0=0;a->b3f1=0;
  position.x=20.0f;position.y=132.857132f;
  func_0c0429a4(a,&position,1);
 }
}
void func_0c08913a(struct Actor *a)
{
 a->b1f5=2;table_0c2424fc[a->b7](a);
}
void func_0c089154(struct Actor *a,struct ActorSubLaunchState36 *sub)
{
 int zero=0;
 int side;unsigned char angle;
 unsigned short buttons;
 int direction,animation;
 a->b3f8=2;a->b328=5;a->b7++;a->w130=zero;a->s28=30;sub->b27=zero;
 side=a->b2?3:4;func_0c025900(a,1,side);func_0c1bfb78(a);
 buttons=a->w340&0x3c00;
 if(!buttons){
  sub->b30=a->b34;angle=func_0c089a68(a,a->p20c);
  if(angle&32)angle=(64-angle)&31;
  if(angle>18){direction=21;animation=0;}
  else if(angle>14){direction=16;animation=2;}
  else {direction=8;animation=1;}
 }else{
  unsigned short index=((buttons>>10)&1)|(buttons>>11);
  direction=(signed char)dat_0c2422d6[index*2];animation=dat_0c2422d6[index*2+1];
 }
 if(!a->b1d2)direction=(64-direction)&63;
 a->b34=direction;animation+=a->b32?73:69;a->b1a1=animation;
 a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;
 dat_0c2f83f8->arr[a->b2]++;a->w1ac=32;a->b1d2=zero;
 func_0c0899ec(a,a->b34);func_0c0344a0(a,20);func_0c02a0c4(a,22,(a->b34>>2)+12);
}
void func_0c0892d4(struct Actor *a,struct ActorSubLaunchState36 *sub)
{
 int animation;
 a->b3f8=2;a->b328=5;
 if(!--a->s28||(sub->b25&&!*(short *)((char *)a+0x260))||dat_0c2f833b)goto exit;
 if(a->b19e){
  struct Actor *target;
  if(a->b19e&1)goto exit;
  target=a->p1b0;
  if(target->b3||target->b5!=3)goto exit;
  sub->b25=1;sub->target32=target;
  if(!sub->b24)goto exit;
 }
 if(sub->b25&&!a->b19e){
  if(!--sub->b23){
   unsigned char difference;
   sub->b23=5;sub->b30=a->b34;
   difference=func_0c089a68(a,sub->target32)-sub->b30;
   if(difference){
    difference&=63;
    difference=(difference&~5)?255:1;
    a->b34=difference+sub->b30;func_0c0899ec(a,a->b34);
   }
  }
 }
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(func_0c0898f0(a,sub)){
  a->b7++;sub->b28=0;animation=((sub->b27&8)>>2)+4;
  if(a->f92>0)animation++;
 }else if(func_0c089988(a,sub)){
  a->b7++;sub->b28=1;animation=((sub->b27&1)<<1)+8;
  if(a->f96>0)animation++;
 }else return;
 func_0c02a0c4(a,22,animation);return;
exit:
 a->b6++;a->b7=0;a->f92=-(a->f92/16.0f);a->f96=12.85714245f;a->f108=-0.5357143f;
 func_0c025762(a);func_0c0442fa(a);func_0c02a0c4(a,22,3);
}
void func_0c0894c4(struct Actor *a,struct ActorSubLaunchState36 *sub)
{
 int zero=0,animation;
 unsigned char timeout;
 a->b3f8=2;a->b328=5;
 if(!sub->b28){if(!func_0c089988(a,sub))sub->b27&=252;}
 else if(!func_0c0898f0(a,sub))sub->b27&=243;
 if(func_0c02a026(a)>=0)return;
 if(sub->target32->b5!=3||!sub->b25||!--sub->b22)goto exit;
 if((a->b19e&&!--sub->b24)||sub->b26){
  sub->b26=(0x7fff>>(func_0c02849a()&15))&1;
  sub->b30=a->b34;a->b34=func_0c089a68(a,sub->target32);
  if((dat_0c2422e6[((a->b34+4)&63)>>3]&sub->b27)==sub->b27)goto apply;
  a->b34=sub->b30;
 }
 if((sub->b27&3)&&func_0c089890(a,sub,48))goto apply;
 if(sub->b27&12)func_0c089890(a,sub,16);
apply:
 func_0c0899ec(a,a->b34);
 animation=(a->b34>>3)+77;timeout=0;
 if(!sub->b24){timeout=32;animation=93;}
 a->b1a1=animation;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;
 dat_0c2f83f8->arr[a->b2]++;a->w1ac=timeout;a->b7--;a->s28=30;sub->b23=5;
 sub->b29=sub->b27;sub->b28=zero;sub->b27=zero;
 func_0c02a0c4(a,22,(((a->b34+2)&63)>>2)+12);return;
exit:
 a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;a->b6++;a->b7=zero;a->b1f9=2;
 a->w130=sub->b31;a->b1d2=sub->b31;sub->b24=zero;func_0c025762(a);
 if(!sub->b28){
  a->f92/=16.0f;a->f104=0.0f;a->f96=21.42857f;a->f108=-0.9375f;
  if(sub->b27&8)a->f96=0.0f;
  animation=2;
 }else{
  a->f92=-(a->f92/16.0f);a->f104=0.0f;a->f96=10.714285f;a->f108=-0.9375f;
  animation=3;
 }
 func_0c02a0c4(a,22,animation);
}
void func_0c089744(struct Actor *a,struct ActorSubLaunchState36 *sub)
{
 if(sub->b25){
  if(func_0c02a026(a)<0){func_0c0438de(a);return;}
  a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
  if(a->f41c>a->f56){a->f56=a->f41c;a->b1f9=0;func_0c044f1c(a);func_0c043324(a);}
 }else if(!a->b7){
  func_0c02a026(a);
  a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
  if(a->f96<0&&a->f41c>a->f56){a->b7++;a->f56=a->f41c;a->b1f9=0;func_0c02a0c4(a,1,3);func_0c043324(a);}
 }else if(func_0c02a026(a)<0)func_0c0437b8(a);
}
int func_0c0898f0(struct Actor *a,struct ActorSubLaunchState36 *sub)
{
 float ground=a->f41c,limit=ground;
 if(sub->b25&&ground<*(float *)((char *)&dat_0c2d9260+0x94))
  limit=*(float *)((char *)&dat_0c2d9260+0x94);
 if(a->f56+102.85714f<limit&&!(sub->b29&4)){
  a->f56=limit;sub->b27|=4;return 4;
 }
 limit=*(float *)((char *)&dat_0c2d9260+0x90);
 if(!sub->b25)limit=a->f41c+977.1428223f;
 ground=a->f56;
 if(sub->b25)ground+=137.142853f;
 if(ground>limit&&!(sub->b29&8)){
  a->f56=limit-240.0f;sub->b27|=8;return 8;
 }
 return 0;
}
int func_0c089988(struct Actor *a,struct ActorSubLaunchState36 *sub)
{
 unsigned char side=a->b1fd;
 if(side&&!(sub->b29&side)){
  float edge=side>>1?dat_0c2d9260.f88:dat_0c2d9260.f8c;
  a->f52=edge;sub->b27|=side;return side;
 }
 return 0;
}
void func_0c0899ec(struct Actor *a,unsigned char direction)
{
 short angle=((80-direction)&63)<<10;
 float speed=665600.0f,divisor=256.0f,multiplier=1000.0f;
 a->f92=a->f104+1.66666663f*(speed*func_0c1ebd40(angle)*multiplier/100000.0f/divisor);
 a->f96=a->f108+2.1428571f*(speed*func_0c1ec2c0(angle)*multiplier/125000.0f/divisor);
}
int func_0c089a68(struct Actor *a,struct Actor *other)
{
 struct LinkedActorVec3 own,target;
 own=*(struct LinkedActorVec3 *)&a->f52;
 target=*(struct LinkedActorVec3 *)&other->f52;
 own.y+=137.142853f;target.y+=102.85714f;
 return ((unsigned char)func_0c02887e(&own,&target)+2)>>2;
}
void func_0c089abe(struct Actor *a){table_0c242508[a->b6](a);}
