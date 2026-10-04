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
void func_0c0ab180(struct Actor *a,struct ActorSub2a4 *state)
{
 func_0c025900(a,1,7);a->b1f5=2;HORIZONTAL;func_0c02a026(a);
 if(a->w130){if(dat_0c2d9260.f8c-106.666664124f>a->f52)return;}
 else if(a->f52>dat_0c2d9260.f88+106.666664124f)return;
 a->b6++;((struct Actor *)state)->s28=0;a->s28=20;func_0c0344a0(a,3);
}
void func_0c0ab214(struct Actor *a,struct ActorSub2a4 *state)
{
 float edge;
 func_0c025900(a,1,7);((struct Actor *)state)->s28-=2048;a->i72=((struct Actor *)state)->s28;a->b1f5=2;HORIZONTAL;func_0c02a026(a);
 if(a->w130){edge=dat_0c2d9260.f8c;if(edge-40.0f>a->f52)return;a->f52=edge-3.3333333f;}
 else{edge=dat_0c2d9260.f88;if(a->f52>edge+40.0f)return;a->f52=edge+3.3333333f;}
 a->f56+=34.2857132f;a->b6++;a->i72=0;func_0c02a0c4(a,21,28);func_0c0451f2(a);
}
void func_0c0ab30a(struct Actor *a,struct ActorSub2a4 *state)
{
 func_0c025900(a,1,7);a->b1f5=2;VERTICAL;func_0c02a026(a);
 if(func_0c0ab86e(a))return;if(dat_0c2d92f0-137.142853f>a->f56)return;
 a->b6++;((struct Actor *)state)->s28=0;func_0c0344a0(a,3);
}
void func_0c0ab3b0(struct Actor *a,struct ActorSub2a4 *state)
{
 float edge;struct MotionGlobal_0c2d9260 *bounds;
 func_0c025900(a,1,7);((struct Actor *)state)->s28-=2048;a->i72=((struct Actor *)state)->s28;a->b1f5=2;VERTICAL;func_0c02a026(a);
 if(func_0c0ab86e(a))return;bounds=&dat_0c2d9260;edge=*(float *)((char *)bounds+0x90);if(edge-51.42857f>a->f56)return;a->f56=edge+0.0f;
 a->f52=a->w130?bounds->f8c-40.0f:bounds->f88+40.0f;
 a->b6++;a->f92=-a->f92;a->i72=0;func_0c02a0c4(a,21,22);
}
void func_0c0ab472(struct Actor *a,struct ActorSub2a4 *state)
{
 func_0c025900(a,1,7);a->b1f5=2;HORIZONTAL;func_0c02a026(a);if(func_0c0ab86e(a))return;
 if(a->w130){if(a->f52>dat_0c2d9260.f88+106.666664124f)return;}
 else if(dat_0c2d9260.f8c-106.666664124f>a->f52)return;
 a->b6++;((struct Actor *)state)->s28=0;func_0c0344a0(a,3);
}
void func_0c0ab538(struct Actor *a,struct ActorSub2a4 *state)
{
 float edge;int zero;
 func_0c025900(a,1,7);((struct Actor *)state)->s28-=2048;a->i72=((struct Actor *)state)->s28;a->b1f5=2;HORIZONTAL;func_0c02a026(a);if(func_0c0ab86e(a))return;
 if(a->w130){edge=dat_0c2d9260.f88;if(a->f52>edge+40.0f)return;a->f52=edge+3.3333333f;}
 else{edge=dat_0c2d9260.f8c;if(edge-40.0f>a->f52)return;a->f52=edge-3.3333333f;}
 a->b6++;a->f56-=51.42857f;a->f96=-a->f96;zero=(a->b1fd=0);a->i72=zero;func_0c02a0c4(a,21,29);((struct Actor *)state)->s28=zero;
}
void func_0c0ab648(struct Actor *a)
{
 func_0c025900(a,1,7);VERTICAL;func_0c02a026(a);if(func_0c0ab86e(a))return;
 if(!(a->f56>a->f41c+102.85714f))a->b6++;
}
void func_0c0ab6a0(struct Actor *a,struct ActorSub2a4 *state)
{
 func_0c025900(a,1,7);((struct Actor *)state)->s28-=2048;a->i72=((struct Actor *)state)->s28;VERTICAL;func_0c02a026(a);if(func_0c0ab86e(a))return;
 if(a->f56>a->f41c+51.42857f)return;
 a->b1f9=0;a->f56=a->f41c;((struct Actor *)state)->s28=0;a->i72=0;func_0c0344a0(a,3);func_0c025900(a,0,0);func_0c0437b8(a);
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
 if(a->b525){if(--a->s28>=0)goto failure;goto retreat;}
 if(!(a->f56>a->f41c+137.142853f))goto failure;
 if(((struct ActorInputButtons4e0 *)a)->buttons&0x300){
  func_0c025900(a,0,0);a->i72=izero;ZERO_SPEED;
  if(a->b6==5)a->f56-=102.85714f;func_0c0442fa(a);a->b1fc=2;func_0c0438de(a);goto success;
 }
 if(!(((struct ActorInputButtons4e0 *)a)->buttons&0x60))goto failure;
retreat:
 func_0c025900(a,0,0);a->i72=izero;a->b6=9;a->b1d2=1;if(a->f52>dat_0c2d92e8+320.0f)a->b1d2=izero;
 a->w130=(unsigned char)a->b1d2;func_0c02a0c4(a,21,25);ZERO_SPEED;a->f96=-16.07143f;a->f92=a->b1d2?20.8333321f:-20.8333321f;func_0c0346da(a,21);
success:return 1;
failure:return 0;
}
void func_0c0ab9a6(struct Actor *a){if(!a->b6){a->b6++;func_0c02a0c4(a,19,9);return;}if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0aba20(struct Actor *a){if(a->b1f9==2){float floor;func_0c042018(a);floor=a->f41c;if(floor>a->f56)a->f56=a->f41c;}table_0c2445d4[a->b6](a,&a->sub2a4);}
void func_0c0aba60(struct Actor *a)
{
 int zero;
 a->b6++;a->s28=120;func_0c0442fa(a);func_0c048bb0(a,5);func_0c0432ca(a);zero=0;a->b1f9=zero;a->f56=a->f41c;
 a->b1a1=a->b1a3;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;a->b141=zero;func_0c02a0c4(a,21,18);
 a->p20=func_0c151788(a,zero);if(!a->p20)func_0c0437b8(a);
}
void func_0c0abaea(struct Actor *a){if(a->p20->b4>=2){a->b6=3;a->s28=30;func_0c0346da(a,42);return;}func_0c02a026(a);if(--a->s28<=0)a->b6++;}
