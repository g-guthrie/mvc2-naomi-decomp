/* Complete 0x0c17323c..0x0c173868 translation. Constructor, dispatcher, effect helper, advance and cleanup match; initializer and update differ in scheduling and temporary registers. */
#include "objects.h"
struct Bytes4 {unsigned char data[4];};
struct Shorts3 {short data[3];};
struct Floats3 {float data[3];};
struct Bytes16 {unsigned char data[16];};
struct Bytes8 {unsigned char data[8];};
#define A(a) ((struct Actor *)(a))
#define MODE(p) (*(int *)&A(p)->pad10b[0x2c0-0x2a4-sizeof(struct ActorSub2a4)])
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void (*dat_0c252a60[])(struct LinkedActor *);
extern unsigned char dat_0c22f7d4[4],dat_0c22f7fa[8];
extern unsigned char dat_0c22f7d8[16],dat_0c22f802[16];
extern float dat_0c22f7e8[3],dat_0c252a70[][2];
extern short dat_0c22f7f4[3];
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c02a0c4(struct LinkedActor *,int,int),func_0c037d0c(struct LinkedActor *),func_0c037688(struct LinkedActor *),func_0c02894c(struct LinkedActor *,unsigned short),func_0c1cea66(struct LinkedActor *,float *,int);
extern int func_0c028642(struct LinkedActor *);
extern char func_0c02a026(struct LinkedActor *);
void func_0c173298(struct LinkedActor *),func_0c1737cc(struct LinkedActor *),func_0c17383c(struct LinkedActor *);
struct LinkedActor *func_0c17323c(struct LinkedActor *p,unsigned char mode)
{
 struct LinkedActor *a;float dx;
 if((a=func_0c0374da(0,1,0))){a->p16=func_0c173298;a->p24=p;a->b32=mode;a->w38=0x2f00;dx=26.666666031f;if(A(p)->w130)dx=-26.666666031f;a->f52=p->f52+dx;a->f56=137.142853f+p->f56;}
 return a;
}
void func_0c173298(struct LinkedActor *a){*(int *)&A(a->p24)->pad10c[0x2f0-0x2cc]=2;dat_0c252a60[a->b4](a);}
void func_0c1732d4(struct LinkedActor *a)
{
 struct {unsigned char counts[8];short timers[3];short pad;float speeds[3];unsigned char attacks[16],types[4];} local;
 unsigned char *types=local.types;
 struct LinkedActor *p;int timer;unsigned short selection;float speed,scale;
 *(struct Bytes4 *)types=*(struct Bytes4 *)dat_0c22f7d4;
 *(struct Bytes16 *)local.attacks=*(struct Bytes16 *)dat_0c22f7d8;
 /* The arrays are local copies of the retail configuration tables. */
 *(struct Floats3 *)local.speeds=*(struct Floats3 *)dat_0c22f7e8;
 *(struct Shorts3 *)local.timers=*(struct Shorts3 *)dat_0c22f7f4;
 *(struct Bytes8 *)local.counts=*(struct Bytes8 *)dat_0c22f7fa;
 a->b4++;a->sdc.b12c=1;((struct MeActor *)a)->blk_dc.b13c=32;((struct MeActor *)a)->blk_dc.b13d=40;((struct MeActor *)a)->blk_dc.b13e=64;((struct MeActor *)a)->blk_dc.b13f=64;
 p=a->p24;a->sdc=p->sdc;a->sdc.b12c=1;a->b2=p->b2;a->b1=p->b1;a->v80.x=p->v80.x;a->v80.y=p->v80.y;a->b1a3=p->b1a3;a->b1a4=p->b1a4;a->b48=p->b48;a->v80=p->v80;a->b36=8;A(a)->b7=3;
 timer=local.timers[a->b1a3];if(a->b32)timer=64;if(MODE(p)==2)timer*=4;a->s28=timer;A(a)->s30=100;A(a)->b35=0;
 selection=a->b32;if(selection)selection=4;selection+=MODE(p);a->b33=local.counts[selection];
 speed=local.speeds[a->b1a3];if(MODE(p)==1)speed*=1.5f;scale=0.75f;if(MODE(p)==3)speed/=scale;
 if(a->b32){speed=-10.0f;if(MODE(p)==1)speed=-20.0f;if(MODE(p)==3)speed/=scale;}
 if(A(a)->w130)speed=-speed;A(a)->f92=speed;A(a)->f104=0.0f;
 if(!a->b32){a->v80.y=scale;a->v80.x=scale;}
 a->pad11[0]=68;a->pad11[1]=68;A(a)->b34=types[a->b32];A(a)->b1a1=local.attacks[a->b32*4+MODE(p)];
 A(a)->w1ac=0;A(a)->b19e=0;A(a)->p1c4=0;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,21,2);
}
void func_0c1734ea(struct LinkedActor *a)
{
 unsigned char attacks[16];struct LinkedActor *p=a->p24;float zero;
 *(struct Bytes16 *)attacks=*(struct Bytes16 *)dat_0c22f802;
 if(a->b5)goto ending;
 goto lifetime;lifetime:if(!func_0c028642(a)){func_0c17383c(a);return;}
 if(A(a)->b19f||a->f56<A(p)->f41c){float vx=3.3333333f,ax=-0.00651041651145f;if(A(a)->w130){vx=-3.3333333f;ax=0.00651041651145f;}A(a)->f92=vx;A(a)->f96=-6.428571224213f;A(a)->f104=ax;A(a)->f108=-0.2678571343422f;A(a)->b6=1;goto advance;}
 zero=0.0f;if(--a->s28==0){func_0c1737cc(a);goto stop;}
 if(A(a)->b1a0){if((signed char)(A(a)->b1a0-=2)>0)return;A(a)->b1a0=0;func_0c1737cc(a);if((unsigned char)--a->b33==0)goto stop;A(a)->b1a1=(attacks+a->b32*4)[MODE(p)];A(a)->w1ac=0;A(a)->b19e=0;A(a)->p1c4=0;dat_0c2f83f8->arr[a->b2]++;func_0c02a026(a);if(!a->b32)goto draw;return;}
 goto hit_check;hit_check:if(A(a)->b19e){A(a)->b19e=0;func_0c1737cc(a);if((unsigned char)--a->b33==0)goto stop;}
 goto controls;
 stop:A(a)->f92=zero;A(a)->f96=zero;A(a)->f104=zero;A(a)->f108=zero;
 advance:a->b5++;func_0c02a0c4(a,21,3);return;
 controls:
 if(a->b32){unsigned short amount;A(a)->b34--;if(A(a)->w130)A(a)->b34+=2;A(a)->b34&=31;if(--A(a)->b7==0){A(a)->b7=3;amount=(unsigned short)(A(a)->s30+100);if(amount>1000)amount=1000;A(a)->s30=amount;}func_0c02894c(a,(unsigned short)A(a)->s30);}
 if(!A(p)->b525){float dy=zero;if(A(p)->w34a&0x2000)dy=3.75f;if(A(p)->w34a&0x1000)dy=-3.75f;a->f56+=dy;}
 a->f52+=A(a)->f92;A(a)->f92+=A(a)->f104;func_0c02a026(a);draw:func_0c037d0c(a);return;
 ending:if(A(a)->b6)a->sdc.b12c^=1;a->f52+=A(a)->f92;A(a)->f92+=A(a)->f104;a->f56+=A(a)->f96;A(a)->f96+=A(a)->f108;if(func_0c02a026(a)<0)a->b4++;
}
void func_0c1737cc(struct LinkedActor *a)
{
 struct LinkedActorVec3 offset;if(!A(a)->b19e)return;if(!(A(a)->b19e&17)){offset.x=dat_0c252a70[A(a)->b35][0]*1.66666663f;offset.y=dat_0c252a70[A(a)->b35][1]*2.1428571f;func_0c1cea66(a,(float *)&offset,(unsigned char)A(a)->b35+++9);A(a)->b35&=7;}
}
void func_0c17383c(struct LinkedActor *a){a->b4++;a->sdc.b12c=0;}
void func_0c17384a(struct LinkedActor *a){func_0c037688(a);}
