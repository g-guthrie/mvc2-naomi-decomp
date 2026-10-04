#include "objects.h"
extern unsigned char dat_0c2f8338[];
extern int dat_0c2479b0[];
extern unsigned char dat_0c2471a4[],dat_0c247234[];
extern void (*table_0c2479c0[])(struct Actor *,struct ActorSub2a4Extended *);
extern int func_0c0c9ea0(struct Actor *);
extern unsigned int func_0c02849a(void);
extern void func_0c1c1678(struct Actor *,short *,int),func_0c0442fa(struct Actor *),func_0c02a39a(struct Actor *,int),func_0c15f7a8(struct Actor *,int),func_0c0c9e20(struct Actor *,void *),func_0c02a0c4(struct Actor *,int,int),func_0c0344a0(struct Actor *,int);
void func_0c0c78d0(struct Actor *a)
{
 struct ActorSub2a4Extended *state=(struct ActorSub2a4Extended *)&a->sub2a4;unsigned char *bytes=(unsigned char *)state;
 a->b3f8=2;a->b328=5;
 if(!func_0c0c9ea0(a)){
  a->b6++;bytes[10]=0;bytes[25]=0;*(short *)&bytes[30]=180;func_0c1c1678(a,(short *)&bytes[30],6);
  *(int *)&bytes[20]=dat_0c2479b0[func_0c02849a()&3];bytes[27]=1;func_0c0442fa(a);func_0c02a39a(a,0);
  func_0c15f7a8(a,0);func_0c15f7a8(a,1);func_0c15f7a8(a,3);func_0c15f7a8(a,4);
  func_0c0c9e20(a,dat_0c2471a4);func_0c02a0c4(a,22,8);func_0c0344a0(a,30);
 }
}
void func_0c0c7978(struct Actor *a)
{
 struct ActorSub2a4Extended *state=(struct ActorSub2a4Extended *)&a->sub2a4;unsigned char *bytes=(unsigned char *)state;int zero=0;
 a->b3f8=2;a->b328=5;func_0c0c9ea0(a);if(dat_0c2f8338[0]>=5)*(short *)&bytes[30]=zero;
 if(!*(short *)&bytes[30]){a->b6++;a->b7=zero;bytes[25]=zero;a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;func_0c0c9e20(a,dat_0c247234);func_0c02a0c4(a,22,34);func_0c0344a0(a,43);}
 else table_0c2479c0[a->b7](a,state);
}
