/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern void func_0c0437b8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0346da(struct Actor *,int),func_0c1d2a56(struct LinkedActorVec3 *,int);
extern unsigned char func_0c044e52(struct Actor *),func_0c044846(struct Actor *);
extern short dat_0c23b9d0[],dat_0c23ba08[];
extern void (*table_0c245d28[])(struct Actor *);
extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *),func_0c046030(struct Actor *),func_0c0464c4(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c0453c4(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern unsigned char func_0c043d3a(struct Actor *),func_0c044ae4(struct Actor *);
void func_0c03b37a(struct Actor *);
struct Vec3_0c070398 { float x, y, z; };
typedef void (*ActorHandler)(struct Actor *);
extern ActorHandler table_0c240e70[];
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c0437b8(struct Actor *);
extern void func_0c043014(struct Actor *, struct Vec3_0c070398 *);
extern void func_0c02a684(struct Actor *, int, int, int);
extern void func_0c02a0c4(struct Actor *, int, int);
extern void func_0c02a39a(struct Actor *, int);
extern void func_0c0438de(struct Actor *);
extern void (*table_0c240960[])(struct Actor *);
extern int func_0c02a39a(struct Actor *, int);
extern void func_0c0442fa(struct Actor *);
extern void func_0c0432ca(struct Actor *);
extern void func_0c043014(struct Actor *, struct LinkedActorVec3 *);
extern void func_0c0344a0(struct Actor *, int);
extern void (*table_0c240968[])(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c043324(struct Actor *);
extern struct Tbl_ub3_01*dat_0c2f83f8;
extern char func_0c02a026(struct Actor*);
extern int func_0c02a39a(struct Actor*,int);
extern void func_0c0439c4(struct Actor*),func_0c043324(struct Actor*),func_0c02a0c4(struct Actor*,int,int);
extern unsigned char func_0c044e52(struct Actor*);
extern int (*table_0c243630[])(struct Actor*);
extern void func_0c0439c4(struct Actor *);
extern ActorHandler table_0c240e8c[];
extern int (*table_0c245d34[])(struct Actor *);
extern void func_0c1910d0(struct Actor *, int);
extern int func_0c037d54(struct Actor *);
extern void func_0c025900(struct Actor *, int, int);
extern void func_0c1d4610(struct Actor *, struct LinkedActorVec3 *);
extern void func_0c048ce6(struct Actor *);

void func_0c0bf736(struct Actor *a){table_0c245d28[a->b6](a);}

void func_0c0bf748(struct Actor *a)
{
    func_0c02a39a(a, 0);
    a->b6++;
    a->b1f9 = 2;
    a->f92 = 30.0f;
    if (a->b1d2 == 0)
        a->f92 = -a->f92;
    a->f104 = 0.0f;
    a->f96 = 4.28571415f;
    a->f108 = -0.80357140303f;
    a->b1a1 = 80;
    a->w1ac = 0;
    a->b19e = 0;
    a->p1c4 = 0;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a, 20, 5);
}

void func_0c0bf7c2(struct Actor *a)
{
    (void)func_0c02a026(a);
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (func_0c044e52(a) != 0) {
        a->b6++;
        func_0c043324(a);
        func_0c02a0c4(a, 20, 6);
    }
}

void func_0c0bf830(struct Actor*a){if(func_0c02a026(a)<0)func_0c0439c4(a);else if(a->b141)a->b141=0;}

int func_0c0bf85c(struct Actor *a)
{
    return table_0c245d34[a->b1f9](a);
}
