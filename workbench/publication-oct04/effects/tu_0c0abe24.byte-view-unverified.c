/* Private, unverified translation of granted interval 0x0c0abe24..0x0c0ac578.
 * All twenty real bodies were read directly from retail. No decompilation credit. */
#include "objects.h"
extern unsigned char dat_0c2f8370;
extern void func_0c04be40(struct Actor *);
extern void func_0c1c1678(struct Actor *,short *,int);
extern void func_0c02a0c4(struct Actor *,int,int);
extern void func_0c0346da(struct Actor *,int);

void func_0c0abe24(struct Actor *a,struct ActorSub2a4 *state)
{
    if(a->b525 && (short)--state->w8>0)return;
    a->b6++;
    a->b7=0;
    a->b202|=128;
    a->b1eb=2;
    func_0c04be40(a);
}

void func_0c0abe5a(struct Actor *a,struct ActorSub2a4 *state)
{
    a->b6=6;
    a->b7=0;
    state->s10=120;
    if(!(dat_0c2f8370&(1<<a->b2)) && a->b525){
        state->s10=150;
        func_0c1c1678(a,&state->s10,6);
    }
    func_0c02a0c4(a,22,33);
    func_0c0346da(a,76);
}

extern unsigned char func_0c0ac3a2(struct Actor *),func_0c0ac4ca(struct Actor *);
extern unsigned char func_0c0ac496(struct Actor *,unsigned char);
extern void func_0c0ac4ba(struct Actor *);
extern void func_0c0442fa(struct Actor *),func_0c1a1a34(struct Actor *,int,int);
extern struct MotionGlobal_0c2d9260 dat_0c2d9260;
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern char func_0c02a026(struct Actor *);

void func_0c0abeb2(struct Actor *a)
{
    if(func_0c0ac3a2(a))return;
    if(func_0c0ac4ca(a))return;
    if(!func_0c0ac496(a,0))func_0c0ac4ba(a);
    func_0c02a026(a);
    if(!a->b141){a->f52+=a->f92;a->f92+=a->f104;goto done;}
    if((a->b141=1)){
        a->b141=2;
        dat_0c2d9260.b5=1;
        dat_0c2d9260.b6=1;
        func_0c0346da(a,53);
    }
 done:return;
}

void func_0c0abf58(struct Actor *a)
{
    if(func_0c02a026(a)<0){func_0c0ac4ba(a);func_0c0442fa(a);}
}

void func_0c0abf7c(struct Actor *a)
{
    int zero=0;
    if(a->b19e || a->b141==3){
        a->b6=5;
        a->f92=0;a->f96=0;a->f104=0;a->f108=0;
        a->b1a1=67;a->w1ac=zero;a->b19e=zero;a->p1c4=0;
        dat_0c2f83f8->arr[a->b2]++;
        func_0c02a0c4(a,22,52);
        dat_0c2d9260.b5=1;dat_0c2d9260.b6=1;
        return;
    }
    if(func_0c02a026(a)<0){func_0c0ac4ba(a);return;}
    if(a->b141==1){
        a->b141=zero;
        func_0c1a1a34(a,22,13);
        func_0c1a1a34(a,23,13);
        func_0c1a1a34(a,24,13);
    }else if(a->b141==2){
        a->b141=zero;
        a->f52+=a->w130?26.666666031f:-26.666666031f;
    }
}

extern void (*table_0c244628[])(struct Actor *,struct ActorSub2a4 *);
extern struct ActorFlags *dat_0c2d6f84;
extern int func_0c026a86(void);
extern void func_0c02a684(struct Actor *,int,int,int);
extern void func_0c1ce70c(struct Actor *,int,int,float,float);
extern void func_0c151a88(struct Actor *,int);

void func_0c0ac084(struct Actor *a)
{
    int zero=0;
    if(func_0c02a026(a)<0){a->b6=8;a->b7=zero;return;}
    if(a->b141==1){
        a->b141=zero;
        func_0c1a1a34(a,32,13);
        func_0c1a1a34(a,33,13);
        return;
    }
    if(a->b141==2){
        a->b141=zero;
        a->f52+=a->w130?-66.666664124f:66.666664124f;
    }
}

void func_0c0ac104(struct Actor *a,struct ActorSub2a4 *state)
{
    table_0c244628[a->b7](a,&a->sub2a4);
    if(dat_0c2f83f8->pad[0]>=5 && !func_0c026a86())state->s10=0;
    if(--state->s10<=0){
        a->b6++;a->b7=0;
        func_0c02a684(a,0,a->b37+6,1);
        func_0c02a0c4(a,22,37);
        return;
    }
    if(!(dat_0c2d6f84->flags&1))func_0c02a684(a,0,a->b37*2+20,1);
    else func_0c02a684(a,0,a->b37*2+21,1);
    if(!(dat_0c2d6f84->flags&3))func_0c1ce70c(a,0,0,3.8f,0.4f);
}

void func_0c0ac202(struct Actor *a)
{
    int zero;
    if(func_0c02a026(a)>=0)return;
    a->b7++;
    dat_0c2d9260.b5=2;dat_0c2d9260.b6=1;
    zero=0;a->b1a1=69;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a,22,41);
    func_0c151a88(a,0);
}

void func_0c0ac264(struct Actor *a)
{if(func_0c02a026(a)<0){a->b7++;func_0c02a0c4(a,22,41);}}

void func_0c0ac28e(struct Actor *a)
{if(func_0c02a026(a)<0){a->b7++;func_0c02a0c4(a,22,43);}}

void func_0c0ac2b8(struct Actor *a)
{if(func_0c02a026(a)<0){a->b7++;func_0c02a0c4(a,22,39);}}

void func_0c0ac308(struct Actor *a)
{if(func_0c02a026(a)<0){a->b7++;func_0c02a0c4(a,22,44);}}

void func_0c0ac332(struct Actor *a)
{if(func_0c02a026(a)<0){a->b7++;func_0c02a0c4(a,22,38);}}

void func_0c0ac35c(struct Actor *a)
{if(func_0c02a026(a)<0){a->b7=1;func_0c02a0c4(a,22,41);}}
void func_0c0ac384(struct Actor *a)
{if(func_0c02a026(a)<0){a->b6=8;a->b7=0;}}

unsigned char func_0c0ac3a2(struct Actor *a)
{
    int animation,zero=0;
 
    register void (*animate)(struct Actor *,int,int)=func_0c02a0c4;
 
    struct Tbl_ub3_01 **statistics=&dat_0c2f83f8;
 
    if ((*(unsigned short *)&a->pad15b[2])&0x200){
        a->b7=4;
 
        a->f92=0;
 a->f96=0;
 a->f104=0;
 a->f108=0;
 
        a->b1a1=67;
 a->w1ac=zero;
 a->p1c4=0;
 a->b19e=zero;
 
        (*statistics)->arr[a->b2]++;
 
        animation=32;
 goto hit;
 
    }
    if ((*(unsigned short *)&a->pad15b[2])&0x100){
        a->b7=5;
 
        a->f92=0;
 a->f96=0;
 a->f104=0;
 a->f108=0;
 
        a->b1a1=68;
 a->w1ac=zero;
 a->b19e=zero;
 a->p1c4=0;
 
        (*statistics)->arr[a->b2]++;
 
        animation=52;
 goto hit;
 
    }
    goto other;
 
 hit:
    animate(a,22,animation);
 
    dat_0c2d9260.b5=1;
 dat_0c2d9260.b6=1;
 
    goto done;
 
 other:
    if (!((*(unsigned short *)&a->pad15b[2])&64))return 0;
 
    a->b6=6;
 a->b7=zero;
 a->s30=zero;
 
    a->f92=0;
 a->f96=0;
 a->f104=0;
 a->f108=0;
 
    animate(a,22,33);
 
 done:return 1;
 
}

unsigned char func_0c0ac496(struct Actor *a,unsigned char alternate)
{
    unsigned short flags;
    if(alternate)flags=a->w348;else flags=a->w340;
    return (flags&0x0c00)!=0;
}
void func_0c0ac4ba(struct Actor *a)
{a->b6=1;a->b7=0;func_0c02a0c4(a,22,28);}

unsigned char func_0c0ac4ca(struct Actor *a)
{
    float offset=-23.3333321f;
    if(a->b1d2)offset=23.3333321f;
    if(!(a->f52>a->p20c->f52+offset)){if(a->b1d2)return 0;}
    if(a->f52>a->p20c->f52+offset){if(!a->b1d2)return 0;}
    a->b1f9=0;
    a->f92=0;a->f96=0;a->f104=0;a->f108=0;
    a->b6=3;a->b7=0;
    func_0c02a0c4(a,22,31);
    return 1;
}
extern int (*table_0c24464c[])(struct Actor *);
int func_0c0ac544(struct Actor *a)
{return table_0c24464c[a->b1f9](a);}
