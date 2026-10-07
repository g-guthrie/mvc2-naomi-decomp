/* Candidate: the rounded >>12 of the 0x3000 strength bits keeps the shift count in r3 and the row pointer in r2 (retail r2/r1); 32 bytes differ. */
#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0344a0(struct Actor *,int);
extern void func_0c02a0c4(struct Actor *,int,int);
extern int dat_0c23ff58[][4];
void func_0c060958(struct Actor *a)
{
 struct ActorSub2a4 *sub=&a->sub2a4;
 unsigned short input;
 int strength;
 int *speed;
 if(func_0c02a026(a)>=0)return;
 a->b6++;
 ((struct ActorSubMoveBytes *)sub)->b28=1;
 func_0c0344a0(a,31);
 a->s28=32;
 input=a->w34a;
 if(a->b525)input=sub->s10;
 strength=input&0x3000;if(strength<0)strength+=0xfff;strength>>=12;
 speed=dat_0c23ff58[(unsigned short)strength];
 a->f92=speed[0]*1.66666663f/65536.0f;
 a->f104=speed[1]*1.66666663f/65536.0f;
 a->f96=speed[2]*2.1428571f/65536.0f;
 a->f108=speed[3]*2.1428571f/65536.0f;
 if(a->w130){a->f92=-a->f92;a->f104=-a->f104;}
 func_0c02a0c4(a,2,strength+5);
}
