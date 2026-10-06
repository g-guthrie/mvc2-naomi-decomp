/* Unverified complete 348-byte family: 345 bytes equal. Three FPR allocation bytes remain in func_0c1ad66a. */
#include "objects.h"
extern void func_0c02a0c4(struct Actor *,int,int);
extern char func_0c02a026(struct Actor *);
void func_0c1ad5bc(struct Actor *a,struct Actor *owner)
{
 struct ActorSub2a4 *state=&owner->sub2a4;
 if(!((unsigned char *)state)[11]){
 a->b7=5;a->b0=1;a->b12c=1;a->s28=32;func_0c02a0c4(a,25,17);return;
 }
 if(!((unsigned char *)state)[10]){a->b7++;a->b0=0;a->b12c=0;return;}
 a->f52+=(owner->f52-a->f52)/8.0f;
 a->f56+=(owner->f56-a->f56)/8.0f;
}
void func_0c1ad62c(struct Actor *a,struct Actor *owner)
{
 struct ActorSub2a4 *state=&owner->sub2a4;
 if(!((unsigned char *)state)[11] || ((unsigned char *)state)[10]){
 a->w130=owner->w130;a->f52=owner->f52;a->f56=owner->f56;
 a->b7=5;a->b0=1;a->b12c=1;a->s28=32;func_0c02a0c4(a,25,17);
 }
}
void func_0c1ad66a(struct Actor *a,struct Actor *owner)
{
 float offset;
 if(--a->s28==0){a->b7++;a->f56=owner->f41c;func_0c02a026(a);return;}
 if(!a->w130)offset=80.0f;else offset=-80.0f;
 offset+=owner->f52;
 a->f52+=(offset-a->f52)/8.0f;
 a->f56+=(owner->f41c-a->f56)/8.0f;
}
void func_0c1ad6d0(struct Actor *a)
{
 func_0c02a026(a);
 if(a->b141){a->b7++;a->w130^=1;}
}
