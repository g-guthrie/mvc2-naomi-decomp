/* Complete unverified whole-section reconstruction179d84..17a03c. */
#include "objects.h"
/* Sixteen-byte scratch history: four signed samples for each screen axis. */
struct TrailHistory179d84 { short x[4],y[4]; };
#define A(a) ((struct Actor *)(a))
extern char func_0c02a026(struct LinkedActor *);
extern void func_0c037d0c(struct LinkedActor *),func_0c037688(struct LinkedActor *);
extern void func_0c02a0c4(struct LinkedActor *,int,int);
extern void func_0c0346da(struct LinkedActor *,int);
extern void func_0c1d330c(struct LinkedActor *,struct LinkedActorVec3 *,int,int);
extern void (*table_0c253890[])(struct LinkedActor *,struct LinkedActor *);
void func_0c17a006(struct LinkedActor *,struct LinkedActor *);
void func_0c179f78(struct LinkedActor *,struct LinkedActor *);
void func_0c179d84(struct LinkedActor *a,struct LinkedActor *owner)
{
    func_0c02a026(a);
    a->f52+=a->f92;a->f92+=a->f104;
    a->f56+=a->f96;a->f96+=a->f108;
    if(a->f92*a->f104>0.0f){float zero=0.0f;a->f92=zero;a->f104=zero;}
    if(!(A(owner)->f41c<a->f56)){
        a->b5++;a->f56=A(owner)->f41c;a->s28=12;
    }else{
        if(!A(a)->b19f){goto draw;draw:func_0c037d0c(a);if(!A(a)->b19e)return;}
        a->b5++;a->s28=1;
    }
}
void func_0c179e2e(struct LinkedActor *a,struct LinkedActor *owner)
{
    func_0c02a026(a);
    if(--a->s28==0){
        a->b5++;
        func_0c1d330c(a,(struct LinkedActorVec3 *)&a->f52,1,8);
        func_0c0346da(a,73);a->s28=10;
    }
}
void func_0c179e6a(struct LinkedActor *a,struct LinkedActor *owner)
{
    struct ActorSub2a4 *context=&A(owner)->sub2a4;
    if(a->s28--==0){a->b4++;context->b2--;func_0c17a006(a,owner);}
}
void func_0c179e8e(struct LinkedActor *a,struct LinkedActor *owner)
{
    table_0c253890[a->b4](a,owner);
}
void func_0c179ebc(struct LinkedActor *a,struct LinkedActor *owner)
{
    struct TrailHistory179d84 *history=(struct TrailHistory179d84 *)&a->f92;
    struct LinkedActor *p=a->p20;
    int one;
    unsigned int i;
    a->b4++;a->sdc=owner->sdc;one=1;a->sdc.b12c=one;
    a->b2=owner->b2;a->b1=owner->b1;
    a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;
    a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;
    a->v80=owner->v80;a->b36=owner->b36;a->sdc.b12c=one;a->b49=-1;
    a->f52=p->f52;a->f56=p->f56;a->f60=p->f60;
    i=0;do{history->x[i]=(short)(int)a->f52;history->y[i]=(short)(int)a->f56;i++;}while(i<4);
    func_0c02a0c4(a,23,12);func_0c179f78(a,owner);
}
void func_0c179f78(struct LinkedActor *a,struct LinkedActor *owner)
{
    struct LinkedActor *p=a->p20;
    struct LinkedActor *follow=(struct LinkedActor *)A(a)->p8;
    struct TrailHistory179d84 *history=(struct TrailHistory179d84 *)&a->f92;
    a->b36=owner->b36;
    func_0c02a026(a);
    a->f52=history->x[3];
    history->x[3]=history->x[2];history->x[2]=history->x[1];history->x[1]=history->x[0];
    history->x[0]=(short)(int)follow->f52;
    a->f56=history->y[3];
    history->y[3]=history->y[2];history->y[2]=history->y[1];history->y[1]=history->y[0];
    history->y[0]=(short)(int)follow->f56;
    if((unsigned char)p->b5==2)a->b4++;
}
void func_0c17a006(struct LinkedActor *a,struct LinkedActor *owner)
{
    a->b4++;a->sdc.b12c=0;
}
void func_0c17a014(struct LinkedActor *a,struct LinkedActor *owner)
{
    a->sdc.b12c=0;func_0c037688(a);
}
