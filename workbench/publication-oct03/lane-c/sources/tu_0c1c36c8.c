#include "objects.h"
extern signed char dat_0c2f8378,dat_0c2f8392[];
extern short dat_0c2f8918,dat_0c2f891c;
extern struct ActorGlobalRoot *dat_0c2d9654;
extern float func_0c1ec2c0(int);
extern struct Vec3_tu5_03 dat_0c25d2ac;
extern float dat_0c25d2b8[][4];
void func_0c1c36c8(struct Obj_tu5_03 *a)
{
 int n,value=dat_0c2f8378;
 if(a->b32==0)n=value/10;
 else n=value%10;
 a->l84=((int *)dat_0c2d9654->p0)[n+85];
}
void func_0c1c3706(struct Obj_tu5_03 *a)
{
 int n=dat_0c2f8392[a->b32];
 float half,divisor;
 if(n>=5)n=5;
 if(n>=5){
  a->f80=a->f84=func_0c1ec2c0(dat_0c2f891c)/16.0f+1.25f;
 }else{
  *(struct Vec3_tu5_03 *)&a->f80=dat_0c25d2ac;
 }
 half=0.5f;divisor=2.0f;
 if(n>=5){
  a->f120=func_0c1ec2c0(dat_0c2f891c+(int)a->f104)/divisor+half;
  a->f124=func_0c1ec2c0(dat_0c2f891c+(int)a->f108)/divisor+half;
  a->f128=func_0c1ec2c0(dat_0c2f891c+(int)a->f112)/divisor+half;
 }else{
  float t=func_0c1ec2c0(dat_0c2f8918)/divisor+half;
  float *from=dat_0c25d2b8[0],*to=dat_0c25d2b8[1];
  a->f120=to[1]+(from[1]-to[1])*t;
  a->f124=to[2]+(from[2]-to[2])*t;
  a->f128=to[3]+(from[3]-to[3])*t;
 }
 if(n>=5)n=9;
 a->l84=((int *)dat_0c2d9654->p0)[n+96];
}
