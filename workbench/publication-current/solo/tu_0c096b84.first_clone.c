/* Assembled by tools/clone.py from verified twins. */
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
extern void func_0c0437b8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0346da(struct Actor *,int),func_0c1d2a56(struct LinkedActorVec3 *,int);
extern unsigned char func_0c044e52(struct Actor *),func_0c044846(struct Actor *);
extern short dat_0c23b9d0[],dat_0c23ba08[];
extern void (*table_0c2430f4[])(struct Actor *);
extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *),func_0c046030(struct Actor *),func_0c0464c4(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c0453c4(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern unsigned char func_0c043d3a(struct Actor *),func_0c044ae4(struct Actor *);
void func_0c03b37a(struct Actor *);
extern void (*table_0c243128[])(struct Actor *);
struct Glob_074c18 { unsigned char pad[0x7c]; short w7c[1]; };
struct Vec3_074c18 { float x, y, z; };
extern struct Glob_074c18 *dat_0c2f83f8;
extern int dat_0c241048[];
extern void func_0c0432ca(struct Actor *);
extern void func_0c0442fa(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);
extern void func_0c0429a4(struct Actor *, struct Vec3_074c18 *, int);
typedef void (*ActorHandler)(struct Actor *);
extern ActorHandler table_0c243130[];
extern void (*table_0c24314c[])(struct Actor *);
extern struct ActorFlags *dat_0c2d6f84;
extern void (*table_0c23aa28[])(void);
extern char dat_0c2d75b6[];
extern void func_0c0275dc(void),func_0c02aa78(void),func_0c02aaac(void),func_0c023658(int),func_0c038438(void),func_0c0394cc(void),func_0c02a026(void),func_0c0302c0(void),func_0c031200(void),func_0c0314b0(void),func_0c031704(void),func_0c037354(void),func_0c0268b8(void),func_0c0267c4(void),func_0c02a7e0(void);
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
extern handler_0c03f15c dat_0c243178[];
extern handler_0c03f15c dat_0c23bbe8[];
extern unsigned char dat_0c2f8338;
extern void func_0c0491a4(struct Obj_0c03f15c *);
extern char func_0c02a026(struct Obj_0c03f15c *);
extern void func_0c0437b8(struct Obj_0c03f15c *);
extern void func_0c042960(struct Obj_0c03f15c *);
extern void (*table_0c2431a8[])(struct Actor *);
extern void (*table_0c2431b0[])(struct Actor *);

/* func_0c096b84: no verified twin. Ghidra draft:
*/
void func_0c096b84(void) { }

void func_0c096be2(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        a->b5++;
}

void func_0c096c02(struct Actor *a){table_0c2430f4[a->b6](a);}

/* func_0c096c14: no verified twin. Ghidra draft:
*/
void func_0c096c14(void) { }

void func_0c096c5e(struct Actor *a){table_0c243128[a->b6](a);}

/* func_0c096c70: no verified twin. Ghidra draft:
*/
void func_0c096c70(void) { }

void func_0c096cc0(struct Actor *a)
{
    a->b1f5 = 1;
    table_0c243130[a->b7](a);
}

/* func_0c096d04: no verified twin. Ghidra draft:
*/
void func_0c096d04(void) { }

/* func_0c096e40: no verified twin. Ghidra draft:
*/
void func_0c096e40(void) { }

/* func_0c096eea: no verified twin. Ghidra draft:
*/
void func_0c096eea(void) { }

/* func_0c096f0e: no verified twin. Ghidra draft:
*/
void func_0c096f0e(void) { }

/* func_0c096f40: no verified twin. Ghidra draft:
*/
void func_0c096f40(void) { }

void func_0c096f48(struct Actor *a){table_0c24314c[a->b6](a);}

/* func_0c096f74: no verified twin. Ghidra draft:
*/
void func_0c096f74(void) { }

/* func_0c097010: no verified twin. Ghidra draft:
*/
void func_0c097010(void) { }

void func_0c097076(void){func_0c02a026();}

/* func_0c0970a8: no verified twin. Ghidra draft:
*/
void func_0c0970a8(void) { }

void func_0c097168(struct Obj_0c03f15c *p)
{
    dat_0c243178[p->b233](p);
}

void func_0c09717c(struct Actor *a){table_0c2431a8[a->b6](a);}

void func_0c09718e(struct Actor *a){table_0c2431b0[a->b6](a);}
