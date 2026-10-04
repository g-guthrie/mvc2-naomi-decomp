#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c025762(void),func_0c0344a0(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c03edcc(struct Actor *,struct Actor *),func_0c04b02a(struct Actor *),func_0c034946(struct Actor *,int),func_0c04c010(struct Actor *,struct Actor *,int),func_0c1cea66(struct Actor *,struct LinkedActorVec3 *,int);
extern struct MotionGlobal_0c2d9260 dat_0c2d9260;
extern void (*table_0c248318[])(struct Actor *,struct Actor *);
void func_0c0d1220(struct Actor *a,struct Actor *other)
{
 int zero;register float old_x;float offset;struct LinkedActorVec3 p;
 func_0c02a026(a);zero=0;
 if(--a->s28>=0)goto follow;
 {
  a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;func_0c025762();func_0c0344a0(a,43);func_0c02a0c4(a,22,13);
  a->b6++;a->b7=zero;a->s30=zero;((unsigned char *)&a->w150)[0]=33;old_x=other->f52;func_0c03edcc(a,other);other->f52=old_x;other->f56=other->f41c;
  offset=253.33333f;
  if(a->w130){if(a->f52>((float *)&dat_0c2d9260)[39]+-160){offset=-253.33333f;a->w130=a->b1d2=1;}else a->w130=a->b1d2=zero;}
  else{if(((float *)&dat_0c2d9260)[38]+160>a->f52)a->w130=a->b1d2=zero;else{offset=-253.33333f;a->w130=a->b1d2=1;}}
  a->f92=(other->f52+offset-a->f52)/48.0f;a->f104=0;a->f96=(a->f56-a->f41c)/48.0f+19.2857132f;a->f108=-0.80357140303f;a->s28=24;
 }
 return;
follow:
 {
  func_0c03edcc(a,other);
  if(a->b141&1){a->b141=zero;other->p1b4=a;other->b1a1=62;func_0c04b02a(a);func_0c034946(other,1);func_0c04c010(other,a,1);p.x=-53.3333321f;p.y=34.2857132f;func_0c1cea66(a,&p,3);}
 }
}
void func_0c0d13d4(struct Actor *a){a->b3f8=2;a->b328=5;a->b1ea=1;a->b1ed=2;table_0c248318[a->b7](a,a->p1c8);}
