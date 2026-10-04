/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern unsigned int dat_0c24775c[];
extern unsigned char dat_0c24cc64[],dat_0c24cc74[],dat_0c24cc84[],dat_0c24cc94[],dat_0c24cca4[],dat_0c24ccb4[],dat_0c24ccc4[],dat_0c24ccd4[],dat_0c24cce4[];
extern void (*table_0c24ccf4[])(struct Actor *);
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *),func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c046dd0(struct Actor *,int);
extern int func_0c046d54(struct Actor *);
extern void func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *),func_0c045248(struct Actor *,int),func_0c047aac(struct Actor *,unsigned char *);
unsigned char func_0c119520(struct Actor *),func_0c119586(struct Actor *),func_0c1195cc(struct Actor *),func_0c119648(struct Actor *),func_0c119696(struct Actor *),func_0c119706(struct Actor *),func_0c119778(struct Actor *),func_0c1197e2(struct Actor *),func_0c119842(struct Actor *),func_0c1198f0(struct Actor *);
int func_0c1198b0(struct Actor *),func_0c119928(struct Actor *),func_0c119960(struct Actor *);
extern unsigned char dat_0c23fe1c[],dat_0c23fe2c[],dat_0c23fe3c[],dat_0c23fe4c[],dat_0c23fe5c[],dat_0c246e1c[],dat_0c23fe80[],dat_0c23fe90[],dat_0c23fea0[];
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
extern unsigned char dat_0c23fe1c[],dat_0c23fe2c[],dat_0c23fe3c[],dat_0c23fe4c[],dat_0c23fe5c[],dat_0c246e2c[],dat_0c23fe80[],dat_0c23fe90[],dat_0c23fea0[];
extern unsigned char dat_0c23fe1c[],dat_0c23fe2c[],dat_0c23fe3c[],dat_0c23fe4c[],dat_0c23fe5c[],dat_0c23fe70[],dat_0c23fe80[],dat_0c23fe90[],dat_0c23fea0[];
extern void func_0c025900(struct Actor *, char, char);
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *);
extern unsigned char func_0c046e7e(struct Actor *, unsigned char *, unsigned char *);
extern unsigned char dat_0c23f24c[], dat_0c23f25c[], dat_0c23f26c[];
extern void (*table_0c23f44c[])(struct Actor *);
extern void func_0c03edcc(struct Actor *, struct Actor *);
extern void func_0c045248(struct Actor *, int);
int func_0c054cee(struct Actor *);
int func_0c054d58(struct Actor *);
int func_0c054d8e(struct Actor *);
extern unsigned char dat_0c23f24c[], dat_0c246e0c[], dat_0c23f26c[];
extern unsigned char dat_0c23fe1c[],dat_0c23fe2c[],dat_0c23fe3c[],dat_0c23fe4c[],dat_0c23fe5c[],dat_0c23fe70[],dat_0c23fe80[],dat_0c246e1c[],dat_0c23fea0[];
extern unsigned char dat_0c23f24c[], dat_0c246e2c[], dat_0c23f26c[];
struct Obj_0c03f15c {
    unsigned char pad0[6];
    unsigned char b6;
    unsigned char pad1[52 - 7];
    float f52, f56, f60;
    unsigned char pad2[92 - 64];
    float f92, f96, f100, f104, f108;
    unsigned char pad3[0x1dc - 112];
    char b1dc;
    unsigned char pad4[0x1ed - 0x1dd];
    unsigned char b1ed;
    unsigned char pad5[0x233 - 0x1ee];
    unsigned char b233;
    unsigned char pad6[0x238 - 0x234];
    char b238;
};
typedef void (*handler_0c03f15c)(struct Obj_0c03f15c *);
extern handler_0c03f15c dat_0c2477d4[];
extern handler_0c03f15c dat_0c23bbe8[];
extern unsigned char dat_0c2f8338;
extern void func_0c0491a4(struct Obj_0c03f15c *);
extern char func_0c02a026(struct Obj_0c03f15c *);
extern void func_0c0437b8(struct Obj_0c03f15c *);
extern void func_0c042960(struct Obj_0c03f15c *);
extern handler_0c03f15c dat_0c2477e4[];

void func_0c0c50d0(struct Actor *a)
{
    register unsigned int i;
    register unsigned int limit = 112;
    register unsigned int *out = *((unsigned int **)((char *)a + 0x428));
    register unsigned int *in = dat_0c24775c;
    i = 0;
copy_next:
    *(unsigned int *)((char *)out + i) = *(unsigned int *)((char *)in + i);
    i += 4;
    if (i < limit) goto copy_next;
}

void func_0c0c50ec(struct Actor *a)
{
 if(func_0c0465cc(a))return;
 if(func_0c046b6c(a))return;
 if(func_0c0469f4(a))return;
 if(func_0c046d3c(a))return;
 if(func_0c119520(a))return;
 if(func_0c119586(a))return;
 if(func_0c1195cc(a))return;
 if(func_0c119696(a))return;
 if(func_0c119648(a))return;
 if(func_0c119778(a))return;
 if(func_0c119706(a))return;
 if(func_0c1197e2(a))return;
 if(func_0c119842(a))return;
 if(func_0c1198b0(a))return;
 if(func_0c1198f0(a))return;
 func_0c045f1c(a);func_0c0463fc(a);
}

/* func_0c0c51c0: no verified twin. Ghidra draft:
*/
void func_0c0c51c0(void) { }

/* func_0c0c5228: no verified twin. Ghidra draft:
*/
void func_0c0c5228(void) { }

/* func_0c0c52cc: no verified twin. Ghidra draft:
*/
void func_0c0c52cc(void) { }

unsigned char func_0c0c5334(struct Actor*a){if(!func_0c046e7e(a,dat_0c246e1c,a->x394))return 0;else if(!*a->p40c)return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=4;func_0c045248(a,29);return 1;}

unsigned char func_0c0c537a(struct Actor*a){if(!func_0c046e7e(a,dat_0c246e2c,a->x394))return 0;else if(!*a->p40c)return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=5;func_0c045248(a,29);return 1;}

/* func_0c0c53e4: no verified twin. Ghidra draft:
*/
void func_0c0c53e4(void) { }

/* func_0c0c5488: no verified twin. Ghidra draft:
*/
void func_0c0c5488(void) { }

/* func_0c0c54d4: no verified twin. Ghidra draft:
*/
void func_0c0c54d4(void) { }

/* func_0c0c551a: no verified twin. Ghidra draft:
*/
void func_0c0c551a(void) { }

/* func_0c0c5584: no verified twin. Ghidra draft:
*/
void func_0c0c5584(void) { }

/* func_0c0c5600: no verified twin. Ghidra draft:
*/
void func_0c0c5600(void) { }

/* func_0c0c5612: no verified twin. Ghidra draft:
*/
void func_0c0c5612(void) { }

unsigned char func_0c0c5650(struct Actor*a){if(!func_0c046dd0(a,3))return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=3;func_0c045248(a,21);return 1;}

int func_0c0c5688(struct Actor *a)
{
    if (func_0c054d8e(a) || func_0c054cee(a) || func_0c054d58(a))
        return 1;
    return 0;
}

int func_0c0c56b4(struct Actor *a)
{
    if (!func_0c046e7e(a, dat_0c246e0c, (unsigned char *)a + 0x394))
        return 0;
    else if (!*a->p40c)
        return 0;
    a->b258 = 7;
    return 1;
}

int func_0c0c56ea(struct Actor*a){if(!func_0c046e7e(a,dat_0c246e1c,a->x3a4))return 0;else if(!*a->p40c)return 0;a->b32=0;a->b258=6;return 1;}

/* func_0c0c5738: no verified twin. Ghidra draft:
*/
void func_0c0c5738(void) { }

int func_0c0c5746(struct Actor *a)
{
    if (!func_0c046e7e(a, dat_0c246e2c, (unsigned char *)a + 0x394))
        return 0;
    else if (!*a->p40c)
        return 0;
    a->b258 = 5;
    return 1;
}

/* func_0c0c577c: no verified twin. Ghidra draft:
*/
void func_0c0c577c(void) { }

void func_0c0c57d2(struct Obj_0c03f15c *p)
{
    dat_0c2477d4[p->b233](p);
}

/* func_0c0c57e6: no verified twin. Ghidra draft:
*/
void func_0c0c57e6(void) { }

/* func_0c0c585c: no verified twin. Ghidra draft:
*/
void func_0c0c585c(void) { }

/* func_0c0c5984: no verified twin. Ghidra draft:
*/
void func_0c0c5984(void) { }

/* func_0c0c5ac0: no verified twin. Ghidra draft:
*/
void func_0c0c5ac0(void) { }

/* func_0c0c5b46: no verified twin. Ghidra draft:
*/
void func_0c0c5b46(void) { }

/* func_0c0c5bcc: no verified twin. Ghidra draft:
*/
void func_0c0c5bcc(void) { }

/* func_0c0c5cec: no verified twin. Ghidra draft:
*/
void func_0c0c5cec(void) { }

void func_0c0c5dce(struct Obj_0c03f15c *p)
{
    dat_0c2477e4[p->b233](p);
}
