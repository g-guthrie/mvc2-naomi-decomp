/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
typedef void (*ActorHandler)(struct Actor *);
extern ActorHandler table_0c23fc3c[];
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c044cbc(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);
extern void func_0c0346da(struct Actor *, int);
extern void func_0c048bb0(struct Actor *, int);
extern void func_0c043352(struct Actor *);
extern void func_0c044df4(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *);
extern void func_0c08183c(struct Actor *);
extern void (*table_0c247f08[])(struct Actor *);
extern void (*table_0c241b40[])(struct Actor *);
extern void func_0c0442fa(struct Actor *);
extern void func_0c0432ca(struct Actor *);
extern void func_0c048bb0(struct Actor *,int);
extern void func_0c0818f8(struct Actor *);
extern short dat_0c241b38[];
extern float dat_0c241b2c[];
extern void func_0c02a0c4(struct Actor *,int,int);
extern void func_0c193440(struct Actor *,int,int);
extern void func_0c13e4ac(struct Actor *,float,float,char);
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
extern void (*table_0c247f14[])(struct Actor *);
extern void func_0c0437b8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0346da(struct Actor *,int),func_0c1d2a56(struct LinkedActorVec3 *,int);
extern unsigned char func_0c044e52(struct Actor *),func_0c044846(struct Actor *);
extern short dat_0c23b9d0[],dat_0c23ba08[];
extern void (*table_0c247f24[])(struct Actor *);
extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *),func_0c046030(struct Actor *),func_0c0464c4(struct Actor *);
extern void func_0c0453c4(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern unsigned char func_0c043d3a(struct Actor *),func_0c044ae4(struct Actor *);
void func_0c03b37a(struct Actor *);
extern ActorHandler table_0c245bb8[], table_0c245bc0[], table_0c245bd4[];
extern int func_0c03916c(struct Actor *);
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
extern handler_0c03f15c dat_0c247f38[];
extern handler_0c03f15c dat_0c23bbe8[];
extern unsigned char dat_0c2f8338;
extern void func_0c0491a4(struct Obj_0c03f15c *);
extern char func_0c02a026(struct Obj_0c03f15c *);
extern void func_0c0437b8(struct Obj_0c03f15c *);
extern void func_0c042960(struct Obj_0c03f15c *);
extern int func_0c1ec190(void);
extern short dat_0c2406cc[];
extern void (*table_0c2406c4[])(struct Actor *);
extern void (*table_0c2406d4[])(struct Actor *);
extern void (*table_0c247f80[])(struct Actor *, struct ActorSub2a4 *);
typedef void (*ActorSubHandler)(struct Actor *, struct ActorSub2a4 *);
extern int func_0c02849a(void);
extern void func_0c0344a0(struct Actor *, int);
extern char dat_0c24a18c[];
extern char dat_0c24a184[];
extern ActorHandler dat_0c24a194[];
extern ActorSubHandler table_0c24a1d8[];
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
extern void func_0c161300(struct Obj_0c06c3d4 *a, int b);

void func_0c0cb298(struct Actor *a)
{
    if (!a->b6) {
        func_0c044cbc(a);
        a->b6++;
        a->b1a1 = 26;
        a->b1f9 = 1;
        func_0c02a0c4(a, 20, 12);
        a->w1ac = 0;
        a->b19e = 0;
        *(unsigned int *)&a->p1c4 = 0;
        dat_0c2f83f8->arr[a->b2]++;
        func_0c0346da(a, 22);
        func_0c048bb0(a, 5);
    }
    if (a->b1ff == 3)
        func_0c043352(a);
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    func_0c044df4(a);
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

void func_0c0cb360(struct Actor *a)
{
 table_0c247f08[a->b6](a);func_0c043352(a);
}

/* func_0c0cb37e: no verified twin. Ghidra draft:
*/
void func_0c0cb37e(void) { }

/* func_0c0cb404: no verified twin. Ghidra draft:
*/
void func_0c0cb404(void) { }

/* func_0c0cb412: no verified twin. Ghidra draft:
*/
void func_0c0cb412(void) { }

void func_0c0cb488(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

void func_0c0cb4aa(struct Actor *a)
{
 table_0c247f14[a->b6](a);func_0c043352(a);
}

/* func_0c0cb4c8: no verified twin. Ghidra draft:
*/
void func_0c0cb4c8(void) { }

/* func_0c0cb50c: no verified twin. Ghidra draft:
*/
void func_0c0cb50c(void) { }

/* func_0c0cb560: no verified twin. Ghidra draft:
*/
void func_0c0cb560(void) { }

void func_0c0cb5bc(struct Obj_ub3_05 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

void func_0c0cb5de(struct Actor *a){table_0c247f24[a->b6](a);}

void func_0c0cb5f0(struct Actor *a)
{
    a->b6++;
    a->b12c = 1;
    func_0c02a0c4(a, 18, 0);
}

/* func_0c0cb604: no verified twin. Ghidra draft:
*/
void func_0c0cb604(void) { }

/* func_0c0cb638: no verified twin. Ghidra draft:
*/
void func_0c0cb638(void) { }

/* func_0c0cb6bc: no verified twin. Ghidra draft:
*/
void func_0c0cb6bc(void) { }

void func_0c0cb6f8(struct Obj_0c03f15c *p)
{
    dat_0c247f38[p->b233](p);
}

/* func_0c0cb70c: no verified twin. Ghidra draft:
*/
void func_0c0cb70c(void) { }

void func_0c0cb742(struct Actor *a)
{
    table_0c247f80[a->b7](a, &a->sub2a4);
}

void func_0c0cb758(struct Actor *a)
{
    a->b6++;
    func_0c0442fa(a);
    func_0c0432ca(a);
    func_0c048bb0(a, 5);
    a->f56 = a->f41c;
    a->b1f9 = 0;
    a->b1a1 = a->b1a3 + 48;
    a->w1ac = 0;
    a->b19e = 0;
    a->p1c4 = 0;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a, 21, a->b1a3);
}

void func_0c0cb7be(struct Obj_0c06c3d4 *a)
{
    if (func_0c02a026(a) < 0) {
        func_0c0437b8(a);
        return;
    }
    if (a->b141) {
        a->b141 = 0;
        func_0c161300(a, 0);
    }
}
