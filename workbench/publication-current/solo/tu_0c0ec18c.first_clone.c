/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern unsigned int dat_0c249d3c[];
extern unsigned char dat_0c23fe1c[],dat_0c23fe2c[],dat_0c23fe3c[],dat_0c23fe4c[],dat_0c23fe5c[],dat_0c23fe70[],dat_0c23fe80[],dat_0c249d08[],dat_0c23fea0[];
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
extern unsigned char dat_0c23fe1c[],dat_0c23fe2c[],dat_0c249d18[],dat_0c23fe4c[],dat_0c23fe5c[],dat_0c23fe70[],dat_0c23fe80[],dat_0c23fe90[],dat_0c23fea0[];
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c046dd0(struct Actor *,int);
extern int func_0c046d54(struct Actor *);
extern void func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int);
extern unsigned char dat_0c2422fa[],dat_0c24230a[],dat_0c24231a[],dat_0c24232a[],dat_0c24233e[],dat_0c24234e[],dat_0c249d28[];
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *),func_0c0462a0(struct Actor *);
extern unsigned char func_0c04608a(struct Actor *,unsigned char *);
extern void func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *);
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c0474f8(struct Actor *,unsigned char *,unsigned char *);
extern unsigned char func_0c046dd0(struct Actor *,int);
extern unsigned char dat_0c24026c[],dat_0c24027c[],dat_0c24028c[],dat_0c24029a[],dat_0c2402aa[],dat_0c2402bc[],dat_0c2402ca[],dat_0c2402dc[];
unsigned char func_0c06461c(struct Actor *),func_0c064696(struct Actor *),func_0c064720(struct Actor *),func_0c064786(struct Actor *),func_0c06480c(struct Actor *),func_0c064872(struct Actor *),func_0c0648d8(struct Actor *),func_0c064946(struct Actor *),func_0c0649ac(struct Actor *),func_0c0649ec(struct Actor *);
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
extern unsigned char dat_0c23f24c[], dat_0c249d08[], dat_0c23f26c[];
extern unsigned char dat_0c23f24c[], dat_0c249d28[], dat_0c23f26c[];

void func_0c0ec18c(struct Actor *a)
{
    register unsigned int i;
    register unsigned int limit = 112;
    register unsigned int *out = *((unsigned int **)((char *)a + 0x428));
    register unsigned int *in = dat_0c249d3c;
    i = 0;
copy_next:
    *(unsigned int *)((char *)out + i) = *(unsigned int *)((char *)in + i);
    i += 4;
    if (i < limit) goto copy_next;
}

/* func_0c0ec1a8: no verified twin. Ghidra draft:
*/
void func_0c0ec1a8(void) { }

/* func_0c0ec284: no verified twin. Ghidra draft:
*/
void func_0c0ec284(void) { }

/* func_0c0ec2f0: no verified twin. Ghidra draft:
*/
void func_0c0ec2f0(void) { }

/* func_0c0ec35a: no verified twin. Ghidra draft:
*/
void func_0c0ec35a(void) { }

/* func_0c0ec3c0: no verified twin. Ghidra draft:
*/
void func_0c0ec3c0(void) { }

/* func_0c0ec40a: no verified twin. Ghidra draft:
*/
void func_0c0ec40a(void) { }

/* func_0c0ec4c8: no verified twin. Ghidra draft:
*/
void func_0c0ec4c8(void) { }

/* func_0c0ec568: no verified twin. Ghidra draft:
*/
void func_0c0ec568(void) { }

/* func_0c0ec5ec: no verified twin. Ghidra draft:
*/
void func_0c0ec5ec(void) { }

/* func_0c0ec62e: no verified twin. Ghidra draft:
*/
void func_0c0ec62e(void) { }

int func_0c0ec6ba(struct Actor*a){if(!func_0c046e7e(a,dat_0c249d08,a->x3a4))return 0;else if(!*a->p40c)return 0;a->b32=0;a->b258=6;return 1;}

/* func_0c0ec70c: no verified twin. Ghidra draft:
*/
void func_0c0ec70c(void) { }

unsigned char func_0c0ec742(struct Actor*a){if(!func_0c046e7e(a,dat_0c249d18,a->x37c))return 0;func_0c047aac(a,a->x37c);a->b5=0;a->b7=0;a->b6=0;a->b1e9=9;func_0c045248(a,21);return 1;}

unsigned char func_0c0ec788(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c249d28,a->x39c))goto fail;
 if(!*a->p40c){fail:return 0;}
 func_0c047aac(a,a->x39c);a->b5=0;a->b6=0;a->b7=0;a->b1e9=15;func_0c045248(a,29);return 1;
}

unsigned char func_0c0ec7d8(struct Actor *a)
{
 if(!func_0c046d54(a))goto fail;
 if(!*a->p40c){fail:return 0;}
 a->b1e9=14;a->b5=0;
 func_0c045248(a,29);
 a->b6=a->b7=0;
 return 1;
}

/* func_0c0ec818: no verified twin. Ghidra draft:
*/
void func_0c0ec818(void) { }

/* func_0c0ec860: no verified twin. Ghidra draft:
*/
void func_0c0ec860(void) { }

int func_0c0ec880(struct Actor *a)
{
    if (func_0c054d8e(a) || func_0c054cee(a) || func_0c054d58(a))
        return 1;
    return 0;
}

/* func_0c0ec8ac: no verified twin. Ghidra draft:
*/
void func_0c0ec8ac(void) { }

int func_0c0ec8f4(struct Actor *a)
{
    if (!func_0c046e7e(a, dat_0c249d08, (unsigned char *)a + 0x394))
        return 0;
    else if (!*a->p40c)
        return 0;
    a->b258 = 5;
    return 1;
}

int func_0c0ec92a(struct Actor *a)
{
    if (!func_0c046e7e(a, dat_0c249d28, (unsigned char *)a + 0x394))
        return 0;
    else if (!*a->p40c)
        return 0;
    a->b258 = 15;
    return 1;
}
