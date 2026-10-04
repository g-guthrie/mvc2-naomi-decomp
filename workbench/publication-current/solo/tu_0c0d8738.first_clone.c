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
extern void (*table_0c248a1c[])(struct Actor *);
extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *),func_0c046030(struct Actor *),func_0c0464c4(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c0453c4(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern unsigned char func_0c043d3a(struct Actor *),func_0c044ae4(struct Actor *);
void func_0c03b37a(struct Actor *);
typedef void (*ActorHandler)(struct Actor *);
extern ActorHandler table_0c24123c[];
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);
extern void func_0c02a39a(struct Actor *, int);
extern void func_0c0437b8(struct Actor *);
extern ActorHandler table_0c241220[],table_0c24122c[];
extern void func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *);
extern void func_0c042ad2(struct Actor *,struct LinkedActorVec3 *,int);
extern void func_0c1c1678(struct Actor *,unsigned short *,int);
extern void func_0c191980(struct Actor *,int);
extern int func_0c1ec190(void);
extern short dat_0c2406cc[];
extern void (*table_0c2406c4[])(struct Actor *);
extern void (*table_0c2406d4[])(struct Actor *);
extern void (*table_0c248a44[])(struct Actor *, struct ActorSub2a4 *);

/* func_0c0d8738: no verified twin. Ghidra draft:
*/
void func_0c0d8738(void) { }

void func_0c0d886c(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

/* func_0c0d888e: no verified twin. Ghidra draft:
*/
void func_0c0d888e(void) { }

void func_0c0d88ca(struct Actor *a){table_0c248a1c[a->b6](a);}

/* func_0c0d88dc: no verified twin. Ghidra draft:
*/
void func_0c0d88dc(void) { }

void func_0c0d8986(struct Actor *a)
{
 struct LinkedActorVec3 position;
 a->b3f8=2;a->b328=5;a->b3f1=a->b255==6?2:0;
 func_0c02a026(a);
 if(a->b141&1){a->b3f0=0;a->b3f1=0;a->b141^=1;
 position.x=10.0f;position.y=145.71428f;func_0c042ad2(a,&position,1);}
 if(a->b141&2){a->b6++;a->b141^=1;a->b200=1;a->w3ea=480;func_0c1c1678(a,&a->w3ea,2);}
}

/* func_0c0d89e8: no verified twin. Ghidra draft:
*/
void func_0c0d89e8(void) { }

/* func_0c0d8a36: no verified twin. Ghidra draft:
*/
void func_0c0d8a36(void) { }

/* func_0c0d8b48: no verified twin. Ghidra draft:
*/
void func_0c0d8b48(void) { }

/* func_0c0d8bcc: no verified twin. Ghidra draft:
*/
void func_0c0d8bcc(void) { }

/* func_0c0d8bd6: no verified twin. Ghidra draft:
*/
void func_0c0d8bd6(void) { }

/* func_0c0d8c4c: no verified twin. Ghidra draft:
*/
void func_0c0d8c4c(void) { }

/* func_0c0d8d30: no verified twin. Ghidra draft:
*/
void func_0c0d8d30(void) { }

void func_0c0d8dca(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

/* func_0c0d8dec: no verified twin. Ghidra draft:
*/
void func_0c0d8dec(void) { }

void func_0c0d8e3c(struct Actor *a)
{
    table_0c248a44[a->b7](a, &a->sub2a4);
}
