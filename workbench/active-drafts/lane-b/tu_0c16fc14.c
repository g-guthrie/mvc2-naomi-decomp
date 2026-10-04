/* UNVERIFIED complete draft; whole linked comparison fails. Do not register or count as decompilation credit.
 * Uses published objects.h at 7c9b572. Actor byte 0x13d, when used, is accessed through its existing pad6bb member. */
#include "objects.h"
#define A(a) ((struct Actor *)(a))
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern short dat_0c252670[];
extern void (*table_0c252784[])(struct LinkedActor *);
extern void func_0c037d0c(struct LinkedActor *),func_0c02a0c4(struct LinkedActor *,int,int);
void func_0c16fc14(struct LinkedActor *a,struct LinkedActor *owner,struct ActorFlags *state)
{
 short *row;float xOffset,yOffset;int forward=1,backward=-1;
 a->sdc=owner->sdc;a->sdc.b12c=forward;
 a->b2=owner->b2;a->b1=owner->b1;a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;
 a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;a->v80=owner->v80;
 a->b36=owner->b36;a->b4++;a->b36=0;
 if(owner->b5 || owner->b1d0!=21 || A(owner)->b1e9 || A(owner)->b19f)state->b3=backward;
 A(a)->b19c=66;A(a)->b19d=66;A(a)->b1a1=48;A(a)->w1ac=0;A(a)->b19e=0;A(a)->p1c4=0;dat_0c2f83f8->arr[a->b2]++;
 a->s30=a->b32*2;row=dat_0c252670+a->s30*2;xOffset=-90.0f;yOffset=147.857132f;
 a->s28=forward;if(a->sdc.w130){xOffset=90.0f;a->s28=backward;}
 a->f52=owner->f52+xOffset+*row++*1.66666663f;
 a->f56=owner->f56+yOffset+*row*2.1428571f;
 func_0c037d0c(a);func_0c02a0c4(a,23,3);
}
void func_0c16fd44(struct LinkedActor *a){table_0c252784[(unsigned char)a->b5](a);}
