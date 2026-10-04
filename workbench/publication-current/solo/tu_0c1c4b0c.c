#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern struct ActorGlobalRoot *dat_0c2d9658;
extern struct LinkedActorVec3 dat_0c25db2c;
extern void func_0c1d91a8(void *),func_0c1d8ff8(void *,void *);
extern int func_0c1d901e(void);
extern void func_0c1d912a(float *,float *),func_0c1d917e(float *,float *);
void func_0c1c4b5a(struct LinkedActor *);
void func_0c1c4b0c(void)
{
 struct LinkedActor *q;
 if((q=func_0c0374da(0,5,1))){
 q->sdc.b12c=1;q->p16=func_0c1c4b5a;
 q->p84=((void **)dat_0c2d9658->p0)[6];
 *(struct LinkedActorVec3 *)&q->f52=dat_0c25db2c;
 q->wcc.dword_value=0x801;
 func_0c1d91a8(q->p84);
 }
}
void func_0c1c4b5a(struct LinkedActor *q)
{
 float y,x;
 if(++q->s28>=1000)q->s28=0;
 func_0c1d8ff8(((void **)dat_0c2d9658->p0)[7],q->p84);
 while(!func_0c1d901e()){
 func_0c1d912a(&x,&y);
 y-=q->s28*0.00100000005f;
 func_0c1d917e(&x,&y);
 }
}
