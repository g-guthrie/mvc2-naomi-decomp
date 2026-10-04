/* Unverified complete whole-section translation176770..1768a0. */
#include "objects.h"
/* Effect output record, distinct from Actor and ActorSub2a4. */
struct EffectChainGeometry176770 {
    unsigned char reserved0[10];
    short kind;
    signed char angle, tag, reserved14, count;
    float x,y,offset_x,offset_y;
    unsigned char reserved32[21];
    signed char anchored;
};
struct EffectChainPlacement176770 {
    signed char kind;
    unsigned char reserved1[2];
    signed char anchored;
    short x,y;
    signed char angle,tag,step,acceleration,limit;
};
extern void func_0c1b91e0(struct Actor *,struct Actor *,int);
extern void func_0c174f68(struct Actor *,void *);
void func_0c176770(struct Actor *a,struct EffectChainGeometry176770 *geometry,
                 struct EffectChainPlacement176770 *placement)
{
    float position[2];
    struct Actor *owner=a->p20;
    int angle,step,acceleration,limit;
    signed char *current;
    int i;
    position[0]=(float)placement->x*1.6666666269302368f;
    position[1]=(float)placement->y*2.142857074737549f;
    geometry->kind=placement->kind;
    geometry->anchored=placement->anchored;
    angle=placement->angle;
    step=placement->step;
    acceleration=placement->acceleration;
    limit=placement->limit;
    geometry->tag=placement->tag;
    if(owner->w130){angle=-angle;step=-step;position[0]=-position[0];acceleration=-acceleration;limit=-limit;}
    geometry->offset_x=position[0];
    current=(signed char *)geometry;
    geometry->offset_y=position[1];
    geometry->x=owner->f52+position[0];geometry->y=owner->f56+position[1];
    a->b36=owner->b36;
    for(i=0;i<=geometry->count;i++){
        current[12]=angle;
        angle+=step;
        if((signed char)step>=0){if((signed char)(limit-angle)>=0)goto update_step;}
        else {if((signed char)(limit-angle)<0)goto update_step;}
        angle=limit;
update_step:
        step+=acceleration;
        if((unsigned char)acceleration){
            int clamped=(signed char)step;
            if((signed char)acceleration<0){if(clamped>0)goto next;clamped=1;}
            else {if(clamped<0)goto next;clamped=255;}
            step=clamped;
        }
        next:
        a=a->p12;
        current=(signed char *)a+0x88;
    }
}
void func_0c176868(struct Actor *a,void *argument)
{
    func_0c1b91e0(*(struct Actor **)((char *)a+24),a,2);
    func_0c174f68(a,argument);
}
