#include "objects.h"
extern struct LinkedActor *func_0c0374da(struct LinkedActor *,int,int);
extern int func_0c02849a(void);
extern void func_0c029fc4(struct LinkedActor *),func_0c029e70(struct LinkedActor *,int,int);
extern void (*dat_0c25bc1c[])(struct LinkedActor *,struct Actor *);
extern void (*dat_0c25bc2c[])(struct LinkedActor *,struct Actor *);
void func_0c1bb8aa(struct LinkedActor *);
void func_0c1bb8d0(struct LinkedActor *,struct Actor *);
void func_0c1bba6c(struct LinkedActor *,struct Actor *);
struct LinkedActor *func_0c1bb838(struct LinkedActor *parent,unsigned short packed,float x,float y){
 struct LinkedActor *a;
 if((a=func_0c0374da(0,3,0))!=0){
  a->p16=func_0c1bb8aa;a->p24=parent->p24;
  a->b1=parent->b1;
  a->wcc.pointer_value=parent;
  a->b32=packed>>8;a->b33=packed;
  a->w38=0x3600;a->f52=x;a->f56=y;
  a->b34=parent->b34;parent->b34^=1;
 }
 return a;
}
void func_0c1bb8aa(struct LinkedActor *a){
 struct Actor *owner=(struct Actor *)a->p24;
 if(a->b33)((struct ActorSub2a4Extended *)&owner->sub2a4)->l28=4;
 if(!a->b32)func_0c1bb8d0(a,owner);else func_0c1bba6c(a,owner);
}
void func_0c1bb8d0(struct LinkedActor *a,struct Actor *owner){dat_0c25bc1c[a->b4](a,owner);}
void func_0c1bb8e2(struct LinkedActor *a,struct Actor *owner){
 int random;
 a->b4++;a->sdc=((struct LinkedActor *)owner)->sdc;
 a->sdc.b12c=1;a->b2=owner->b2;a->b1=owner->b1;
 a->v80.x=owner->f80;a->v80.y=owner->f84;
 a->b1a3=((struct LinkedActor *)owner)->b1a3;a->b1a4=((struct LinkedActor *)owner)->b1a4;
 a->b48=((struct LinkedActor *)owner)->b48;a->v80=((struct LinkedActor *)owner)->v80;
 ((struct Actor *)a)->b36=owner->b36;((struct Actor *)a)->b36=8;a->b34=0;
 a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;
 random=((long)(unsigned char)func_0c02849a()-128L)*512L;
 a->f92=(float)random*1.666666627f/65536.0f;a->f108=-0.4017857016f;
 func_0c029e70(a,27,(func_0c02849a()&3)+5);
}
void func_0c1bb9d0(struct LinkedActor *a,struct Actor *owner){
 unsigned short i;
 func_0c029fc4(a);a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(a->f56>owner->f41c)return;
 a->b4++;
 for(i=0;i<3;i++)func_0c1bb838(a,256+(unsigned char)a->b33,a->f52,a->f56+8.571428299f);
}
void func_0c1bba6c(struct LinkedActor *a,struct Actor *owner){dat_0c25bc2c[a->b4](a,owner);}
