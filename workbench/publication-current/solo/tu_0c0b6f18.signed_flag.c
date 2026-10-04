#include "objects.h"
extern void (*table_0c24507c[])(struct Actor *),(*table_0c245084[])(struct Actor *),(*table_0c245098[])(struct Actor *);
extern int func_0c03916c(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *),func_0c02a39a(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern struct LinkedActor *func_0c1a72d4(struct Actor *,unsigned char);
void func_0c0b6fa0(struct Actor *);
void func_0c0b6f18(struct Actor *a){table_0c24507c[a->b6](a);}
void func_0c0b6f2a(struct Actor *a){a->b6++;table_0c245084[a->b32](a);}
void func_0c0b6f44(struct Actor *a){table_0c245098[a->b7](a);}
void func_0c0b6f56(struct Actor *a)
{
 int zero=0;
 a->b7++;func_0c02a39a(a,0);
 a->f92=0;a->f96=0;a->f104=0;a->f108=0;
 a->f56=a->f41c;a->b1fc=zero;a->b1f9=zero;func_0c02a0c4(a,19,zero);
 func_0c0b6fa0(a);
}
void func_0c0b6fa0(struct Actor *a)
{
 if(func_0c03916c(a)){func_0c0437b8(a);return;}
 func_0c02a026(a);if(a->b141){a->b7++;func_0c1a72d4(a,3);}
}
void func_0c0b6fde(struct Actor *a)
{
 if(func_0c03916c(a)){func_0c0437b8(a);return;}
 func_0c02a026(a);if((signed char)a->b140>=1){a->b7++;func_0c1a72d4(a,16);}
}
void func_0c0b701e(struct Actor *a)
{
 if(func_0c03916c(a)){func_0c0437b8(a);return;}
 func_0c02a026(a);
}
