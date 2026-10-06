/* Unverified radial burst family:312/372 bytes equal at correct size. Factory loop and pool exact; constructor stack/remainder and updater lookup differ. */
#include "objects.h"
extern struct ActorGlobalRoot *dat_0c2d9650;
extern int dat_0c260b3c,*dat_0c260b2c;
extern float dat_0c260b58[];
extern struct Vec3_tu5_03 dat_0c260b64[];
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *);
extern float func_0c1ec2c0(int),func_0c1ebd40(int);
extern int func_0c1ec190(void);
extern void func_0c1ce52c(struct Obj_tu5_03 *);
void func_0c1ce598(struct Vec3_tu5_03 *position,int variant,int direction){
 struct Obj_tu5_03 *a;int angle,random;
 if((a=func_0c0374da(0,7,1))){
 a->b12c=1;a->p16=func_0c1ce52c;a->lcc=0x109;a->pos=*position;
 a->f92=dat_0c260b58[variant]*func_0c1ec2c0(angle=(int)((direction*60)*65536.0f/360.0f+0.5f)&65535);
 a->f100=dat_0c260b58[variant]*func_0c1ebd40(angle);
 random=func_0c1ec190();
 if(random>=0)random&=16383;else{random=~random;random=(int)((unsigned int)random+1u);random&=16383;random=~random;random++;}
 a->angles.array[2]=random;
 *(struct Vec3_tu5_03 *)&a->f80=dat_0c260b64[variant];
 }
}
void func_0c1ce660(struct Vec3_tu5_03 *position,char variant){
 int i;
 if(variant<=2){for(i=0;i<6;i++)func_0c1ce598(position,variant,i);}
}
void func_0c1ce692(struct Obj_tu5_03 *a){
 a->l84=dat_0c2d9650->p0->entries[dat_0c260b2c[a->w28]].value;
 if(++a->w28>=dat_0c260b3c)func_0c037688(a);
}
