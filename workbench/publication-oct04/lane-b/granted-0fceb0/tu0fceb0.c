/* Whole0fceb0..0fd368 reconstruction. Only the retail selector cases0,1,2
 * are authored; the switch has no invented default initialization. */
#include "objects.h"
extern void func_0c044cbc(struct Actor *);
extern void func_0c0346da(struct Actor *,int);
extern void func_0c02a0c4(struct Actor *,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern const unsigned char dat_0c24abbc[];
extern const unsigned char dat_0c24abc0[];
extern const unsigned char dat_0c24abc4[];
extern const unsigned char dat_0c24abc8[];
extern const unsigned char dat_0c24abcc[];
extern const unsigned char dat_0c24abd0[];
extern const unsigned char dat_0c24abd4[];
extern const unsigned char dat_0c24abd8[];
extern const unsigned char dat_0c24abdc[];
extern const unsigned char dat_0c24abe0[];
extern const unsigned char dat_0c24abe4[];
extern const unsigned char dat_0c24abe8[];
void func_0c0fcef2(struct Actor *);
void func_0c0fcf88(struct Actor *);
void func_0c0fd048(struct Actor *);
void func_0c0fd10c(struct Actor *);
void func_0c0fd1ca(struct Actor *);
void func_0c0fd1d6(struct Actor *);
void func_0c0fd2a2(struct Actor *);

void func_0c0fceb0(struct Actor *a)
{
    func_0c044cbc(a);
    if(a->b1fe==0){
        if(a->b1f9==0)func_0c0fcef2(a);else func_0c0fcf88(a);
    }else{
        if(a->b1f9==0)func_0c0fd048(a);else func_0c0fd10c(a);
    }
}

void func_0c0fcef2(struct Actor *a)
{
    int zero;
    int state,mode;
    unsigned int sound;
    switch(a->b1e8){
    case 0:
        a->p3f4=(void *)dat_0c24abbc;
        state=0;mode=0;sound=20;a->b1a7=mode;
        break;
    case 1:
        a->p3f4=(void *)dat_0c24abc0;
        state=1;mode=1;sound=21;a->b1a7=mode;
        break;
    case 2:
        a->p3f4=(void *)dat_0c24abc4;
        state=2;mode=2;sound=22;a->b1a7=mode;
        break;
    }
    a->b1a1=state;zero=0;a->w1ac=zero;a->b19e=zero;
    *(void **)&a->p1c4=(void *)zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c0346da(a,sound);func_0c02a0c4(a,7,mode);
}

void func_0c0fcf88(struct Actor *a)
{
    int zero;
    int state,mode;
    unsigned int sound;
    switch(a->b1e8){
    case 0:
        a->p3f4=(void *)dat_0c24abbc;
        sound=20;state=6;mode=0;a->b1a7=mode;
        break;
    case 1:
        a->p3f4=(void *)dat_0c24abc0;
        sound=21;state=7;mode=1;a->b1a7=mode;
        break;
    case 2:
        a->p3f4=(void *)dat_0c24abc4;
        sound=22;state=8;mode=2;a->b1a7=mode;
        break;
    }
    a->b1a1=state;zero=0;a->w1ac=zero;a->b19e=zero;
    *(void **)&a->p1c4=(void *)zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c0346da(a,sound);func_0c02a0c4(a,9,mode);
}

void func_0c0fd048(struct Actor *a)
{
    int zero;
    int state,mode;
    unsigned int sound;
    switch(a->b1e8){
    case 0:
        a->p3f4=(void *)dat_0c24abc8;
        sound=20;state=3;mode=0;a->b1a7=mode;
        break;
    case 1:
        a->p3f4=(void *)dat_0c24abcc;
        sound=21;state=4;mode=1;a->b1a7=mode;
        break;
    case 2:
        a->p3f4=(void *)dat_0c24abd0;
        sound=22;state=5;mode=2;a->b1a7=mode;
        break;
    }
    a->b1a1=state;zero=0;a->w1ac=zero;a->b19e=zero;
    *(void **)&a->p1c4=(void *)zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c0346da(a,sound);func_0c02a0c4(a,8,mode);
}

void func_0c0fd10c(struct Actor *a)
{
    int zero;
    int state,mode;
    unsigned int sound;
    switch(a->b1e8){
    case 0:
        a->p3f4=(void *)dat_0c24abc8;
        sound=20;state=9;mode=0;a->b1a7=mode;
        break;
    case 1:
        a->p3f4=(void *)dat_0c24abcc;
        sound=21;state=10;mode=1;a->b1a7=mode;
        break;
    case 2:
        a->p3f4=(void *)dat_0c24abd0;
        sound=22;state=11;mode=2;a->b1a7=mode;
        break;
    }
    a->b1a1=state;zero=0;a->w1ac=zero;a->b19e=zero;
    *(void **)&a->p1c4=(void *)zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c0346da(a,sound);func_0c02a0c4(a,10,mode);
}

void func_0c0fd1a2(struct Actor *a)
{
    if(!a->b1fe && (a->b1d6&15))goto trigger;
    if(a->b1fe && (a->b1d6&0xf0)){trigger:func_0c0fd1ca(a);}
}
void func_0c0fd1ca(struct Actor *a)
{
    if(!a->b1fe)func_0c0fd1d6(a);else func_0c0fd2a2(a);
}

void func_0c0fd1d6(struct Actor *a)
{
    int zero;
    int state,mode;
    unsigned int sound;
    switch(a->b1e8){
    case 0:
        a->p3f4=(void *)dat_0c24abd4;
        sound=20;state=12;mode=0;a->b1a7=mode;
        break;
    case 1:
        a->p3f4=(void *)dat_0c24abd8;
        sound=21;state=13;mode=1;a->b1a7=mode;
        break;
    case 2:
        a->p3f4=(void *)dat_0c24abdc;
        sound=22;state=14;mode=2;a->b1a7=mode;
        break;
    }
    a->b1a1=state;zero=0;a->w1ac=zero;a->b19e=zero;
    *(void **)&a->p1c4=(void *)zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c0346da(a,sound);func_0c02a0c4(a,11,mode);
    if(a->b1d6&15)a->b1d6=a->b1d6-1;
}

void func_0c0fd2a2(struct Actor *a)
{
    int zero;
    int state,mode;
    unsigned int sound;
    switch(a->b1e8){
    case 0:
        a->p3f4=(void *)dat_0c24abe0;
        sound=20;state=15;mode=0;a->b1a7=mode;
        break;
    case 1:
        a->p3f4=(void *)dat_0c24abe4;
        sound=21;state=16;mode=1;a->b1a7=mode;
        break;
    case 2:
        a->p3f4=(void *)dat_0c24abe8;
        sound=22;state=17;mode=2;a->b1a7=mode;
        break;
    }
    a->b1a1=state;zero=0;a->w1ac=zero;a->b19e=zero;
    *(void **)&a->p1c4=(void *)zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c0346da(a,sound);func_0c02a0c4(a,12,mode);
}
