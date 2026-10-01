#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void (*table_0c25290c[])(struct LinkedActor *,struct LinkedActor *),(*table_0c252914[])(struct LinkedActor *,struct LinkedActor *);
void func_0c171ec2(struct LinkedActor *);
struct LinkedActor *func_0c171e0c(struct LinkedActor *owner,unsigned char mode,unsigned char value)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,1,0))){a->p16=func_0c171ec2;a->w38=0x2e04;a->p24=owner;a->b1=owner->b1;*(&a->b32)=mode;*(&a->b33)=value;}
 return a;
}
struct LinkedActor *func_0c171e5a(struct LinkedActor *owner,unsigned char mode,unsigned char value,short speed,unsigned char duration)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,1,1))){a->p16=func_0c171ec2;a->w38=0x2e04;a->p24=owner->p24;a->b1=owner->b1;a->p20=owner;*(&a->b32)=mode;a->b33=value;((struct Actor *)a)->f92=speed;a->s30=duration;}
 return a;
}
void func_0c171ec2(struct LinkedActor *a){table_0c25290c[a->b32](a,a->p24);}
void func_0c171ed8(struct LinkedActor *a,struct LinkedActor *owner){table_0c252914[a->b4](a,owner);}
