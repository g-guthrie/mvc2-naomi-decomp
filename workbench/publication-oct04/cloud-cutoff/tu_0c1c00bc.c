#include "objects.h"
extern struct MeActor *func_0c0374da(int,int,int);
extern void func_0c02a684(struct Actor *,int,int,int),func_0c037688(struct MeActor *);
void func_0c1c00ee(struct MeActor *);
void func_0c1c00bc(struct Actor *a)
{
 struct MeActor *record;
 if((record=func_0c0374da(0,10,0))!=0){
  record->p10=func_0c1c00ee;record->p18=(struct MeActor *)a;record->b01=a->b1;record->w26=10;
 }
}
void func_0c1c00ee(struct MeActor *record)
{
 struct Actor *a=(struct Actor *)record->p18;
 if(*(int *)&a->sub2a4.b20>0){
  a->sub2a4.l24=a->sub2a4.l24+1;
  a->sub2a4.l24=((volatile struct Actor *)a)->sub2a4.l24%6;
  func_0c02a684(a,4,a->sub2a4.l24+16,1);
 }else func_0c037688(record);
}
