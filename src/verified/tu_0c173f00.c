/* Exact 0x0c173f00..0x0c174060: mirrored allocations, randomized ground adjustment and dispatcher. */
#include "objects.h"
#define A(a) ((struct Actor *)(a))
extern struct LinkedActor *func_0c0374da(int,int,int);
extern int func_0c02849a(void);
extern void (*table_0c252bb0[])(struct LinkedActor *,struct LinkedActor *);
void func_0c174014(struct LinkedActor *);
struct LinkedActor *func_0c173f00(struct LinkedActor *owner)
{
 register int mode;struct LinkedActor *a;
 for(mode=0;mode<4;mode+=2){
 if((a=func_0c0374da(0,1,0))){float dx;a->p16=func_0c174014;a->p24=owner;a->w38=0x2f04;a->b32=mode;dx=-13.33333302f;if(A(owner)->w130)dx=13.33333302f;a->f52=owner->f52+dx;a->f56=A(owner)->f41c+102.85714f;}
 }
 return a;
}
void func_0c173f80(struct LinkedActor *source,struct LinkedActor *owner)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,1,0))){float y,dx;
 a->p16=func_0c174014;a->p24=owner;a->w38=0x2f04;a->b32=source->b32;
 y=source->f56+-34.2857132f;dx=0.0f;
 if(A(owner)->f41c>y){dx=33.3333321f;if(source->b32)dx=-33.3333321f;y=A(owner)->f41c+(unsigned int)(func_0c02849a()&7)*2.1428571f;a->b33=1;}
 a->f52=source->f52+dx;a->f56=y;
 }

}
void func_0c174014(struct LinkedActor *a){table_0c252bb0[a->b4](a,a->p24);}
