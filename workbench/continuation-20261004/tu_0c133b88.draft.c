/* Native allocator pair; remaining family not translated or credited. */
#include "objects.h"
extern short dat_0c2f6830;
extern struct LinkedActor *func_0c0374da(int,int,int);
void func_0c133d16(struct LinkedActor *);
struct LinkedActor *func_0c133b88(struct LinkedActor *parent);

struct LinkedActor *func_0c133c06(struct LinkedActor *source);
struct LinkedActor *func_0c133c8a(struct LinkedActor *source);

struct LinkedActor *func_0c133cd8(struct LinkedActor *source);
typedef void (*LinkedParentHandler)(struct LinkedActor *,struct LinkedActor *);
extern LinkedParentHandler table_0c24e3bc[];
void func_0c133d16(struct LinkedActor *a);

extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c02a0c4(struct LinkedActor *,int,int);
void func_0c134964(struct LinkedActor *,struct LinkedActor *);
void func_0c133d32(struct Actor *a,struct Actor *parent);
extern LinkedParentHandler table_0c24e414[];
void func_0c134964(struct LinkedActor *a,struct LinkedActor *parent);
void func_0c134978(struct LinkedActor *a);
extern void func_0c037688(struct LinkedActor *);
void func_0c134986(struct LinkedActor *a);

extern void func_0c02a18c(struct LinkedActor *,int,int,int);

void func_0c133dfc(struct Actor *a,struct Actor *parent);

void func_0c133ea6(struct Actor *a,struct Actor *parent);

void func_0c133f80(struct Actor *a,struct Actor *parent);
void func_0c13401c(struct Actor *a,struct Actor *parent);

void func_0c1340f4(struct Actor *a,struct Actor *parent);
extern LinkedParentHandler table_0c24e3cc[];
void func_0c13419e(struct LinkedActor *a,struct LinkedActor *parent);

extern struct Dat_13bb5c dat_0c2f8338;
extern char func_0c02a026(struct Actor *);
extern void func_0c037d0c(struct LinkedActor *);
void func_0c13420c(struct Actor *a,struct Actor *parent);

void func_0c134300(struct LinkedActor *a,struct LinkedActor *parent);
extern LinkedParentHandler table_0c24e3e4[];
void func_0c134346(struct LinkedActor *a,struct LinkedActor *parent);
extern int func_0c028642(struct LinkedActor *);
void func_0c134358(struct Actor *a,struct Actor *parent);

void func_0c134440(struct LinkedActor *a,struct LinkedActor *parent);
extern LinkedParentHandler table_0c24e3ec[];
void func_0c134484(struct LinkedActor *a,struct LinkedActor *parent);
void func_0c134496(struct Actor *a,struct Actor *parent);

void func_0c13457c(struct LinkedActor *a,struct LinkedActor *parent);
extern LinkedParentHandler table_0c24e3f4[];
void func_0c1345c0(struct LinkedActor *a,struct LinkedActor *parent);
void func_0c1345d2(struct Actor *a,struct Actor *parent);

void func_0c134698(struct LinkedActor *a,struct LinkedActor *parent);
extern LinkedParentHandler table_0c24e3fc[];
void func_0c1346d6(struct LinkedActor *a,struct LinkedActor *parent);
void func_0c1346e8(struct Actor *a,struct Actor *parent);

void func_0c1347cc(struct LinkedActor *a,struct LinkedActor *parent);
extern LinkedParentHandler table_0c24e404[],table_0c24e40c[];
void func_0c134812(struct LinkedActor *a,struct LinkedActor *parent);
void func_0c134824(struct Actor *a,struct Actor *parent);
void func_0c13490c(struct LinkedActor *a,struct LinkedActor *parent);
void func_0c134952(struct LinkedActor *a,struct LinkedActor *parent);

struct LinkedActor *func_0c133b88(struct LinkedActor *parent)
{
    struct LinkedActor *first,*second;
    if(dat_0c2f6830<2) return 0;
    if((first=func_0c0374da(0,1,0))) {
        first->p16=func_0c133d16; first->p24=parent;
        first->b1=parent->b1; first->b32=0; first->b33=0; first->w38=0x301;
    }
    if((second=func_0c0374da((int)first,1,2)) && first) {
        second->p16=func_0c133d16; second->p24=parent; second->p20=first;
        second->b1=parent->b1; second->b32=1; second->b33=0; second->w38=0x301;
        first->p20=second;
    }
    return second;
}

struct LinkedActor *func_0c133c06(struct LinkedActor *source)
{
    struct LinkedActor *first,*second;
    if(dat_0c2f6830<2) return 0;
    if((first=func_0c0374da(0,1,0))) {
        first->p16=func_0c133d16; first->p24=source->p24; first->p20=source;
        first->b1=source->b1; first->b32=3; first->b33=0; first->w38=0x301;
    }
    if((second=func_0c0374da((int)first,1,2)) && first) {
        second->p16=func_0c133d16; second->p24=source->p24; second->p20=first;
        second->b1=source->b1; second->b32=4; second->b33=0; second->w38=0x301;
        source->p20=second;
    }
    return second;
}

struct LinkedActor *func_0c133c8a(struct LinkedActor *source)
{
    struct LinkedActor *child=func_0c0374da((int)source,1,2);
    if(child) {
        child->p16=func_0c133d16; child->p24=source->p24; child->p20=source;
        child->b1=source->b1; child->b32=2; child->b33=0; child->w38=0x301;
    }
    return child;
}

struct LinkedActor *func_0c133cd8(struct LinkedActor *source)
{
    struct LinkedActor *child=func_0c0374da((int)source,1,2);
    if(child) {
        child->p16=func_0c133d16; child->p24=source->p24; child->p20=source;
        child->b1=source->b1; child->b32=5; child->b33=0; child->w38=0x301;
    }
    return child;
}

void func_0c133d16(struct LinkedActor *a)
{
    struct LinkedActor *parent=a->p24;
    a->b36=parent->b36;
    table_0c24e3bc[a->b4](a,parent);
}

void func_0c133d32(struct Actor *a,struct Actor *parent)
{
    *(unsigned int *)&a->b13c=0x30305040;
    a->b19c=66; a->b19d=0; a->b1a1=69;
    a->w1ac=0; a->b19e=0; a->p1c4=0;
    dat_0c2f83f8->arr[a->b2]++;
    a->f92=146.66665649f; a->f96=100.71427917f;
    if(!a->w130) a->f92=-a->f92;
    *(short *)&a->f136=*(short *)&((struct Actor *)parent)->b158;
    a->b159=22; a->b158=29;
    func_0c02a0c4((struct LinkedActor *)a,a->b159,a->b158);
    a->b140=0; ((struct LinkedActor *)a)->b49=-4;
    func_0c134964((struct LinkedActor *)a,(struct LinkedActor *)parent);
}

void func_0c133dfc(struct Actor *a,struct Actor *parent)
{
    struct Actor *source=(struct Actor *)a->p20;
    *(unsigned int *)&a->b13c=0x20202020;
    a->b19c=66; a->b19d=0;
    a->b1a1=69;
    a->w1ac=0; a->b19e=0; a->p1c4=0;
    dat_0c2f83f8->arr[a->b2]++;
    a->f92=133.33332825f; a->f104=80.0f;
    if(!a->w130) { a->f92=-a->f92; a->f104=-a->f104; }
    *(short *)&a->f136=*(short *)&((struct Actor *)parent)->b158;
    a->b159=22; a->b158=31;
    func_0c02a18c((struct LinkedActor *)a,a->b159,a->b158,source->b141);
    ((struct LinkedActor *)a)->b49=-4;
    func_0c134964((struct LinkedActor *)a,(struct LinkedActor *)parent);
}

void func_0c133ea6(struct Actor *a,struct Actor *parent)
{
    struct Actor *source=(struct Actor *)a->p20;
    *(unsigned int *)&a->b13c=0x20203030;
    a->b19c=66; a->b19d=0;
    a->b1a1=source->b14b+69;
    a->w1ac=0; a->b19e=0; a->p1c4=0;
    dat_0c2f83f8->arr[a->b2]++;
    a->f92=160.0f; a->f104=105.0f;
    if(!a->w130) { a->f92=-a->f92; a->f104=-a->f104; }
    *(short *)&a->f136=*(short *)&((struct Actor *)parent)->b158;
    a->b159=22; a->b158=30;
    func_0c02a18c((struct LinkedActor *)a,a->b159,a->b158,source->b141);
    ((struct LinkedActor *)a)->b49=-4;
    func_0c134964((struct LinkedActor *)a,(struct LinkedActor *)parent);
}

void func_0c133f80(struct Actor *a,struct Actor *parent)
{
    *(unsigned int *)&a->b13c=0x30305040;
    a->b19c=66; a->b19d=0; a->b1a1=71;
    a->w1ac=0; a->b19e=0; a->p1c4=0;
    dat_0c2f83f8->arr[a->b2]++;
    a->f92=83.333328247f; a->f96=0.0f;
    if(!a->w130) a->f92=-a->f92;
    *(short *)&a->f136=*(short *)&((struct Actor *)parent)->b158;
    a->b159=22; a->b158=35;
    func_0c02a0c4((struct LinkedActor *)a,a->b159,a->b158);
    a->b140=0; ((struct LinkedActor *)a)->b49=-6;
    func_0c134964((struct LinkedActor *)a,(struct LinkedActor *)parent);
}

void func_0c13401c(struct Actor *a,struct Actor *parent)
{
    struct Actor *source=(struct Actor *)a->p20;
    *(unsigned int *)&a->b13c=0x20202020;
    a->b19c=66; a->b19d=0;
    a->b1a1=71;
    a->w1ac=0; a->b19e=0; a->p1c4=0;
    dat_0c2f83f8->arr[a->b2]++;
    a->f92=133.33332825f; a->f104=80.0f;
    if(!a->w130) { a->f92=-a->f92; a->f104=-a->f104; }
    *(short *)&a->f136=*(short *)&((struct Actor *)parent)->b158;
    a->b159=22; a->b158=37;
    func_0c02a18c((struct LinkedActor *)a,a->b159,a->b158,source->b141);
    ((struct LinkedActor *)a)->b49=-6;
    func_0c134964((struct LinkedActor *)a,(struct LinkedActor *)parent);
}

void func_0c1340f4(struct Actor *a,struct Actor *parent)
{
    struct Actor *source=(struct Actor *)a->p20;
    *(unsigned int *)&a->b13c=0x20203030;
    a->b19c=66; a->b19d=0;
    a->b1a1=71;
    a->w1ac=0; a->b19e=0; a->p1c4=0;
    dat_0c2f83f8->arr[a->b2]++;
    a->f92=160.0f; a->f104=105.0f;
    if(!a->w130) { a->f92=-a->f92; a->f104=-a->f104; }
    *(short *)&a->f136=*(short *)&((struct Actor *)parent)->b158;
    a->b159=22; a->b158=36;
    func_0c02a18c((struct LinkedActor *)a,a->b159,a->b158,source->b141);
    ((struct LinkedActor *)a)->b49=-6;
    func_0c134964((struct LinkedActor *)a,(struct LinkedActor *)parent);
}

void func_0c13419e(struct LinkedActor *a,struct LinkedActor *parent)
{
    a->b4++;
    a->sdc=parent->sdc; a->sdc.b12c=1;
    a->b2=parent->b2; a->b1=parent->b1;
    a->v80.x=parent->v80.x; a->v80.y=parent->v80.y;
    a->b1a3=parent->b1a3; a->b1a4=parent->b1a4; a->b48=parent->b48;
    a->v80=parent->v80;
    a->b36=parent->b36;
    table_0c24e3cc[a->b32](a,parent);
}

void func_0c13420c(struct Actor *a,struct Actor *parent)
{
    if(*(short *)&a->f136!=*(short *)&((struct Actor *)parent)->b158) {
        a->b5++; a->b159=22; a->b158=32;
        func_0c02a0c4((struct LinkedActor *)a,a->b159,a->b158);
        return;
    }
    a->f52=parent->f52+a->f92;
    a->f56=parent->f56+a->f96;
    if(!(dat_0c2f8338.w3c&(1<<dat_0c2f8338.b3b))) {
        func_0c02a026(a);
        if(a->b140) {
            struct LinkedActor *child;
            a->b140=0; a->b1a1=70;
            a->w1ac=0; a->b19e=0; a->p1c4=0;
            dat_0c2f83f8->arr[a->b2]++;
            child=func_0c133c8a((struct LinkedActor *)a);
            if(child) {
                ((struct LinkedActor *)a)->p20->p20=child;
                ((struct LinkedActor *)a)->p20=child;
            }
        }
        func_0c037d0c((struct LinkedActor *)a);
    }
}

void func_0c134300(struct LinkedActor *a,struct LinkedActor *parent)
{
    if(parent->b1d0==29) {
        a->f52=parent->f52+a->f92; a->f56=parent->f56+a->f96;
    }
    if(func_0c02a026((struct Actor *)a)<0) { a->b4++; a->sdc.b12c=0; }
}

void func_0c134346(struct LinkedActor *a,struct LinkedActor *parent)
{
    table_0c24e3e4[(unsigned char)a->b5](a,parent);
}

void func_0c134358(struct Actor *a,struct Actor *parent)
{
    struct LinkedActor *source=((struct LinkedActor *)a)->p20;
    if(*(short *)&a->f136!=*(short *)&((struct Actor *)parent)->b158) {
        a->b5++; a->b159=22; a->b158=34;
        func_0c02a0c4((struct LinkedActor *)a,a->b159,a->b158);
        return;
    }
    if(source->b4>=2) { a->b4++; a->b12c=0; return; }
    a->f52=source->f52+(source->b32?a->f104:a->f92);
    a->f56=source->f56;
    if(!(dat_0c2f8338.w3c&(1<<dat_0c2f8338.b3b))) {
        a->b159=22; a->b158=31;
        func_0c02a18c((struct LinkedActor *)a,a->b159,a->b158,((struct Actor *)source)->b141);
        if(!func_0c028642((struct LinkedActor *)a)) { a->b4++; a->b12c=0; }
        else func_0c037d0c((struct LinkedActor *)a);
    }
}

void func_0c134440(struct LinkedActor *a,struct LinkedActor *parent)
{
    struct LinkedActor *source=a->p20;
    a->f52=source->f52+(source->b32?a->f104:a->f92);
    a->f56=source->f56;
    if(func_0c02a026((struct Actor *)a)<0) { a->b4++; a->sdc.b12c=0; }
}

void func_0c134484(struct LinkedActor *a,struct LinkedActor *parent)
{
    table_0c24e3ec[(unsigned char)a->b5](a,parent);
}

void func_0c134496(struct Actor *a,struct Actor *parent)
{
    struct LinkedActor *source=((struct LinkedActor *)a)->p20;
    if(*(short *)&a->f136!=*(short *)&((struct Actor *)parent)->b158) {
        a->b5++; a->b159=22; a->b158=33;
        func_0c02a0c4((struct LinkedActor *)a,a->b159,a->b158);
        return;
    }
    if(source->b4>=2) { a->b4++; a->b12c=0; return; }
    a->f52=source->f52+(source->b32?a->f104:a->f92);
    a->f56=source->f56;
    if(!(dat_0c2f8338.w3c&(1<<dat_0c2f8338.b3b))) {
        a->b159=22; a->b158=30;
        func_0c02a18c((struct LinkedActor *)a,a->b159,a->b158,((struct Actor *)source)->b141);
        if(!func_0c028642((struct LinkedActor *)a)) { a->b4++; a->b12c=0; }
        else func_0c037d0c((struct LinkedActor *)a);
    }
}

void func_0c13457c(struct LinkedActor *a,struct LinkedActor *parent)
{
    struct LinkedActor *source=a->p20;
    a->f52=source->f52+(source->b32?a->f104:a->f92);
    a->f56=source->f56;
    if(func_0c02a026((struct Actor *)a)<0) { a->b4++; a->sdc.b12c=0; }
}

void func_0c1345c0(struct LinkedActor *a,struct LinkedActor *parent)
{
    table_0c24e3f4[(unsigned char)a->b5](a,parent);
}

void func_0c1345d2(struct Actor *a,struct Actor *parent)
{
    struct LinkedActor *source=((struct LinkedActor *)a)->p20;
    if(*(short *)&a->f136!=*(short *)&((struct Actor *)parent)->b158) {
        a->b5++; a->b159=22; a->b158=38;
        func_0c02a0c4((struct LinkedActor *)a,a->b159,a->b158);
        return;
    }
    a->f52=source->f52+a->f92; a->f56=source->f56+a->f96;
    if(!(dat_0c2f8338.w3c&(1<<dat_0c2f8338.b3b))) {
        func_0c02a026(a);
        if(a->b140) {
            struct LinkedActor *child;
            a->b140=0;
            child=func_0c133cd8((struct LinkedActor *)a);
            if(child) {
                source->p20->p20=child;
                source->p20=child;
            }
        }
        func_0c037d0c((struct LinkedActor *)a);
    }
}

void func_0c134698(struct LinkedActor *a,struct LinkedActor *parent)
{
    struct LinkedActor *source=a->p20;
    a->f52=source->f52+a->f92;
    a->f56=source->f56+a->f96;
    if(func_0c02a026((struct Actor *)a)<0) { a->b4++; a->sdc.b12c=0; }
}

void func_0c1346d6(struct LinkedActor *a,struct LinkedActor *parent)
{
    table_0c24e3fc[(unsigned char)a->b5](a,parent);
}

void func_0c1346e8(struct Actor *a,struct Actor *parent)
{
    struct LinkedActor *source=((struct LinkedActor *)a)->p20;
    if(*(short *)&a->f136!=*(short *)&((struct Actor *)parent)->b158) {
        a->b5++; a->b159=22; a->b158=40;
        func_0c02a0c4((struct LinkedActor *)a,a->b159,a->b158);
        return;
    }
    if(source->b4>=2) { a->b4++; a->b12c=0; return; }
    a->f52=source->f52+(source->b32==3?a->f92:a->f104);
    a->f56=source->f56;
    if(!(dat_0c2f8338.w3c&(1<<dat_0c2f8338.b3b))) {
        a->b159=22; a->b158=37;
        func_0c02a18c((struct LinkedActor *)a,a->b159,a->b158,((struct Actor *)source)->b141);
        if(!func_0c028642((struct LinkedActor *)a)) { a->b4++; a->b12c=0; }
        else func_0c037d0c((struct LinkedActor *)a);
    }
}

void func_0c1347cc(struct LinkedActor *a,struct LinkedActor *parent)
{
    struct LinkedActor *source=a->p20;
    a->f52=source->f52+(source->b32==3?a->f92:a->f104);
    a->f56=source->f56;
    if(func_0c02a026((struct Actor *)a)<0) { a->b4++; a->sdc.b12c=0; }
}

void func_0c134812(struct LinkedActor *a,struct LinkedActor *parent)
{ table_0c24e404[(unsigned char)a->b5](a,parent); }

void func_0c134824(struct Actor *a,struct Actor *parent)
{
    struct LinkedActor *source=((struct LinkedActor *)a)->p20;
    if(*(short *)&a->f136!=*(short *)&((struct Actor *)parent)->b158) {
        a->b5++; a->b159=22; a->b158=39;
        func_0c02a0c4((struct LinkedActor *)a,a->b159,a->b158);
        return;
    }
    if(source->b4>=2) { a->b4++; a->b12c=0; return; }
    a->f52=source->f52+(source->b32==3?a->f92:a->f104);
    a->f56=source->f56;
    if(!(dat_0c2f8338.w3c&(1<<dat_0c2f8338.b3b))) {
        a->b159=22; a->b158=36;
        func_0c02a18c((struct LinkedActor *)a,a->b159,a->b158,((struct Actor *)source)->b141);
        if(!func_0c028642((struct LinkedActor *)a)) { a->b4++; a->b12c=0; }
        else func_0c037d0c((struct LinkedActor *)a);
    }
}

void func_0c13490c(struct LinkedActor *a,struct LinkedActor *parent)
{
    struct LinkedActor *source=a->p20;
    a->f52=source->f52+(source->b32==3?a->f92:a->f104);
    a->f56=source->f56;
    if(func_0c02a026((struct Actor *)a)<0) { a->b4++; a->sdc.b12c=0; }
}

void func_0c134952(struct LinkedActor *a,struct LinkedActor *parent)
{ table_0c24e40c[(unsigned char)a->b5](a,parent); }

void func_0c134964(struct LinkedActor *a,struct LinkedActor *parent)
{
    table_0c24e414[a->b32](a,parent);
}

void func_0c134978(struct LinkedActor *a)
{
    a->b4++; a->sdc.b12c=0;
}

void func_0c134986(struct LinkedActor *a)
{
    func_0c037688(a);
}
