/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern unsigned int dat_0c2433d4[];
extern unsigned char dat_0c23fe1c[],dat_0c23fe2c[],dat_0c243380[],dat_0c23fe4c[],dat_0c23fe5c[],dat_0c23fe70[],dat_0c23fe80[],dat_0c23fe90[],dat_0c23fea0[];
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
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *);
extern void func_0c047aac(struct Actor *,unsigned char *);
extern void func_0c045248(struct Actor *,int);
extern struct Actor *func_0c037d54(struct Actor *);
extern void func_0c044450(struct Actor *,struct Actor *);
extern int func_0c046d54(struct Actor *);
extern unsigned char dat_0c240c30[],dat_0c240c60[],dat_0c240c8c[],dat_0c243370[],dat_0c240c7e[],dat_0c240c40[],dat_0c240c50[];
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *),func_0c0462a0(struct Actor *);
extern unsigned char func_0c04608a(struct Actor *,unsigned char *);
extern void func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *);
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c0474f8(struct Actor *,unsigned char *,unsigned char *);
extern void func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int);
extern unsigned char func_0c046dd0(struct Actor *,int);
extern unsigned char dat_0c24026c[],dat_0c24027c[],dat_0c24028c[],dat_0c24029a[],dat_0c2402aa[],dat_0c2402bc[],dat_0c2402ca[],dat_0c2402dc[];
unsigned char func_0c06461c(struct Actor *),func_0c064696(struct Actor *),func_0c064720(struct Actor *),func_0c064786(struct Actor *),func_0c06480c(struct Actor *),func_0c064872(struct Actor *),func_0c0648d8(struct Actor *),func_0c064946(struct Actor *),func_0c0649ac(struct Actor *),func_0c0649ec(struct Actor *);

void func_0c098d54(struct Actor *a)
{
    register unsigned int i;
    register unsigned int limit = 112;
    register unsigned int *out = *((unsigned int **)((char *)a + 0x428));
    register unsigned int *in = dat_0c2433d4;
    i = 0;
copy_next:
    *(unsigned int *)((char *)out + i) = *(unsigned int *)((char *)in + i);
    i += 4;
    if (i < limit) goto copy_next;
}

/* func_0c098d70: no verified twin. Ghidra draft:
*/
void func_0c098d70(void) { }

/* func_0c098e44: no verified twin. Ghidra draft:
*/
void func_0c098e44(void) { }

/* func_0c098ea2: no verified twin. Ghidra draft:
*/
void func_0c098ea2(void) { }

/* func_0c098efe: no verified twin. Ghidra draft:
*/
void func_0c098efe(void) { }

unsigned char func_0c098f7c(struct Actor*a){if(!func_0c046e7e(a,dat_0c243380,a->x37c))return 0;func_0c047aac(a,a->x37c);a->b5=0;a->b7=0;a->b6=0;a->b1e9=3;func_0c045248(a,21);return 1;}

/* func_0c098fc2: no verified twin. Ghidra draft:
*/
void func_0c098fc2(void) { }

int func_0c09906e(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c243370,a->x384))return 0;
 a->b1e9=4;
 a->b5=0;
 func_0c045248(a,21);
 a->b6=a->b7=0;
 return 1;
}

/* func_0c0990b8: no verified twin. Ghidra draft:
*/
void func_0c0990b8(void) { }

/* func_0c0990e0: no verified twin. Ghidra draft:
*/
void func_0c0990e0(void) { }

/* func_0c09917e: no verified twin. Ghidra draft:
*/
void func_0c09917e(void) { }

/* func_0c0991d4: no verified twin. Ghidra draft:
*/
void func_0c0991d4(void) { }

/* func_0c099200: no verified twin. Ghidra draft:
*/
void func_0c099200(void) { }

unsigned char func_0c099266(struct Actor *a)
{
 if(!func_0c046d54(a))goto fail;
 if(!*a->p40c){fail:return 0;}
 a->b1e9=11;a->b5=0;
 func_0c045248(a,29);
 a->b6=a->b7=0;
 return 1;
}

unsigned char func_0c0992a6(struct Actor *a)
{
    if (!func_0c046dd0(a, 10)) return 0;
    a->b1e9 = 10;
    a->b5 = 0;
    func_0c045248(a, 21);
    a->b6 = a->b7 = 0;
    return 1;
}
