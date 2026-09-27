#include "objects.h"
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *);
extern unsigned char dat_0c240c10[],dat_0c240c20[];
extern void func_0c045248(struct Actor *,int);
unsigned char func_0c06d6e8(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c240c10,a->x374)||!*a->p40c)goto fail;
 if(a->b1f9==2 && !a->b1fc){if(a->b1d4){fail:return 0;}a->b1d4++;}
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=2;
 func_0c045248(a,29);return 1;
}

unsigned char func_0c06d74e(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c240c20,a->x36c)||!*a->p40c)goto fail;
 if(a->b1f9==2 && !a->b1fc){if(a->b1d4){fail:return 0;}a->b1d4++;}
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=1;
 func_0c045248(a,29);return 1;
}
