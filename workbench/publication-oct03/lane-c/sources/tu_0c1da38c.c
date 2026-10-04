#include "objects.h"
/* Seven floats per spline sample: timestamp, position, and angle triplets. */
extern float dat_0c261d94[];
extern struct ActorGlobalRoot *dat_0c2d964c;
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c1d8ff8(int,int);
extern int func_0c1d901e(void);
extern void func_0c1d9100(struct Vec3_tu5_03 *),func_0c1d914c(struct Vec3_tu5_03 *);
extern float func_0c1eeef0(struct Vec3_tu5_03 *),func_0c1ec2c0(int);
void func_0c1da550(struct Obj_tu5_03 *);
void func_0c1da38c(float t,float *p0,float *p1,float *p2)
{
 float u=1.0f-t;
 *p0=u*u*0.5f;
 *p1=t*u+0.5f;
 *p2=t*t*0.5f;
}
void func_0c1da3ae(struct Obj_tu5_03 *a)
{
 float w0,w1,w2,value;
 float *previous,*current,*next;
 long index;
 func_0c1da38c(a->w28/(dat_0c261d94[a->w30*7+7]-dat_0c261d94[a->w30*7]),&w0,&w1,&w2);
 index=a->w30;
 previous=dat_0c261d94+(index-1)*7;
 current=dat_0c261d94+index*7;
 next=current+7;
 value=current[1]*w1;
 value+=previous[1]*w0;
 value+=next[1]*w2;
 a->pos.x=value;
 value=current[2]*w1;
 value+=previous[2]*w0;
 value+=next[2]*w2;
 a->pos.y=value;
 value=current[3]*w1;
 value+=previous[3]*w0;
 value+=next[3]*w2;
 a->pos.z=value;
 value=current[4]*w1;
 value+=previous[4]*w0;
 value+=next[4]*w2;
 a->angles.array[0]=(int)(value*65536.0f/360.0f+0.5f)&65535;
 value=current[5]*w1;
 value+=previous[5]*w0;
 value+=next[5]*w2;
 a->angles.array[1]=(int)(value*65536.0f/360.0f+0.5f)&65535;
 value=current[6]*w1;
 value+=previous[6]*w0;
 value+=next[6]*w2;
 a->angles.array[2]=(int)(value*65536.0f/360.0f+0.5f)&65535;
 a->w28++;
 if(!(dat_0c261d94[a->w30*7+7]-dat_0c261d94[a->w30*7]>a->w28)){
  a->w28=0;
  a->w30++;
  if((unsigned)(a->w30+1)>=34)a->w30=1;
 }
 func_0c1da550(a);
}
void func_0c1da550(struct Obj_tu5_03 *a)
{
 struct Vec3_tu5_03 point,normalized;
 float length;
 func_0c1d8ff8(((int *)dat_0c2d964c->p0)[15],a->l84);
 while(!func_0c1d901e()){
  func_0c1d9100(&point);
  normalized=point;
  length=func_0c1eeef0(&normalized);
  if((point.x < -350.0f || point.x > 350.0f) && point.z < -100.0f){
   point.y += length*func_0c1ec2c0((int)((a->w28*30+(int)length)*65536.0f/360.0f+0.5f)&65535)*0.02f;
  }
  func_0c1d914c(&point);
 }
}
void func_0c1da62c(void)
{
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,5,1))!=0){
  a->b12c=1;
  a->p16=func_0c1da3ae;
  a->l84=((int *)dat_0c2d964c->p0)[14];
  a->lcc=0x080f;
  a->w30=1;
 }
}
