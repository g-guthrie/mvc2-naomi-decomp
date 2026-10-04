#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern struct ActorGlobalRoot *dat_0c2d964c;
extern struct Vec3_tu5_03 dat_0c26468c[],dat_0c2646bc[];
extern signed char dat_0c2646ec[];
extern int dat_0c2d9610;
extern int func_0c1ec190(void),func_0c038fdc(int);
extern void func_0c037688(struct Obj_tu5_03 *);
void func_0c1e5004(int);
void func_0c1e505e(struct Obj_tu5_03 *);
void func_0c1e5194(int);
void func_0c1e51f0(struct Obj_tu5_03 *);
void func_0c1e4fe8(void)
{
 int i=0;
 do {func_0c1e5004(i);i++;}while(i<4);
}
void func_0c1e5004(int n)
{
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,5,1))!=0){
  a->b12c=1;a->p16=func_0c1e505e;
  a->l84=(*(int (*)[68])&(*(union ActorGlobalEntry (*)[68])dat_0c2d964c->p0)[n])[6];
  a->lcc=0x989;
  a->pos=dat_0c26468c[n];a->b32=n;
 }
}
void func_0c1e505e(struct Obj_tu5_03 *a)
{
 switch(a->b4){
 case 0:
  if(++a->w28>=2){
   struct ActorGlobalTable *table;
   a->w28=0;
   table=dat_0c2d964c->p0;
   a->l84=(*(int (*)[68])table)[(long)func_0c1ec190()%4+6];
   a->angles.array[2]=(int)((float)(func_0c1ec190()%90)*65536.0f/360.0f+0.5f)&0xffff;
  }
  if(func_0c038fdc(0))func_0c1e5194(a->b32);
  break;
 }
 switch((unsigned char)a->b5){
 case 0:
  if(dat_0c2d9610>=1){
   a->b5++;a->lcc|=0x400;
   a->f120=1.0f;a->f124=1.0f;a->f128=1.0f;
  }
  break;
 case 1:
  a->f120-=0.0333333351f;a->f124-=0.0333333351f;a->f128-=0.0333333351f;
  if(++a->w30>=30)func_0c037688(a);
  break;
 }
}
void func_0c1e5194(int n)
{
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,5,1))!=0){
  a->b12c=1;a->p16=func_0c1e51f0;
  a->l84=(*(int (*)[68])dat_0c2d964c->p0)[dat_0c2646ec[0]+64];
  a->lcc=0x981;
  a->pos=dat_0c2646bc[n];
 }
}
void func_0c1e51f0(struct Obj_tu5_03 *a)
{
 a->l84=(*(int (*)[68])dat_0c2d964c->p0)[dat_0c2646ec[a->w28/2]+64];
 if((unsigned int)++a->w28>=26)a->w28=0;
 switch(a->b4){
 case 0:
  if(++a->w30>=30){
   a->b4++;a->w30=0;a->lcc|=0x400;
   a->f120=1.0f;a->f124=1.0f;a->f128=1.0f;
  }
  break;
 case 1:
  a->f120-=0.0333333351f;a->f124-=0.0333333351f;a->f128-=0.0333333351f;
  if(++a->w30>=30)func_0c037688(a);
  break;
 }
}
