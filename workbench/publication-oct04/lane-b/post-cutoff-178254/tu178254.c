/* Complete unverified whole-section reconstruction178254..178654. */
#include "objects.h"
/* Owner scratch view: two six-byte indexed flag banks and the byte at12. */
struct EffectFlagBanks178254 { char active[6],triggered[6],commit; };
#define A(a) ((struct Actor *)(a))
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern unsigned char dat_0c25370c[];
extern void (*table_0c253734[])(struct LinkedActor *,struct LinkedActor *);
extern void func_0c0288a8(struct LinkedActor *,int);
extern void func_0c02a0c4(struct LinkedActor *,int,int);
extern void func_0c02a18c(struct LinkedActor *,int,int,int);
extern char func_0c02a026(struct LinkedActor *);
extern void func_0c0344a0(struct LinkedActor *,int);
void func_0c17838e(struct LinkedActor *,struct LinkedActor *);
void func_0c178254(struct LinkedActor *a,struct LinkedActor *owner)
{
    struct FollowOffset15e2 *anchor=(struct FollowOffset15e2 *)&a->wcc;
    int one,value;
    float zero_float;
    a->b4++;a->sdc=owner->sdc;one=1;a->sdc.b12c=one;
    a->b2=owner->b2;a->b1=owner->b1;
    a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;
    a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;
    a->v80=owner->v80;a->b36=owner->b36;a->sdc.b12c=one;a->b49=-1;
    ((struct MeActor *)a)->blk_dc.b13c=((struct MeActor *)a)->blk_dc.b13d=((struct MeActor *)a)->blk_dc.b13e=((struct MeActor *)a)->blk_dc.b13f=16;
    value=0;A(a)->b1a1=50;A(a)->w1ac=value;A(a)->b19e=value;
    *(void **)&A(a)->p1c4=(void *)value;
    dat_0c2f83f8->arr[a->b2]++;
    value=68;A(a)->b19c=value;A(a)->b19d=value;
    a->b34=dat_0c25370c[(unsigned char)a->b33];
    if(owner->sdc.w130){a->b34=32-a->b34;a->b34&=31;}
    a->f60=owner->f60;zero_float=0.0f;
    anchor->x=(short)(int)owner->f52;
    anchor->y=(short)(int)(owner->f56+137.142853f);
    a->f52=anchor->x;a->f56=anchor->y;
    a->f92=zero_float;a->f96=zero_float;a->f104=zero_float;a->f108=zero_float;
    func_0c0288a8(a,0x1900);func_0c02a0c4(a,23,1);func_0c17838e(a,owner);
}
void func_0c17838e(struct LinkedActor *a,struct LinkedActor *owner)
{
    a->b36=11;table_0c253734[(unsigned char)a->b5](a,owner);
}
void func_0c1783a8(struct LinkedActor *a,struct LinkedActor *owner)
{
    struct EffectFlagBanks178254 *context=(struct EffectFlagBanks178254 *)&A(owner)->sub2a4;
    struct FollowOffset15e2 *anchor=(struct FollowOffset15e2 *)&a->wcc;
    int three=3;
    float zero;
    if(!context->active[(unsigned char)a->b33]){a->b4=three;return;}
    if(owner->b5){a->b4=three;context->active[(unsigned char)a->b33]=0;return;}
    zero=0.0f;
    anchor->x=(short)(int)owner->f52;
    anchor->y=(short)(int)(owner->f56+137.142853f);
    a->f52=anchor->x;a->f56=anchor->y;
    a->f92=zero;a->f96=zero;a->f104=zero;a->f108=zero;
    func_0c0288a8(a,0x1900);
    if(func_0c02a026(a)<0){a->b5++;func_0c02a18c(a,23,3,(unsigned char)a->b34/2);}
}
void func_0c1784a6(struct LinkedActor *a,struct LinkedActor *owner)
{
    struct EffectFlagBanks178254 *context=(struct EffectFlagBanks178254 *)&A(owner)->sub2a4;
    struct FollowOffset15e2 *anchor=(struct FollowOffset15e2 *)&a->wcc;
    unsigned char one;
    int zero;
    float zero_float;
    if(!context->active[(unsigned char)a->b33]){a->b4=3;return;}
    one=1;zero=0;
    if(owner->b5){a->b4=2;a->b6=one;a->b7=zero;context->active[(unsigned char)a->b33]=zero;return;}
    func_0c02a026(a);
    if(a->sdc.w130!=owner->sdc.w130){
        a->sdc.w130=owner->sdc.w130;
        a->b34=dat_0c25370c[(unsigned char)a->b33];
        if(owner->sdc.w130){a->b34=32-a->b34;a->b34&=31;}
    }
    zero_float=0.0f;
    anchor->x=(short)(int)owner->f52;
    anchor->y=(short)(int)(owner->f56+137.142853f);
    a->f52=anchor->x;a->f56=anchor->y;
    a->f92=zero_float;a->f96=zero_float;a->f104=zero_float;a->f108=zero_float;
    func_0c0288a8(a,0x1900);
    if(context->triggered[(unsigned char)a->b33]){
        context->triggered[(unsigned char)a->b33]=zero;context->active[(unsigned char)a->b33]=zero;
        a->b5++;a->b6=zero;
    }else{
        if(!context->commit)return;
        context->active[(unsigned char)a->b33]=zero;a->b1a3=owner->b1a3;
        switch((unsigned char)a->b1a3){
        case 0:case 1:a->b6=one;break;
        case 2:a->b6=2;break;
        default:a->b6=3;break;
        }
        a->b5++;
    }
    a->b7=zero;func_0c0344a0(owner,33);
}
