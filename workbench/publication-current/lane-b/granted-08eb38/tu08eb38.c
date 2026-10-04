/* Complete ordinary C for exclusive08EB38..08F7A4; retail continuation labels are not functions. */
#include "objects.h"
extern unsigned int dat_0c242aa0[];
extern unsigned int *dat_0c2d6f84;
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *);
extern unsigned char func_0c04608a(struct Actor *,unsigned char *);
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c046dd0(struct Actor *,int);
extern int func_0c046d54(struct Actor *);
extern void func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int),func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *);
extern void func_0c02a684(struct Actor *,int,int,int),func_0c02a39a(struct Actor *,int);
extern void func_0c044cbc(struct Actor *),func_0c043352(struct Actor *),func_0c044df4(struct Actor *),func_0c0437b8(struct Actor *),func_0c0438de(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern void func_0c0421f4(struct Actor *),func_0c0420f8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern void (*table_0c242b10[])(struct Actor *),(*table_0c242b20[])(struct Actor *);
extern unsigned char dat_0c2429f0[];
extern unsigned char dat_0c242a00[];
extern unsigned char dat_0c242a10[];
extern unsigned char dat_0c242a24[];
extern unsigned char dat_0c242a34[];
extern unsigned char dat_0c2429c0[];
extern unsigned char dat_0c2429c4[];
extern unsigned char dat_0c2429c8[];
extern unsigned char dat_0c2429cc[];
extern unsigned char dat_0c2429d0[];
extern unsigned char dat_0c2429d4[];
extern unsigned char dat_0c2429d8[];
extern unsigned char dat_0c2429dc[];
extern unsigned char dat_0c2429e0[];
extern unsigned char dat_0c2429e4[];
extern unsigned char dat_0c2429e8[];
extern unsigned char dat_0c2429ec[];
void func_0c08eb38(struct Actor *);
void func_0c08eb54(struct Actor *);
unsigned char func_0c08ebf4(struct Actor *);
unsigned char func_0c08ec6a(struct Actor *);
unsigned char func_0c08ecb0(struct Actor *);
unsigned char func_0c08ecf6(struct Actor *);
unsigned char func_0c08ed6c(struct Actor *);
unsigned char func_0c08edbc(struct Actor *);
unsigned char func_0c08edf4(struct Actor *);
unsigned char func_0c08ee32(struct Actor *);
unsigned char func_0c08ee5c(struct Actor *);
unsigned char func_0c08eeb6(struct Actor *);
void func_0c08eeec(struct Actor *);
void func_0c08ef4a(struct Actor *);
void func_0c08ef5e(struct Actor *);
void func_0c08efd4(struct Actor *);
void func_0c08f06a(struct Actor *);
void func_0c08f122(struct Actor *);
void func_0c08f1b8(struct Actor *);
void func_0c08f272(struct Actor *);
void func_0c08f29a(struct Actor *);
void func_0c08f2a6(struct Actor *);
void func_0c08f3a8(struct Actor *);
void func_0c08f4a2(struct Actor *);
void func_0c08f4b6(struct Actor *);
void func_0c08f4c4(struct Actor *);
void func_0c08f540(struct Actor *);
void func_0c08f562(struct Actor *);
void func_0c08f5b4(struct Actor *);
void func_0c08f628(struct Actor *);
void func_0c08f64a(struct Actor *);
void func_0c08f660(struct Actor *);
void func_0c08f6cc(struct Actor *);
void func_0c08f730(struct Actor *);

void func_0c08eb38(struct Actor *a)
{
    register unsigned int i,limit=112;
    register unsigned int *out=(unsigned int *)a->p428,*in=dat_0c242aa0;
    i=0;
copy_next:
    *(unsigned int *)((char *)out+i)=*(unsigned int *)((char *)in+i);
    i+=4;if(i<limit)goto copy_next;
}
void func_0c08eb54(struct Actor *a)
{
    if(func_0c0465cc(a)||func_0c046b6c(a)||func_0c0469f4(a)||func_0c046d3c(a)||
       func_0c08ecf6(a)||func_0c08ed6c(a)||func_0c08ecb0(a)||func_0c08ebf4(a)||
       func_0c08ec6a(a)||func_0c08edbc(a)||func_0c08edf4(a))return;
    if(func_0c04608a(a,a->x3cc))return;
    func_0c045f1c(a);func_0c0463fc(a);
}

unsigned char func_0c08ebf4(struct Actor *a)
{
    int zero;
    if(!func_0c046e7e(a,dat_0c242a24,a->x36c))return 0;
    func_0c047aac(a,a->x36c);
    zero=0;a->b5=zero;a->b6=zero;a->b7=zero;a->b1e9=0;
    func_0c045248(a,21);return 1;
}

unsigned char func_0c08ec6a(struct Actor *a)
{
    int zero;
    if(!func_0c046e7e(a,dat_0c242a34,a->x374))return 0;
    func_0c047aac(a,a->x374);
    zero=0;a->b5=zero;a->b6=zero;a->b7=zero;a->b1e9=1;
    func_0c045248(a,21);return 1;
}

unsigned char func_0c08ecb0(struct Actor *a)
{
    int zero;
    if(!func_0c046e7e(a,dat_0c242a10,a->x37c))return 0;
    func_0c047aac(a,a->x37c);
    zero=0;a->b5=zero;a->b6=zero;a->b7=zero;a->b1e9=2;
    func_0c045248(a,21);return 1;
}

unsigned char func_0c08ecf6(struct Actor *a)
{
    int zero;
    if(!func_0c046e7e(a,dat_0c2429f0,a->x384)||!*a->p40c)return 0;
    func_0c047aac(a,a->x384);
    zero=0;a->b5=zero;a->b6=zero;a->b7=zero;a->b1e9=3;
    func_0c045248(a,29);return 1;
}

unsigned char func_0c08ed6c(struct Actor *a)
{
    int zero;
    if(!func_0c046e7e(a,dat_0c242a00,a->x38c)||!*a->p40c)return 0;
    func_0c047aac(a,a->x38c);
    zero=0;a->b5=zero;a->b6=zero;a->b7=zero;a->b1e9=4;
    func_0c045248(a,29);return 1;
}

unsigned char func_0c08edbc(struct Actor *a)
{
    if(!func_0c046dd0(a,5))return 0;
    a->b5=0;a->b6=0;a->b7=0;a->b1e9=5;func_0c045248(a,21);return 1;
}
unsigned char func_0c08edf4(struct Actor *a)
{
    if(!func_0c046d54(a)||!*a->p40c)return 0;
    a->b5=0;a->b6=0;a->b7=0;a->b1e9=7;func_0c045248(a,29);return 1;
}
unsigned char func_0c08ee32(struct Actor *a)
{
    if(func_0c08ee5c(a)||func_0c08eeb6(a))return 1;
    return 0;
}
unsigned char func_0c08ee5c(struct Actor *a)
{
    if(!func_0c046e7e(a,dat_0c2429f0,a->x384)||!*a->p40c)return 0;
    a->b258=3;return 1;
}
unsigned char func_0c08eeb6(struct Actor *a)
{
    if(!func_0c046e7e(a,dat_0c242a00,a->x38c)||!*a->p40c)return 0;
    a->b258=4;return 1;
}
void func_0c08eeec(struct Actor *a)
{
    if(!a->sub2a4.b1)return;
    if(a->b1d0==21 && a->b1e9==3 && a->b159==22 && !a->b158 && a->sub2a4.b1){
        if(dat_0c2d6f84[7]&1)func_0c02a684(a,0,0,1);else func_0c02a39a(a,1);
        return;
    }
    a->sub2a4.b1=0;func_0c02a39a(a,0);
}
void func_0c08ef4a(struct Actor *a)
{
    table_0c242b10[a->b1ff](a);
}
void func_0c08ef5e(struct Actor *a)
{
    func_0c044cbc(a);
    if(!a->b1fe){
        if(!a->b1f9)func_0c08efd4(a);else func_0c08f06a(a);
    }else{
        if(!a->b1f9)func_0c08f122(a);else func_0c08f1b8(a);
    }
}

void func_0c08efd4(struct Actor *a)
{
    int zero;
    int state,mode;
    unsigned int sound;
    switch(a->b1e8){
    case 0:
        a->p3f4=(void *)dat_0c2429c0;
        state=0;mode=0;sound=20;a->b1a7=mode;break;
    case 1:
        a->p3f4=(void *)dat_0c2429c4;
        state=1;mode=1;sound=21;a->b1a7=mode;break;
    case 2:
        a->p3f4=(void *)dat_0c2429c8;
        state=2;mode=2;sound=22;a->b1a7=mode;break;
    }
    a->b1a1=state;zero=0;a->w1ac=zero;a->b19e=zero;a->p1c4=zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c0346da(a,sound);func_0c02a0c4(a,7,mode);
}

void func_0c08f06a(struct Actor *a)
{
    int zero;
    int state,mode;
    unsigned int sound;
    switch(a->b1e8){
    case 0:
        a->p3f4=(void *)dat_0c2429c0;
        sound=20;state=6;mode=0;a->b1a7=mode;break;
    case 1:
        a->p3f4=(void *)dat_0c2429c4;
        sound=21;state=7;mode=1;a->b1a7=mode;break;
    case 2:
        a->p3f4=(void *)dat_0c2429c8;
        sound=22;state=8;mode=2;a->b1a7=mode;break;
    }
    a->b1a1=state;zero=0;a->w1ac=zero;a->b19e=zero;a->p1c4=zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c0346da(a,sound);func_0c02a0c4(a,9,mode);
}

void func_0c08f122(struct Actor *a)
{
    int zero;
    int state,mode;
    unsigned int sound;
    switch(a->b1e8){
    case 0:
        a->p3f4=(void *)dat_0c2429cc;
        sound=20;state=3;mode=0;a->b1a7=mode;break;
    case 1:
        a->p3f4=(void *)dat_0c2429d0;
        sound=21;state=4;mode=1;a->b1a7=mode;break;
    case 2:
        a->p3f4=(void *)dat_0c2429d4;
        sound=22;state=5;mode=2;a->b1a7=mode;break;
    }
    a->b1a1=state;zero=0;a->w1ac=zero;a->b19e=zero;a->p1c4=zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c0346da(a,sound);func_0c02a0c4(a,8,mode);
}

void func_0c08f1b8(struct Actor *a)
{
    int zero;
    int state,mode;
    unsigned int sound;
    switch(a->b1e8){
    case 0:
        a->p3f4=(void *)dat_0c2429cc;
        sound=20;state=9;mode=0;a->b1a7=mode;break;
    case 1:
        a->p3f4=(void *)dat_0c2429d0;
        sound=21;state=10;mode=1;a->b1a7=mode;break;
    case 2:
        a->p3f4=(void *)dat_0c2429d4;
        sound=22;state=11;mode=2;a->b1a7=mode;break;
    }
    a->b1a1=state;zero=0;a->w1ac=zero;a->b19e=zero;a->p1c4=zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c0346da(a,sound);func_0c02a0c4(a,10,mode);
}

void func_0c08f272(struct Actor *a)
{
    if(!a->b1fe && (a->b1d6&15))goto trigger;
    if(a->b1fe && (a->b1d6&0xf0)){trigger:func_0c08f29a(a);}
}
void func_0c08f29a(struct Actor *a)
{
    if(!a->b1fe)func_0c08f2a6(a);else func_0c08f3a8(a);
}

void func_0c08f2a6(struct Actor *a)
{
    int zero;
    int state,mode;
    unsigned int sound;
    switch(a->b1e8){
    case 0:
        if(!a->b1fc)a->p3f4=(void *)dat_0c2429c0;else a->p3f4=(void *)dat_0c2429d8;
        sound=20;state=12;mode=0;a->b1a7=mode;break;
    case 1:
        if(!a->b1fc)a->p3f4=(void *)dat_0c2429c4;else a->p3f4=(void *)dat_0c2429dc;
        sound=21;state=13;mode=1;a->b1a7=mode;break;
    case 2:
        if(!a->b1fc)a->p3f4=(void *)dat_0c2429c8;else a->p3f4=(void *)dat_0c2429e0;
        sound=22;state=14;mode=2;a->b1a7=mode;break;
    }
    a->b1a1=state;zero=0;a->w1ac=zero;a->b19e=zero;a->p1c4=zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c0346da(a,sound);func_0c02a0c4(a,11,mode);
    if(a->b1d6&15)a->b1d6=a->b1d6-1;
}

void func_0c08f3a8(struct Actor *a)
{
    int zero;
    int state,mode;
    unsigned int sound;
    switch(a->b1e8){
    case 0:
        if(!a->b1fc)a->p3f4=(void *)dat_0c2429cc;else a->p3f4=(void *)dat_0c2429e4;
        sound=20;state=15;mode=0;a->b1a7=mode;break;
    case 1:
        if(!a->b1fc)a->p3f4=(void *)dat_0c2429d0;else a->p3f4=(void *)dat_0c2429e8;
        sound=21;state=16;mode=1;a->b1a7=mode;break;
    case 2:
        if(!a->b1fc)a->p3f4=(void *)dat_0c2429d4;else a->p3f4=(void *)dat_0c2429ec;
        sound=22;state=17;mode=2;a->b1a7=mode;break;
    }
    a->b1a1=state;zero=0;a->w1ac=zero;a->b19e=zero;a->p1c4=zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c0346da(a,sound);func_0c02a0c4(a,12,mode);
}

void func_0c08f4a2(struct Actor *a)
{
    table_0c242b20[a->b1ff](a);
}
void func_0c08f4b6(struct Actor *a)
{
    func_0c043352(a);func_0c08f4c4(a);
}
void func_0c08f4c4(struct Actor *a)
{
    a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
    func_0c044df4(a);
    if(!a->b1fe){
        if(!a->b1f9)func_0c08f540(a);else func_0c08f562(a);
    }else{
        if(!a->b1f9)func_0c08f5b4(a);else func_0c08f628(a);
    }
}

void func_0c08f540(struct Actor *a)
{
    if(func_0c02a026(a)<0)func_0c0437b8(a);
}

void func_0c08f562(struct Actor *a)
{
    if(func_0c02a026(a)<0)func_0c0437b8(a);
}

void func_0c08f5b4(struct Actor *a)
{
    int state;
    if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
    switch(a->b1e8){
    case 0:break;
    case 1:
        if(!a->b14b)break;
        a->b14b=0;state=25;goto changed;
    case 2:
        if(!a->b14b)break;
        a->b14b=0;state=26;
changed:
        a->b1a1=state;a->w1ac=0;a->b19e=0;a->p1c4=0;
        dat_0c2f83f8->arr[a->b2]++;break;
    }
}
void func_0c08f628(struct Actor *a)
{
    if(func_0c02a026(a)<0)func_0c0437b8(a);
}
void func_0c08f64a(struct Actor *a)
{
    func_0c0421f4(a);func_0c0420f8(a);func_0c08f660(a);
}
void func_0c08f660(struct Actor *a)
{
    func_0c042018(a);func_0c0421b8(a);
    if(!a->b1fe)func_0c08f6cc(a);else func_0c08f730(a);
    if(func_0c044e52(a))func_0c044f1c(a);
}

void func_0c08f6cc(struct Actor *a)
{
    if(func_0c02a026(a)<0){func_0c0438de(a);return;}
    switch(a->b1e8){
    case 0:case 1:break;
    case 2:
        if(!a->b14b)break;
        a->b1a1=a->b14b;a->w1ac=0;a->b19e=0;a->p1c4=0;
        dat_0c2f83f8->arr[a->b2]++;
        a->b14b=0;break;
    }
}

void func_0c08f730(struct Actor *a)
{
    if(func_0c02a026(a)<0){func_0c0438de(a);return;}
    switch(a->b1e8){
    case 0:case 1:break;
    case 2:
        if(!a->b14b)break;
        a->b1a1=a->b14b;a->w1ac=0;a->b19e=0;a->p1c4=0;
        dat_0c2f83f8->arr[a->b2]++;
        a->b14b=0;break;
    }
}
