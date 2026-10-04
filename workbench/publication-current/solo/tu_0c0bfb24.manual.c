#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c03489c(struct Actor *),func_0c0437b8(struct Actor *),func_0c0438de(struct Actor *),func_0c03edcc(struct Actor *,struct Actor *);
void func_0c0bfb24(struct Actor *a)
{
 if(func_0c02a026(a)>=0){if(a->b141){struct Actor *other;a->b141=0;other=a->p1c8;other->p1b4=a;other->b1f6=2;other->b1a1=32;func_0c03489c(a);}}
 else func_0c0437b8(a);
}
void func_0c0bfb6e(struct Actor *a)
{
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(func_0c02a026(a)<0){func_0c0438de(a);return;}
 if(a->b141){struct Actor *other;a->b141=0;other=a->p1c8;other->p1b4=a;other->b1f6=1;other->b1a1=33;}
 if(!(a->f56>a->f41c)){a->f92=0;a->f96=0;a->f104=0;a->f108=0;if(!((unsigned char *)&a->w150)[0])func_0c0437b8(a);}
}
void func_0c0bfc18(struct Actor *a){if((a->b1f7&63)!=2)func_0c03edcc(a->p1c8,a);}
