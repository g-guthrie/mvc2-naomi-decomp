/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern void func_0c0437b8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0346da(struct Actor *,int),func_0c1d2a56(struct LinkedActorVec3 *,int);
extern unsigned char func_0c044e52(struct Actor *),func_0c044846(struct Actor *);
extern short dat_0c23b9d0[],dat_0c23ba08[];
extern void (*table_0c248064[])(struct Actor *);
extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *),func_0c046030(struct Actor *),func_0c0464c4(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c0453c4(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern unsigned char func_0c043d3a(struct Actor *),func_0c044ae4(struct Actor *);
void func_0c03b37a(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c043324(struct Actor *);
extern void func_0c0437b8(struct Actor *);
extern void (*table_0c23f9d4[])(struct Actor *);
extern int func_0c02a39a(struct Actor *, int);
extern void func_0c0442fa(struct Actor *);
extern void func_0c0432ca(struct Actor *);
extern void func_0c043014(struct Actor *, struct LinkedActorVec3 *);
extern void func_0c0346da(struct Actor *, int);
extern void (*table_0c23f9dc[])(struct Actor *);
extern void (*table_0c24806c[])(struct Actor *);

/* func_0c0cd610: no verified twin. Ghidra draft:
*/
void func_0c0cd610(void) { }

void func_0c0cd658(struct Actor *a){table_0c248064[a->b6](a);}

void func_0c0cd66a(struct Actor *a)
{
    a->b6++;
    a->f92 = 0.0f;
    a->f96 = 0.0f;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    a->b1f9 = 0;
    a->f56 = a->f41c;
    (void)func_0c02a39a(a, 0);
    func_0c0442fa(a);
    func_0c0432ca(a);
    a->b1a1 = 89;
    a->w1ac = 0;
    a->b19e = 0;
    *(unsigned int *)&a->p1c4 = 0;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a, 20, 11);
}

/* func_0c0cd6e0: no verified twin. Ghidra draft:
*/
void func_0c0cd6e0(void) { }

/* func_0c0cd774: no verified twin. Ghidra draft:
*/
void func_0c0cd774(void) { }

/* func_0c0cd788: no verified twin. Ghidra draft:
*/
void func_0c0cd788(void) { }

void func_0c0cd7bc(struct Actor *a){table_0c24806c[a->b6](a);}

/* func_0c0cd7ce: no verified twin. Ghidra draft:
*/
void func_0c0cd7ce(void) { }

/* func_0c0cd840: no verified twin. Ghidra draft:
*/
void func_0c0cd840(void) { }

/* func_0c0cd880: no verified twin. Ghidra draft:
*/
void func_0c0cd880(void) { }

/* func_0c0cd902: no verified twin. Ghidra draft:
*/
void func_0c0cd902(void) { }
