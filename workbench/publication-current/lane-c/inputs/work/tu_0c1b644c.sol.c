#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void func_0c037688(struct LinkedActor *),func_0c029e70(struct LinkedActor *,int,int);
extern char func_0c029fc4(struct LinkedActor *);
extern unsigned int func_0c02849a(void);
extern struct ActorFlags *dat_0c2d6f84;
void func_0c1b648c(struct LinkedActor *),func_0c1b64ce(struct LinkedActor *,struct Actor *),func_0c1b6650(struct LinkedActor *,struct Actor *),func_0c1b68a4(struct LinkedActor *,struct Actor *);
struct LinkedActor *func_0c1b644c(struct Actor *parent)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,3,0))!=0){a->p16=func_0c1b648c;a->b32=0;a->b33=0;a->p24=(struct LinkedActor *)parent->p1c8;a->b1=parent->b1;a->w38=0x2c02;}
 return a;
}
void func_0c1b648c(struct LinkedActor *a)
{
 struct Actor *parent=(struct Actor *)a->p24;
 if(parent->p1c8->b1!=44||a->b4>=2){func_0c037688(a);return;}
 if(!a->b32)func_0c1b64ce(a,parent);
 else if(a->b32&128)func_0c1b68a4(a,parent);
 else func_0c1b6650(a,parent);
}
void func_0c1b64ce(struct LinkedActor *a,struct Actor *parent)
{
 struct LinkedActor *child;
 int phase;
 a->sdc.b12c=0;
 if(!a->b4){
a->b4++;a->sdc= ((struct LinkedActor *)parent->p1c8)->sdc;a->sdc.b12c=1;
 a->b2=parent->p1c8->b2;a->b1=parent->p1c8->b1;
 a->v80.x=((struct LinkedActor *)parent->p1c8)->v80.x;a->v80.y=((struct LinkedActor *)parent->p1c8)->v80.y;
 a->b1a3=((struct LinkedActor *)parent->p1c8)->b1a3;a->b1a4=((struct LinkedActor *)parent->p1c8)->b1a4;
 a->b48=((struct LinkedActor *)parent->p1c8)->b48;a->v80=((struct LinkedActor *)parent->p1c8)->v80;
 a->b36=((struct LinkedActor *)parent->p1c8)->b36;
 a->f52=parent->p1c8->f52;a->f56=parent->p1c8->f56;a->s30=10;
 }else{
 if(!parent->b22a&&((phase=parent->b5)==3||phase==2)){
 if(a->s30){
 if((child=func_0c0374da(0,3,0))!=0){child->p16=func_0c1b648c;child->b32=(dat_0c2d6f84->flags&3)+1;child->b33=0;
 child->p24=a->p24;child->b1=parent->p1c8->b1;child->w38=0x2c02;
 child->wcc.dword_value=(func_0c02849a()&63)-32;child->id0=64-(func_0c02849a()&63);}
 a->s30--;
 }
 }else func_0c037688(a);
 }
}
void func_0c1b6650(struct LinkedActor *a,struct Actor *parent)
{
 struct LinkedActor *child;
 int i;
 int phase;
 if(!a->b4){
a->b4++;a->sdc= ((struct LinkedActor *)parent->p1c8)->sdc;a->sdc.b12c=1;
 a->b2=parent->p1c8->b2;a->b1=parent->p1c8->b1;
 a->v80.x=((struct LinkedActor *)parent->p1c8)->v80.x;a->v80.y=((struct LinkedActor *)parent->p1c8)->v80.y;
 a->b1a3=((struct LinkedActor *)parent->p1c8)->b1a3;a->b1a4=((struct LinkedActor *)parent->p1c8)->b1a4;
 a->b48=((struct LinkedActor *)parent->p1c8)->b48;a->v80=((struct LinkedActor *)parent->p1c8)->v80;
 a->b36=((struct LinkedActor *)parent->p1c8)->b36;
 func_0c029e70(a,27,(signed char)a->b32+5);a->s28=300;a->sdc.b12c=0;
 if((a->sdc.w130=((struct LinkedActor *)parent)->sdc.w130)!=0)a->wcc.arrcc[0]=-a->wcc.arrcc[0];
 a->b49=-1;
 }else{
 a->b36=((struct LinkedActor *)parent)->b36;
 if(!parent->b22a){
 if((phase=parent->b5)==3||phase==2){
 a->sdc.b12c=1;a->f52=parent->f52+(int)a->wcc.dword_value*1.66666663f;
 a->f56=parent->f56+a->id0*2.1428571f;func_0c029fc4(a);return;
 }
 for(i=0;i<2;i++){
 if((child=func_0c0374da(0,3,0))==0)break;
 child->p16=func_0c1b648c;child->b32=(func_0c02849a()&7)+128;child->b33=0;
 child->p24=a->p24;child->b1=parent->p1c8->b1;child->w38=0x2c02;
 child->f52=a->f52;child->f56=a->f56;child->f104=0.0f;child->f108=-0.13392857f;
 child->f92=((int)((func_0c02849a()&127)-64)<<12)*1.66666663f/65536.0f;
 child->f96=-((int)((func_0c02849a()&47)-32)<<12)*2.1428571f/65536.0f;
 }
 }
 func_0c037688(a);
 }
}
void func_0c1b68a4(struct LinkedActor *a,struct Actor *parent)
{
 if(!a->b4){
a->b4++;a->sdc= ((struct LinkedActor *)parent->p1c8)->sdc;a->sdc.b12c=1;
 a->b2=parent->p1c8->b2;a->b1=parent->p1c8->b1;
 a->v80.x=((struct LinkedActor *)parent->p1c8)->v80.x;a->v80.y=((struct LinkedActor *)parent->p1c8)->v80.y;
 a->b1a3=((struct LinkedActor *)parent->p1c8)->b1a3;a->b1a4=((struct LinkedActor *)parent->p1c8)->b1a4;
 a->b48=((struct LinkedActor *)parent->p1c8)->b48;a->v80=((struct LinkedActor *)parent->p1c8)->v80;
 a->b36=((struct LinkedActor *)parent->p1c8)->b36;
 func_0c029e70(a,27,(a->b32&7)+10);a->s28=30;a->sdc.b12c=0;
 a->b36=((struct LinkedActor *)parent)->b36;a->b49=-1;
 }else{
 a->b36=((struct LinkedActor *)parent)->b36;
 if(parent->b22a||--a->s28<0){func_0c037688(a);return;}
 a->sdc.b12c=1;func_0c029fc4(a);
 a->f52=a->f52+a->f92;a->f92=a->f92+a->f104;
 a->f56=a->f56+a->f96;a->f96=a->f96+a->f108;
 }
}
