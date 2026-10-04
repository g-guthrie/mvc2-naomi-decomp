/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern void func_0c0437b8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0346da(struct Actor *,int),func_0c1d2a56(struct LinkedActorVec3 *,int);
extern unsigned char func_0c044e52(struct Actor *),func_0c044846(struct Actor *);
extern short dat_0c23b9d0[],dat_0c23ba08[];
extern void (*table_0c249dcc[])(struct Actor *);
extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *),func_0c046030(struct Actor *),func_0c0464c4(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c0453c4(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern unsigned char func_0c043d3a(struct Actor *),func_0c044ae4(struct Actor *);
void func_0c03b37a(struct Actor *);
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

/* func_0c0ed088: no verified twin. Ghidra draft:
*/
void func_0c0ed088(void) { }

/* func_0c0ed190: no verified twin. Ghidra draft:
*/
void func_0c0ed190(void) { }

/* func_0c0ed28c: no verified twin. Ghidra draft:
*/
void func_0c0ed28c(void) { }

/* func_0c0ed332: no verified twin. Ghidra draft:
*/
void func_0c0ed332(void) { }

/* func_0c0ed33a: no verified twin. Ghidra draft:
*/
void func_0c0ed33a(void) { }

void func_0c0ed340(struct Actor *a){table_0c249dcc[a->b6](a);}

/* func_0c0ed352: no verified twin. Ghidra draft:
*/
void func_0c0ed352(void) { }

/* func_0c0ed3a0: no verified twin. Ghidra draft:
*/
void func_0c0ed3a0(void) { }

/* func_0c0ed3c4: no verified twin. Ghidra draft:
*/
void func_0c0ed3c4(void) { }

/* func_0c0ed408: no verified twin. Ghidra draft:
*/
void func_0c0ed408(void) { }

/* func_0c0ed474: no verified twin. Ghidra draft:
*/
void func_0c0ed474(void) { }

/* func_0c0ed4d0: no verified twin. Ghidra draft:
*/
void func_0c0ed4d0(void) { }

void func_0c0ed53a(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0438de(a);
}
