#include "objects.h"
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *),func_0c0462a0(struct Actor *);
extern unsigned char func_0c04608a(struct Actor *,unsigned char *);
extern void func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *);
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c0474f8(struct Actor *,unsigned char *,unsigned char *);
extern void func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int);
extern int func_0c046d54(struct Actor *);
extern unsigned char func_0c046dd0(struct Actor *,int);
extern unsigned char dat_0c24026c[],dat_0c24027c[],dat_0c24028c[],dat_0c24029a[],dat_0c2402aa[],dat_0c2402bc[],dat_0c2402ca[],dat_0c2402dc[];
unsigned char func_0c06461c(struct Actor *),func_0c064696(struct Actor *),func_0c064720(struct Actor *),func_0c064786(struct Actor *),func_0c06480c(struct Actor *),func_0c064872(struct Actor *),func_0c0648d8(struct Actor *),func_0c064946(struct Actor *),func_0c0649ac(struct Actor *),func_0c0649ec(struct Actor *);

extern unsigned char func_0c047068(struct Actor *,unsigned char *,unsigned char *);
extern unsigned char dat_0c2405b0[];
unsigned char func_0c0681b4(struct Actor *a)
{
 struct ActorSub2a4 *context=&a->sub2a4;
 if(!func_0c047068(a,dat_0c2405b0,a->x364))goto fail;
 if(a->b1f9==2&&!context->b1)goto fail;
 if(!context->b1)a->b1e9=15;
 else{if(context->b2){fail:return 0;}a->b1e9=16;}
 func_0c047aac(a,a->x364);
 a->b5=0;a->b7=0;a->b6=0;
 func_0c045248(a,21);
 return 1;
}

unsigned char func_0c06821e(struct Actor *a)
{
 if(!func_0c046d54(a))goto fail;
 if(!*a->p40c){fail:return 0;}
 a->b1e9=22;a->b5=0;
 func_0c045248(a,29);
 a->b6=a->b7=0;
 return 1;
}

unsigned char func_0c06825e(struct Actor *a)
{
    if (!func_0c046dd0(a, 17)) return 0;
    a->b1e9 = 17;
    a->b5 = 0;
    func_0c045248(a, 21);
    a->b6 = a->b7 = 0;
    return 1;
}
