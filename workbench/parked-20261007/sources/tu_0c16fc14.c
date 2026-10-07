#include "objects.h"
#define A(a) ((struct Actor *)(a))
extern struct OffsetXY16 table_0c252670[];
extern void (*table_0c252784[])(struct LinkedActor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c02a0c4(struct LinkedActor *,int,int),func_0c037d0c(struct LinkedActor *);
void func_0c16fc14(struct LinkedActor *a,struct LinkedActor *owner,struct ActorSub2a4 *state)
{
 struct OffsetXY16 *offset;
 float dx,dy;
 a->sdc=owner->sdc;a->sdc.b12c=1;
 a->b2=owner->b2;a->b1=owner->b1;a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;
 a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;a->v80=owner->v80;
 a->b36=owner->b36;a->b4++;a->b36=0;
 if(owner->b5||owner->b1d0!=21||A(owner)->b1e9||A(owner)->b19f)state->b3=-1;
 a->pad11[0]=66;a->pad11[1]=66;A(a)->b1a1=48;A(a)->w1ac=0;A(a)->b19e=0;*(unsigned int *)&A(a)->p1c4=0;dat_0c2f83f8->arr[a->b2]++;
 a->s30=a->b32*2;
 offset=&table_0c252670[a->s30];
 dx=-90.0f;dy=147.857132f;a->s28=1;
 if(a->sdc.w130){dx=90.0f;a->s28=-1;}
 a->f52=owner->f52+dx+offset->x*1.66666663f;
 a->f56=owner->f56+dy+offset->y*2.1428571f;
 func_0c037d0c(a);
 func_0c02a0c4(a,23,3);
}
void func_0c16fd44(struct LinkedActor *a){table_0c252784[(unsigned char)a->b5](a);}
