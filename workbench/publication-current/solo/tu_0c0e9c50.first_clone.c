/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern void func_0c0437b8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0346da(struct Actor *,int),func_0c1d2a56(struct LinkedActorVec3 *,int);
extern unsigned char func_0c044e52(struct Actor *),func_0c044846(struct Actor *);
extern short dat_0c23b9d0[],dat_0c23ba08[];
extern void (*table_0c249abc[])(struct Actor *);
extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *),func_0c046030(struct Actor *),func_0c0464c4(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c0453c4(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern unsigned char func_0c043d3a(struct Actor *),func_0c044ae4(struct Actor *);
void func_0c03b37a(struct Actor *);
extern void (*table_0c249ac8[])(struct Actor *);
extern void (*table_0c249ad4[])(struct Actor *);
typedef void (*ActorHandler)(struct Actor *);
extern ActorHandler table_0c245bb8[], table_0c245bc0[], table_0c245bd4[];
extern void func_0c02a0c4(struct Actor *, int, int);
extern void func_0c0437b8(struct Actor *);
extern int func_0c03916c(struct Actor *);
typedef void (*handler_0c0b1088)(struct Actor *);
extern void func_0c1a3d8c(struct Actor *, int);
extern void func_0c0346da(struct Actor *, int);
extern void func_0c0344a0(struct Actor *, int);
extern handler_0c0b1088 table_0c249adc[];
extern handler_0c0b1088 table_0c244ab4[];
extern void (*table_0c249af0[])(struct Actor *);

/* func_0c0e9c50: no verified twin. Ghidra draft:
*/
void func_0c0e9c50(void) { }

void func_0c0e9d24(struct Actor *a){table_0c249abc[a->b6](a);}

/* func_0c0e9d36: no verified twin. Ghidra draft:
*/
void func_0c0e9d36(void) { }

/* func_0c0e9dac: no verified twin. Ghidra draft:
*/
void func_0c0e9dac(void) { }

/* func_0c0e9dd0: no verified twin. Ghidra draft:
*/
void func_0c0e9dd0(void) { }

/* func_0c0e9e38: no verified twin. Ghidra draft:
*/
void func_0c0e9e38(void) { }

void func_0c0e9e66(struct Actor *a){table_0c249ac8[a->b6](a);}

/* func_0c0e9e78: no verified twin. Ghidra draft:
*/
void func_0c0e9e78(void) { }

/* func_0c0e9f00: no verified twin. Ghidra draft:
*/
void func_0c0e9f00(void) { }

/* func_0c0e9f70: no verified twin. Ghidra draft:
*/
void func_0c0e9f70(void) { }

void func_0c0e9f9e(struct Actor *a){table_0c249ad4[a->b6](a);}

void func_0c0e9fb0(struct Actor *a)
{
    a->b6++;
    a->b12c = 1;
    func_0c02a0c4(a, 18, 0);
}

/* func_0c0e9fc4: no verified twin. Ghidra draft:
*/
void func_0c0e9fc4(void) { }

void func_0c0e9ffc(struct Actor *a)
{
    a->f56 = a->f41c;
    if (func_0c03916c(a) != 0)
        func_0c0437b8(a);
    else
        table_0c249adc[a->b32](a);
}

void func_0c0ea032(struct Actor *a){table_0c249af0[a->b6](a);}
