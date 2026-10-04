#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern unsigned char *dat_0c2fb1b0;
extern struct ActorGlobalRoot *dat_0c2d9658;
extern struct SelectionFlags59e8 dat_0c2fb158;
extern struct CharacterSlot5a4 dat_0c2d70a0[];
extern struct Vec3_tu5_03 dat_0c25db44[];
extern signed char dat_0c22ff28[][2],dat_0c25e074[8][8];
extern void (*table_0c25e0b4[])(struct Obj_tu5_03 *);
extern void func_0c1d91a8(int),func_0c1d8ff8(int,int),func_0c1c7960(struct Obj_tu5_03 *);
extern int func_0c1d901e(void);
extern void func_0c1d912a(float *,float *),func_0c1d917e(float *,float *);
extern void func_0c1ee3b0(int),func_0c1ee360(int),func_0c1eeb60(void);
extern void func_0c1edc40(float *),func_0c1ed4e0(float *),func_0c1eeb40(struct Vec3_tu5_03 *),func_0c023612(struct Vec3_tu5_03 *,struct Vec3_tu5_03 *,int);
extern void func_0c037688(struct Obj_tu5_03 *);
void func_0c1c553c(struct Obj_tu5_03 *),func_0c1c559a(struct Obj_tu5_03 *),func_0c1c567e(struct Obj_tu5_03 *),func_0c1c5688(struct Obj_tu5_03 *),func_0c1c56d8(struct Obj_tu5_03 *);
void func_0c1c5480(unsigned char player,unsigned char variant)
{
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,5,1))!=0){
 a->b12c=1;a->b32=player;a->b33=variant;a->p16=func_0c1c553c;
 a->p200=&((struct Obj_tu5_03 *)dat_0c2fb1b0)->f136;
 a->l84=((int *)dat_0c2d9658->p0)[player*2+151];
 a->angles.array[0]=0;a->angles.array[1]=0;a->angles.array[2]=0;a->lcc=0x4830;
 a->f80=1.20000005f;a->f84=1.20000005f;a->f88=1.20000005f;a->f116=1.0f;((struct Actor *)a)->b1=255;
 func_0c1d91a8(a->l84);
 if(a->b32)a->angles.array[2]=-8192;else a->angles.array[2]=8192;
 func_0c1c7960(a);
 }
}
void func_0c1c553c(struct Obj_tu5_03 *a){table_0c25e0b4[a->b4](a);}
void func_0c1c554e(struct Obj_tu5_03 *a)
{
 a->f80-=0.04f;a->f84-=0.04f;a->f88-=0.04f;
 if(!(a->f80>1.0f)){a->b4++;a->f80=1.0f;a->f84=1.0f;a->f88=1.0f;}
 func_0c1c559a(a);func_0c1c5688(a);
}
void func_0c1c559a(struct Obj_tu5_03 *a)
{
 struct Actor *character;
 func_0c1c56d8(a);
 if(dat_0c2fb158.flags[a->b32]&(1<<a->b33))a->b4=2;
 else{
 character=dat_0c2d70a0[a->b32].actor;
 if(character->b52c!=((struct Actor *)a)->b1){
 ((struct Actor *)a)->b1=character->b52c;dat_0c2fb158.choice[a->b32]=((struct Actor *)a)->b1+1;
 }
 }
 func_0c1c5688(a);
}
void func_0c1c5640(struct Obj_tu5_03 *a)
{
 a->f80+=0.01f;a->f84+=0.01f;a->f116-=0.050000001f;
 if(!(a->f116>0.0f)){a->f116=0.0f;a->b4++;a->b12c=0;}
 else func_0c1c5688(a);
}
void func_0c1c567e(struct Obj_tu5_03 *a){}
void func_0c1c5682(struct Obj_tu5_03 *a){func_0c037688(a);}
void func_0c1c5688(struct Obj_tu5_03 *a)
{
 func_0c1ee3b0(0);func_0c1edc40(&a->f136);func_0c1eeb60();func_0c1eeb40(&a->pos);
 func_0c023612(&a->pos,&dat_0c25db44[((struct Actor *)a)->b1],a->angles.scalar.l48);
 func_0c1ed4e0(&a->f136);func_0c1ee360(1);
}
void func_0c1c56d8(struct Obj_tu5_03 *a)
{
 float u,v;
 a->w28++;if(a->w28>=50)a->w28=0;
 func_0c1d8ff8(((int *)dat_0c2d9658->p0)[a->b32*2+152],a->l84);
 while(func_0c1d901e()==0){
 func_0c1d912a(&v,&u);u=u+a->w28*0.02f;func_0c1d917e(&v,&u);
 }
}
void func_0c1c57b4(struct Actor *a)
{
 struct Actor *parent=(struct Actor *)((struct LinkedActor *)a)->p24;
 dat_0c2fb158.column[a->b524]=dat_0c22ff28[parent->b52c][0];
 dat_0c2fb158.row[a->b524]=dat_0c22ff28[parent->b52c][1];
}
void func_0c1c57e8(unsigned char player)
{
 if(dat_0c2fb158.row[player]>=8)dat_0c2fb158.row[player]=0;
 if(dat_0c2fb158.row[player]<0)dat_0c2fb158.row[player]=7;
 if(dat_0c2fb158.column[player]>=8)dat_0c2fb158.column[player]=0;
 if(dat_0c2fb158.column[player]<0)dat_0c2fb158.column[player]=7;
}
char func_0c1c5848(unsigned char player){return dat_0c25e074[dat_0c2fb158.row[player]][dat_0c2fb158.column[player]];}
