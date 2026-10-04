/* Private complete, unverified translation of approved 0c0af33c..0c0af7cc.
 * Preceding pool bytes and false entry 0c0af568 are excluded. No credit. */
#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *);
extern void (*table_0c2448dc[])(struct Actor *);
extern void (*table_0c2448e8[])(struct Actor *);

extern void func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *);
extern void func_0c048bb0(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;

void func_0c0af33c(struct Actor *a)
{if(func_0c02a026(a)<0)func_0c0437b8(a);}

void func_0c0af35e(struct Actor *a)
{table_0c2448dc[a->b6](a);}

void func_0c0af370(struct Actor *a)
{
    struct ActorSub2a4 *state=&a->sub2a4;
    int zero;
    a->b6++;
    a->f92=0;a->f96=0;a->f104=0;a->f108=0;
    func_0c0442fa(a);func_0c0432ca(a);func_0c048bb0(a,5);
    zero=0;
    a->b1a1=a->b1a3+50;a->w1ac=zero;a->b19e=zero;
    *(unsigned int *)&a->p1c4=zero;
    dat_0c2f83f8->arr[a->b2]++;
    a->b1f9=zero;a->f56=a->f41c;
    ((signed char *)state)[5]=zero;
    func_0c02a0c4(a,21,10);
}

void func_0c0af3f8(struct Actor *a)
{table_0c2448e8[a->b7](a);}

void func_0c0af40a(struct Actor *a)
{
    struct ActorChargeState *state=(struct ActorChargeState *)&a->sub2a4;
    if(state->charge5<0)goto done;
    if(!(a->w348&0x300))goto done;
    if(a->b1a3){if(a->w348&0x100)goto increment;}
    else if(a->w348&0x200)goto increment;
    goto clamp;
 increment:state->charge5++;
 clamp:if(state->charge5>=5)state->charge5=5;
 done:return;
}

extern struct Actor *func_0c1a2f9c(struct Actor *,int);
void func_0c0af490(register struct Actor *a)
{
    struct ActorSub2a4 *state=&a->sub2a4;
 
    struct Vec3_tu5_03 point;
    register struct Vec3_tu5_03 *target=&point;
 
    struct Actor *child;
 
    float offset,duration,two;
 
    int zero;
 
    func_0c0af40a(a);
 func_0c02a026(a);
 
    if (!a->b141)goto done;
 
    a->b7++;
 
    zero=0;
 
    a->b1a1=a->b1a3+50;
 a->w1ac=zero;
 a->b19e=zero;
 
    *(unsigned int *)&a->p1c4=zero;
 
    dat_0c2f83f8->arr[a->b2]++;
 
    state->b6=zero;
 a->b1f5=3;
 state->b1=zero;
 a->b1f9=2;
 
    if(a->b1a3==0){
        func_0c02a0c4(a,21,12);
 a->s28=32;
 a->s30=27;
 a->f96=17.142857f;
 
        *target=((struct Obj_tu5_03 *)a)->pos;
 
        offset=266.66666f;if(!a->w130)offset=-266.66666f;
 
    }else{
        func_0c02a0c4(a,21,15);
 a->s28=24;
 a->s30=19;
 a->f96=12.85714245f;
 
        *target=((struct Obj_tu5_03 *)a)->pos;
 
        offset=400.0f;if(!a->w130)offset=-400.0f;
 
    }
    target->x+=offset;
 a->f100=target->x;
 
    if((child=func_0c1a2f9c(a,0))!=0)((struct Obj_tu5_03 *)child)->pos=((struct Obj_tu5_03 *)a)->pos;
 
    if((child=func_0c1a2f9c(a,1))!=0)((struct Obj_tu5_03 *)child)->pos=*target;
 
    a->f56+=171.42856f;
 
    offset=160.0f;if(!a->w130)offset=-160.0f;a->f52+=offset;
 
    target->y+=90.0f;
 
    offset=-26.666666031f;if(!a->w130)offset=26.666666031f;two=1.0f;
    target->x+=offset;
    two+=two;duration=32.0f;
 
    a->f92=(target->x-a->f52)/duration;
 
    a->f104=0;
 
    a->f108=(((target->y-a->f56)/duration)*two-a->f96*two)/duration;
 
 done:return;
 
}

void func_0c0af6a4(register struct Actor *a)
{
    register struct ActorSub2a4 *state=&a->sub2a4;
    int zero;
    func_0c02a026(a);
    a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
    a->b1f5=3;a->s28--;
    if(--a->s30<0){a->b7=3;goto done;}
    func_0c0af40a(a);
    zero=0;
    if(((signed char *)state)[5]>=2 && !state->b6){
        state->b6=1;func_0c02a0c4(a,21,a->b1a3+18);
    }else if(a->b14b){
        a->b1a1=a->b1a3+50;a->w1ac=zero;a->b19e=zero;
        *(unsigned int *)&a->p1c4=zero;
        dat_0c2f83f8->arr[a->b2]++;
        a->b14b=zero;
    }
    if(a->f96<0){
        a->b7=2;func_0c02a0c4(a,21,2);
        a->b1a1=a->b1a3+66;a->w1ac=zero;a->b19e=zero;
        *(unsigned int *)&a->p1c4=zero;
        dat_0c2f83f8->arr[a->b2]++;
    }
 done:return;
}
