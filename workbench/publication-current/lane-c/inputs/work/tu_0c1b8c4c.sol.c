#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void func_0c037688(struct LinkedActor *),func_0c029e70(struct LinkedActor *,int,int);
extern char func_0c029fc4(struct LinkedActor *);
extern unsigned int func_0c02849a(void);
extern struct ActorFlags *dat_0c2d6f84;
extern void (*table_0c25b6c0[])(struct LinkedActor *,struct LinkedActor *);
extern void (*table_0c25b6d0[])(struct LinkedActor *,struct LinkedActor *);
extern void (*table_0c25b6dc[])(struct LinkedActor *,struct LinkedActor *);
extern signed char dat_0c25b6ec[],dat_0c25b6fe[];
void func_0c1b8cac(struct LinkedActor *),func_0c1b8f3e(struct LinkedActor *);
void func_0c1b8d24(struct LinkedActor *,struct LinkedActor *),func_0c1b8e6c(struct LinkedActor *,struct LinkedActor *),func_0c1b91c4(struct LinkedActor *,struct LinkedActor *);
struct LinkedActor *func_0c1b8c4c(struct Actor *parent,int variant)
{
 struct LinkedActor *a;
 void (*handler)(struct LinkedActor *);
 if((a=func_0c0374da(0,3,0))!=0){
 handler=func_0c1b8cac;if(variant)handler=func_0c1b8f3e;
 a->p16=handler;a->p24=(struct LinkedActor *)parent;a->w38=0x2f05;
 a->wcc.dword_value=(unsigned short)((struct LinkedActor *)parent)->sdc.w158.short_value;
 a->id0=parent->b1a1;a->b32=variant;a->b33=variant+255;a->wd4.pointer_value=parent->p1b0;
 }
 return a;
}
void func_0c1b8cac(struct LinkedActor *a){table_0c25b6c0[a->b4](a,a->p24);}
void func_0c1b8cc0(struct LinkedActor *a,struct LinkedActor *parent)
{
a->b4++;a->sdc=parent->sdc;a->sdc.b12c=1;a->b2=parent->b2;a->b1=parent->b1;
 a->v80.x=parent->v80.x;a->v80.y=parent->v80.y;a->b1a3=parent->b1a3;a->b1a4=parent->b1a4;a->b48=parent->b48;a->v80=parent->v80;a->b36=parent->b36;
 a->sdc.b12c=0;a->b49=-1;func_0c1b8d24(a,parent);
}
void func_0c1b8d24(struct LinkedActor *a,struct LinkedActor *parent){table_0c25b6d0[(unsigned char)a->b5](a,parent);}
void func_0c1b8d36(struct LinkedActor *a,struct LinkedActor *parent)
{
 struct Actor *target;
 if((unsigned short)parent->sdc.w158.short_value!=a->wcc.dword_value){func_0c1b91c4(a,parent);return;}
 target=((struct Actor *)parent)->p1b0;
 if(((struct Actor *)parent)->b19e&&target->b5==3&&target->p1b4==(struct Actor *)parent&&target->b1a2==a->id0){
 a->b5++;a->sdc.b12c=1;a->b36=((struct LinkedActor *)target)->b36;
 a->s28=(func_0c02849a()&63)+120;a->f104=(int)((func_0c02849a()&63)-32)*1.66666663f;
 a->f108=(int)(func_0c02849a()%((struct MeActor *)target)->blk_dc.b13c)*2.1428571f;
 a->wd4.pointer_value=target;func_0c029e70(a,27,(dat_0c2d6f84->flags&3)+6);func_0c1b8e6c(a,parent);
 }
}
void func_0c1b8e6c(struct LinkedActor *a,struct LinkedActor *parent)
{
 struct Actor *target;
 float offset;
 unsigned char state;
 func_0c029fc4(a);target=a->wd4.pointer_value;
 offset=a->f104;if(((struct LinkedActor *)target)->sdc.w130)offset=-offset;
 a->f52=target->f52+offset;
 offset=a->f108;if(target->b1f9==1)offset/=2.0f;if(target->b1f9==3)offset/=4.0f;
 a->f56=target->f56+offset;a->b36=((struct LinkedActor *)target)->b36;
 if(!(target->b233==9&&((state=(unsigned char)target->b22a)==1||state==0)&&target->b233!=3&&--a->s28>0)){
 a->b5++;func_0c029e70(a,27,(signed char)a->sdc.w158.bytes[0]+4);
 }
}
void func_0c1b8f10(struct LinkedActor *a,struct LinkedActor *parent)
{
 if(func_0c029fc4(a)<0||func_0c029fc4(a)<0){a->b4++;a->sdc.b12c=0;}
}
void func_0c1b8f3e(struct LinkedActor *a){table_0c25b6dc[a->b4](a,a->p24);}
void func_0c1b8f70(struct LinkedActor *a,struct LinkedActor *parent)
{
a->b4++;a->sdc=parent->sdc;a->sdc.b12c=1;a->b2=parent->b2;a->b1=parent->b1;
 a->v80.x=parent->v80.x;a->v80.y=parent->v80.y;a->b1a3=parent->b1a3;a->b1a4=parent->b1a4;a->b48=parent->b48;a->v80=parent->v80;a->b36=parent->b36;
 if(!a->b33){a->sdc.b12c=0;a->s28=0;a->s30=17;}
 else{a->sdc.b12c=1;a->b49=-1;func_0c029e70(a,27,(func_0c02849a()&3)+6);}
 func_0c1b8d24(a,parent);
}
void func_0c1b9028(struct LinkedActor *a,struct LinkedActor *parent)
{
 struct Actor *target=a->wd4.pointer_value;
 struct LinkedActor *child;
 int offset;
 unsigned char state;
 if(!a->b33){
 if(target->b5!=3||target->b233!=9||a->s30<0){func_0c1b91c4(a,parent);return;}
 if((child=func_0c1b8c4c((struct Actor *)parent,2))!=0){
 offset=(((int)((struct MeActor *)target)->blk_dc.b13e+((struct MeActor *)target)->blk_dc.b13f)>>4)*dat_0c25b6ec[a->s30];
 offset+=(func_0c02849a()&2)-1;child->f104=offset*1.66666663f;
 offset=(((struct MeActor *)target)->blk_dc.b13c>>5)*dat_0c25b6fe[a->s30];
 offset+=(func_0c02849a()&2)-1;child->f108=offset*2.1428571f;a->s30--;
 }
 }else if(!a->b5){
 offset=(int)a->f104;if(((struct LinkedActor *)target)->sdc.w130)offset=-offset;
 a->f52=target->f52+offset;a->f56=target->f56+a->f108;a->b36=((struct LinkedActor *)target)->b36;func_0c029fc4(a);
 if(!(target->b5==3&&((state=(unsigned char)target->b22a)==1||state==0)&&target->b233==9)){
 a->b5++;func_0c029e70(a,27,(signed char)a->sdc.w158.bytes[0]+4);
 }
 }else if(func_0c029fc4(a)<0||func_0c029fc4(a)<0)func_0c1b91c4(a,parent);
}
void func_0c1b91b6(struct LinkedActor *a,struct LinkedActor *parent){a->b4++;a->sdc.b12c=0;}
void func_0c1b91c4(struct LinkedActor *a,struct LinkedActor *parent){func_0c037688(a);}
