/* Partial source for the larger 14a9d0..14b8d8 family. No stubs or credit. */
#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern short dat_0c24ff88[];
extern float dat_0c24ff8c[],dat_0c24ffac[],dat_0c24ffcc[];
extern void func_0c02a0c4(struct LinkedActor *,int,int);
typedef void (*LinkedActorHandler)(struct LinkedActor *);
extern LinkedActorHandler table_0c24ffe8[],table_0c24fff8[];
void func_0c14b174(struct LinkedActor *);
void func_0c14ab84(struct LinkedActor *);

struct LinkedActor *func_0c14a9d0(struct LinkedActor *parent,unsigned char mode)
{
    struct LinkedActor *child;
    if((child=func_0c0374da(0,1,0))) {
        child->p16=func_0c14ab84;
        child->p24=parent;
        child->b32=mode;
    }
    return child;
}

struct LinkedActor *func_0c14a9fe(struct LinkedActor *parent,unsigned char mode,unsigned char attack,unsigned char variant)
{
    struct LinkedActor *child;
    if((child=func_0c0374da(0,1,0))) {
        child->p16=func_0c14ab84;
        child->p24=parent;
        child->b32=mode;
        child->b33=variant;
        child->b35=attack;
    }
    return child;
}

struct LinkedActor *func_0c14aa48(struct LinkedActor *parent,unsigned char mode)
{
    struct LinkedActor *child;
    if((child=func_0c0374da(0,1,0))) {
        child->p16=func_0c14ab84;
        child->p24=parent;
        child->b32=mode;
        child->b35=child->p24->b35;
        child->sdc.w130=child->p24->sdc.w130;
        child->f52=child->p24->f52;
        child->f56=child->p24->f56;
        child->f60=child->p24->f60;
        child->f52+=child->sdc.w130?176:-176;
    }
    return child;
}

struct LinkedActor *func_0c14aabc(struct LinkedActor *source,unsigned char mode,unsigned char attack)
{
    struct LinkedActor *child;
    if((child=func_0c0374da(0,1,0))) {
        child->p16=func_0c14ab84;
        child->p24=source->p24;
        child->p20=source;
        child->b32=mode;
        child->b35=attack;
        child->sdc.w130=child->p20->sdc.w130;
    }
    return child;
}

struct LinkedActor *func_0c14ab1c(struct LinkedActor *source,unsigned char mode,unsigned char attack)
{
    struct LinkedActor *child;
    if((child=func_0c0374da(0,1,0))) {
        child->p16=func_0c14ab84;
        child->p24=source->p24;
        child->p20=source;
        child->b32=mode;
        child->b35=attack;
        child->sdc.w130=child->p20->sdc.w130;
        child->f52=child->p20->f52;
        child->f56=child->p20->f56;
        child->f60=child->p20->f60;
    }
    return child;
}

void func_0c14ab84(struct LinkedActor *a)
{
    table_0c24ffe8[a->b4](a);
}

void func_0c14ab96(struct LinkedActor *a)
{
    a->b4++;
    a->sdc=a->p24->sdc;
    a->sdc.b12c=1;
    a->b2=a->p24->b2;
    a->b1=a->p24->b1;
    a->v80.x=a->p24->v80.x;
    a->v80.y=a->p24->v80.y;
    a->b1a3=a->p24->b1a3;
    a->b1a4=a->p24->b1a4;
    a->b48=a->p24->b48;
    a->v80=a->p24->v80;
    a->b36=a->p24->b36;
    table_0c24fff8[a->b32](a);
    func_0c14b174(a);
}

void func_0c14ac3c(struct LinkedActor *a)
{
    float stopped,unit,scale;
    a->sdc.b12c=1;
    a->f52=a->p24->f52;
    a->f56=a->p24->f56;
    a->f60=a->p24->f60;
    a->pad11[0]=66;
    a->pad11[1]=66;
    ((struct Actor *)a)->b1a1=54;
    ((struct Actor *)a)->w1ac=0;
    ((struct Actor *)a)->p1c4=((struct Actor *)a)->b19e=0;
    dat_0c2f83f8->arr[a->b2]++;
    stopped=0.0f;
    a->f104=stopped;
    a->f108=stopped;
    a->s28=dat_0c24ff88[0];
    a->s30=1;
    a->f56+=180.0f;
    ((struct Actor *)a)->f264=0.300000012f;
    a->f104=0.04f;
    a->f108=0.2800000012f;
    unit=1.0f;
    a->v80.x=unit;
    a->v80.y=unit;
    scale=100.0f;
    a->v80.x/=scale;
    a->v80.y/=scale;
    func_0c02a0c4(a,23,0);
}

void func_0c14acec(struct LinkedActor *a)
{
    float stopped;
    a->sdc.b12c=1;
    a->b36=0;
    a->f52=a->p24->f52;
    a->f56=a->p24->f56;
    a->f60=a->p24->f60;
    a->f56+=120.0f;
    stopped=0.0f;
    a->f104=stopped;
    a->f108=stopped;
    ((struct Actor *)a)->f264=1.0f;
    func_0c02a0c4(a,23,1);
}

void func_0c14ad36(struct LinkedActor *a)
{
    float stopped;
    a->sdc.b12c=1;
    a->b36=7;
    a->f52=a->p24->f52;
    a->f56=a->p24->f56;
    a->f60=a->p24->f60;
    a->f56+=120.0f;
    stopped=0.0f;
    a->f104=stopped;
    a->f108=stopped;
    ((struct Actor *)a)->f264=1.0f;
    func_0c02a0c4(a,23,2);
}

void func_0c14adac(struct LinkedActor *a)
{
    float *offset=dat_0c24ff8c;
    unsigned char index;
    float stopped;
    a->sdc.b12c=1;
    a->b36=0;
    a->f52=a->p24->f52;
    a->f56=a->p24->f56;
    a->f60=a->p24->f60;
    offset+=(unsigned char)a->b33*2;
    a->f52+=a->p24->sdc.w130?offset[0]:-offset[0];
    a->f56+=offset[1];
    index=0;
    do {
        func_0c14aabc(a,4,index);
    } while(++index<8);
    stopped=0.0f;
    a->f104=stopped;
    a->f108=stopped;
    func_0c02a0c4(a,23,3);
}

void func_0c14ae42(struct LinkedActor *a)
{
    float stopped;
    a->sdc.b12c=1;
    a->b36=0;
    a->f52=a->p20->f52;
    a->f56=a->p20->f56;
    a->f60=a->p20->f60;
    a->f52+=dat_0c24ffcc[a->b35];
    stopped=0.0f;
    a->f104=stopped;
    a->f108=stopped;
    func_0c02a0c4(a,23,4);
}
void func_0c14ae90(struct LinkedActor *a)
{
    float *offset=dat_0c24ffac;
    unsigned char index;
    float stopped;
    a->sdc.b12c=1;
    a->b36=0;
    a->f52=a->p24->f52;
    a->f56=a->p24->f56;
    a->f60=a->p24->f60;
    offset+=(unsigned char)a->b33*2;
    a->f52+=a->p24->sdc.w130?offset[0]:-offset[0];
    a->f56+=offset[1];
    index=0;
    do {
        func_0c14aabc(a,6,index);
    } while(++index<8);
    stopped=0.0f;
    a->f104=stopped;
    a->f108=stopped;
    func_0c02a0c4(a,23,5);
}

void func_0c14af3c(struct LinkedActor *a)
{
    float stopped;
    a->sdc.b12c=1; a->b36=0;
    a->f52=a->p20->f52; a->f56=a->p20->f56; a->f60=a->p20->f60;
    a->f56+=dat_0c24ffcc[a->b35];
    stopped=0.0f; a->f104=stopped; a->f108=stopped;
    func_0c02a0c4(a,23,6);
}
void func_0c14af8a(struct LinkedActor *a)
{
    float stopped;
    a->sdc.b12c=1; a->b36=0;
    a->f52+=a->sdc.w130?63.333332f:-63.333332f;
    stopped=0.0f; a->f104=stopped; a->f108=stopped;
    a->v80.x=0.01f; a->f96=0.38f; a->f108=-0.02f;
    ((struct Actor *)a)->f264=1.0f; a->s28=5;
    a->f92=a->sdc.w130?1.66666663f:-1.66666663f;
    a->f104=a->sdc.w130?-0.026041666f:0.026041666f;
    func_0c14ab1c(a,8,a->b35); a->b35++;
    a->pad11[0]=66; a->pad11[1]=66; ((struct Actor *)a)->b1a1=62;
    ((struct Actor *)a)->w1ac=0; ((struct Actor *)a)->b19e=0; ((struct Actor *)a)->p1c4=0;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a,23,7);
}
void func_0c14b09a(struct LinkedActor *a)
{
    float stopped;
    a->sdc.b12c=1; a->b36=0;
    stopped=0.0f; a->f104=stopped; a->f108=stopped;
    a->f92=0.18f; a->f104=-0.03f; a->s28=6;
    func_0c02a0c4(a,23,8);
}
void func_0c14b0cc(struct LinkedActor *a)
{
    float stopped;
    a->sdc.b12c=1; a->b36=0;
    a->f52=a->p20->f52; a->f56=a->p20->f56; a->f60=a->p20->f60;
    a->f52+=(unsigned char)a->b35*80;
    stopped=0.0f; a->f104=stopped; a->f108=stopped;
    func_0c02a0c4(a,23,10);
}
void func_0c14b120(struct LinkedActor *a)
{
    float stopped;
    a->sdc.b12c=1; a->b36=0;
    a->f52=a->p20->f52; a->f56=a->p20->f56; a->f60=a->p20->f60;
    a->f52-=(unsigned char)a->b35*80;
    stopped=0.0f; a->f104=stopped; a->f108=stopped;
    func_0c02a0c4(a,23,10);
}

extern LinkedActorHandler table_0c250024[];
typedef void (*LinkedActorParentHandler)(struct LinkedActor *,struct LinkedActor *);
extern LinkedActorParentHandler table_0c250050[];
void func_0c14b8c4(struct LinkedActor *);
void func_0c14b174(struct LinkedActor *a)
{
    if(a->b1!=a->p24->b1) {
        func_0c14b8c4(a);
        return;
    }
    table_0c250024[a->b32](a);
}
void func_0c14b1b8(struct LinkedActor *a)
{
    table_0c250050[(unsigned char)a->b5](a,a->p24);
    if(((struct Actor *)a->p24)->b19f) {
        a->b4++;
        a->sdc.b12c=0;
    }
}

extern char func_0c02a026(struct Actor *);
extern void func_0c037d0c(struct LinkedActor *);
extern void func_0c1c1678(struct Actor *,short *,int);
#pragma inline(unit_float_one)
static float unit_float_one(void) { return 1.0f; }
void func_0c14b1e8(struct Actor *a,struct Actor *parent)
{
    short *timer=(short *)&parent->sub2a4;
    func_0c02a026(a);
    a->s30=1;
    a->i72+=0x4000;
    if(a->i72==0xf000) a->i72=0;
    a->f80/=1.66666663f;
    a->f84/=2.14285707f;
    a->f108+=a->f104;
    a->f80+=a->f108;
    a->f84+=a->f108;
    a->f264+=a->f104;
    if(a->f80>1.44f) {
        a->f80=1.44f;
        a->f84=1.12000012f;
    }
    if(a->f264>1.0f) a->f264=1.0f;
    if(!a->s28--) {
        a->b5++;
        a->s28=35;
        a->i72=0;
        { float two=unit_float_one(); two=two+two; a->f108=two; }
        a->f104=0.01f;
    } else if(!(a->b19e&1)) {
        if(a->b19e) {
            struct Actor *hit=a->p1b0;
            if(!hit->b3 && !hit->b411 && hit->w420) {
                *timer=600;
                func_0c1c1678(parent,timer,6);
            }
        }
        func_0c037d0c((struct LinkedActor *)a);
    }
}

void func_0c14b33a(struct LinkedActor *a)
{
    func_0c02a026((struct Actor *)a);
    a->v80.x/=1.66666663f; a->v80.y/=2.14285707f;
    a->v80.x+=a->f108; a->v80.y-=a->f104;
    if(!(a->v80.y>0.0046666665003f)) {
        a->v80.y=0.0046666665003f;
        if(!(a->s28%5)) {
            func_0c14aabc(a,9,a->b35);
            func_0c14aabc(a,10,a->b35);
            a->b35++;
        }
    }
    if(!a->s28--) { a->b4++; a->sdc.b12c=0; }
}
extern LinkedActorHandler table_0c250058[],table_0c25005c[],table_0c250060[];
void func_0c14b3d4(struct LinkedActor *a)
{
    table_0c250058[(unsigned char)a->b5](a);
    if(((struct Actor *)a)->b19e) { a->b4++; a->sdc.b12c=0; }
}
void func_0c14b430(struct LinkedActor *a)
{
    func_0c02a026((struct Actor *)a);
    ((struct Actor *)a)->f264-=0.04f;
    if(((struct Actor *)a)->b143<0) { a->b4++; a->sdc.b12c=0; }
}
void func_0c14b462(struct LinkedActor *a)
{
    table_0c25005c[(unsigned char)a->b5](a);
    if(((struct Actor *)a)->b19e) { a->b4++; a->sdc.b12c=0; }
}
void func_0c14b490(struct LinkedActor *a)
{
    func_0c02a026((struct Actor *)a);
    if(((struct Actor *)a)->b143<0) { a->b4++; a->sdc.b12c=0; }
}
void func_0c14b4b4(struct LinkedActor *a)
{
    table_0c250060[(unsigned char)a->b5](a);
}
extern void func_0c0346da(struct LinkedActor *,int);
void func_0c14b4c6(struct LinkedActor *a)
{
    if(((struct Actor *)a)->b141==1) {
        a->b5++; ((struct Actor *)a)->b141=0;
        func_0c0346da(a,76);
    }
    func_0c02a026((struct Actor *)a);
}
void func_0c14b4f2(struct LinkedActor *a)
{
    func_0c02a026((struct Actor *)a);
    a->f52+=a->f92; a->f92+=a->f104;
    a->v80.y+=a->f96; a->f96+=a->f108;
    if(a->s28--<0) {
        a->b5++;
        if(a->b35<5) func_0c14ab1c(a,7,a->b35);
    } else func_0c037d0c(a);
}

void func_0c14b594(struct LinkedActor *a)
{
    func_0c02a026((struct Actor *)a);
    a->v80.x-=a->s28*0.019999999553f+0.059999998659f;
    if(a->v80.x<0.0099999997765f) {
        a->b5++; a->s28=8; a->v80.x=0.039999999106f; a->f108=-0.10000000149f;
    }
    a->s28++;
    a->f52+=a->f92; a->f92+=a->f104; a->v80.y+=a->f96; a->f96+=a->f108;
    if(a->v80.y<0.0099999997765f) a->v80.y=0.0099999997765f;
}
void func_0c14b62e(struct LinkedActor *a)
{
    ((struct Actor *)a)->f264-=0.059999998659f;
    if(((struct Actor *)a)->f264<0.10000000149f) ((struct Actor *)a)->f264=0.10000000149f;
    a->f52+=a->f92; a->f92+=a->f104; a->v80.y+=a->f96; a->f96+=a->f108;
    if(a->v80.y<0.0099999997765f) a->v80.y=0.0099999997765f;
    if(a->s28--<0) { a->b5++; a->f96/=100.0f; a->f108/=100.0f; }
}
void func_0c14b6e0(struct LinkedActor *a)
{
    ((struct Actor *)a)->f264-=0.079999998212f;
    if(((struct Actor *)a)->f264<0.10000000149f) ((struct Actor *)a)->f264=0.10000000149f;
    a->f52+=a->f92; a->f92+=a->f104; a->v80.y+=a->f96; a->f96+=a->f108;
    if(a->v80.y<0.0099999997765f) { a->b4++; a->sdc.b12c=0; a->v80.y=0.0099999997765f; }
}
extern LinkedActorHandler table_0c250074[];
void func_0c14b754(struct LinkedActor *a)
{ table_0c250074[(unsigned char)a->b5](a); }
void func_0c14b766(struct LinkedActor *a)
{
    func_0c02a026((struct Actor *)a);
    a->v80.x+=a->f92; a->f92+=a->f104;
    if(a->s28<=2) {
        ((struct Actor *)a)->f264-=0.20000000298f;
        if(((struct Actor *)a)->f264<0.10000000149f) ((struct Actor *)a)->f264=0.10000000149f;
    }
    if(a->s28--<0) {
        a->b5++; a->s28=6;
        ((struct Actor *)a)->f264=1.0f; a->v80.x=1.0f; a->v80.y=1.0f;
        a->f92=0.0099999997765f; a->f104=-0.00030000001425f;
        a->f96=0.019999999553f; a->f108=-0.00030000001425f;
        func_0c02a0c4(a,23,9);
    }
}
void func_0c14b830(struct LinkedActor *a)
{
    func_0c02a026((struct Actor *)a);
    a->v80.x+=a->f92; a->f92+=a->f104; a->v80.y+=a->f96; a->f96+=a->f108;
    if(!a->s28--) { a->b4++; a->sdc.b12c=0; }
}
void func_0c14b892(struct LinkedActor *a)
{
    func_0c02a026((struct Actor *)a);
    if(((struct Actor *)a)->b143<0) { a->b4++; a->sdc.b12c=0; }
}
void func_0c14b8b6(struct LinkedActor *a)
{ a->b4++; a->sdc.b12c=0; }
extern void func_0c037688(struct LinkedActor *);
void func_0c14b8c4(struct LinkedActor *a)
{ func_0c037688(a); }
