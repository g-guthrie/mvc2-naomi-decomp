#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0442fa(struct Actor *),func_0c02a0c4(struct Actor *,int,int),func_0c02a684(struct Actor *,int,int,int),func_0c0344a0(struct Actor *,int);
extern struct LinkedActor *func_0c141174(struct LinkedActor *,unsigned char,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern struct MotionGlobal_0c2d9260 dat_0c2d9260;
void func_0c08dba8(struct Actor *a)
{
 struct Actor *other=a->p20c;int two=2,zero;
 a->b3f8=two;a->b328=5;
 if(--a->s28==0){
  zero=0;a->b6++;
  if(a->w34a&0x800)a->b32=zero;
  else if(a->w34a&0x400)a->b32=1;
  else if(a->w34a&0x1000)a->b32=two;
  else if(a->f52+53.3333321f>other->f52&&other->f52>a->f52+-53.3333321f)a->b32=two;
  else if(a->f52>other->f52){if(a->b1d2)a->b32=1;else a->b32=zero;}
  else{if(a->b1d2)a->b32=zero;else a->b32=1;}
  a->b1a1=a->b32+63;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;
  a->b159=22;a->b158=a->b32+1;func_0c02a0c4(a,a->b159,a->b158);
  switch(a->b32){case 0:a->f92=-6.66666651f;break;case 1:a->f92=6.66666651f;break;default:a->f92=0;break;}
  if(a->b1d2)a->f92*= -1;
  a->f96=-17.142857f;a->f108=-0.80357140303f;func_0c02a684(a,2,1,1);
  func_0c141174((struct LinkedActor *)a,0,0);func_0c141174((struct LinkedActor *)a,2,0);
 }
}
void func_0c08dd26(struct Actor *a,struct ActorSub2a4 *state)
{
 int one=1,count;
 a->b3f8=2;a->b328=5;a->b1f5=one;func_0c02a026(a);a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(!(a->f56>a->f41c+137.142853f)){
  a->b6++;state->b1=one;dat_0c2d9260.b5=3;dat_0c2d9260.b6=one;func_0c0344a0(a,31);
  count=20;do{func_0c141174((struct LinkedActor *)a,1,0);}while(--count);
  a->f92/=4.0f;a->f96/=8.0f;a->f108/=8.0f;a->s28=16;
 }
}
