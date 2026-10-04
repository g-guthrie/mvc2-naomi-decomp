#include "selector_model.h"
struct FlightSpec { float x, floor; signed char initial, interval; short animation; };
struct SpawnSpec { unsigned short count; short first; };
extern short dat_0c25be64[];
extern struct FlightSpec dat_0c25be7c[];
extern struct SpawnSpec dat_0c25bec4[];
extern void (*dat_0c25beac[])(struct LinkedActor *,struct LinkedActor *);
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void func_0c037688(struct LinkedActor *);
extern void func_0c02a0c4(struct LinkedActor *,int,int);
extern unsigned int func_0c02849a(void);
extern signed char func_0c02a026(struct LinkedActor *);
void func_0c1bd95e(struct LinkedActor *);
struct LinkedActor *func_0c1bd8d8(struct LinkedActor *parent)
{
 struct LinkedActor *a=func_0c0374da(0,3,0);
 if(a){a->b33=0;a->b32=0;a->p16=func_0c1bd95e;a->p24=parent;a->b1=parent->b1;a->w38=0x3800;}
 return a;
}
struct LinkedActor *func_0c1bd914(struct LinkedActor *parent,unsigned short code)
{
 struct LinkedActor *a=func_0c0374da((int)parent,3,2);
 if(a){a->p16=func_0c1bd95e;a->b32=code>>8;a->b33=code;a->p24=parent->p24;a->p20=parent;a->b1=parent->b1;a->w38=0x3800;}
 return parent;
}
void func_0c1bd95e(struct LinkedActor *a)
{
 struct LinkedActor *parent=a->p24;
 if(a->b4<2){dat_0c25beac[a->b32](a,parent);return;}
 if(a->b4==2)a->b4=3;else func_0c037688(a);
}
void func_0c1bd996(struct LinkedActor *a,struct LinkedActor *parent)
{
 short *sequence;
 if(a->b4==0){
  a->b4++;a->sdc=parent->sdc;a->sdc.b12c=1;
  a->b2=parent->b2;a->b1=parent->b1;a->v80.x=parent->v80.x;a->v80.y=parent->v80.y;
  a->b1a3=parent->b1a3;a->b1a4=parent->b1a4;a->b48=parent->b48;a->v80=parent->v80;a->b36=parent->b36;
  a->sdc.b12c=0;sequence=dat_0c25be64;a->s30=*sequence++;
  if(a->s30==0){func_0c037688(a);return;}
  a->s28=*sequence++;a->p20=(struct LinkedActor *)sequence;
 }
 if(a->b5==0){
  if(--a->s28<0){
   sequence=(short *)a->p20;func_0c1bd914(a,*sequence++);
   a->s28=*sequence++;a->p20=(struct LinkedActor *)sequence;
   if(--a->s30<=0)a->b5++;
  }
 }else a->b4=2;
}
void func_0c1bda82(struct LinkedActor *a,struct LinkedActor *parent)
{
 struct FlightSpec *spec=&dat_0c25be7c[(unsigned char)a->b33];
 if(a->b4==0){
  a->b4++;a->sdc=parent->sdc;a->sdc.b12c=1;
  a->b2=parent->b2;a->b1=parent->b1;a->v80.x=parent->v80.x;a->v80.y=parent->v80.y;
  a->b1a3=parent->b1a3;a->b1a4=parent->b1a4;a->b48=parent->b48;a->v80=parent->v80;a->b36=parent->b36;
  a->b49=-8;a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;
  a->f96=-34.2857132f;a->f108=-1.07142854f;
  func_0c02a0c4(a,18,spec->animation);
  func_0c1bd914(a,0x200|(unsigned char)a->b33);
  a->s28=spec->initial;a->s30=spec->interval;
  if(a->sdc.w130)a->f52=parent->f52+-spec->x;else a->f52=parent->f52+spec->x;
  a->f56=parent->f56+617.142822f;
 }
 a->b36=parent->b36;
 if(a->b5==0){
  if(--a->s28<0){a->s28=a->s30;if(func_0c02849a()&1)func_0c1bd914(a,0x500);}
  a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
  if(spec->floor>a->f56){
   struct SpawnSpec *spawn;unsigned short i;int code;
   a->f56=spec->floor;a->b5++;
   spawn=&dat_0c25bec4[(unsigned char)a->b33];code=spawn->first;
   for(i=0;i<spawn->count;i++,code++)func_0c1bd914(a,code);
  }
 }else if(func_0c02a026(a)<0)func_0c037688(a);
}
