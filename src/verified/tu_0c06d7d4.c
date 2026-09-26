#include "objects.h"
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *);
extern unsigned char func_0c047068(struct Actor *,unsigned char *,unsigned char *);
extern void func_0c047aac(struct Actor *,unsigned char *);
extern void func_0c045248(struct Actor *,int);
extern struct Actor *func_0c037d54(struct Actor *);
extern void func_0c044450(struct Actor *,struct Actor *);
extern int func_0c046d54(struct Actor *);
extern unsigned char dat_0c240c30[],dat_0c240c60[],dat_0c240c8c[],dat_0c240c70[],dat_0c240c7e[],dat_0c240c40[],dat_0c240c50[];
int func_0c06d7d4(struct Actor *a)
{
 int zero;
 if(!func_0c046e7e(a,dat_0c240c30,a->x364))goto fail;
 if(a->b1f9==2 && !a->b1fc){
 if(a->b1d4){fail:return 0;}
 a->b1d4++;
 }
 func_0c047aac(a,a->x364);
 zero=0;
 a->b5=zero;a->b7=zero;a->b6=zero;a->b1e9=zero;
 func_0c045248(a,21);
 return 1;
}
int func_0c06d83c(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c240c60,a->x37c))return 0;
 func_0c047aac(a,a->x37c);
 a->b1e9=3;
 a->b5=0;
 func_0c045248(a,21);
 a->b6=a->b7=0;
 return 1;
}
int func_0c06d884(struct Actor *a)
{
 struct Actor *target;
 if(!func_0c046e7e(a,dat_0c240c8c,a->x3a4))goto fail;
 if(!(target=func_0c037d54(a))){fail:return 0;}
 a->b1f7=67;
 func_0c044450(a,target);
 return 1;
}
int func_0c06d8c2(struct Actor *a)
{
 if(!func_0c047068(a,dat_0c240c70,a->x384))return 0;
 a->b1e9=4;
 a->b5=0;
 func_0c045248(a,21);
 a->b6=a->b7=0;
 return 1;
}
int func_0c06d93c(struct Actor *a)
{
 if(!func_0c047068(a,dat_0c240c7e,a->x394))return 0;
 a->b1e9=9;
 a->b5=0;
 func_0c045248(a,21);
 a->b6=a->b7=0;
 return 1;
}
int func_0c06d97a(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c240c40,a->x38c))return 0;
 func_0c047aac(a,a->x38c);
 a->b5=0;a->b7=0;a->b6=0;
 a->b1e9=8;
 func_0c045248(a,21);
 return 1;
}
int func_0c06d9c0(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c240c50,a->x39c))return 0;
 func_0c047aac(a,a->x39c);
 a->b1e9=7;
 a->b5=0;
 func_0c045248(a,21);
 a->b6=a->b7=0;
 return 1;
}
int func_0c06da08(struct Actor *a)
{
 if(!func_0c046d54(a))goto fail;
 if(!*a->p40c){fail:return 0;}
 a->b1e9=12;a->b5=0;
 func_0c045248(a,29);
 a->b6=a->b7=0;
 return 1;
}
