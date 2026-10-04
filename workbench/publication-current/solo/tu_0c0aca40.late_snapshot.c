#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c03edcc(struct Actor *,struct Actor *),func_0c02a0c4(struct Actor *,int,int);
void func_0c0aca40(struct Actor *a)
{
 struct LinkedActorVec3 position;struct LinkedActorVec3 *saved;register struct Actor *child;
 a->b6++;func_0c02a026(a);saved=&position;a->b140=0;a->s28=24;a->p1c8=a->p1b0;child=a->p1c8;
 *saved=*(struct LinkedActorVec3 *)((char *)child+52);func_0c03edcc(a,child);
 child->f92=(child->f52-saved->x)/24.0f;child->f104=0.0f;child->f108=-1.07142854f;
 child->f96=(child->f56-saved->y)/24.0f-child->f108*24.0f/2.0f;
 *(struct LinkedActorVec3 *)((char *)child+52)=*saved;
 *(short *)&child->pad6b[0]=0;*(short *)&child->pad6b[2]=102;
}
void func_0c0acae4(struct Actor *a)
{
 struct Actor *child=a->p1c8;
 child->i72+=0x2000;child->f80-=0.04166667f;child->f84-=0.04166667f;
 a->p1c8->f52+=a->p1c8->f92;a->p1c8->f92+=a->p1c8->f104;a->p1c8->f56+=a->p1c8->f96;a->p1c8->f96+=a->p1c8->f108;
 func_0c02a026(a);
 if(--a->s28<=0){a->b6++;child->b12c=0;*(unsigned char *)&child->b149=255;func_0c02a0c4(a,21,15);}
}
