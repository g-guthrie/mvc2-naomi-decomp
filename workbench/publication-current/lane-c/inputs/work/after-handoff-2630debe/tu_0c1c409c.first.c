#include "model_1c409c.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void func_0c037688(struct LinkedActor *),func_0c034a1c(int),func_0c1c4294(int);
extern int func_0c026a86(void);
extern struct ActorFlags *dat_0c2d6f84;
extern float dat_0c25d6e4[];
extern int dat_0c25d6a4[];
extern unsigned char dat_0c25d724[];
extern void (*dat_0c25d734[])(struct LinkedActor *),(*dat_0c25d744[])(struct LinkedActor *);
void func_0c1c40e8(struct LinkedActor *),func_0c1c4178(struct LinkedActor *),func_0c1c41aa(struct LinkedActor *),func_0c1c4254(struct LinkedActor *);
void func_0c1c409c(int selector)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,12,1))!=0){
 ((struct Obj_tu5_03 *)a)->b12c=0;a->p16=func_0c1c40e8;
 a->p84=0;a->wcc.dword_value=0;((struct MeActor *)a)->w26=7;
 a->b32=selector&15;if(selector&128)func_0c1c4254(a);
 }
}
void func_0c1c40e8(struct LinkedActor *a){dat_0c25d734[a->b4](a);}
void func_0c1c40fa(struct LinkedActor *a)
{
 int sound;
 if(func_0c026a86())return;
 a->b4++;((struct Obj_tu5_03 *)a)->b12c=1;a->s28=60;
 a->f52=-dat_0c25d6e4[a->b32]/2.0f;a->f56=-6.25f;a->f60=0.0f;
 a->wd4.integer=dat_0c25d6a4[a->b32];a->id8=0;
 sound=dat_0c25d724[a->b32];if(sound)func_0c034a1c(sound);
 func_0c1c4178(a);
}
void func_0c1c4178(struct LinkedActor *a){dat_0c25d744[(unsigned char)a->b5](a);}
void func_0c1c418a(struct LinkedActor *a)
{
 a->b5++;a->s28=12;a->f100=(-a->f60+-40.0f)/12.0f;func_0c1c41aa(a);
}
void func_0c1c41aa(struct LinkedActor *a)
{
 a->f60+=a->f100;
 if(--a->s28<=0){a->b5++;a->s28=60;}
}
void func_0c1c4208(struct LinkedActor *a)
{
 if(--a->s28<=0){a->b5++;a->s28=12;a->f100=(-a->f60+0.0f)/12.0f;}
}
void func_0c1c4236(struct LinkedActor *a)
{
 a->f60+=a->f100;if(--a->s28<=0)func_0c1c4254(a);
}
void func_0c1c4254(struct LinkedActor *a)
{
 ((struct Obj_tu5_03 *)a)->b12c=0;
 if(a->b32==3)func_0c1c4294(dat_0c2d6f84->b8b);
 func_0c037688(a);
}
