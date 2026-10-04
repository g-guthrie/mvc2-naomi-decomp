/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
struct Vec3_0c067488 { float x, y, z; };
typedef void (*ActorHandler)(struct Actor *);
extern ActorHandler table_0c2404c4[];
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern char func_0c02a026(struct Actor *);
extern void func_0c0438de(struct Actor *);
extern void func_0c0ce574(struct Actor *);
extern void func_0c0442fa(struct Actor *);
extern void func_0c0432ca(struct Actor *);
extern void func_0c0346da(struct Actor *, int);
extern void func_0c02a0c4(struct Actor *, int, int);
extern void func_0c043014(struct Actor *, struct Vec3_0c067488 *);
extern void func_0c0437b8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0346da(struct Actor *,int),func_0c1d2a56(struct LinkedActorVec3 *,int);
extern unsigned char func_0c044e52(struct Actor *),func_0c044846(struct Actor *);
extern short dat_0c23b9d0[],dat_0c23ba08[];
extern void (*table_0c248380[])(struct Actor *);
extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *),func_0c046030(struct Actor *),func_0c0464c4(struct Actor *);
extern void func_0c0453c4(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern unsigned char func_0c043d3a(struct Actor *),func_0c044ae4(struct Actor *);
void func_0c03b37a(struct Actor *);
extern void (*table_0c248394[])(struct Actor *);

/* func_0c0d1974: no verified twin. Ghidra draft:
*/
void func_0c0d1974(void) { }

void func_0c0d19b6(struct Actor *a)
{
    if (func_0c02a026(a) < 0) {
        if (a->b1f9 == 2)
            func_0c0438de(a);
        else
            func_0c0ce574(a);
    }
}

/* func_0c0d19ea: no verified twin. Ghidra draft:
*/
void func_0c0d19ea(void) { }

/* func_0c0d1a0e: no verified twin. Ghidra draft:
*/
void func_0c0d1a0e(void) { }

/* func_0c0d1a94: no verified twin. Ghidra draft:
*/
void func_0c0d1a94(void) { }

/* func_0c0d1ade: no verified twin. Ghidra draft:
*/
void func_0c0d1ade(void) { }

void func_0c0d1b86(struct Actor *a){table_0c248380[a->b6](a);}

/* func_0c0d1bc0: no verified twin. Ghidra draft:
*/
void func_0c0d1bc0(void) { }

/* func_0c0d1c0e: no verified twin. Ghidra draft:
*/
void func_0c0d1c0e(void) { }

/* func_0c0d1c4c: no verified twin. Ghidra draft:
*/
void func_0c0d1c4c(void) { }

/* func_0c0d1cd0: no verified twin. Ghidra draft:
*/
void func_0c0d1cd0(void) { }

/* func_0c0d1d3e: no verified twin. Ghidra draft:
*/
void func_0c0d1d3e(void) { }

void func_0c0d1da2(struct Actor *a){table_0c248394[a->b6](a);}
