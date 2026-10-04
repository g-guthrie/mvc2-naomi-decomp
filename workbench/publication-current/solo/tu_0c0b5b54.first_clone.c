/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern void func_0c0437b8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0346da(struct Actor *,int),func_0c1d2a56(struct LinkedActorVec3 *,int);
extern unsigned char func_0c044e52(struct Actor *),func_0c044846(struct Actor *);
extern short dat_0c23b9d0[],dat_0c23ba08[];
extern void (*table_0c244f18[])(struct Actor *);
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
extern void func_0c0437b8(struct Obj_ub3_05 *);
extern struct Rec_ub3_05 *dat_0c2d6f84;
extern handler_ub3_05 table_0c23f68c[];
extern handler_ub3_05 table_0c23f694[];
extern handler_ub3_05 table_0c23f69c[];
extern handler_ub3_05 table_0c23f6a4[];
extern handler_ub3_05 table_0c23f6ac[];
extern int func_0c03916c(struct Obj_ub3_05 *);
extern void (*table_0c244f28[])(struct Actor *);
struct Vec3_0c0a69d0 { float x, y, z; };
typedef void (*ActorHandler)(struct Actor *);
extern ActorHandler table_0c244290[];
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c0442fa(struct Actor *);
extern void func_0c0432ca(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);
extern void func_0c0437b8(struct Actor *);
extern void func_0c043014(struct Actor *, struct Vec3_0c0a69d0 *);
extern void func_0c0346da(struct Actor *, int);
extern void func_0c02a39a(struct Actor *, int);
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c043324(struct Actor *);
extern void func_0c0439c4(struct Actor *);
extern ActorHandler table_0c240e8c[];
extern int (*table_0c244f30[])(struct Actor *);
extern void func_0c1910d0(struct Actor *, int);
extern int func_0c037d54(struct Actor *);
extern void func_0c025900(struct Actor *, int, int);
extern void func_0c1d4610(struct Actor *, struct LinkedActorVec3 *);
extern void func_0c048ce6(struct Actor *);

/* func_0c0b5b54: no verified twin. Ghidra draft:
*/
void func_0c0b5b54(void) { }

/* func_0c0b5cb0: no verified twin. Ghidra draft:
*/
void func_0c0b5cb0(void) { }

void func_0c0b5cf0(struct Actor *a){table_0c244f18[a->b6](a);}

/* func_0c0b5d02: no verified twin. Ghidra draft:
*/
void func_0c0b5d02(void) { }

/* func_0c0b5d72: no verified twin. Ghidra draft:
*/
void func_0c0b5d72(void) { }

void func_0c0b5dfc(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

/* func_0c0b5e1e: no verified twin. Ghidra draft:
*/
void func_0c0b5e1e(void) { }

void func_0c0b5e36(struct Actor *a){table_0c244f28[a->b6](a);}

void func_0c0b5e48(struct Actor *a)
{
    a->b6++;
    a->f92 = 0;
    a->f96 = 0;
    a->f104 = 0;
    a->f108 = 0;
    a->b1f9 = 0;
    a->f56 = a->f41c;
    func_0c0442fa(a);
    func_0c0432ca(a);
    a->b1a1 = 63;
    a->w1ac = 0;
    a->b19e = 0;
    *(unsigned int *)&a->p1c4 = 0;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a, 21, 23);
}

/* func_0c0b5eb6: no verified twin. Ghidra draft:
*/
void func_0c0b5eb6(void) { }

int func_0c0b5f02(struct Actor *a)
{
    return table_0c244f30[a->b1f9](a);
}
