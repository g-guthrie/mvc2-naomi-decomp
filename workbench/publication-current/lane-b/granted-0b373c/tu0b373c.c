/* Complete ordinary-C reconstruction of the exclusive B373C..B41E0 grant. */
#include "objects.h"
extern void func_0c044cbc(struct Actor *),func_0c043352(struct Actor *),func_0c044df4(struct Actor *),func_0c0437b8(struct Actor *),func_0c0438de(struct Actor *);
extern void func_0c0421f4(struct Actor *),func_0c0420f8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern unsigned int func_0c02849a(void);
extern void func_0c157968(struct Actor *,int),func_0c1a6d1c(struct Actor *,int),func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern void func_0c1ce7ae(struct Actor *,struct ActorVec2 *,float,float);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern short dat_0c244ddc[];
extern void (*table_0c244dc0[])(struct Actor *),(*table_0c244dd0[])(struct Actor *);
extern const unsigned char dat_0c244cf6[];
extern const unsigned char dat_0c244cfa[];
extern const unsigned char dat_0c244cfe[];
extern const unsigned char dat_0c244d02[];
extern const unsigned char dat_0c244d06[];
extern const unsigned char dat_0c244d0a[];
extern const unsigned char dat_0c244d0e[];
extern const unsigned char dat_0c244d12[];
extern const unsigned char dat_0c244d16[];
extern const unsigned char dat_0c244d1a[];
extern const unsigned char dat_0c244d1e[];
extern const unsigned char dat_0c244d22[];
extern const unsigned char dat_0c244d26[];
extern const unsigned char dat_0c244d2a[];
extern const unsigned char dat_0c244d2e[];
extern const unsigned char dat_0c244d32[];
extern const unsigned char dat_0c244d36[];
extern const unsigned char dat_0c244d3a[];
void func_0c0b373c(struct Actor *);
void func_0c0b3784(struct Actor *);
void func_0c0b380e(struct Actor *);
void func_0c0b38be(struct Actor *);
void func_0c0b3990(struct Actor *);
void func_0c0b3a16(struct Actor *);
void func_0c0b3a3e(struct Actor *);
void func_0c0b3a4c(struct Actor *);
void func_0c0b3b3c(struct Actor *);
void func_0c0b3c3a(struct Actor *);
void func_0c0b3c4e(struct Actor *);
void func_0c0b3c5c(struct Actor *);
void func_0c0b3d16(struct Actor *);
void func_0c0b3d56(struct Actor *);
void func_0c0b3d68(struct Actor *);
void func_0c0b3d7c(struct Actor *);
void func_0c0b3e7a(struct Actor *);
int func_0c0b3ea8(struct Actor *);
void func_0c0b3eec(struct Actor *);
void func_0c0b3f4e(struct Actor *);
void func_0c0b4056(struct Actor *);
void func_0c0b408e(struct Actor *);
void func_0c0b40a4(struct Actor *);
void func_0c0b4124(struct Actor *);
void func_0c0b41a0(struct Actor *);

void func_0c0b373c(struct Actor *a)
{
    func_0c044cbc(a);
    if(a->b1fe==1){
        if(a->b1f9==1)func_0c0b3990(a);else func_0c0b38be(a);
    }else{
        if(a->b1f9==1)func_0c0b380e(a);else func_0c0b3784(a);
    }
}

void func_0c0b3784(struct Actor *a)
{
    int zero=0;
    switch(a->b1e8){
    case 0:
        a->b158=0;a->b1a1=0;
        a->p3f4=(void *)dat_0c244cf6;
        a->b1a7=0;
        a->pad2a2[0]=zero;
        break;
    case 1:
        a->b158=1;a->b1a1=1;
        a->p3f4=(void *)dat_0c244cfa;
        a->b1a7=1;
        break;
    case 2:
        a->b158=2;a->b1a1=2;
        a->p3f4=(void *)dat_0c244cfe;
        a->b1a7=2;
        break;
    }
    a->w1ac=zero;a->b19e=zero;a->p1c4=zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a,7,a->b158);
}

void func_0c0b380e(struct Actor *a)
{
    int zero=0;
    switch(a->b1e8){
    case 0:
        a->b158=0;a->b1a1=6;
        a->p3f4=(void *)dat_0c244cf6;
        a->b1a7=0;
        break;
    case 1:
        a->b158=1;a->b1a1=7;
        a->p3f4=(void *)dat_0c244cfa;
        a->b1a7=1;
        break;
    case 2:
        a->b158=2;a->b1a1=8;
        a->p3f4=(void *)dat_0c244cfe;
        a->b1a7=2;
        break;
    }
    a->w1ac=zero;a->b19e=zero;a->p1c4=zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a,9,a->b158);
}

void func_0c0b38be(struct Actor *a)
{
    int zero=0;
    switch(a->b1e8){
    case 0:
        a->b158=0;a->b1a1=3;
        a->p3f4=(void *)dat_0c244d02;
        a->b1a7=0;
        break;
    case 1:
        a->b158=1;a->b1a1=4;
        a->p3f4=(void *)dat_0c244d06;
        a->b1a7=1;
        break;
    case 2:
        if(a->w1fa&0x0800){a->b158=3;a->b1a1=18;}else{a->b158=2;a->b1a1=5;}
        a->p3f4=(void *)dat_0c244d0a;
        a->b1a7=2;
        break;
    }
    a->w1ac=zero;a->b19e=zero;a->p1c4=zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a,8,a->b158);
}

void func_0c0b3990(struct Actor *a)
{
    int zero=0;
    switch(a->b1e8){
    case 0:
        a->b158=0;a->b1a1=9;
        a->p3f4=(void *)dat_0c244d02;
        a->b1a7=0;
        break;
    case 1:
        a->b158=1;a->b1a1=10;
        a->p3f4=(void *)dat_0c244d06;
        a->b1a7=1;
        break;
    case 2:
        a->b158=2;a->b1a1=11;
        a->p3f4=(void *)dat_0c244d0a;
        a->b1a7=2;
        break;
    }
    a->w1ac=zero;a->b19e=zero;a->p1c4=zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a,10,a->b158);
}

void func_0c0b3a16(struct Actor *a)
{
    if(!a->b1fe && (a->b1d6&15))goto trigger;
    if(a->b1fe && (a->b1d6&0xf0)){trigger:func_0c0b3a3e(a);}
}
void func_0c0b3a3e(struct Actor *a)
{
    if(a->b1fe==1)func_0c0b3b3c(a);else func_0c0b3a4c(a);
}

void func_0c0b3a4c(struct Actor *a)
{
    int zero=0;
    switch(a->b1e8){
    case 0:
        a->b158=0;a->b1a1=12;
        if(a->b1fc==0)a->p3f4=(void *)dat_0c244d0e;else a->p3f4=(void *)dat_0c244d26;
        a->b1a7=0;
        break;
    case 1:
        a->b158=1;a->b1a1=13;
        if(a->b1fc==0)a->p3f4=(void *)dat_0c244d12;else a->p3f4=(void *)dat_0c244d2a;
        a->b1a7=1;
        break;
    case 2:
        a->b158=2;a->b1a1=14;
        if(a->b1fc==0)a->p3f4=(void *)dat_0c244d16;else a->p3f4=(void *)dat_0c244d2e;
        a->b1a7=2;
        break;
    }
    a->w1ac=zero;a->b19e=zero;a->p1c4=zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a,11,a->b158);
    if(a->b1d6&15)a->b1d6=a->b1d6-1;
}

void func_0c0b3b3c(struct Actor *a)
{
    int zero=0;
    switch(a->b1e8){
    case 0:
        a->b158=0;a->b1a1=15;
        if(a->b1fc==0)a->p3f4=(void *)dat_0c244d1a;else a->p3f4=(void *)dat_0c244d32;
        a->b1a7=0;
        break;
    case 1:
        a->b158=1;a->b1a1=16;
        if(a->b1fc==0)a->p3f4=(void *)dat_0c244d1e;else a->p3f4=(void *)dat_0c244d36;
        a->b1a7=1;
        break;
    case 2:
        a->b158=2;a->b1a1=17;
        if(a->b1fc==0)a->p3f4=(void *)dat_0c244d22;else a->p3f4=(void *)dat_0c244d3a;
        a->b1a7=2;
        break;
    }
    a->w1ac=zero;a->b19e=zero;a->p1c4=zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a,12,a->b158);
    if(a->b1d6&0xf0)a->b1d6=a->b1d6-16;
}

void func_0c0b3c3a(struct Actor *a)
{
    table_0c244dc0[a->b1ff](a);
}
void func_0c0b3c4e(struct Actor *a)
{
    func_0c043352(a);func_0c0b3c5c(a);
}
void func_0c0b3c5c(struct Actor *a)
{
    a->f52+=a->f92;a->f92+=a->f104;
    a->f56+=a->f96;a->f96+=a->f108;
    func_0c044df4(a);
    if(a->b1fe==1){
        if(a->b1f9==1)func_0c0b4056(a);else func_0c0b3f4e(a);
    }else{
        if(a->b1f9==1)func_0c0b3eec(a);else func_0c0b3d16(a);
    }
}
void func_0c0b3d16(struct Actor *a)
{
    switch(a->b1e8){
    case 0:case 1:
        if(func_0c02a026(a)<0)func_0c0437b8(a);
        break;
    case 2:func_0c0b3d56(a);break;
    }
}
void func_0c0b3d56(struct Actor *a)
{
    table_0c244dd0[a->b7](a);
}
void func_0c0b3d68(struct Actor *a)
{
    a->b7=1;a->sub2a4.l24=0;
    ((struct ActorSub2a4Extended *)&a->sub2a4)->l28=0;
    a->s28=0;func_0c0b3d7c(a);
}
void func_0c0b3d7c(struct Actor *a)
{
    struct ActorSub2a4Extended *context=(struct ActorSub2a4Extended *)&a->sub2a4;
    int zero=0,one=1;
    func_0c02a026(a);
    if(a->b141==5){
        if(--a->s28<0)func_0c0437b8(a);
        return;
    }
    a->sub2a4.l24+=func_0c0b3ea8(a);
    if(a->b141==2){
        a->b141=zero;func_0c157968(a,0);func_0c1a6d1c(a,0);func_0c0346da(a,36);
    }
    if(a->b141==3){a->b141=zero;func_0c1a6d1c(a,3);}
    if(a->b141==4){
        a->b141=zero;
        if(context->l28<3){
            if(a->b525){
                if(func_0c02849a()&one)a->sub2a4.l24=one;else a->sub2a4.l24=zero;
            }
            if((int)a->sub2a4.l24>=one){func_0c02a0c4(a,7,3);context->l28++;}
            a->sub2a4.l24=zero;
        }else a->b7++;
        a->s28=dat_0c244ddc[context->l28];
    }
}
void func_0c0b3e7a(struct Actor *a)
{
    func_0c02a026(a);
    if(a->b141==5 && --a->s28<0)func_0c0437b8(a);
}
int func_0c0b3ea8(struct Actor *a)
{
    if(a->w348&0x100)return 1;
    return 0;
}
void func_0c0b3eec(struct Actor *a)
{
    if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
    if(a->b1e8==2){
        if(a->b141==2){a->b141=0;func_0c157968(a,1);func_0c1a6d1c(a,1);}
        if(a->b141==3){a->b141=0;func_0c1a6d1c(a,4);}
    }
}
void func_0c0b3f4e(struct Actor *a)
{
    struct ActorVec2 offset;
    switch(a->b1e8){
    case 0:case 1:
        if(func_0c02a026(a)<0)func_0c0437b8(a);
        break;
    case 2:
        if(func_0c02a026(a)<0){func_0c0437b8(a);break;}
        if(a->b158!=3)break;
        switch(a->b141){
        case 2:
            if(a->w130)a->f92=2.0f;else a->f92=-2.0f;
            a->b141=0;break;
        case 3:
            offset.x=52.0f;
            if(a->w130)a->f92=0.4f;else a->f92=-0.4f;
            a->b141=0;
            /* Retail initializes only the first component of this scratch vector. */
            func_0c1ce7ae(a,&offset,1.0f,1.0f);break;
        case 1:case 4:
            a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;break;
        }
        a->f52+=a->f92;a->f92+=a->f104;
        break;
    }
}
void func_0c0b4056(struct Actor *a)
{
    switch(a->b1e8){
    case 0:case 1:case 2:
        if(func_0c02a026(a)<0)func_0c0437b8(a);
        break;
    }
}
void func_0c0b408e(struct Actor *a)
{
    func_0c0421f4(a);func_0c0420f8(a);func_0c0b40a4(a);
}
void func_0c0b40a4(struct Actor *a)
{
    func_0c042018(a);func_0c0421b8(a);
    if(a->b1fe==1)func_0c0b41a0(a);else func_0c0b4124(a);
    if(func_0c044e52(a))func_0c044f1c(a);
}
void func_0c0b4124(struct Actor *a)
{
    if(func_0c02a026(a)<0){func_0c0438de(a);return;}
    if(a->b1e8==2){
        if(a->b141==2){
            a->b141=0;func_0c157968(a,2);func_0c1a6d1c(a,2);
            a->f96=0.0f;a->f108=0.0f;
            a->f96=8.333333f;a->f108=-1.5625f;
        }
        if(a->b141==3){a->b141=0;func_0c1a6d1c(a,5);}
    }
}
void func_0c0b41a0(struct Actor *a)
{
    if(func_0c02a026(a)<0)func_0c0438de(a);
}
