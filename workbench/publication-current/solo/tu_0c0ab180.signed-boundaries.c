#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c025900(struct Actor *,char,char),func_0c0344a0(struct Actor *,int),func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c0451f2(struct Actor *),func_0c043324(struct Actor *),func_0c0437b8(struct Actor *),func_0c0442fa(struct Actor *),func_0c0438de(struct Actor *),func_0c042018(struct Actor *),func_0c048bb0(struct Actor *,int),func_0c0432ca(struct Actor *);
extern struct Actor *func_0c151788(struct Actor *,unsigned char);
extern struct MotionGlobal_0c2d9260 dat_0c2d9260;
extern float dat_0c2d92f0,dat_0c2d92e8;
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c2445d4[])(struct Actor *,struct ActorSub2a4 *);
unsigned char func_0c0ab86e(struct Actor *);
#define HORIZONTAL a->f52+=a->f92;a->f92+=a->f104
#define VERTICAL a->f56+=a->f96;a->f96+=a->f108
#define MOTION HORIZONTAL;VERTICAL
#define ZERO_SPEED a->f92=zero;a->f96=zero;a->f104=zero;a->f108=zero
void func_0c0ab180(struct Actor *a,struct ActorSub2a4Extended *state)
{
 func_0c025900(a,1,7);a->b1f5=2;HORIZONTAL;func_0c02a026(a);
 if(a->w130){if(dat_0c2d9260.f8c+-106.666664124f>a->f52)return;}
 else if(a->f52>dat_0c2d9260.f88+106.666664124f)return;
 a->b6++;*(short *)((char *)state+28)=0;a->s28=20;func_0c0344a0(a,3);
}
void func_0c0ab214(struct Actor *a,struct ActorSub2a4Extended *state)
{
 float edge;
 func_0c025900(a,1,7);*(short *)((char *)state+28)-=2048;a->i72=*(short *)((char *)state+28);a->b1f5=2;HORIZONTAL;func_0c02a026(a);
 if(a->w130){edge=dat_0c2d9260.f8c;if(edge+-40.0f>a->f52)return;a->f52=edge+-3.33333325f;}
 else{edge=dat_0c2d9260.f88;if(a->f52>edge+40.0f)return;a->f52=edge+3.33333325f;}
 a->f56+=34.2857132f;a->b6++;a->i72=0;func_0c02a0c4(a,21,28);func_0c0451f2(a);
}
void func_0c0ab30a(struct Actor *a,struct ActorSub2a4Extended *state)
{
 func_0c025900(a,1,7);a->b1f5=2;VERTICAL;func_0c02a026(a);
 if(func_0c0ab86e(a))return;if(dat_0c2d92f0+-137.142853f>a->f56)return;
 a->b6++;*(short *)((char *)state+28)=0;func_0c0344a0(a,3);
}
void func_0c0ab3b0(struct Actor *a,struct ActorSub2a4Extended *state)
{
 float edge;
 func_0c025900(a,1,7);*(short *)((char *)state+28)-=2048;a->i72=*(short *)((char *)state+28);a->b1f5=2;VERTICAL;func_0c02a026(a);
 if(func_0c0ab86e(a))return;edge=*(float *)((char *)&dat_0c2d9260+0x90);if(edge+-51.42857f>a->f56)return;a->f56=edge+0.0f;
 a->f52=a->w130?dat_0c2d9260.f8c+-40.0f:dat_0c2d9260.f88+40.0f;
 a->b6++;a->f92=-a->f92;a->i72=0;func_0c02a0c4(a,21,22);
}
void func_0c0ab472(struct Actor *a,struct ActorSub2a4Extended *state)
{
 func_0c025900(a,1,7);a->b1f5=2;HORIZONTAL;func_0c02a026(a);if(func_0c0ab86e(a))return;
 if(a->w130){if(a->f52>dat_0c2d9260.f88+106.666664124f)return;}
 else if(dat_0c2d9260.f8c+-106.666664124f>a->f52)return;
 a->b6++;*(short *)((char *)state+28)=0;func_0c0344a0(a,3);
}
void func_0c0ab538(struct Actor *a,struct ActorSub2a4Extended *state)
{
 float edge;int zero;
 func_0c025900(a,1,7);*(short *)((char *)state+28)-=2048;a->i72=*(short *)((char *)state+28);a->b1f5=2;HORIZONTAL;func_0c02a026(a);if(func_0c0ab86e(a))return;
 if(a->w130){edge=dat_0c2d9260.f88;if(a->f52>edge+40.0f)return;a->f52=edge+3.33333325f;}
 else{edge=dat_0c2d9260.f8c;if(edge+-40.0f>a->f52)return;a->f52=edge+-3.33333325f;}
 zero=0;a->b6++;a->f56-=51.42857f;a->f96=-a->f96;a->b1fd=zero;a->i72=zero;func_0c02a0c4(a,21,29);*(short *)((char *)state+28)=zero;
}
void func_0c0ab648(struct Actor *a)
{
 func_0c025900(a,1,7);VERTICAL;func_0c02a026(a);if(func_0c0ab86e(a))return;
 if(!(a->f56>a->f41c+102.85714f))a->b6++;
}
void func_0c0ab6a0(struct Actor *a,struct ActorSub2a4Extended *state)
{
 func_0c025900(a,1,7);*(short *)((char *)state+28)-=2048;a->i72=*(short *)((char *)state+28);VERTICAL;func_0c02a026(a);if(func_0c0ab86e(a))return;
 if(a->f56>a->f41c+51.42857f)return;
 a->b1f9=0;a->f56=a->f41c;*(short *)((char *)state+28)=0;a->i72=0;func_0c0344a0(a,3);func_0c025900(a,0,0);func_0c0437b8(a);
}
void func_0c0ab75c(struct Actor *a)
{
 MOTION;if(func_0c02a026(a)<0)a->b6++;
 if(!(a->f56>a->f41c)){a->f56=a->f41c;a->b1f9=0;func_0c043324(a);a->f92=0;a->f96=0;a->f104=0;a->f108=0;func_0c0437b8(a);}
}
void func_0c0ab7ee(struct Actor *a)
{
 MOTION;if(!(a->f56>a->f41c)){a->f56=a->f41c;a->b1f9=0;func_0c043324(a);a->f92=0;a->f96=0;a->f104=0;a->f108=0;func_0c0437b8(a);}
}
unsigned char func_0c0ab86e(struct Actor *a)
{
 int izero=0;float zero=0;
 if(a->b525){if(--a->s28>=0)return 0;goto retreat;}
 if(!(a->f56>a->f41c+137.142853f))return 0;
 if(*(unsigned short *)((char *)a+0x4e0)&0x300){
  func_0c025900(a,0,0);a->i72=izero;ZERO_SPEED;
  if(a->b6==5)a->f56-=102.85714f;func_0c0442fa(a);a->b1fc=2;func_0c0438de(a);return 1;
 }
 if(!(*(unsigned short *)((char *)a+0x4e0)&0x60))return 0;
retreat:
 func_0c025900(a,0,0);a->i72=izero;a->b6=9;a->b1d2=1;if(a->f52>dat_0c2d92e8+320.0f)a->b1d2=izero;
 a->w130=(unsigned char)a->b1d2;func_0c02a0c4(a,21,25);ZERO_SPEED;a->f96=-16.07143f;a->f92=a->b1d2?20.8333321f:-20.8333321f;func_0c0346da(a,21);return 1;
}
void func_0c0ab9a6(struct Actor *a){if(!a->b6){a->b6++;func_0c02a0c4(a,19,9);return;}if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0aba20(struct Actor *a){if(a->b1f9==2){func_0c042018(a);if(a->f41c>a->f56)a->f56=a->f41c;}table_0c2445d4[a->b6](a,&a->sub2a4);}
void func_0c0aba60(struct Actor *a)
{
 int zero;
 a->b6++;a->s28=120;func_0c0442fa(a);func_0c048bb0(a,5);func_0c0432ca(a);zero=0;a->b1f9=zero;a->f56=a->f41c;
 a->b1a1=a->b1a3;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;a->b141=zero;func_0c02a0c4(a,21,18);
 a->p20=func_0c151788(a,zero);if(!a->p20)func_0c0437b8(a);
}
void func_0c0abaea(struct Actor *a){if(a->p20->b4>=2){a->b6=3;a->s28=30;func_0c0346da(a,42);return;}func_0c02a026(a);if(--a->s28<=0)a->b6++;}
