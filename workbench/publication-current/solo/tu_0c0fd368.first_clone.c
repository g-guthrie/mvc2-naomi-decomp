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
extern handler_0c03f15c dat_0c24acf0[];
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
extern void func_0c0438de(struct Obj_ub3_05 *);
extern struct Rec_ub3_05 *dat_0c2d6f84;
extern handler_ub3_05 table_0c23f68c[];
extern handler_ub3_05 table_0c23f694[];
extern handler_ub3_05 table_0c23f69c[];
extern handler_ub3_05 table_0c23f6a4[];
extern handler_ub3_05 table_0c23f6ac[];
extern int func_0c03916c(struct Obj_ub3_05 *);
#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c1bc740(struct Actor *,int,int),func_0c0437b8(struct Actor *),func_0c043352(struct Actor *),func_0c044df4(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c24d594[])(struct Actor *),(*table_0c24ad00[])(struct Actor *),(*table_0c24d5a8[])(struct Actor *);

void func_0c0fd368(struct Obj_0c03f15c *p)
{
    dat_0c24acf0[p->b233](p);
}

/* func_0c0fd37c: no verified twin. Ghidra draft:
*/
void func_0c0fd37c(void) { }

/* func_0c0fd498: no verified twin. Ghidra draft:
*/
void func_0c0fd498(void) { }

/* func_0c0fd53c: no verified twin. Ghidra draft:
*/
void func_0c0fd53c(void) { }

void func_0c0fd592(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0438de(a);
}

void func_0c0fd5e0(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0438de(a);
}

/* func_0c0fd602: no verified twin. Ghidra draft:
*/
void func_0c0fd602(void) { }

void func_0c0fd6c6(struct Actor *a){table_0c24ad00[a->b6](a);}

/* func_0c0fd6d6: no verified twin. Ghidra draft:
*/
void func_0c0fd6d6(void) { }
