/* Assembled by tools/clone.py from verified twins. */
struct Obj_0c06c3d4 {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad1[3];
    unsigned char b6;
    unsigned char pad2[52 - 7];
    float f52, f56, f60;
    unsigned char pad3[92 - 64];
    float f92, f96, f100, f104, f108, f112;
    unsigned char pad4[0x141 - 116];
    char b141;
    unsigned char pad5[0x19e - 0x142];
    unsigned char b19e;
    unsigned char pad6[0x1a1 - 0x19f];
    unsigned char b1a1;
    unsigned char pad7[0x1ac - 0x1a2];
    unsigned short w1ac;
    unsigned char pad8[0x1c4 - 0x1ae];
    int p1c4;
    unsigned char pad9[0x1f9 - 0x1c8];
    unsigned char b1f9;
    unsigned char pad10[0x41c - 0x1fa];
    float f41c;
};
struct Glob_0c2f83f8 { unsigned char pad[0x7c]; short w7c[1]; };
typedef void (*fn_t)(struct Obj_0c06c3d4 *);
extern fn_t dat_0c240948[];
extern fn_t dat_0c240950[];
extern struct Glob_0c2f83f8 *dat_0c2f83f8;
extern char func_0c02a026(struct Obj_0c06c3d4 *a);
extern void func_0c0437b8(struct Obj_0c06c3d4 *a);
extern void func_0c048bb0(struct Obj_0c06c3d4 *a, int b);
extern void func_0c0442fa(struct Obj_0c06c3d4 *a);
extern void func_0c0432ca(struct Obj_0c06c3d4 *a);
extern void func_0c02a0c4(struct Obj_0c06c3d4 *a, int b, int c);
extern void func_0c16aa40(struct Obj_0c06c3d4 *a, int b);
#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *);
extern int func_0c1ec190(void);
extern short dat_0c2406cc[];
extern void (*table_0c2406c4[])(struct Actor *);
extern void (*table_0c2406d4[])(struct Actor *);
extern void (*table_0c24a1e4[])(struct Actor *, struct ActorSub2a4 *);
extern void func_0c02a0c4(struct Actor *, int, int);
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
extern void func_0c0437b8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0346da(struct Actor *,int),func_0c1d2a56(struct LinkedActorVec3 *,int);
extern unsigned char func_0c044e52(struct Actor *),func_0c044846(struct Actor *);
extern short dat_0c23b9d0[],dat_0c23ba08[];
extern void (*table_0c24a1f8[])(struct Actor *);
extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *),func_0c046030(struct Actor *),func_0c0464c4(struct Actor *);
extern void func_0c0453c4(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern unsigned char func_0c043d3a(struct Actor *),func_0c044ae4(struct Actor *);
void func_0c03b37a(struct Actor *);
struct Obj_tu5_08 {
    unsigned char pad0[7];
    unsigned char b7;
    unsigned char pad1[52 - 8];
    float f52, f56;
    unsigned char pad2[92 - 60];
    float f92, f96, f100, f104, f108;
    unsigned char pad3[0x1c8 - 112];
    struct Obj_tu5_08 *p1c8;
    unsigned char pad4[0x1f7 - 0x1cc];
    unsigned char b1f7;
};
struct Vec3_tu5_08 { float x, y, z; };
extern char func_0c02a026(struct Obj_tu5_08 *);
extern void func_0c1d4610(struct Obj_tu5_08 *, struct Vec3_tu5_08 *);
extern void func_0c0344a0(struct Obj_tu5_08 *, int);
extern void func_0c02a0c4(struct Obj_tu5_08 *, int, int);
extern void func_0c044548(struct Obj_tu5_08 *, struct Obj_tu5_08 *);
extern void (*table_0c24a210[])(struct Actor *);
extern void func_0c043324(struct Actor *),func_0c0438de(struct Actor *),func_0c0437b8(struct Actor *),func_0c0442fa(struct Actor *),func_0c048bb0(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c161fc4(struct Actor *),func_0c1aefcc(struct Actor *);
extern struct LinkedActor *func_0c161300(struct LinkedActor *,unsigned char);
extern void func_0c0429a4(struct Actor *,struct LinkedActorVec3 *,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*dat_0c247fc4[])(struct Actor *,struct ActorSub2a4 *);
extern void (*dat_0c247fd0[])(struct Actor *),(*dat_0c247fe4[])(struct Actor *),(*dat_0c247ff4[])(struct Actor *);
#define MOVE a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108
#define CLEAR_RECORD a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++
void func_0c0cc058(struct Actor *),func_0c0cc1d4(struct Actor *),func_0c0cc4dc(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c043324(struct Actor *);
extern void (*table_0c23f9d4[])(struct Actor *);
extern int func_0c02a39a(struct Actor *, int);
extern void func_0c0442fa(struct Actor *);
extern void func_0c0432ca(struct Actor *);
extern void func_0c043014(struct Actor *, struct LinkedActorVec3 *);
extern void func_0c0346da(struct Actor *, int);
extern void (*table_0c23f9dc[])(struct Actor *);
extern void (*table_0c24a220[])(struct Actor *, struct ActorSub2a4 *);
extern struct LinkedActor *func_0c16aa40(struct LinkedActor *,unsigned char);
extern void func_0c0442fa(struct Actor *),func_0c0438de(struct Actor *),func_0c0437b8(struct Actor *),func_0c0432ca(struct Actor *);
extern void func_0c048bb0(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c1605d8(struct Actor *,int);
extern void (*table_0c247988[])(struct Actor *);
extern void func_0c02a39a(struct Actor *,int),func_0c02a626(struct Actor *,int,int,int);
extern void func_0c0c9e20(struct Actor *,void *),func_0c0c9ea0(struct Actor *),func_0c1a9cf0(struct Actor *,int),func_0c15ccc8(struct Actor *,int);
extern unsigned char dat_0c246edc[];
extern void (*table_0c247968[])(struct Actor *),(*table_0c247970[])(struct Actor *),(*table_0c24797c[])(struct Actor *);
void func_0c0c7254(struct Actor *),func_0c0c72d2(struct Actor *),func_0c0c741e(struct Actor *),func_0c0c7472(struct Actor *);

void func_0c0f21bc(struct Obj_0c06c3d4 *a)
{
    if (func_0c02a026(a) < 0) {
        func_0c0437b8(a);
        return;
    }
    if (a->b141) {
        a->b141 = 0;
        func_0c16aa40(a, 0);
    }
}

/* func_0c0f21f4: no verified twin. Ghidra draft:
*/
void func_0c0f21f4(void) { }

/* func_0c0f2226: no verified twin. Ghidra draft:
*/
void func_0c0f2226(void) { }

void func_0c0f2296(struct Actor *a)
{
    table_0c24a1e4[a->b7](a, &a->sub2a4);
}

/* func_0c0f22d0: no verified twin. Ghidra draft:
*/
void func_0c0f22d0(void) { }

/* func_0c0f23aa: no verified twin. Ghidra draft:
*/
void func_0c0f23aa(void) { }

/* func_0c0f2430: no verified twin. Ghidra draft:
*/
void func_0c0f2430(void) { }

/* func_0c0f246c: no verified twin. Ghidra draft:
*/
void func_0c0f246c(void) { }

void func_0c0f24b6(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

/* func_0c0f24d8: no verified twin. Ghidra draft:
*/
void func_0c0f24d8(void) { }

void func_0c0f2510(struct Actor *a){table_0c24a1f8[a->b6](a);}

/* func_0c0f253c: no verified twin. Ghidra draft:
*/
void func_0c0f253c(void) { }

/* func_0c0f25e8: no verified twin. Ghidra draft:
*/
void func_0c0f25e8(void) { }

/* func_0c0f2688: no verified twin. Ghidra draft:
*/
void func_0c0f2688(void) { }

void func_0c0f272c(struct Obj_tu5_08 *a)
{
    if (func_0c02a026(a) < 0) {
        a->b7++;
        a->f92 = 0.0f;
        a->f104 = 0.0f;
        a->f96 = -6.4285713f;
        a->f108 = -1.2053571f;
        func_0c02a0c4(a, 21, 5);
    }
}

/* func_0c0f2770: no verified twin. Ghidra draft:
*/
void func_0c0f2770(void) { }

/* func_0c0f2804: no verified twin. Ghidra draft:
*/
void func_0c0f2804(void) { }

void func_0c0f280e(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

/* func_0c0f2830: no verified twin. Ghidra draft:
*/
void func_0c0f2830(void) { }

void func_0c0f2868(struct Actor *a){table_0c24a210[a->b6](a);}

/* func_0c0f287a: no verified twin. Ghidra draft:
*/
void func_0c0f287a(void) { }

/* func_0c0f2948: no verified twin. Ghidra draft:
*/
void func_0c0f2948(void) { }

void func_0c0f29f0(struct Actor *a)
{
 MOVE;
 if(!(a->f56>a->f41c)){a->b6++;a->f56=a->f41c;a->b1f9=0;func_0c043324(a);func_0c02a0c4(a,1,3);}
 else if(func_0c02a026(a)<0)func_0c0438de(a);
}

void func_0c0f2a7e(struct Actor *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

/* func_0c0f2ab4: no verified twin. Ghidra draft:
*/
void func_0c0f2ab4(void) { }

void func_0c0f2abc(struct Actor *a){MOVE;if(!(a->f56>a->f41c))a->f56=a->f41c;}

void func_0c0f2b0c(struct Actor *a)
{
    table_0c24a220[a->b7](a, &a->sub2a4);
}

void func_0c0f2b22(struct Actor *a,struct ActorSub2a4 *state)
{
 int zero;
 a->b6++;func_0c0442fa(a);func_0c048bb0(a,2);zero=0;
 a->b1a1=a->b1a3+64;CLEAR_RECORD;
 a->f92/=16.0f;a->f96/=8.0f;a->f108/=64.0f;a->f104=0.0f;
 func_0c02a0c4(a,21,a->b1a3+14);
}

void func_0c0f2ba8(struct Actor *a,struct ActorSub2a4 *state)
{
 func_0c0cc058(a);func_0c02a026(a);
 if(a->b141){a->b141=0;a->b6++;func_0c16aa40((struct LinkedActor *)a,1);}
}

void func_0c0f2bda(struct Actor *a)
{
 func_0c0c72d2(a);
 if(func_0c02a026(a)<0){a->f96=0.0f;a->f108=0.0f;func_0c0438de(a);}
}
