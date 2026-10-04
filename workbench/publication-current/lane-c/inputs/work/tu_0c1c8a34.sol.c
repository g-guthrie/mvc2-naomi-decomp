#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern struct ActorFlags *dat_0c2d6f84;
extern struct SelectionFlags59e8 dat_0c2fb158;
extern unsigned char *dat_0c2fb1b0;
extern struct Vec3_tu5_03 dat_0c25db44[];
extern unsigned char dat_0c22ff29[];
extern struct ActorGlobalRoot *dat_0c2d9658;
extern void func_0c1c4e3c(struct Obj_tu5_03 *,char);
extern void func_0c1d91a8(int),func_0c1d8ff8(int,int);
extern int func_0c1d901e(void);
extern void func_0c1d912a(int *,float *),func_0c1d917e(int *,float *);
extern void func_0c037688(struct Obj_tu5_03 *);
void func_0c1c8b1c(unsigned char);
void func_0c1c8bf4(struct Obj_tu5_03 *);
void func_0c1c8cd8(struct Obj_tu5_03 *);
void func_0c1c8a34(void)
{
 struct Obj_tu5_03 *a;
 unsigned char word,bit;
 if((a=func_0c0374da(0,5,1))!=0){
  a->p16=func_0c1c8bf4;
  ((unsigned int (*)[2])&a->lcc)[0][0]=((unsigned int (*)[2])&a->lcc)[0][1]=0;
  if(dat_0c2d6f84->b24&1){((unsigned int (*)[2])&a->lcc)[0][0]|=dat_0c2fb158.masks[0][0];((unsigned int (*)[2])&a->lcc)[0][1]|=dat_0c2fb158.masks[0][1];}
  if(dat_0c2d6f84->b24&2){((unsigned int (*)[2])&a->lcc)[0][0]|=dat_0c2fb158.masks[1][0];((unsigned int (*)[2])&a->lcc)[0][1]|=dat_0c2fb158.masks[1][1];}
  for(word=0;word<2;word++){
   for(bit=0;bit<32;bit++){
    if(((unsigned int (*)[2])&a->lcc)[0][word]&(1<<bit))func_0c1c8b1c((unsigned char)(word*32)+bit);
   }
  }
 }
}
void func_0c1c8b1c(unsigned char index)
{
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,5,1))!=0){
  a->b12c=1;
  a->p200=(float *)(dat_0c2fb1b0+136);
  a->p16=func_0c1c8cd8;
  a->b33=index;
  a->pos=dat_0c25db44[index];
  a->w30=dat_0c22ff29[index*2]*2;
  a->pos.z+=0.5f;
  a->l84=((int *)dat_0c2d9658->p0)[a->w30+157];
  a->lcc=0x0815;
  func_0c1c4e3c(a,a->b33);
  a->w28=0;
  func_0c1d91a8(a->l84);
 }
}
void func_0c1c8bf4(struct Obj_tu5_03 *a)
{
 unsigned int changed[2];
 signed char word,bit;
 changed[0]=changed[1]=0;
 if(dat_0c2d6f84->b24&1){changed[0]|=dat_0c2fb158.masks[0][0];changed[1]|=dat_0c2fb158.masks[0][1];}
 if(dat_0c2d6f84->b24&2){changed[0]|=dat_0c2fb158.masks[1][0];changed[1]|=dat_0c2fb158.masks[1][1];}
 for(word=0;word<2;word++){
  changed[word]^=((unsigned int (*)[2])&a->lcc)[0][word];
  if(changed[word]){
   for(bit=0;bit<32;bit++){
    if(changed[word]&(1<<bit)){
     ((unsigned int (*)[2])&a->lcc)[0][word]|=1<<bit;
     func_0c1c8b1c(bit+(unsigned char)(word*32));
    }
   }
  }
 }
}
void func_0c1c8cd8(struct Obj_tu5_03 *a)
{
 switch(a->b4){
 case 0:
  {
  int id;float value;
  short player;
  a->f80=1.0f;a->f84=1.0f;a->f88=1.0f;
  a->pos.z=dat_0c25db44[a->b33].z+0.5f;
  a->pos.x=dat_0c25db44[a->b33].x;
  if(dat_0c2d6f84->b7){a->b4++;a->b12c=0;break;}
  a->w28++;
  if(a->w28>=500)a->w28=0;
  func_0c1d8ff8(((int *)dat_0c2d9658->p0)[a->w30+158],a->l84);
  while(!func_0c1d901e()){
   func_0c1d912a(&id,&value);
   value-=a->w28*0.0020000001f;
   func_0c1d917e(&id,&value);
  }
  for(player=0;player<2;player++){
   if(dat_0c2fb158.choice[player]){
    unsigned char selected=dat_0c2fb158.choice[player]-1;
    if(a->b33==selected){
     float offset;
     if(player){
      a->f80=1.15f;a->f84=1.15f;a->f88=1.15f;
      a->pos.z=dat_0c25db44[selected].z+6.5f;
     }else{
      a->f80=1.20000005f;a->f84=1.20000005f;a->f88=1.20000005f;
      a->pos.z=dat_0c25db44[selected].z+8.5f;
     }
     if(a->pos.x<0.0f)offset=-2.0f;else offset=2.0f;
     a->pos.x=dat_0c25db44[selected].x+offset;
    }
   }
  }
  }
  break;
 case 1:
  func_0c037688(a);
  break;
 }
}
