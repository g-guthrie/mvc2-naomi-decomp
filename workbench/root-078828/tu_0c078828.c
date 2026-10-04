#include "objects.h"
extern void func_0c02a0c4(struct Actor *,int,int);
extern char func_0c02a026(struct Actor *);
extern struct Actor *func_0c13c4bc(struct Actor *,int);
void func_0c078828(struct Actor *a)
{
    struct ActorSub2a4Extended *state=(struct ActorSub2a4Extended *)&a->sub2a4;
    float x,y;
    short i,angle;
    int flags,count;
    struct Actor *effect;
    a->b3f8=2;a->b328=5;
    --a->s28;
    if(a->s28<=0){a->b6++;a->s28=56;func_0c02a0c4(a,21,16);return;}
    func_0c02a026(a);
    --*(signed char *)&state->base.b20;
    if(*(signed char *)&state->base.b20<=0){
        state->base.b20=12;
        x=-13.33333302f;y=227.142853f;
        if(a->b1d2)x=13.33333302f;
        state->b40++;
        count=4;
        flags=(*(char *)&state->b40&1)?count:0;
        i=0;angle=0;
        do{
            effect=func_0c13c4bc(a,a->s30/2);
            if(!effect)break;
            effect->f52=x+a->f52;
            effect->f56=y+a->f56;
            effect->s30=flags;
            effect->b34=(a->s30+angle)&31;
            i++;angle+=8;
        }while(i<count);
        if(a->b1d2)a->s30-=2;else a->s30+=2;
        a->s30 &=31;
    }
}
