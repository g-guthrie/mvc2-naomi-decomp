/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern unsigned int dat_0c2488ac[];
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *);
extern unsigned char func_0c047068(struct Actor *,unsigned char *,unsigned char *),func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c046dd0(struct Actor *,int);
extern int func_0c046d54(struct Actor *);
extern void func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *),func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int);
extern unsigned char dat_0c24d450[],dat_0c24d45e[],dat_0c24d46c[],dat_0c24d47c[],dat_0c24d48c[],dat_0c24d49c[];
extern unsigned int dat_0c24d4b0[];
unsigned char func_0c120dde(struct Actor *);
unsigned char func_0c120e4e(struct Actor *);
unsigned char func_0c120e94(struct Actor *);
unsigned char func_0c120eda(struct Actor *);
unsigned char func_0c120f20(struct Actor *);
unsigned char func_0c120f96(struct Actor *);
unsigned char func_0c121056(struct Actor *);
unsigned char func_0c1210a8(struct Actor *);
unsigned char func_0c1210de(struct Actor *);
unsigned char func_0c121114(struct Actor *);
int func_0c120fdc(struct Actor *),func_0c121016(struct Actor *);
extern unsigned char dat_0c23fe1c[],dat_0c23fe2c[],dat_0c24885e[],dat_0c23fe4c[],dat_0c23fe5c[],dat_0c23fe70[],dat_0c23fe80[],dat_0c23fe90[],dat_0c23fea0[];
extern unsigned char func_0c0465cc(struct Actor*),func_0c046b6c(struct Actor*),func_0c0469f4(struct Actor*),func_0c046d3c(struct Actor*),func_0c046dd0(struct Actor*,int),func_0c04608a(struct Actor*,unsigned char*);
extern int func_0c046d54(struct Actor*);
extern unsigned char func_0c047068(struct Actor*,unsigned char*,unsigned char*);
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
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c046dd0(struct Actor *,int);
extern void func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int);
extern unsigned char dat_0c2422fa[],dat_0c24230a[],dat_0c24231a[],dat_0c24232a[],dat_0c24233e[],dat_0c24234e[],dat_0c24887c[];
extern unsigned char dat_0c2422fa[],dat_0c24230a[],dat_0c24231a[],dat_0c24232a[],dat_0c24233e[],dat_0c24234e[],dat_0c24888c[];
extern unsigned char dat_0c2422fa[],dat_0c24230a[],dat_0c24231a[],dat_0c24232a[],dat_0c24233e[],dat_0c24234e[],dat_0c24889c[];
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *),func_0c0462a0(struct Actor *);
extern unsigned char func_0c04608a(struct Actor *,unsigned char *);
extern void func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *);
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c0474f8(struct Actor *,unsigned char *,unsigned char *);
extern unsigned char func_0c046dd0(struct Actor *,int);
extern unsigned char dat_0c24026c[],dat_0c24027c[],dat_0c24028c[],dat_0c24029a[],dat_0c2402aa[],dat_0c2402bc[],dat_0c2402ca[],dat_0c2402dc[];
unsigned char func_0c06461c(struct Actor *),func_0c064696(struct Actor *),func_0c064720(struct Actor *),func_0c064786(struct Actor *),func_0c06480c(struct Actor *),func_0c064872(struct Actor *),func_0c0648d8(struct Actor *),func_0c064946(struct Actor *),func_0c0649ac(struct Actor *),func_0c0649ec(struct Actor *);

void func_0c0d6d68(struct Actor *a)
{
    register unsigned int i;
    register unsigned int limit = 112;
    register unsigned int *out = *((unsigned int **)((char *)a + 0x428));
    register unsigned int *in = dat_0c2488ac;
    i = 0;
copy_next:
    *(unsigned int *)((char *)out + i) = *(unsigned int *)((char *)in + i);
    i += 4;
    if (i < limit) goto copy_next;
}

void func_0c0d6d84(struct Actor *a)
{
 if(func_0c0465cc(a))return;
 if(func_0c046b6c(a))return;
 if(func_0c0469f4(a))return;
 if(func_0c046d3c(a))return;
 if(func_0c120e94(a))return;
 if(func_0c120eda(a))return;
 if(func_0c120f20(a))return;
 if(func_0c120dde(a))return;
 if(func_0c120e4e(a))return;
 if(func_0c120f96(a))return;
 if(func_0c120fdc(a))return;
 if(func_0c121016(a))return;
 func_0c045f1c(a);func_0c0463fc(a);
}

/* func_0c0d6e1a: no verified twin. Ghidra draft:
*/
void func_0c0d6e1a(void) { }

/* func_0c0d6e78: no verified twin. Ghidra draft:
*/
void func_0c0d6e78(void) { }

unsigned char func_0c0d6ea4(struct Actor*a){if(!func_0c047068(a,dat_0c24885e,a->x37c))return 0;func_0c047aac(a,a->x37c);a->b5=0;a->b7=0;a->b6=0;a->b1e9=1;func_0c045248(a,21);return 1;}

/* func_0c0d6eea: no verified twin. Ghidra draft:
*/
void func_0c0d6eea(void) { }

unsigned char func_0c0d6f48(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c24887c,a->x39c))goto fail;
 if(!*a->p40c){fail:return 0;}
 func_0c047aac(a,a->x39c);a->b5=0;a->b6=0;a->b7=0;a->b1e9=2;func_0c045248(a,29);return 1;
}

unsigned char func_0c0d6fc4(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c24888c,a->x39c))goto fail;
 if(!*a->p40c){fail:return 0;}
 func_0c047aac(a,a->x39c);a->b5=0;a->b6=0;a->b7=0;a->b1e9=4;func_0c045248(a,29);return 1;
}

unsigned char func_0c0d7014(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c24889c,a->x39c))goto fail;
 if(!*a->p40c){fail:return 0;}
 func_0c047aac(a,a->x39c);a->b5=0;a->b6=0;a->b7=0;a->b1e9=3;func_0c045248(a,29);return 1;
}

unsigned char func_0c0d7064(struct Actor *a)
{
 if(!func_0c046d54(a))goto fail;
 if(!*a->p40c){fail:return 0;}
 a->b1e9=11;a->b5=0;
 func_0c045248(a,29);
 a->b6=a->b7=0;
 return 1;
}

unsigned char func_0c0d70a4(struct Actor *a)
{
    if (!func_0c046dd0(a, 7)) return 0;
    a->b1e9 = 7;
    a->b5 = 0;
    func_0c045248(a, 21);
    a->b6 = a->b7 = 0;
    return 1;
}
