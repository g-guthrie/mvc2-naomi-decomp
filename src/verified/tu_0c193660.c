#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void (*table_0c257b64[])(struct LinkedActor *,void *);
void func_0c193768(struct LinkedActor *);
struct LinkedActor *func_0c193660(struct LinkedActor *parent,unsigned char b32,unsigned char b33)
{
    struct LinkedActor *a;
    if((a=func_0c0374da(0,3,1))){
        short *slot;
        a->p16=func_0c193768;
        a->p24=parent;
        a->b32=b32; a->b33=b33;
        a->w38=0x0b00;
        a->sdc.b12c=0;
        slot=(short *)((char *)a+0x88);
        *slot=parent->sdc.w158;
    }
    return a;
}
struct LinkedActor *func_0c1936ba(struct LinkedActor *parent,unsigned char b32,unsigned char b33)
{
    struct LinkedActor *a;
    if((a=func_0c0374da(0,4,1))){
        short *slot;
        a->p16=func_0c193768;
        a->p24=parent;
        a->b32=b32; a->b33=b33;
        a->w38=0x0b00;
        a->sdc.b12c=0;
        slot=(short *)((char *)a+0x88);
        *slot=parent->sdc.w158;
    }
    return a;
}
struct LinkedActor *func_0c193714(struct LinkedActor *parent,unsigned char b32,unsigned char b33)
{
    struct LinkedActor *a;
    if((a=func_0c0374da(0,3,1))){
        a->p16=func_0c193768;
        a->p24=parent->p24;
        a->p20=parent;
        a->b32=b32; a->b33=b33;
        a->w38=0x0b00;
        a->sdc.b12c=0;
    }
    return a;
}
void func_0c193768(struct LinkedActor *a)
{
    struct LinkedActor *parent=a->p24;
    a->b36=parent->b36;
    table_0c257b64[a->b4](a,(char *)a+0x88);
}
