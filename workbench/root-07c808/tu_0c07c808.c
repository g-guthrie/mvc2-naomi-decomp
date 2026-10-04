#include "objects.h"
extern void func_0c025900(struct Actor *,char,char);
extern void func_0c1d4610(struct Actor *,struct LinkedActorVec3 *);
extern void func_0c048ce6(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int);
extern void func_0c192b38(struct Actor *);
#define FLAG_WORD(child,offset) (*(unsigned int *)((char *)(child)+(offset)))
void func_0c07c808(struct Actor *a)
{
    struct LinkedActorVec3 position;
    func_0c025900(a,6,6);
    if(FLAG_WORD(a->p1c8,0x418)&0x04000000U) a->p1c8->f56=122.142853f;
    if(FLAG_WORD(a->p1c8,0x414)&0x10000000U) a->p1c8->f56=25.714285f;
    if(FLAG_WORD(a->p1c8,0x414)&0x20000000U) a->p1c8->f56=55.714283f;
    if(FLAG_WORD(a->p1c8,0x414)&0x00400000U) a->p1c8->f56=30.0f;
    position.x=-75.0f;position.y=171.42856f;
    func_0c1d4610(a,&position);
    a->b1a0=10;
    func_0c048ce6(a);
    func_0c02a0c4(a,15,0);
    func_0c192b38(a);
}
