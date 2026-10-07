/* Candidate: func_0c0d1220 selects the +-253.33 throw offset through a float compare instead of retail's branch-selected register copy, and orders the f92/f96 arithmetic differently; func_0c0d13d4 matches. */
#include "objects.h"
extern struct MotionGlobal_0c2d9260 dat_0c2d9260;
extern void (*table_0c248318[])(struct Actor *,struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c025762(void);
extern void func_0c0344a0(struct Actor *,int);
extern void func_0c02a0c4(struct Actor *,int,int);
extern void func_0c03edcc(struct Actor *,struct Actor *);
extern void func_0c04b02a(struct Actor *);
extern void func_0c034946(struct Actor *,int);
extern void func_0c04c010(struct Actor *,struct Actor *,int);
extern void func_0c1cea66(struct Actor *,struct LinkedActorVec3 *,int);
void func_0c0d1220(struct Actor *a,struct Actor *target)
{
 struct LinkedActorVec3 position;
 int zero;
 func_0c02a026(a);
 zero=0;
 if(--a->s28<0){
  register float x;float offset;
  a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;
  func_0c025762();
  func_0c0344a0(a,43);
  func_0c02a0c4(a,22,13);
  a->b6++;a->b7=zero;a->s30=zero;
  ((char *)&a->w150)[0]=33;
  x=target->f52;
  func_0c03edcc(a,target);
  target->f52=x;
  target->f56=target->f41c;
  {float right=253.33333f,left=-253.33333f;offset=right;
  if(a->w130){if(a->f52>dat_0c2d9260.f9c+-160.0f)offset=left;}
  else if(dat_0c2d9260.f98+160.0f>a->f52)offset=right;else offset=left;
  if(offset==left)a->w130=a->b1d2=1;else a->w130=a->b1d2=zero;}
  a->f92=(target->f52+offset-a->f52)/48.0f;
  a->f104=0;
  a->f96=(a->f56-a->f41c)/48.0f+19.2857132f;
  a->f108=-0.80357140303f;
  a->s28=24;
 }
 else{
  func_0c03edcc(a,target);
  if(a->b141&1){
   a->b141=zero;
   target->p1b4=a;target->b1a1=62;
   func_0c04b02a(a);
   func_0c034946(target,1);
   func_0c04c010(target,a,1);
   position.x=-53.3333321f;position.y=34.2857132f;
   func_0c1cea66(a,&position,3);
  }
 }
}
void func_0c0d13d4(struct Actor *a)
{
 a->b3f8=2;a->b328=5;a->b1ea=1;a->b1ed=2;
 table_0c248318[a->b7](a,a->p1c8);
}
