/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern unsigned int dat_0c245484[];
extern struct ActorFlags *dat_0c2d6f84;
extern void (*table_0c23aa28[])(void);
extern char dat_0c2d75b6[];
extern void func_0c0275dc(void),func_0c02aa78(void),func_0c02aaac(void),func_0c023658(int),func_0c038438(void),func_0c0394cc(void),func_0c0bbb16(void),func_0c0302c0(void),func_0c031200(void),func_0c0314b0(void),func_0c031704(void),func_0c037354(void),func_0c0268b8(void),func_0c0267c4(void),func_0c02a7e0(void);
extern void func_0c0437b8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0346da(struct Actor *,int),func_0c1d2a56(struct LinkedActorVec3 *,int);
extern unsigned char func_0c044e52(struct Actor *),func_0c044846(struct Actor *);
extern short dat_0c23b9d0[],dat_0c23ba08[];
extern void (*table_0c2454f4[])(struct Actor *);
extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *),func_0c046030(struct Actor *),func_0c0464c4(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c0453c4(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern unsigned char func_0c043d3a(struct Actor *),func_0c044ae4(struct Actor *);
void func_0c03b37a(struct Actor *);
typedef void (*ActorHandler)(struct Actor *);
extern ActorHandler table_0c240d3c[];
extern void func_0c0437b8(struct Actor *);

void func_0c0b98a0(struct Actor *a)
{
    register unsigned int i;
    register unsigned int limit = 112;
    register unsigned int *out = *((unsigned int **)((char *)a + 0x428));
    register unsigned int *in = dat_0c245484;
    i = 0;
copy_next:
    *(unsigned int *)((char *)out + i) = *(unsigned int *)((char *)in + i);
    i += 4;
    if (i < limit) goto copy_next;
}

/* func_0c0b98bc: no verified twin. Ghidra draft:
*/
void func_0c0b98bc(void) { }

/* func_0c0b9936: no verified twin. Ghidra draft:
*/
void func_0c0b9936(void) { }

/* func_0c0b99a0: no verified twin. Ghidra draft:
*/
void func_0c0b99a0(void) { }

/* func_0c0b99dc: no verified twin. Ghidra draft:
*/
void func_0c0b99dc(void) { }

/* func_0c0b9a18: no verified twin. Ghidra draft:
*/
void func_0c0b9a18(void) { }

/* func_0c0b9a54: no verified twin. Ghidra draft:
*/
void func_0c0b9a54(void) { }

/* func_0c0b9a90: no verified twin. Ghidra draft:
*/
void func_0c0b9a90(void) { }

/* func_0c0b9af4: no verified twin. Ghidra draft:
*/
void func_0c0b9af4(void) { }

/* func_0c0b9b30: no verified twin. Ghidra draft:
*/
void func_0c0b9b30(void) { }

/* func_0c0b9b6c: no verified twin. Ghidra draft:
*/
void func_0c0b9b6c(void) { }

/* func_0c0b9ba8: no verified twin. Ghidra draft:
*/
void func_0c0b9ba8(void) { }

/* func_0c0b9be4: no verified twin. Ghidra draft:
*/
void func_0c0b9be4(void) { }

/* func_0c0b9c48: no verified twin. Ghidra draft:
*/
void func_0c0b9c48(void) { }

/* func_0c0b9c84: no verified twin. Ghidra draft:
*/
void func_0c0b9c84(void) { }

/* func_0c0b9d80: no verified twin. Ghidra draft:
*/
void func_0c0b9d80(void) { }

void func_0c0b9dee(void){func_0c0bbb16();}

void func_0c0b9df4(void){func_0c0bbb16();}

void func_0c0b9dfa(struct Actor *a){table_0c2454f4[a->b6](a);}

void func_0c0b9e0c(struct Actor *a)
{
    func_0c02a026(a);
    if (a->b141 == 0) {
        a->b6++;
        a->f92 = 0.0f;
        a->f96 = 0.0f;
        a->f104 = 0.0f;
        a->f108 = 0.0f;
        a->f92 = a->b1d2 ? 13.33333302f : -13.33333302f;
    }
}
