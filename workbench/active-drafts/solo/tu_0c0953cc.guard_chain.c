/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern unsigned int dat_0c243024[];
extern unsigned char dat_0c242fd4[],dat_0c242ff4[];
extern unsigned char dat_0c23fe1c[],dat_0c23fe2c[],dat_0c242fe4[],dat_0c23fe4c[],dat_0c23fe5c[],dat_0c23fe70[],dat_0c23fe80[],dat_0c23fe90[],dat_0c23fea0[];
extern unsigned char func_0c0465cc(struct Actor*),func_0c046b6c(struct Actor*),func_0c0469f4(struct Actor*),func_0c046d3c(struct Actor*),func_0c046dd0(struct Actor*,int),func_0c04608a(struct Actor*,unsigned char*);
extern int func_0c046d54(struct Actor*);
extern unsigned char func_0c046e7e(struct Actor*,unsigned char*,unsigned char*);
extern void func_0c047aac(struct Actor*,unsigned char*),func_0c045248(struct Actor*,int),func_0c045f1c(struct Actor*),func_0c0463fc(struct Actor*);
unsigned char func_0c05f3b8(struct Actor*);
unsigned char func_0c05f416(struct Actor*);
unsigned char func_0c05f490(struct Actor*);
unsigned char func_0c05f504(struct Actor*);
unsigned char func_0c05f580(struct Actor*);
unsigned char func_0c05f5c6(struct Actor*);
unsigned char func_0c05f638(struct Actor*);
unsigned char func_0c05f67e(struct Actor*);
unsigned char func_0c05f6f2(struct Actor*);
unsigned char func_0c05f790(struct Actor*);
int func_0c05f72a(struct Actor*);
int func_0c05f7ec(struct Actor*);
int func_0c05f822(struct Actor*);
int func_0c05f858(struct Actor*);
extern unsigned char dat_0c23fe1c[],dat_0c23fe2c[],dat_0c23fe3c[],dat_0c23fe4c[],dat_0c23fe5c[],dat_0c243004[],dat_0c23fe80[],dat_0c23fe90[],dat_0c23fea0[];
extern unsigned char dat_0c23fe1c[],dat_0c23fe2c[],dat_0c23fe3c[],dat_0c23fe4c[],dat_0c23fe5c[],dat_0c243014[],dat_0c23fe80[],dat_0c23fe90[],dat_0c23fea0[];
extern unsigned char dat_0c23fe1c[],dat_0c23fe2c[],dat_0c23fe3c[],dat_0c23fe4c[],dat_0c23fe5c[],dat_0c23fe70[],dat_0c23fe80[],dat_0c23fe90[],dat_0c23fea0[];

void func_0c0953cc(struct Actor *a)
{
    register unsigned int i;
    register unsigned int limit = 112;
    register unsigned int *out = *((unsigned int **)((char *)a + 0x428));
    register unsigned int *in = dat_0c243024;
    i = 0;
copy_next:
    *(unsigned int *)((char *)out + i) = *(unsigned int *)((char *)in + i);
    i += 4;
    if (i < limit) goto copy_next;
}

/* func_0c0953e8: no verified twin. Ghidra draft:
*/
unsigned char func_0c0955c8(struct Actor *),func_0c09560e(struct Actor *),func_0c095552(struct Actor *),func_0c09550c(struct Actor *),func_0c0954a4(struct Actor *),func_0c095692(struct Actor *);
int func_0c095654(struct Actor *);
void func_0c0953e8(struct Actor *a)
{
 if(func_0c0465cc(a)||func_0c046b6c(a)||func_0c0469f4(a)||func_0c046d3c(a)||func_0c0955c8(a)||func_0c09560e(a)||func_0c095552(a)||func_0c09550c(a)||func_0c0954a4(a)||func_0c095654(a)||func_0c095692(a))return;
 func_0c04608a(a,a->x3cc);func_0c045f1c(a);func_0c0463fc(a);
}

/* func_0c0954a4: no verified twin. Ghidra draft:
*/
unsigned char func_0c0954a4(struct Actor *a)
{
 int zero;
 if(!func_0c046e7e(a,dat_0c242fd4,a->x364))return 0;
 else if(a->b1f9==2&&!a->b1fc){if(a->b1d4)return 0;a->b1d4++;}
 func_0c047aac(a,a->x364);zero=0;a->b6=a->b7=a->b5=zero;a->b1e9=zero;func_0c045248(a,21);return 1;
}

unsigned char func_0c09550c(struct Actor*a){if(!func_0c046e7e(a,dat_0c242fe4,a->x36c))return 0;func_0c047aac(a,a->x36c);a->b5=0;a->b7=0;a->b6=0;a->b1e9=1;func_0c045248(a,21);return 1;}

/* func_0c095552: no verified twin. Ghidra draft:
*/
unsigned char func_0c095552(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c242ff4,a->x374))return 0;else if(((struct ActorSubCommandPrefix *)&a->sub2a4)->command)return 0;
 func_0c047aac(a,a->x374);a->b6=a->b7=a->b5=0;a->b1e9=2;func_0c045248(a,21);return 1;
}

unsigned char func_0c0955c8(struct Actor*a){if(!func_0c046e7e(a,dat_0c243004,a->x37c))return 0;else if(!*a->p40c)return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=4;func_0c045248(a,29);return 1;}

unsigned char func_0c09560e(struct Actor*a){if(!func_0c046e7e(a,dat_0c243014,a->x384))return 0;else if(!*a->p40c)return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=5;func_0c045248(a,29);return 1;}

/* func_0c095654: no verified twin. Ghidra draft:
*/
int func_0c095654(struct Actor *a)
{
 if(!func_0c046d54(a))return 0;else if(!*a->p40c)return 0;
 a->b1e9=6;a->b6=a->b7=a->b5=0;func_0c045248(a,29);return 1;
}

unsigned char func_0c095692(struct Actor*a){if(!func_0c046dd0(a,3))return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=3;func_0c045248(a,21);return 1;}
