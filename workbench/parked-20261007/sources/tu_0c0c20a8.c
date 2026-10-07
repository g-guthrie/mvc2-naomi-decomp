#include "objects.h"
extern void (*table_0c2469ec[])(struct Actor *);
extern void (*table_0c246a24[])(struct Actor *);
extern void (*table_0c246a10[])(struct Actor *);
extern void (*table_0c2469f4[])(struct Actor *);
extern void (*table_0c246a2c[])(struct Actor *);
extern struct Tbl_ub3_01*dat_0c2f83f8;
extern char func_0c02a026(struct Actor*);
extern void func_0c02a0c4(struct Actor*,int,int);
extern void func_0c02a39a(struct Actor*,int);
extern void func_0c043014(struct Actor*,void*);
extern void func_0c0432ca(struct Actor*);
extern void func_0c0437b8(struct Actor*);
extern void func_0c0442fa(struct Actor*);
extern void func_0c048bb0(struct Actor *,int),func_0c043324(struct Actor *),func_0c0451f2(struct Actor *),func_0c1a9cf0(struct Actor *,int),func_0c0346da(struct Actor *,int);
struct Speed_0c2469c4 { int x, y; };
extern struct Speed_0c2469c4 table_0c2469c4[];
extern unsigned char dat_0c2469e4[],dat_0c2469e8[];
void func_0c0c20a8(struct Actor *a);
void func_0c0c20ba(struct Actor *a);
void func_0c0c20cc(struct Actor *a);
void func_0c0c223c(struct Actor *a);
void func_0c0c2280(struct Actor *a);
void func_0c0c22c4(struct Actor *a);
void func_0c0c2308(struct Actor *a);
void func_0c0c2378(struct Actor *a);
void func_0c0c23c4(struct Actor *a,struct ActorSub2a4 *state);
void func_0c0c23e6(struct Actor *a);
void func_0c0c23f8(struct Actor *a);
void func_0c0c2526(struct Actor *a);
void func_0c0c2558(struct Actor *a);
void func_0c0c259c(struct Actor *a);
void func_0c0c261c(struct Actor *a,struct ActorSub2a4 *state);
void func_0c0c263e(struct Actor *a);
void func_0c0c2674(struct Actor *a);
void func_0c0c2686(struct Actor *a);
void func_0c0c26fc(struct Actor *a);
void func_0c0c2746(struct Actor *a);

void func_0c0c20a8(struct Actor *a){table_0c2469ec[a->b6](a);}

void func_0c0c20ba(struct Actor *a){table_0c2469f4[a->b7](a);}

/* func_0c0c20cc: no twin (294 bytes) */
void func_0c0c20cc(struct Actor *a)
{
 int zero;
 struct Speed_0c2469c4 *speed;
 if(a->b1f9==2){a->b6++;func_0c0c23f8(a);return;}
 a->b7++;func_0c0442fa(a);func_0c02a39a(a,0);
 a->f92=0;a->f96=0;a->f104=0;a->f108=0;
 zero=0;a->f56=a->f41c;a->b1fc=zero;a->b1f9=zero;
 func_0c048bb0(a,5);
 speed=table_0c2469c4;
 if(!a->b1d2){speed+=(unsigned char)a->b1a3;a->f92=(float)speed->x*1.66666663f/65536.0f;a->f104=0.72916663f;}
 else{speed+=(unsigned char)a->b1a3;a->f92=-((float)speed->x*1.66666663f/65536.0f);a->f104=-0.72916663f;}
 a->f96=(float)(table_0c2469c4+(unsigned char)a->b1a3)->y*2.1428571f/65536.0f;a->f108=-0.9375f;
 a->b1a1=dat_0c2469e4[(unsigned char)a->b1a3*2];a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
 func_0c02a0c4(a,21,a->b1a3+3);
 func_0c0c223c(a);
}

/* func_0c0c223c: no twin (68 bytes) */
void func_0c0c223c(struct Actor *a)
{
 func_0c02a026(a);
 if(a->b141){a->b7++;a->b141=0;if(!a->b1d2)a->f52+=-13.33333302f;else a->f52+=13.33333302f;}
}

/* func_0c0c2280: no twin (68 bytes) */
void func_0c0c2280(struct Actor *a)
{
 func_0c02a026(a);
 if(a->b141){a->b7++;a->b141=0;if(!a->b1d2)a->f52+=-40.0f;else a->f52+=40.0f;}
}

/* func_0c0c22c4: no twin (68 bytes) */
void func_0c0c22c4(struct Actor *a)
{
 func_0c02a026(a);
 if(a->b141){a->b7++;func_0c0451f2(a);a->b140=0;func_0c0432ca(a);func_0c1a9cf0(a,8);func_0c0346da(a,75);}
}

/* func_0c0c2308: no twin (68 bytes) */
void func_0c0c2308(struct Actor *a)
{
 int old,now;
 func_0c02a026(a);func_0c0c263e(a);
 old=a->f92;a->f52+=a->f92;a->f92+=a->f104;now=a->f92;
 if((old^now)<0)a->b7++;
}

/* func_0c0c2378: no twin (76 bytes) */
void func_0c0c2378(struct Actor *a)
{
 func_0c02a026(a);func_0c0c263e(a);
 if(a->f41c>=a->f56){a->b7++;a->b1f9=0;a->f56=a->f41c;func_0c043324(a);func_0c02a0c4(a,21,a->b1a3+6);}
}

void func_0c0c23c4(struct Actor *a,struct ActorSub2a4 *state){if(func_0c02a026(a)<0)func_0c0437b8(a);}

void func_0c0c23e6(struct Actor *a){table_0c246a10[a->b7](a);}

/* func_0c0c23f8: no twin (296 bytes) */
void func_0c0c23f8(struct Actor *a)
{
 struct Speed_0c2469c4 *speed;
 int zero;
 a->b7++;func_0c0442fa(a);func_0c02a39a(a,0);
 a->f92=0;a->f96=0;a->f104=0;a->f108=0;
 func_0c048bb0(a,5);
 if(!a->b1d2){a->f92=1.66666663f*(float)(table_0c2469c4+(unsigned char)a->b1a3)[2].x/65536.0f;a->f104=0.72916663f;}
 else{a->f92=-(1.66666663f*(float)(table_0c2469c4+(unsigned char)a->b1a3)[2].x/65536.0f);a->f104=-0.72916663f;}
 zero=0;
 a->f96=(float)(table_0c2469c4+(unsigned char)a->b1a3)[2].y*2.1428571f/65536.0f;a->f108=-0.9375f;
 a->b1a1=dat_0c2469e8[(unsigned char)a->b1a3*2];a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
 func_0c02a0c4(a,21,a->b1a3+16);
 func_0c0c2526(a);
}

/* func_0c0c2558: no twin (68 bytes) */
void func_0c0c2526(struct Actor *a)
{
 func_0c02a026(a);
 if(a->b141){a->b7++;func_0c1a9cf0(a,8);func_0c0346da(a,75);}
}
void func_0c0c2558(struct Actor *a)
{
 int old,now;
 func_0c02a026(a);func_0c0c263e(a);
 old=a->f92;a->f52+=a->f92;a->f92+=a->f104;now=a->f92;
 if((old^now)<0)a->b7++;
}

/* func_0c0c259c: no twin (76 bytes) */
void func_0c0c259c(struct Actor *a)
{
 func_0c02a026(a);func_0c0c263e(a);
 if(a->f41c>=a->f56){a->b7++;a->b1f9=0;a->f56=a->f41c;func_0c043324(a);func_0c02a0c4(a,21,a->b1a3+6);}
}

void func_0c0c261c(struct Actor *a,struct ActorSub2a4 *state){if(func_0c02a026(a)<0)func_0c0437b8(a);}

/* func_0c0c263e: no twin (54 bytes) */
void func_0c0c263e(struct Actor *a)
{
 int old,now;
 old=a->f96;a->f56+=a->f96;a->f96+=a->f108;now=a->f96;
 if((old^now)<0)a->f108=-1.60714281f;
}

void func_0c0c2674(struct Actor *a){table_0c246a24[a->b6](a);}

void func_0c0c2686(struct Actor *a)
{
    a->b6++;
    a->f92 = 0.0f;
    a->f96 = 0.0f;
    a->f104 = 0.0f;
    a->f108 = 0.0f;
    a->b1f9 = 0;
    a->f56 = a->f41c;
    func_0c02a39a(a, 0);
    func_0c0442fa(a);
    func_0c0432ca(a);
    a->b1a1 = 80;
    a->w1ac = 0;
    a->b19e = 0;
    *(unsigned int *)&a->p1c4 = 0;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a, 21, 15);
}

void func_0c0c26fc(struct Actor *a)
{
    struct Vec3_tu5_03 v;
    if (func_0c02a026(a) < 0) {
        func_0c0437b8(a);
        return;
    }
    if (a->b141) {
        a->b141 = 0;
        v.x = -58.3333321f;
        v.y = 85.71428f;
        func_0c043014(a, &v);
    }
}

void func_0c0c2746(struct Actor *a){table_0c246a2c[a->b6](a);}
