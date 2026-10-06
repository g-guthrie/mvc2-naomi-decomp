/* Unverified 304-byte effect spawning family: 272 equal bytes, exact pools and exports. */
#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void func_0c0344a0(struct LinkedActor *,int),func_0c02a684(struct LinkedActor *,int,int,int),func_0c02894c(struct LinkedActor *,int);
extern void (*table_0c259dc0[])(struct LinkedActor *);
struct LinkedActor *func_0c1acab0(struct LinkedActor *,char);
void func_0c1acb20(struct LinkedActor *);
void func_0c1aca28(struct LinkedActor *a)
{
 func_0c1acab0(a,3);func_0c1acab0(a,7);func_0c1acab0(a,11);func_0c1acab0(a,15);
 func_0c1acab0(a,1);func_0c1acab0(a,5);func_0c1acab0(a,9);func_0c1acab0(a,13);
 func_0c1acab0(a,2);func_0c1acab0(a,6);func_0c1acab0(a,10);func_0c1acab0(a,14);
 func_0c1acab0(a,0);func_0c1acab0(a,4);func_0c1acab0(a,8);func_0c1acab0(a,12);
 func_0c0344a0(a,32);func_0c02a684(a,2,a->b37*87+1,1);
}
struct LinkedActor *func_0c1acab0(struct LinkedActor *owner,char index)
{
 struct LinkedActor *a;float offset;unsigned int phase;
 if((a=func_0c0374da(0,3,0))){
 a->p16=func_0c1acb20;a->p24=owner;a->b32=index;phase=(unsigned char)index;phase*=2;a->b34=phase&31;
 a->f52=owner->f52;
 if((unsigned short)owner->sdc.w158.short_value==0x1305)offset=90.0f;else offset=17.142857f;
 a->f56=offset+owner->f56;func_0c02894c(a,800);
 }return a;
}
void func_0c1acb20(struct LinkedActor *a){table_0c259dc0[a->b4](a);}
