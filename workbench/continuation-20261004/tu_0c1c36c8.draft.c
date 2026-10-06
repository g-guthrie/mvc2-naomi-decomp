/* Unverified resource digits and pulsing scale: full396-byte native span, both literal pools required. */
#include "objects.h"
extern signed char dat_0c2f8378,dat_0c2f8392[];
extern short dat_0c2f891c,dat_0c2f8918;
extern int **dat_0c2d9654;
extern struct Vec3_tu5_03 dat_0c25d2ac;
extern struct EffectScale4 dat_0c25d2b8[2];
extern float func_0c1ec2c0(int);
#pragma inline(unit_scale)
static float unit_scale(void){return 1.0f;}
void func_0c1c36c8(struct Obj_tu5_03 *a){
 int digit=dat_0c2f8378;
 if(!a->b32)digit/=10;else digit%=10;
 a->l84=(*dat_0c2d9654)[digit+85];
}
void func_0c1c3706(struct Obj_tu5_03 *a){
 int mode=dat_0c2f8392[a->b32];float half,divisor;
 if(mode>=5)mode=5;
 if(mode>=5)a->f80=a->f84=func_0c1ec2c0(dat_0c2f891c)/16.0f+1.25f;
 else *(struct Vec3_tu5_03 *)&a->f80=dat_0c25d2ac;
 half=0.5f;divisor=unit_scale();divisor+=divisor;
 if(mode>=5){
 a->f120=func_0c1ec2c0(dat_0c2f891c+(int)a->f104)/divisor+half;
 a->f124=func_0c1ec2c0(dat_0c2f891c+(int)a->f108)/divisor+half;
 a->f128=func_0c1ec2c0(dat_0c2f891c+(int)a->f112)/divisor+half;
 }else{
 float weight=func_0c1ec2c0(dat_0c2f8918)/divisor+half;
 struct EffectScale4 *high=&dat_0c25d2b8[0],*low=&dat_0c25d2b8[1];
 a->f120=low->f120+(high->f120-low->f120)*weight;
 a->f124=low->f124+(high->f124-low->f124)*weight;
 a->f128=low->f128+(high->f128-low->f128)*weight;
 }
 if(mode>=5)mode=9;
 a->l84=(*dat_0c2d9654)[mode+96];
}
