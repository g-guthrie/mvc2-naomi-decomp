/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern unsigned int dat_0c2443b0[];
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *),func_0c0462a0(struct Actor *);
extern unsigned char func_0c04608a(struct Actor *,unsigned char *);
extern void func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *);
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c0474f8(struct Actor *,unsigned char *,unsigned char *);
extern void func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int);
extern int func_0c046d54(struct Actor *);
extern unsigned char func_0c046dd0(struct Actor *,int);
extern unsigned char dat_0c24026c[],dat_0c244336[],dat_0c24028c[],dat_0c24029a[],dat_0c2402aa[],dat_0c2402bc[],dat_0c2402ca[],dat_0c2402dc[];
unsigned char func_0c06461c(struct Actor *),func_0c064696(struct Actor *),func_0c064720(struct Actor *),func_0c064786(struct Actor *),func_0c06480c(struct Actor *),func_0c064872(struct Actor *),func_0c0648d8(struct Actor *),func_0c064946(struct Actor *),func_0c0649ac(struct Actor *),func_0c0649ec(struct Actor *);
extern unsigned char dat_0c24026c[],dat_0c244346[],dat_0c24028c[],dat_0c24029a[],dat_0c2402aa[],dat_0c2402bc[],dat_0c2402ca[],dat_0c2402dc[];
extern unsigned char dat_0c24026c[],dat_0c24436a[],dat_0c24028c[],dat_0c24029a[],dat_0c2402aa[],dat_0c2402bc[],dat_0c2402ca[],dat_0c2402dc[];
extern unsigned char dat_0c24026c[],dat_0c24439e[],dat_0c24028c[],dat_0c24029a[],dat_0c2402aa[],dat_0c2402bc[],dat_0c2402ca[],dat_0c2402dc[];
extern unsigned char dat_0c24026c[],dat_0c24027c[],dat_0c24028c[],dat_0c24029a[],dat_0c2402aa[],dat_0c2402bc[],dat_0c2402ca[],dat_0c2402dc[];
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
extern unsigned char dat_0c23f24c[], dat_0c24435a[], dat_0c23f26c[];
extern unsigned char dat_0c23f24c[], dat_0c24437e[], dat_0c23f26c[];
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
extern handler_0c03f15c dat_0c244420[];
extern handler_0c03f15c dat_0c23bbe8[];
extern unsigned char dat_0c2f8338;
extern void func_0c0491a4(struct Obj_0c03f15c *);
extern char func_0c02a026(struct Obj_0c03f15c *);
extern void func_0c0437b8(struct Obj_0c03f15c *);
extern void func_0c042960(struct Obj_0c03f15c *);
extern handler_0c03f15c dat_0c244430[];
struct Rec_ub3_05 { unsigned char pad[28]; int l28; };
struct Obj_ub3_05 {
    unsigned char pad0[5];
    unsigned char b5;
    unsigned char b6;
    unsigned char b7;
    unsigned char pad1[20];
    short s28;
    unsigned char pad2[2];
    unsigned char b32;
    unsigned char pad3[19];
    float f52;
    float f56;
    unsigned char pad4[32];
    float f92;
    float f96;
    unsigned char pad5[4];
    float f104;
    float f108;
    unsigned char pad6[209];
    unsigned char b141;
    unsigned char pad7[144];
    unsigned char b1d2;
    unsigned char pad8[36];
    unsigned char b1f7;
    unsigned char pad9[10];
    unsigned char b202;
};
typedef void (*handler_ub3_05)(struct Obj_ub3_05 *);
extern char func_0c02a026(struct Obj_ub3_05 *);
extern int func_0c037d54(struct Obj_ub3_05 *);
extern void func_0c044450(struct Obj_ub3_05 *, int);
extern void func_0c02a0c4(struct Obj_ub3_05 *, int, int);
extern void func_0c0438de(struct Obj_ub3_05 *);
extern struct Rec_ub3_05 *dat_0c2d6f84;
extern handler_ub3_05 table_0c23f68c[];
extern handler_ub3_05 table_0c23f694[];
extern handler_ub3_05 table_0c23f69c[];
extern handler_ub3_05 table_0c23f6a4[];
extern handler_ub3_05 table_0c23f6ac[];
extern int func_0c03916c(struct Obj_ub3_05 *);

void func_0c0a70f0(struct Actor *a)
{
    register unsigned int i;
    register unsigned int limit = 112;
    register unsigned int *out = *((unsigned int **)((char *)a + 0x428));
    register unsigned int *in = dat_0c2443b0;
    i = 0;
copy_next:
    *(unsigned int *)((char *)out + i) = *(unsigned int *)((char *)in + i);
    i += 4;
    if (i < limit) goto copy_next;
}

/* func_0c0a710c: no verified twin. Ghidra draft:
*/
void func_0c0a710c(void) { }

/* func_0c0a71f0: no verified twin. Ghidra draft:
*/
void func_0c0a71f0(void) { }

/* func_0c0a71f6: no verified twin. Ghidra draft:
*/
void func_0c0a71f6(void) { }

/* func_0c0a7268: no verified twin. Ghidra draft:
*/
void func_0c0a7268(void) { }

unsigned char func_0c0a7304(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c244336,a->x374))goto fail;
 if(a->b1f9==2 && !a->b1fc){if(a->b1d4){fail:return 0;}a->b1d4++;}
 func_0c047aac(a,a->x374);
 
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=2;
 func_0c045248(a,21);return 1;
}

unsigned char func_0c0a736a(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c244346,a->x374))goto fail;
 if(a->b1f9==2 && !a->b1fc){if(a->b1d4){fail:return 0;}a->b1d4++;}
 func_0c047aac(a,a->x374);
 
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=3;
 func_0c045248(a,21);return 1;
}

/* func_0c0a73f0: no verified twin. Ghidra draft:
*/
void func_0c0a73f0(void) { }

unsigned char func_0c0a7458(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c24436a,a->x374))goto fail;
 if(a->b1f9==2 && !a->b1fc){if(a->b1d4){fail:return 0;}a->b1d4++;}
 func_0c047aac(a,a->x374);
 
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=5;
 func_0c045248(a,21);return 1;
}

/* func_0c0a74e0: no verified twin. Ghidra draft:
*/
void func_0c0a74e0(void) { }

/* func_0c0a7550: no verified twin. Ghidra draft:
*/
void func_0c0a7550(void) { }

unsigned char func_0c0a75fc(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c24439e,a->x374))goto fail;
 if(a->b1f9==2 && !a->b1fc){if(a->b1d4){fail:return 0;}a->b1d4++;}
 func_0c047aac(a,a->x374);
 
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=11;
 func_0c045248(a,21);return 1;
}

unsigned char func_0c0a7662(struct Actor *a)
{
    if (!func_0c046dd0(a, 8)) return 0;
    a->b1e9 = 8;
    a->b5 = 0;
    func_0c045248(a, 21);
    a->b6 = a->b7 = 0;
    return 1;
}

unsigned char func_0c0a769c(struct Actor *a)
{
 if(!func_0c046d54(a))goto fail;
 if(!*a->p40c){fail:return 0;}
 a->b1e9=10;a->b5=0;
 func_0c045248(a,29);
 a->b6=a->b7=0;
 return 1;
}

int func_0c0a76dc(struct Actor *a)
{
    if (func_0c054d8e(a) || func_0c054cee(a) || func_0c054d58(a))
        return 1;
    return 0;
}

int func_0c0a772c(struct Actor *a)
{
    if (!func_0c046e7e(a, dat_0c24435a, (unsigned char *)a + 0x394))
        return 0;
    else if (!*a->p40c)
        return 0;
    a->b258 = 4;
    return 1;
}

int func_0c0a7762(struct Actor *a)
{
    if (!func_0c046e7e(a, dat_0c24437e, (unsigned char *)a + 0x394))
        return 0;
    else if (!*a->p40c)
        return 0;
    a->b258 = 6;
    return 1;
}

/* func_0c0a7798: no verified twin. Ghidra draft:
*/
void func_0c0a7798(void) { }

/* func_0c0a77d6: no verified twin. Ghidra draft:
*/
void func_0c0a77d6(void) { }

/* func_0c0a7838: no verified twin. Ghidra draft:
*/
void func_0c0a7838(void) { }

void func_0c0a7864(struct Obj_0c03f15c *p)
{
    dat_0c244420[p->b233](p);
}

/* func_0c0a7878: no verified twin. Ghidra draft:
*/
void func_0c0a7878(void) { }

/* func_0c0a7918: no verified twin. Ghidra draft:
*/
void func_0c0a7918(void) { }

/* func_0c0a7970: no verified twin. Ghidra draft:
*/
void func_0c0a7970(void) { }

/* func_0c0a7a04: no verified twin. Ghidra draft:
*/
void func_0c0a7a04(void) { }

/* func_0c0a7ae0: no verified twin. Ghidra draft:
*/
void func_0c0a7ae0(void) { }

/* func_0c0a7c10: no verified twin. Ghidra draft:
*/
void func_0c0a7c10(void) { }

/* func_0c0a7c7c: no verified twin. Ghidra draft:
*/
void func_0c0a7c7c(void) { }

/* func_0c0a7d3c: no verified twin. Ghidra draft:
*/
void func_0c0a7d3c(void) { }

/* func_0c0a7e6c: no verified twin. Ghidra draft:
*/
void func_0c0a7e6c(void) { }

void func_0c0a7f0a(struct Obj_0c03f15c *p)
{
    dat_0c244430[p->b233](p);
}

/* func_0c0a7f1e: no verified twin. Ghidra draft:
*/
void func_0c0a7f1e(void) { }

/* func_0c0a7fcc: no verified twin. Ghidra draft:
*/
void func_0c0a7fcc(void) { }

/* func_0c0a80d0: no verified twin. Ghidra draft:
*/
void func_0c0a80d0(void) { }

/* func_0c0a81c8: no verified twin. Ghidra draft:
*/
void func_0c0a81c8(void) { }

/* func_0c0a828a: no verified twin. Ghidra draft:
*/
void func_0c0a828a(void) { }

/* func_0c0a82ec: no verified twin. Ghidra draft:
*/
void func_0c0a82ec(void) { }

/* func_0c0a830c: no verified twin. Ghidra draft:
*/
void func_0c0a830c(void) { }

void func_0c0a83b8(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0438de(a);
}
