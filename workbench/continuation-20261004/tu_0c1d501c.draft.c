/* Unverified nine-function fade-effect family:944 linked bytes against968 native. State, UV and staggered construction are translated; layout and remainder code differ. */
#include "objects.h"
#define DELAY(a) (*(int *)&(a)->pad8[0])
#define VARIANT(a) (*(int *)&(a)->pad8[4])
extern void (*table_0c261690[])(struct Actor *,struct Obj_tu5_03 *);
extern float dat_0c232210[2][8];
extern short dat_0c232250[2][8];
extern struct ActorVec2 dat_0c232190[];
extern struct ActorGlobalRoot *dat_0c2d9650;
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c025fc2(unsigned *,unsigned),func_0c037688(struct Obj_tu5_03 *);
extern unsigned int func_0c02849a(void);
extern int func_0c1ec190(void),func_0c1d8ff8(int,int),func_0c1d901e(void),func_0c1d912a(float *,float *),func_0c1d917e(float *,float *);
void func_0c1d50be(struct Actor *,struct Obj_tu5_03 *),func_0c1d5132(struct Obj_tu5_03 *);
void func_0c1d501c(struct Obj_tu5_03 *a){table_0c261690[a->b4]((struct Actor *)a->p24,a);}
void func_0c1d5032(struct Actor *owner,struct Obj_tu5_03 *a){
 if(owner->pad22a[0]!=1)DELAY(a)=0;
 if(DELAY(a)--==0){a->b4=1;func_0c025fc2((unsigned *)a,(unsigned)func_0c1d5132);}
}
void func_0c1d5066(struct Actor *owner,struct Obj_tu5_03 *a){
 short *timers=dat_0c232250[VARIANT(a)];float *alpha=dat_0c232210[VARIANT(a)];
 a->b12c=1;a->w30=timers[a->w28];a->f116=alpha[a->w28];a->b4=2;
 if(a->b7){a->pos.x=owner->f52+a->f92;a->pos.y=owner->f56+a->f96;}
 func_0c1d50be(owner,a);
}
void func_0c1d50be(struct Actor *owner,struct Obj_tu5_03 *a){
 if(a->b7){a->b7=0;a->pos.x=owner->f52+a->f92;a->pos.y=owner->f56+a->f96;}
 if(!--a->w30){a->b4=1;if(++a->w28>=8){a->b4=3;a->w28=7;}}
}
void func_0c1d510a(struct Actor *owner,struct Obj_tu5_03 *a){func_0c025fc2((unsigned *)a,0);a->b12c=0;a->b4=4;}
void func_0c1d5128(struct Actor *owner,struct Obj_tu5_03 *a){func_0c037688(a);}
void func_0c1d5132(struct Obj_tu5_03 *a){
 struct ActorVec2 *offset=&dat_0c232190[a->w28];struct ActorGlobalRoot *resources=dat_0c2d9650;
 float u,v,*offsetY;
 if(VARIANT(a))func_0c1d8ff8(((int *)resources->p0)[102],a->l84);
 else func_0c1d8ff8(((int *)resources->p0)[103],a->l84);
 offsetY=&offset->y;
 while(!func_0c1d901e()){
 func_0c1d912a(&u,&v);u+=offset->x;v-=*offsetY;func_0c1d917e(&u,&v);
 }
}
void func_0c1d51e6(struct Actor *owner){
 struct Obj_tu5_03 *a;unsigned char i;int random,width,height;
 for(i=0;i<5;i++){
 if(!(a=func_0c0374da(0,7,1)))break;
 a->b12c=0;a->p16=func_0c1d501c;a->lcc=37;a->b35=i;a->f80=1.0f;a->f84=1.0f;
 DELAY(a)=a->b35*8;a->p24=(struct Obj_tu5_03 *)owner;
 a->angles.scalar.l44=owner->w130?0:32768;
 VARIANT(a)=func_0c02849a();VARIANT(a)%=2;
 if(VARIANT(a))a->l84=((int *)dat_0c2d9650->p0)[101];else a->l84=((int *)dat_0c2d9650->p0)[99];
 random=func_0c1ec190();width=(int)(owner->b13e*owner->f80*1.66666663f);
 a->f92+=random%2 ? random%width : -(random%width);
 random=func_0c1ec190();height=(int)(owner->b13c*owner->f84*2.1428571f);
 a->f96+=random%height;
 a->pos.x=owner->f52+a->f92;a->pos.y=owner->f56+a->f96;
 a->angles.scalar.l44=a->w130?0:32768;a->b7=4;
 }
}
void func_0c1d53ce(struct Actor *owner){func_0c1d51e6(owner);}
