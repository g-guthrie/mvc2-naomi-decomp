#include "objects.h"
struct ParticleRow_be7c {float x,y;char delay,random_delay;short animation;};
extern short table_0c25be64[];
extern struct ParticleRow_be7c table_0c25be7c[];
extern unsigned short table_0c25bec4[][2];
extern void (*table_0c25beac[])(struct LinkedActor *,struct LinkedActor *);
extern struct LinkedActor *func_0c0374da(struct LinkedActor *,int,int);
extern void func_0c037688(struct LinkedActor *),func_0c02a0c4(struct LinkedActor *,int,int);
extern signed char func_0c02a026(struct LinkedActor *);
extern int func_0c02849a(void);
void func_0c1bd95e(struct LinkedActor *);
struct LinkedActor *func_0c1bd8d8(struct LinkedActor *parent) {
 struct LinkedActor *a;
 if((a=func_0c0374da(0,3,0))!=0) {
 a->p16=func_0c1bd95e;a->b33=0;a->b32=0;a->p24=parent;a->b1=parent->b1;a->w38=0x3800;
 }
 return a;
}
struct LinkedActor *func_0c1bd914(struct LinkedActor *parent,short selector) {
 struct LinkedActor *a;
 if((a=func_0c0374da(parent,3,2))!=0) {
 a->p16=func_0c1bd95e;a->b32=(unsigned short)selector>>8;a->b33=selector;
 a->p24=parent->p24;a->p20=parent;a->b1=parent->b1;a->w38=0x3800;
 }
 return parent;
}
void func_0c1bd95e(struct LinkedActor *a) {
 struct LinkedActor *parent=a->p24;
 if(a->b4<2)table_0c25beac[a->b32](a,parent);
 else if(a->b4==2)a->b4=3;
 else func_0c037688(a);
}
void func_0c1bd996(struct LinkedActor *a,struct LinkedActor *parent) {
 short *stream;
 if(!a->b4) {
 a->b4++;a->sdc=parent->sdc;a->sdc.b12c=1;
 a->b2=parent->b2;a->b1=parent->b1;a->v80.x=parent->v80.x;a->v80.y=parent->v80.y;
 a->b1a3=parent->b1a3;a->b1a4=parent->b1a4;a->b48=parent->b48;a->v80=parent->v80;a->b36=parent->b36;
 a->sdc.b12c=0;stream=table_0c25be64;a->s30=*stream++;
 if(!a->s30){func_0c037688(a);return;}
 a->s28=*stream++;a->p20=(struct LinkedActor *)stream;
 }
 if(!a->b5) {
 if(--a->s28<0) {
 stream=(short *)a->p20;func_0c1bd914(a,*stream++);
 a->s28=*stream++;a->p20=(struct LinkedActor *)stream;
 if(--a->s30<=0)a->b5++;
 }
 }else a->b4=2;
}
void func_0c1bda82(struct LinkedActor *a,struct LinkedActor *parent) {
 struct ParticleRow_be7c *row=&table_0c25be7c[a->b33];
 unsigned short count,i;short selector;float offset;
 if(!a->b4) {
 a->b4++;a->sdc=parent->sdc;a->sdc.b12c=1;
 a->b2=parent->b2;a->b1=parent->b1;a->v80.x=parent->v80.x;a->v80.y=parent->v80.y;
 a->b1a3=parent->b1a3;a->b1a4=parent->b1a4;a->b48=parent->b48;a->v80=parent->v80;a->b36=parent->b36;
 a->b49=-8;a->f92=0;a->f96=0;a->f104=0;a->f108=0;
 a->f96=-34.2857132f;a->f108=-1.0714285374f;
 func_0c02a0c4(a,18,row->animation);func_0c1bd914(a,a->b33|0x200);
 a->s28=row->delay;a->s30=row->random_delay;
 offset=row->x;if(a->sdc.w130)offset=-offset;
 a->f52=parent->f52+offset;a->f56=parent->f56+617.1428833f;
 }
 a->b36=parent->b36;
 if(!a->b5) {
 if(--a->s28<0){a->s28=a->s30;if(func_0c02849a()&1)func_0c1bd914(a,0x500);}
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(a->f56<row->y) {
 a->f56=row->y;a->b5++;count=table_0c25bec4[a->b33][0];selector=table_0c25bec4[a->b33][1];
 for(i=0;i<count;i++)func_0c1bd914(a,selector++);
 }
 }else if(func_0c02a026(a)<0)func_0c037688(a);
}
