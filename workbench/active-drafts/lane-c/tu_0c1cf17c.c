#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(struct Obj_tu5_03 *,int,int);
extern void func_0c037688(struct Obj_tu5_03 *),func_0c03462c(struct Obj_tu5_03 *,int),func_0c026932(void);
extern void func_0c1d9314(int,float,float,float,float);
extern float func_0c1ec2c0(int),func_0c1ebd40(int);
extern struct ActorGlobalRoot *dat_0c2d964c,*dat_0c2d9650;
extern struct Vec3_tu5_03 dat_0c260c68,dat_0c260c74;
extern int dat_0c260cac[];
extern struct Vec3_tu5_03 dat_0c260cc4[],dat_0c260d0c[];
extern short dat_0c260d30[][2];
extern void (*dat_0c260c80[])(struct Obj_tu5_03 *),(*dat_0c260c90[])(struct Obj_tu5_03 *),(*dat_0c260d3c[])(struct Obj_tu5_03 *);
void func_0c1cf21e(struct Actor *,int,unsigned char,unsigned char);
void func_0c1cf258(struct Obj_tu5_03 *),func_0c1cf5d6(struct Obj_tu5_03 *),func_0c1cfbe0(struct Obj_tu5_03 *);
void func_0c1cf17c(struct Actor *owner){func_0c1cf21e(owner,7,0,0);func_0c1cf21e(owner,7,1,0);func_0c1cf21e(owner,6,0,1);func_0c1cf21e(owner,6,1,1);}
void func_0c1cf1ac(struct Actor *owner){func_0c1cf21e(owner,5,3,0);func_0c1cf21e(owner,7,4,0);func_0c1cf21e(owner,7,4,1);func_0c1cf21e(owner,7,4,2);func_0c1cf21e(owner,7,4,3);func_0c1cf21e(owner,7,4,4);func_0c1cf21e(owner,7,4,5);}
void func_0c1cf1fa(struct Actor *owner){func_0c1cf21e(owner,7,5,0);func_0c1cf21e(owner,7,5,1);func_0c1cf21e(owner,7,5,2);}
void func_0c1cf21e(struct Actor *owner,int kind,unsigned char sequence,unsigned char variant){
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,kind,1))!=0){a->p16=func_0c1cf258;a->p24=(struct Obj_tu5_03 *)owner;a->b32=sequence;a->b33=variant;}
}
void func_0c1cf258(struct Obj_tu5_03 *a){dat_0c260c80[a->b4](a);}
void func_0c1cf26a(struct Obj_tu5_03 *a){a->b4++;dat_0c260c90[a->b32](a);func_0c1cf5d6(a);}
void func_0c1cf28e(struct Obj_tu5_03 *a){
 a->lcc=45;a->l84=(int)((void **)dat_0c2d964c->p0)[90];a->f116=1.0f;
 if(((struct Actor *)a)->b3==7){a->lcc=a->lcc|16;*(struct Vec3_tu5_03 *)&a->f80=dat_0c260c68;}
}
void func_0c1cf2f4(struct Obj_tu5_03 *a){
 struct Obj_tu5_03 *child;
 a->lcc=0x40d;a->l84=(int)((void **)dat_0c2d964c->p0)[88];a->f120=1.0f;a->f124=0.0f;a->f128=0.0f;
 if(((struct Actor *)a)->b3==7){a->lcc=a->lcc|16;*(struct Vec3_tu5_03 *)&a->f80=dat_0c260c68;}
 if((child=func_0c0374da(a,(signed char)((struct Actor *)a)->b3,2))!=0){child->p16=func_0c1cf258;child->p24=a->p24;child->b32=a->b32+1;child->b33=a->b33;}
}
void func_0c1cf36c(struct Obj_tu5_03 *a){
 struct Obj_tu5_03 *parent=(struct Obj_tu5_03 *)((struct Actor *)a)->p8;
 a->lcc=parent->lcc;a->l84=(int)((void **)dat_0c2d964c->p0)[89];
 *(struct EffectScale4 *)&a->f116=*(struct EffectScale4 *)&parent->f116;
 *(struct Vec3_tu5_03 *)&a->f80=*(struct Vec3_tu5_03 *)&parent->f80;
}
void func_0c1cf3a6(struct Obj_tu5_03 *a){struct ActorGlobalRoot **root=&dat_0c2d964c;a->lcc=61;a->l84=(int)((void **)(*root)->p0)[90];a->f116=1.0f;*(struct Vec3_tu5_03 *)&a->f80=dat_0c260c74;a->w30=210;func_0c03462c(a,16);}
void func_0c1cf408(struct Obj_tu5_03 *a){
 a->b12c=1;a->lcc=0x41f;a->l84=(int)((void **)dat_0c2d964c->p0)[88+(a->b33&1)];a->f120=1.0f;a->f124=0.0f;a->f128=0.0f;
 *(struct Vec3_tu5_03 *)&a->f80=dat_0c260c68;
 a->angles.array[0]=a->angles.array[1]=a->angles.array[2]=0;((union EffectMotionStep *)&a->f92)->integer=dat_0c260cac[a->b33];a->w28=0;
 a->f104=dat_0c260cc4[a->b33].x*0.1000000015f;a->f108=dat_0c260cc4[a->b33].y*0.1000000015f;a->f112=dat_0c260cc4[a->b33].z*0.1000000015f;
}
void func_0c1cf4c6(struct Obj_tu5_03 *a){
 a->lcc=0x413;a->l84=(int)((void **)dat_0c2d9650->p0)[183];a->f116=1.0f;a->f128=1.0f;a->f124=1.0f;a->f120=1.0f;
 *(struct Vec3_tu5_03 *)&a->f80=dat_0c260c74;a->angles.scalar.first=0x1555;
 if(a->b33==2||a->b33==5)a->angles.scalar.first+=0x4000;
 *(struct Vec3_tu5_03 *)&a->f92=dat_0c260d0c[a->b33];a->w28=dat_0c260d30[a->b33][0];a->w30=dat_0c260d30[a->b33][1];
}
void func_0c1cf598(struct Obj_tu5_03 *a){a->b12c=1;a->lcc=0x411;a->l84=(int)((void **)dat_0c2d9650->p0)[134];a->f128=1.0f;a->f124=1.0f;a->f120=1.0f;*(struct Vec3_tu5_03 *)&a->f80=dat_0c260c74;a->w28=0;}
void func_0c1cf5d6(struct Obj_tu5_03 *a){dat_0c260d3c[a->b32](a);}
void func_0c1cf5ea(struct Obj_tu5_03 *a){
 struct Actor *owner=(struct Actor *)a->p24;
 union ActorSubEffectState *state=(union ActorSubEffectState *)&owner->sub2a4;
 float x,weight;
 if((signed char)(a->b12c=state->bytes[a->b33])==0)return;
 a->f116=state->parameter.f4;a->pos=*(struct Vec3_tu5_03 *)&owner->f52;
 x=owner->f80*40.0f;if(!owner->w130)x=-x;a->pos.x+=x;a->pos.y+=owner->f84*205.7142792f;
 if(!owner->b1a0){a->w28++;a->angles.scalar.l44=(int)((float)((a->w28+a->w30)*2)*65536.0f/360.0f+0.5f)&65535;a->angles.scalar.l48=(int)((float)((a->w28+a->w30)*3)*65536.0f/360.0f+0.5f)&65535;}
 weight=((struct Obj_tu5_03 *)owner)->f128;func_0c1d9314(a->l84,owner->f116,((struct Obj_tu5_03 *)owner)->f120,weight,weight);
}
void func_0c1cf718(struct Obj_tu5_03 *a){
 struct Actor *owner=(struct Actor *)a->p24;
 union ActorSubEffectState *state=(union ActorSubEffectState *)&owner->sub2a4;
 float x,t,v;
 if((signed char)(a->b12c=state->bytes[a->b33])==0)return;
 a->pos=*(struct Vec3_tu5_03 *)&owner->f52;x=owner->f80*40.0f;if(!owner->w130)x=-x;a->pos.x+=x;a->pos.y+=owner->f84*205.7142792f;
 if(!owner->b1a0){
  a->w28++;a->angles.scalar.l44=(int)((float)((a->w28+a->w30)*2)*65536.0f/360.0f+0.5f)&65535;a->angles.scalar.l48=(int)((float)((a->w28+a->w30)*3)*65536.0f/360.0f+0.5f)&65535;
  t=(float)(a->w28%360)*65536.0f/360.0f;v=func_0c1ec2c0((int)(t+0.5f)&65535);a->f120=(v*0.5f+0.5f)*state->parameter.f4;
  t=(float)(a->w28%360)*65536.0f/360.0f;v=func_0c1ebd40((int)(t+0.5f)&65535);x=(v*0.5f+0.5f)*state->parameter.f4;
 }else{a->f120=1.0f*state->parameter.f4;x=0.0f;}
 a->f124=x;
}
void func_0c1cf8a0(struct Obj_tu5_03 *a){
 struct Obj_tu5_03 *parent=(struct Obj_tu5_03 *)((struct Actor *)a)->p8;
 a->b12c=0;if((a->b4=parent->b4)>=2)return;if((signed char)(a->b12c=parent->b12c)==0)return;
 a->pos=parent->pos;
 *(struct EffectScale4 *)&a->f116=*(struct EffectScale4 *)&parent->f116;
 *(struct Vec3_tu5_03 *)&a->f80=*(struct Vec3_tu5_03 *)&parent->f80;
 a->angles.array[0]=parent->angles.array[0];a->angles.array[1]=parent->angles.array[1];a->angles.array[2]=parent->angles.array[2];
}
void func_0c1cf908(struct Obj_tu5_03 *a){
 a->b12c=1;func_0c1cfbe0(a);a->w28++;
 a->angles.scalar.l44=(int)((float)(a->w28*2)*65536.0f/360.0f+0.5f)&65535;
 a->angles.scalar.l48=(int)((float)(a->w28*3)*65536.0f/360.0f+0.5f)&65535;
 if(!a->b5){if(--a->w30<=0)a->b5++;}else{a->f116-=0.0333333351f;if(a->f116<0.0f){a->b4++;a->b12c=0;}}
}
void func_0c1cf9c0(struct Obj_tu5_03 *a){
 func_0c1cfbe0(a);a->angles.scalar.first+=((union EffectMotionStep *)&a->f92)->integer;a->angles.scalar.l44+=((union EffectMotionStep *)&a->f92)->integer;a->angles.scalar.l48+=((union EffectMotionStep *)&a->f92)->integer;a->w28++;
 if(!a->b5&&(float)a->w28==100.0f)a->b5=1;
 if(!a->b6&&(float)a->w28==160.0f)a->b6=1;
 if(a->b5){a->f80+=a->f104;a->f84+=a->f108;a->f88+=a->f112;}
 if(a->b6){a->f120-=0.050000001f;if(a->f120<=0.0f){a->b4++;a->b12c=0;if(!a->b33){func_0c026932();func_0c1cf1fa((struct Actor *)a->p24);func_0c03462c(a,17);}}}
}
void func_0c1cfac4(struct Obj_tu5_03 *a){
 if(!a->b5){if(--a->w28>0)return;a->b5++;a->b12c=1;}
 func_0c1cfbe0(a);a->f80+=a->f92;a->f84+=a->f96;a->f88+=a->f100;
 if(!a->b6){if(--a->w30<=0)a->b6=1;}
 if(a->b6){a->f120-=0.1000000015f;a->f124-=0.1000000015f;a->f128-=0.1000000015f;if(a->f128<0.0f){a->b4++;a->b12c=0;}}
}
void func_0c1cfb66(struct Obj_tu5_03 *a){
 func_0c1cfbe0(a);a->f80+=0.125f;a->f84+=0.125f;
 if(!a->b5){if(--a->w28<0)a->b5++;}else{a->f120-=0.050000001f;a->f124-=0.050000001f;a->f128-=0.050000001f;if(a->f128<0.0f){a->b4++;a->b12c=0;}}
}
void func_0c1cfbe0(struct Obj_tu5_03 *a){
 struct Actor *owner=(struct Actor *)a->p24;float x;
 a->pos=*(struct Vec3_tu5_03 *)&owner->f52;x=owner->f80*40.0f;if(!owner->w130)x=-x;a->pos.x+=x;a->pos.y+=owner->f84*205.7142792f;
}
void func_0c1cfc26(struct Obj_tu5_03 *a){a->b4++;a->b12c=0;}
void func_0c1cfc34(struct Obj_tu5_03 *a){func_0c037688(a);}
