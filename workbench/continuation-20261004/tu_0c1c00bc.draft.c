/* Unverified: complete section links 140 bytes against 144 retail bytes. */
/* Keep a six-frame effect cycling while the owner's effect counter is positive. */
#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *);
extern void func_0c02a684(struct Actor *,int,int,int);
void func_0c1c00ee(struct Obj_tu5_03 *);
void func_0c1c00bc(struct Actor *owner){
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,10,0))){
 a->p16=func_0c1c00ee;a->p24=(struct Obj_tu5_03 *)owner;a->pad0[1]=owner->b1;
 *(short *)&a->pad3[2]=10;
 }
}
void func_0c1c00ee(struct Obj_tu5_03 *a){
 struct Actor *owner=(struct Actor *)a->p24;
 if(*(int *)&owner->sub2a4.b20>0){
 owner->sub2a4.l24++;
 owner->sub2a4.l24=(int)owner->sub2a4.l24%6;
 func_0c02a684(owner,4,owner->sub2a4.l24+16,1);
 }else func_0c037688(a);
}
