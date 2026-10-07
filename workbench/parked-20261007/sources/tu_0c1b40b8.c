#include "objects.h"
#define A(a) ((struct Actor *)(a))
extern struct LinkedActor *func_0c0374da(struct LinkedActor *,int,int);
extern void func_0c02a18c(struct LinkedActor *,int,int),func_0c037688(struct LinkedActor *),func_0c1b3ec4(struct LinkedActor *);
extern char func_0c02a026(struct LinkedActor *);
void func_0c1b40b8(struct LinkedActor *a,struct LinkedActor *owner)
{
 struct LinkedActor *c;
 char flag;
 if(!a->b4){
  a->b4++;a->sdc.b141=0;a->b5=0;
  a->sdc=owner->sdc;a->sdc.b12c=1;
  a->b2=owner->b2;a->b1=owner->b1;a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;
  a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;a->v80=owner->v80;
  a->b36=owner->b36;a->sdc.b12c=0;a->b49=-1;
 }
 if(a->b5)goto poll;
 if(owner->sdc.w158.bytes[1]!=21)goto close;
 a->f52=owner->f52;a->f56=owner->f56;a->b36=owner->b36;
 flag=owner->sdc.b141;
 if(!(flag&0x80))return;
 flag&=127;
 if(!flag)goto next;
 if(a->sdc.b141==flag)return;
 a->sdc.b12c=1;func_0c02a18c(a,23,3);
 if(!A(a)->b140)return;
 A(a)->b140=0;
 if((c=func_0c0374da(a,3,2))==0)return;
 c->p16=func_0c1b3ec4;c->b32=3;c->b33=0;c->p24=owner;c->b1=owner->b1;c->f52=owner->f52;c->f56=owner->f56;c->w38=0x2900;
 return;
next:
 a->b5++;
poll:
 if(func_0c02a026(a)>=0)return;
close:
 func_0c037688(a);
}
