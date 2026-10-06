/* Unverified quadratic spline update: 440/528 linked bytes match retail.
 * Frame-index setup, rotation-pointer registers and constant registers differ. */
#include "objects.h"
extern struct Vec3_tu5_03 dat_0c22ffa8[],dat_0c2301a0[];
extern void func_0c1da38c(float,float *,float *,float *);
void func_0c1c8efc(struct Obj_tu5_03 *a){
 float left,middle,right,fraction;
 struct Vec3_tu5_03 *p0,*p1,*p2,*r0,*r1,*r2;
 int frame,next;
 fraction=(float)a->w30/5.0f;
 func_0c1da38c(fraction,&left,&middle,&right);
 frame=a->w28;next=frame+1;
 p0=&dat_0c22ffa8[frame-1];r0=&dat_0c2301a0[frame-1];
 p1=&dat_0c22ffa8[frame];r1=&dat_0c2301a0[frame];
 p2=&dat_0c22ffa8[next];r2=&dat_0c2301a0[next];
 a->angles.array[0]=(int)((r0->x*left+r1->x*middle+r2->x*right)*65536.0f/360.0f+0.5f)&65535;
 a->angles.scalar.l44=(int)((r0->y*left+r1->y*middle+r2->y*right)*65536.0f/360.0f+0.5f)&65535;
 a->angles.scalar.l48=(int)((r0->z*left+r1->z*middle+r2->z*right)*65536.0f/360.0f+0.5f)&65535;
 a->f104=r0->x*left+r1->x*middle+r2->x*right;
 a->f108=r0->y*left+r1->y*middle+r2->y*right;
 a->f112=r0->z*left+r1->z*middle+r2->z*right;
 a->pos.x=p0->x*left+p1->x*middle+p2->x*right;
 a->pos.y=p0->y*left+p1->y*middle+p2->y*right;
 a->pos.z=p0->z*left+p1->z*middle+p2->z*right;
 a->w30++;a->w30%=5;
 if(!a->w30){if(++a->w28>=41){a->w28=1;a->w30=0;}}
}
