/* Assembled by tools/clone.py from verified twins. */
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
extern handler_0c03f15c dat_0c24892c[];
extern handler_0c03f15c dat_0c23bbe8[];
extern unsigned char dat_0c2f8338;
extern void func_0c0491a4(struct Obj_0c03f15c *);
extern char func_0c02a026(struct Obj_0c03f15c *);
extern void func_0c0437b8(struct Obj_0c03f15c *);
extern void func_0c042960(struct Obj_0c03f15c *);
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
extern void func_0c0437b8(struct Obj_ub3_05 *);
extern struct Rec_ub3_05 *dat_0c2d6f84;
extern handler_ub3_05 table_0c23f68c[];
extern handler_ub3_05 table_0c23f694[];
extern handler_ub3_05 table_0c23f69c[];
extern handler_ub3_05 table_0c23f6a4[];
extern handler_ub3_05 table_0c23f6ac[];
extern int func_0c03916c(struct Obj_ub3_05 *);
#include "objects.h"
extern void func_0c044df4(struct Actor *),func_0c0437b8(struct Actor *),func_0c0438de(struct Actor *),func_0c0421f4(struct Actor *),func_0c0420f8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c02a0c4(struct Actor *,int,int);
extern void (*table_0c2403c4[])(struct Actor *);
void func_0c065432(struct Actor *),func_0c065454(struct Actor *),func_0c0654a0(struct Actor *),func_0c0654d8(struct Actor *),func_0c065526(struct Actor *),func_0c065568(struct Actor *),func_0c06571c(struct Actor *);
extern void func_0c0438de(struct Obj_ub3_05 *);

/* func_0c0d720c: no verified twin. Ghidra draft:
*/
void func_0c0d720c(void) { }

/* func_0c0d7340: no verified twin. Ghidra draft:
*/
void func_0c0d7340(void) { }

/* func_0c0d7478: no verified twin. Ghidra draft:
*/
void func_0c0d7478(void) { }

/* func_0c0d75a4: no verified twin. Ghidra draft:
*/
void func_0c0d75a4(void) { }

/* func_0c0d75f4: no verified twin. Ghidra draft:
*/
void func_0c0d75f4(void) { }

/* func_0c0d76cc: no verified twin. Ghidra draft:
*/
void func_0c0d76cc(void) { }

/* func_0c0d7748: no verified twin. Ghidra draft:
*/
void func_0c0d7748(void) { }

/* func_0c0d77e4: no verified twin. Ghidra draft:
*/
void func_0c0d77e4(void) { }

void func_0c0d7882(struct Obj_0c03f15c *p)
{
    dat_0c24892c[p->b233](p);
}

/* func_0c0d7896: no verified twin. Ghidra draft:
*/
void func_0c0d7896(void) { }

/* func_0c0d7944: no verified twin. Ghidra draft:
*/
void func_0c0d7944(void) { }

/* func_0c0d7a24: no verified twin. Ghidra draft:
*/
void func_0c0d7a24(void) { }

/* func_0c0d7a52: no verified twin. Ghidra draft:
*/
void func_0c0d7a52(void) { }

/* func_0c0d7aa2: no verified twin. Ghidra draft:
*/
void func_0c0d7aa2(void) { }

void func_0c0d7af2(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

/* func_0c0d7b14: no verified twin. Ghidra draft:
*/
void func_0c0d7b14(void) { }

void func_0c0d7b50(struct Actor *a)
{
 switch(a->b1e8){case 0:case 1:case 2:if(func_0c02a026(a)<0)func_0c0437b8(a);break;}
}

void func_0c0d7b88(struct Actor *a){func_0c0421f4(a);func_0c0420f8(a);func_0c065526(a);}

void func_0c0d7be0(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0438de(a);
}

void func_0c0d7c02(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0438de(a);
}
