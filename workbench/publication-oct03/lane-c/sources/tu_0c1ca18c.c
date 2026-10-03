#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern struct ActorGlobalRoot *dat_0c2d966c;
extern struct ActorFlags *dat_0c2d6f84;
extern signed char dat_0c25eca8[];
extern struct Vec3_tu5_03 dat_0c25ecb8[],dat_0c25ed18[],dat_0c25ed78[];
extern void (*table_0c25edd8[])(struct Obj_tu5_03 *);
extern void func_0c1d91a8(int),func_0c1d8ff8(int,int);
extern int func_0c1d901e(void);
extern int func_0c1d912a(float *,float *),func_0c1d917e(float *,float *);
extern void func_0c037688(struct Obj_tu5_03 *);
void func_0c1ca314(struct Obj_tu5_03 *);
void func_0c1ca18c(int n,int player)
{
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,5,1))!=0){
  a->b12c=0;a->b32=n;a->p16=func_0c1ca314;
  ((struct LinkedActor *)a)->b34=dat_0c25eca8[player];
  a->l84=(*(int (*)[257])dat_0c2d966c->p0)[((struct LinkedActor *)a)->b34];
  a->pos=dat_0c25ecb8[n];
  a->angles.array[0]=(int)(dat_0c25ed18[n].x*65536.0f/360.0f+0.5f)&0xffff;
  a->angles.array[1]=(int)(dat_0c25ed18[n].y*65536.0f/360.0f+0.5f)&0xffff;
  a->angles.array[2]=(int)(dat_0c25ed18[n].z*65536.0f/360.0f+0.5f)&0xffff;
  a->lcc=0x80f;a->w28=0;a->w30=0;
  if(n<4)func_0c1d91a8(a->l84);
 }
}
void func_0c1ca26a(struct Obj_tu5_03 *a)
{
 struct Vec3_tu5_03 *start=&dat_0c25ecb8[a->b32],*end=&dat_0c25ed78[a->b32];
 a->pos.x=start->x+(end->x-start->x)/30.0f*a->w28;
 a->pos.y=start->y+(end->y-start->y)/30.0f*a->w28;
 a->pos.z=start->z+(end->z-start->z)/30.0f*a->w28;
}
void func_0c1ca314(struct Obj_tu5_03 *a)
{
 struct ActorFlags *state=dat_0c2d6f84;
 if(state->b3!=4||state->b8d){func_0c037688(a);return;}
 if(!a->b4){
  if(state->s14){
   a->b12c=1;
   if(a->w28>=30){a->b4++;a->pos=dat_0c25ed78[a->b32];return;}
   else {a->w28++;func_0c1ca26a(a);}
  }
 }else table_0c25edd8[a->b32](a);
}
void func_0c1ca39e(struct Obj_tu5_03 *a)
{
 float u,v;
 a->w30++;
 if(a->w30>=200)a->w30=0;
 func_0c1d8ff8((*(int (*)[257])dat_0c2d966c->p0)[((struct LinkedActor *)a)->b34+1],a->l84);
 while(func_0c1d901e()==0){
  func_0c1d912a(&u,&v);
  u+=a->w30*0.005f;v+=a->w30*0.005f;
  func_0c1d917e(&u,&v);
 }
}
