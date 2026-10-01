#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern int func_0c02849a(void);
extern short table_0c252ac0[][7];
extern void (*table_0c252b70[])(struct LinkedActor *);
void func_0c173ab8(struct LinkedActor *);
struct LinkedActor *func_0c1739b0(struct LinkedActor *owner, short x, short y)
{
    struct LinkedActor *a;
    if ((a=func_0c0374da(0,1,0)) != 0) {
        a->p16=func_0c173ab8;
        a->p24=owner;
        a->w38=0x2f02;
        a->wcc.dword_value=(unsigned short)owner->sdc.w158;
        ((int *)a->pad10)[0]=x;
        ((int *)a->pad10)[1]=y;
    }
    return a;
}
struct LinkedActor *func_0c173a04(struct LinkedActor *owner)
{
    short i;
    struct LinkedActor *a;
    for(i=0;i<8;i++) {
        short *entry=&table_0c252ac0[func_0c02849a() & 7][0];
        if((a=func_0c1739b0(owner,0,0)) != 0) {a->b33=0;a->b32=i;((int *)a->pad10)[2]=entry[0];}
        if((a=func_0c1739b0(owner,entry[3],entry[4])) != 0) {a->b33=1;a->b32=i;((int *)a->pad10)[2]=entry[1];}
        if((a=func_0c1739b0(owner,entry[3]+entry[5],entry[4]+entry[6])) != 0) {a->b33=1;a->b32=i;((int *)a->pad10)[2]=entry[2];}
    }
    return a;
}
void func_0c173ab8(struct LinkedActor *a) { table_0c252b70[a->b4](a); }
