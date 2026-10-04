/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
typedef void (*ActorHandler)(struct Actor *);
extern struct ActorFlags *dat_0c2d6f84;
extern ActorHandler table_0c240418[];
extern ActorHandler table_0c24042c[];
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);
extern int func_0c03916c(struct Actor *);
extern void func_0c0437b8(struct Actor *);
extern int func_0c043628(struct Actor *);
extern void func_0c190390(struct Actor *);
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
extern handler_0c03f15c dat_0c2482a8[];
extern handler_0c03f15c dat_0c23bbe8[];
extern unsigned char dat_0c2f8338;
extern void func_0c0491a4(struct Obj_0c03f15c *);
extern char func_0c02a026(struct Obj_0c03f15c *);
extern void func_0c0437b8(struct Obj_0c03f15c *);
extern void func_0c042960(struct Obj_0c03f15c *);
extern void func_0c0437b8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0346da(struct Actor *,int),func_0c1d2a56(struct LinkedActorVec3 *,int);
extern unsigned char func_0c044e52(struct Actor *),func_0c044846(struct Actor *);
extern short dat_0c23b9d0[],dat_0c23ba08[];
extern void (*table_0c2482dc[])(struct Actor *);
extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *),func_0c046030(struct Actor *),func_0c0464c4(struct Actor *);
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
extern void func_0c0ce574(struct Obj_ub3_05 *);
extern struct Rec_ub3_05 *dat_0c2d6f84;
extern handler_ub3_05 table_0c23f68c[];
extern handler_ub3_05 table_0c23f694[];
extern handler_ub3_05 table_0c23f69c[];
extern handler_ub3_05 table_0c23f6a4[];
extern handler_ub3_05 table_0c23f6ac[];
extern int func_0c03916c(struct Obj_ub3_05 *);
extern void (*table_0c248304[])(struct Actor *);
extern void func_0c0437b8(struct Obj_ub3_05 *);
typedef void (*handler_ub6_02)(struct Actor *);
extern handler_ub6_02 dat_0c249aa4[];
extern float dat_0c249ab0[];
extern signed char func_0c02a026(struct Actor *);
extern void func_0c0346da(struct Actor *, int);
extern void func_0c0438de(struct Actor *);
extern void func_0c0ce574(struct Actor *);
extern void func_0c0eb60a(struct Actor *);
extern void func_0c043324(struct Actor *);

void func_0c0cfe70(struct Actor *a)
{
    if (a->b6 == 0) {
        a->b6++;
        func_0c02a0c4(a, 19, 5);
    } else {
        func_0c02a026(a);
    }
}

void func_0c0cfe8a(struct Actor *a)
{
    if (a->b6 == 0) {
        a->b6++;
        func_0c02a0c4(a, 19, 4);
    } else {
        func_0c02a026(a);
    }
}

void func_0c0cfea4(struct Actor *a)
{
    if (a->b6 == 0) {
        a->b6++;
        func_0c02a0c4(a, 19, 6);
    } else {
        func_0c02a026(a);
    }
}

/* func_0c0cfebe: no verified twin. Ghidra draft:
*/
void func_0c0cfebe(void) { }

void func_0c0cff06(struct Obj_0c03f15c *p)
{
    dat_0c2482a8[p->b233](p);
}

void func_0c0cff1a(struct Actor *a){table_0c2482dc[a->b6](a);}

/* func_0c0cff2c: no verified twin. Ghidra draft:
*/
void func_0c0cff2c(void) { }

/* func_0c0cffcc: no verified twin. Ghidra draft:
*/
void func_0c0cffcc(void) { }

/* func_0c0d0020: no verified twin. Ghidra draft:
*/
void func_0c0d0020(void) { }

/* func_0c0d00d8: no verified twin. Ghidra draft:
*/
void func_0c0d00d8(void) { }

/* func_0c0d0244: no verified twin. Ghidra draft:
*/
void func_0c0d0244(void) { }

/* func_0c0d02c2: no verified twin. Ghidra draft:
*/
void func_0c0d02c2(void) { }

void func_0c0d02c8(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0ce574(a);
}

/* func_0c0d02ea: no verified twin. Ghidra draft:
*/
void func_0c0d02ea(void) { }

/* func_0c0d03b0: no verified twin. Ghidra draft:
*/
void func_0c0d03b0(void) { }

/* func_0c0d0470: no verified twin. Ghidra draft:
*/
void func_0c0d0470(void) { }

/* func_0c0d05ac: no verified twin. Ghidra draft:
*/
void func_0c0d05ac(void) { }

/* func_0c0d075c: no verified twin. Ghidra draft:
*/
void func_0c0d075c(void) { }

void func_0c0d0782(struct Actor *a){table_0c248304[a->b6](a);}

/* func_0c0d0794: no verified twin. Ghidra draft:
*/
void func_0c0d0794(void) { }

/* func_0c0d080e: no verified twin. Ghidra draft:
*/
void func_0c0d080e(void) { }

/* func_0c0d0862: no verified twin. Ghidra draft:
*/
void func_0c0d0862(void) { }

/* func_0c0d08d8: no verified twin. Ghidra draft:
*/
void func_0c0d08d8(void) { }

void func_0c0d096a(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

void func_0c0d098c(struct Actor *a)
{
    if (a->b1f9 == 2)
        func_0c0438de(a);
    else
        func_0c0ce574(a);
}

/* func_0c0d09cc: no verified twin. Ghidra draft:
*/
void func_0c0d09cc(void) { }
