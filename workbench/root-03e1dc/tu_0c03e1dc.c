#include "objects.h"
extern void func_0c02a39a(struct Actor *,int);
extern char func_0c02a026(struct Actor *);
extern void func_0c1d330c(struct Actor *,struct LinkedActorVec3 *,int,int);
extern void func_0c03484c(struct Actor *),func_0c1d8eb4(struct Actor *),func_0c040b3a(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int);
extern struct MotionGlobal_0c2d9260 dat_0c2d9260;
void func_0c03e1dc(struct Actor *a)
{
    void (*animate)(struct Actor *,int)=func_0c02a39a;
    if(a->s30>0)animate(a,6);
    func_0c02a026(a);
    a->f52+=a->f92;a->f92+=a->f104;
    a->f56+=a->f96;a->f96+=a->f108;
    if(a->b1fd && !a->b238){
        func_0c1d330c(a,(struct LinkedActorVec3 *)&a->f52,1,8);
        a->s30=-1;animate(a,1);a->b238=1;
        func_0c03484c(a);func_0c1d8eb4(a);
        if(a->b235){dat_0c2d9260.b5=3;dat_0c2d9260.b6=1;}
    }
    if(!a->s28){
        if(a->f96>0.0f)return;
        a->s28=1;func_0c040b3a(a);
    }
    if(a->f96>0.0f)return;
    if(!func_0c044e52(a))return;
    if(!a->b238){
        func_0c1d330c(a,(struct LinkedActorVec3 *)&a->f52,1,8);
        a->s30=-1;animate(a,1);
    }
    a->b6++;a->b1eb=2;a->s278=5;a->b1f9=3;
    func_0c02a0c4(a,13,26);
}
