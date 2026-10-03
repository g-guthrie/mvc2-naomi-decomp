#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern struct Vec3_tu5_03 dat_0c261cec[][2];
extern struct ActorFlags *dat_0c2d6f84;
extern struct ActorGlobalRoot *dat_0c2d964c;
extern int func_0c1ec190(void);
extern float func_0c1ec2c0(int);
void func_0c1d9d98(struct Obj_tu5_03 *);
void func_0c1d9d70(void)
{
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,5,1))!=0){
  a->b12c=0;
  a->p16=func_0c1d9d98;
  a->lcc=0x0b21;
 }
}
void func_0c1d9d98(struct Obj_tu5_03 *a)
{
 switch(a->b4){
 case 0:
  a->b12c=0;
  if(++a->w28<60)break;
  a->w28=60;
  {unsigned value=(unsigned)dat_0c2d6f84->i90;
  if(value>500 && value<1000)break;
  if(value>3500 && value<4500)break;}
  a->b4++;
  a->b32=(unsigned long)func_0c1ec190()%6;
  a->w28=0;
  a->b12c=1;
  {int *root=(int *)dat_0c2d964c->p0;
   a->l84=root[(long)func_0c1ec190()%2L+9];}
  a->pos=dat_0c261cec[a->b32][0];
  a->angles.array[2]=(long)func_0c1ec190()%16384L;
  break;
 case 1:
  {float duration=120.0f;
  a->pos.x+=(dat_0c261cec[a->b32][1].x-dat_0c261cec[a->b32][0].x)/duration;
  a->pos.y+=(dat_0c261cec[a->b32][1].y-dat_0c261cec[a->b32][0].y)/duration;
  a->pos.z+=(dat_0c261cec[a->b32][1].z-dat_0c261cec[a->b32][0].z)/duration;
  a->f116=func_0c1ec2c0((int)(a->w28/duration*11796480.0f/360.0f+0.5f)&65535);}
  if(++a->w28>=120){a->b4=0;a->w28=0;}
  break;
 }
}
