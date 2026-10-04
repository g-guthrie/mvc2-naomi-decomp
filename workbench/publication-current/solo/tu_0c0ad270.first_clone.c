/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern unsigned int dat_0c244774[];
extern unsigned char dat_0c23fe1c[],dat_0c23fe2c[],dat_0c2446ec[],dat_0c23fe4c[],dat_0c23fe5c[],dat_0c23fe70[],dat_0c23fe80[],dat_0c23fe90[],dat_0c23fea0[];
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
extern unsigned char dat_0c23fe1c[],dat_0c23fe2c[],dat_0c23fe3c[],dat_0c23fe4c[],dat_0c23fe5c[],dat_0c24470c[],dat_0c23fe80[],dat_0c23fe90[],dat_0c23fea0[];
extern unsigned char dat_0c23fe1c[],dat_0c23fe2c[],dat_0c23fe3c[],dat_0c23fe4c[],dat_0c23fe5c[],dat_0c24471c[],dat_0c23fe80[],dat_0c23fe90[],dat_0c23fea0[];
extern void func_0c025900(struct Actor *, char, char);
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *);
extern unsigned char func_0c046e7e(struct Actor *, unsigned char *, unsigned char *);
extern unsigned char dat_0c23f24c[], dat_0c24470c[], dat_0c23f26c[];
extern void (*table_0c23f44c[])(struct Actor *);
extern void func_0c03edcc(struct Actor *, struct Actor *);
extern void func_0c045248(struct Actor *, int);
int func_0c054cee(struct Actor *);
int func_0c054d58(struct Actor *);
int func_0c054d8e(struct Actor *);
extern unsigned char dat_0c23f24c[], dat_0c24471c[], dat_0c23f26c[];
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *),func_0c0462a0(struct Actor *);
extern unsigned char func_0c04608a(struct Actor *,unsigned char *);
extern void func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *);
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c0474f8(struct Actor *,unsigned char *,unsigned char *);
extern void func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int);
extern int func_0c046d54(struct Actor *);
extern unsigned char func_0c046dd0(struct Actor *,int);
extern unsigned char dat_0c24026c[],dat_0c24027c[],dat_0c24028c[],dat_0c24029a[],dat_0c2402aa[],dat_0c2402bc[],dat_0c2402ca[],dat_0c2402dc[];
unsigned char func_0c06461c(struct Actor *),func_0c064696(struct Actor *),func_0c064720(struct Actor *),func_0c064786(struct Actor *),func_0c06480c(struct Actor *),func_0c064872(struct Actor *),func_0c0648d8(struct Actor *),func_0c064946(struct Actor *),func_0c0649ac(struct Actor *),func_0c0649ec(struct Actor *);
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
extern handler_0c03f15c dat_0c2447e4[];
extern handler_0c03f15c dat_0c23bbe8[];
extern unsigned char dat_0c2f8338;
extern void func_0c0491a4(struct Obj_0c03f15c *);
extern char func_0c02a026(struct Obj_0c03f15c *);
extern void func_0c0437b8(struct Obj_0c03f15c *);
extern void func_0c042960(struct Obj_0c03f15c *);
extern handler_0c03f15c dat_0c2447f4[];

void func_0c0ad270(struct Actor *a)
{
    register unsigned int i;
    register unsigned int limit = 112;
    register unsigned int *out = *((unsigned int **)((char *)a + 0x428));
    register unsigned int *in = dat_0c244774;
    i = 0;
copy_next:
    *(unsigned int *)((char *)out + i) = *(unsigned int *)((char *)in + i);
    i += 4;
    if (i < limit) goto copy_next;
}

/* func_0c0ad28c: no verified twin. Ghidra draft:
*/
void func_0c0ad28c(void) { }

/* func_0c0ad324: no verified twin. Ghidra draft:
*/
void func_0c0ad324(void) { }

/* func_0c0ad384: no verified twin. Ghidra draft:
*/
void func_0c0ad384(void) { }

/* func_0c0ad3b0: no verified twin. Ghidra draft:
*/
void func_0c0ad3b0(void) { }

unsigned char func_0c0ad40e(struct Actor*a){if(!func_0c046e7e(a,dat_0c2446ec,a->x37c))return 0;func_0c047aac(a,a->x37c);a->b5=0;a->b7=0;a->b6=0;a->b1e9=1;func_0c045248(a,21);return 1;}

/* func_0c0ad454: no verified twin. Ghidra draft:
*/
void func_0c0ad454(void) { }

unsigned char func_0c0ad4dc(struct Actor*a){if(!func_0c046e7e(a,dat_0c24470c,a->x394))return 0;else if(!*a->p40c)return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=3;func_0c045248(a,29);return 1;}

unsigned char func_0c0ad522(struct Actor*a){if(!func_0c046e7e(a,dat_0c24471c,a->x394))return 0;else if(!*a->p40c)return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=5;func_0c045248(a,29);return 1;}

/* func_0c0ad568: no verified twin. Ghidra draft:
*/
void func_0c0ad568(void) { }

int func_0c0ad592(struct Actor *a)
{
    if (!func_0c046e7e(a, dat_0c24470c, (unsigned char *)a + 0x394))
        return 0;
    else if (!*a->p40c)
        return 0;
    a->b258 = 3;
    return 1;
}

int func_0c0ad5e4(struct Actor *a)
{
    if (!func_0c046e7e(a, dat_0c24471c, (unsigned char *)a + 0x394))
        return 0;
    else if (!*a->p40c)
        return 0;
    a->b258 = 5;
    return 1;
}

unsigned char func_0c0ad61a(struct Actor *a)
{
    if (!func_0c046dd0(a, 6)) return 0;
    a->b1e9 = 6;
    a->b5 = 0;
    func_0c045248(a, 21);
    a->b6 = a->b7 = 0;
    return 1;
}

unsigned char func_0c0ad654(struct Actor *a)
{
 if(!func_0c046d54(a))goto fail;
 if(!*a->p40c){fail:return 0;}
 a->b1e9=7;a->b5=0;
 func_0c045248(a,29);
 a->b6=a->b7=0;
 return 1;
}

/* func_0c0ad694: no verified twin. Ghidra draft:
*/
void func_0c0ad694(void) { }

void func_0c0ad6be(struct Obj_0c03f15c *p)
{
    dat_0c2447e4[p->b233](p);
}

/* func_0c0ad6d2: no verified twin. Ghidra draft:
*/
void func_0c0ad6d2(void) { }

/* func_0c0ad734: no verified twin. Ghidra draft:
*/
void func_0c0ad734(void) { }

/* func_0c0ad85c: no verified twin. Ghidra draft:
*/
void func_0c0ad85c(void) { }

/* func_0c0ad9a4: no verified twin. Ghidra draft:
*/
void func_0c0ad9a4(void) { }

/* func_0c0ada52: no verified twin. Ghidra draft:
*/
void func_0c0ada52(void) { }

/* func_0c0adab4: no verified twin. Ghidra draft:
*/
void func_0c0adab4(void) { }

/* func_0c0adb04: no verified twin. Ghidra draft:
*/
void func_0c0adb04(void) { }

/* func_0c0adbe0: no verified twin. Ghidra draft:
*/
void func_0c0adbe0(void) { }

void func_0c0adcce(struct Obj_0c03f15c *p)
{
    dat_0c2447f4[p->b233](p);
}
