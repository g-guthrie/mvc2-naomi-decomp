/* Unverified radial animation/movement family:604 linked bytes against596 native. Signed remainder lowering and resource lookup scheduling differ. */
#include "objects.h"
extern struct ActorGlobalRoot *dat_0c2d9650;
extern int dat_0c260b3c,*dat_0c260b2c;
extern float dat_0c260b58[];
extern struct Vec3_tu5_03 dat_0c260b64[];
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *);
extern float func_0c1ec2c0(int),func_0c1ebd40(int);
extern int func_0c1ec190(void);
void func_0c1ce344(struct Obj_tu5_03 *a){
 if((++a->w30>=0 ? a->w30&3 : (~((~a->w30+1)&3)+1))==0){
 if(++a->w28>=dat_0c260b3c){func_0c037688(a);return;}
 a->l84=dat_0c2d9650->p0->entries[dat_0c260b2c[a->w28]].value;
 }
 a->pos.x+=a->f92;a->pos.z+=a->f100;
}
void func_0c1ce3ae(struct Vec3_tu5_03 *position,int variant,int direction){
 struct Obj_tu5_03 *a;int angle,random;
 if((a=func_0c0374da(0,5,1))){
 a->b12c=1;a->p16=func_0c1ce344;a->lcc=0x119;a->pos=*position;
 a->f92=dat_0c260b58[variant]*func_0c1ec2c0(angle=(int)((direction*60)*65536.0f/360.0f+0.5f)&65535);
 a->f100=dat_0c260b58[variant]*func_0c1ebd40(angle);
 random=func_0c1ec190();
 if(random>=0)random&=16383;else{random=~random;random=(int)((unsigned int)random+1u);random&=16383;random=~random;random++;}
 a->angles.array[2]=random;
 *(struct Vec3_tu5_03 *)&a->f80=dat_0c260b64[variant];
 a->f80*=50.0f;a->f84*=50.0f;a->f88*=1.0f;
 a->l84=dat_0c2d9650->p0->entries[dat_0c260b2c[a->w28]].value;a->w30=0;
 }
}
void func_0c1ce4fa(struct Vec3_tu5_03 *position,char variant){
 int i;
 if(variant<=2){for(i=0;i<6;i++)func_0c1ce3ae(position,variant,i);}
}
void func_0c1ce52c(struct Obj_tu5_03 *a){
 a->l84=dat_0c2d9650->p0->entries[dat_0c260b2c[a->w28]].value;
 a->pos.x+=a->f92;a->pos.z+=a->f100;
 if(++a->w28>=dat_0c260b3c)func_0c037688(a);
}
