#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern int func_0c0447bc(struct Actor *),func_0c02849a(void);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c0344a0(struct Actor *,int),func_0c0442fa(struct Actor *),func_0c02a39a(struct Actor *,int),func_0c0432ca(struct Actor *),func_0c02a684(struct Actor *,int,int,int),func_0c025900(struct Actor *,int,int),func_0c044548(struct Actor *,struct Actor *),func_0c043324(struct Actor *),func_0c0437b8(struct Actor *),func_0c0ce574(struct Actor *),func_0c04b02a(struct Actor *),func_0c04c010(struct Actor *,struct Actor *,int),func_0c03edcc(struct Actor *,struct Actor *),func_0c048bb0(struct Actor *,int),func_0c0438de(struct Actor *),func_0c025762(void);
extern void func_0c0429a4(struct Actor *,struct LinkedActorVec3 *,int),func_0c1cea66(struct Actor *,struct LinkedActorVec3 *,int);
extern struct LinkedActor *func_0c1b0b40(struct Actor *,unsigned char),*func_0c1af524(struct Actor *,unsigned char,unsigned char),*func_0c1630dc(struct Actor *,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c2482a8[])(struct Actor *),(*table_0c2482dc[])(struct Actor *),(*table_0c248304[])(struct Actor *);
#define MOTION a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108
#define RECORD a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++
#define HITFLAGS a->b3f8=2;a->b328=5
#define CLEAR_HIT a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero
#define CLEAR_SPEED(p) (p)->f92=0;(p)->f96=0;(p)->f104=0;(p)->f108=0
#define PHASE *((int *)((char *)a+0x2f0))
#define PAIRFLAGS a->b1ea=1;a->b1ed=2
void func_0c0cfe70(struct Actor *a);
void func_0c0cfe8a(struct Actor *a);
void func_0c0cfea4(struct Actor *a);
void func_0c0cfebe(struct Actor *a);
void func_0c0cff06(struct Actor *a);
void func_0c0cff1a(struct Actor *a);
void func_0c0cff2c(struct Actor *a);
void func_0c0cffcc(struct Actor *a);
void func_0c0d0020(struct Actor *a);
void func_0c0d00d8(struct Actor *a);
void func_0c0d0244(struct Actor *a);
void func_0c0d02c8(struct Actor *a);
void func_0c0d02ea(struct Actor *a);
void func_0c0d0470(struct Actor *a);
void func_0c0d05ac(struct Actor *a);
void func_0c0d075c(struct Actor *a);
void func_0c0d0782(struct Actor *a);
void func_0c0d0794(struct Actor *a);
void func_0c0d080e(struct Actor *a);
void func_0c0d0862(struct Actor *a);
void func_0c0d08d8(struct Actor *a);
void func_0c0d096a(struct Actor *a);
void func_0c0d098c(struct Actor *a);
void func_0c0d09cc(struct Actor *a);
void func_0c0cfe70(struct Actor *a){if(!a->b6){a->b6++;func_0c02a0c4(a,19,5);}else func_0c02a026(a);}

void func_0c0cfe8a(struct Actor *a){if(!a->b6){a->b6++;func_0c02a0c4(a,19,4);}else func_0c02a026(a);}

void func_0c0cfea4(struct Actor *a){if(!a->b6){a->b6++;func_0c02a0c4(a,19,6);}else func_0c02a026(a);}

void func_0c0cfebe(struct Actor *a){func_0c0344a0(a,43);CLEAR_SPEED(a);a->b1fc=0;a->b1f9=0;a->f56=a->f41c;func_0c0442fa(a);func_0c02a39a(a,0);func_0c0432ca(a);}

void func_0c0cff06(struct Actor *a){table_0c2482a8[a->b1e9](a);}

void func_0c0cff1a(struct Actor *a){table_0c2482dc[a->b6](a);}

void func_0c0cff2c(struct Actor *a){int zero=0;if(a->b255==6){a->b3f0=255;a->b3f1=16;}a->b6++;a->s28=15;func_0c0cfebe(a);a->b1a1=57;RECORD;a->w1ac|=0x200;func_0c02a0c4(a,22,0);}

void func_0c0cffcc(struct Actor *a){struct LinkedActorVec3 point;HITFLAGS;a->b3f1=a->b255==6?2:0;a->b6++;a->b3f0=0;a->b3f1=0;point.x=0;point.y=162.857132f;point.z=0;func_0c0429a4(a,&point,1);}

void func_0c0d0020(struct Actor *a){HITFLAGS;func_0c02a026(a);if(a->s28==15){func_0c1b0b40(a,4);func_0c02a684(a,3,2,1);}if(--a->s28<0){a->b6++;a->s28=15;func_0c02a0c4(a,22,1);a->f96=0;a->f108=0;a->f92=-13.33333302f;a->f104=0.1041666642f;if(a->w130){a->f92=-a->f92;a->f104=-a->f104;}}}

void func_0c0d00d8(struct Actor *a){int zero=0;HITFLAGS;MOTION;func_0c02a026(a);if(a->b19e){if(func_0c0447bc(a)){func_0c025900(a,13,7);a->b6=6;a->s28=47;a->s30=zero;func_0c02a0c4(a,22,4);a->b1f7=194;func_0c044548(a,a->p1b0);}else{CLEAR_HIT;a->b1f9=2;a->b6=4;a->f92=-1.66666663f;a->f104=0.00651041651145f;a->f96=12.85714245f;a->f108=-0.5357143f;if(!a->w130){a->f92=-a->f92;a->f104=-a->f104;}func_0c02a0c4(a,22,2);}a->b1a0=10;}else if(--a->s28<0){a->b6=5;func_0c02a0c4(a,22,3);CLEAR_HIT;}}

void func_0c0d0244(struct Actor *a){func_0c02a026(a);MOTION;if(a->f41c>a->f56){CLEAR_SPEED(a);a->f56=a->f41c;a->b1f9=0;func_0c043324(a);func_0c0437b8(a);}}

void func_0c0d02c8(struct Actor *a){if(func_0c02a026(a)<0)func_0c0ce574(a);}

void func_0c0d02ea(struct Actor *a){struct LinkedActorVec3 point;unsigned char variant;int mode;float height;HITFLAGS;PAIRFLAGS;func_0c02a026(a);if(--a->s28<0){if(!a->s30){a->s28=63;a->s30++;func_0c02a0c4(a,22,5);func_0c1b0b40(a,3);PHASE=33;}else{PHASE=34;a->b6++;a->s28=63;func_0c02a0c4(a,22,6);a->f92=0;a->f104=0;a->f96=6.428571224213f;a->f108=-0.066964284f;}}else if(a->b141){a->b141=0;a->p1c8->p1b4=a;if(!a->s30)a->p1c8->b1a1=58;else a->p1c8->b1a1=59;func_0c04b02a(a);func_0c04c010(a->p1c8,a,1);height=120.0f;if(a->s30){point.x=-60.0f;point.y=height;mode=3;}else{variant=func_0c02849a()&7;point.x=-123.33333f;point.y=height;mode=variant+9;}func_0c1cea66(a,&point,mode);}func_0c03edcc(a,a->p1c8);}

void func_0c0d0470(struct Actor *a){struct Actor *other=a->p1c8;HITFLAGS;PAIRFLAGS;func_0c02a026(a);if(!a->b141){func_0c03edcc(a,a->p1c8);return;}MOTION;if(a->b141<0){PHASE=35;a->b141=0;a->b6++;a->f92=-3.3333333f;a->f104=0.0520833321f;a->f96=4.28571415f;a->f108=-0.2678571343422f;CLEAR_SPEED(other);other->f92=(a->f52-other->f52)/16.0f;other->f96=(other->f41c-other->f56)/8.0f;if(!a->w130){a->f92=-a->f92;a->f104=-a->f104;}return;}func_0c03edcc(a,a->p1c8);}

void func_0c0d05ac(struct Actor *a){int zero=0;HITFLAGS;PAIRFLAGS;func_0c02a026(a);MOTION;a->p1c8->f52+=a->p1c8->f92;a->p1c8->f92+=a->p1c8->f104;a->p1c8->f56+=a->p1c8->f96;a->p1c8->f96+=a->p1c8->f108;if(a->p1c8->f41c>a->p1c8->f56){a->p1c8->f92=0;a->p1c8->f96=0;a->p1c8->f104=0;a->p1c8->f108=0;a->p1c8->f56=a->p1c8->f41c;a->p1c8->b12c=zero;}if(a->f41c>a->f56){CLEAR_HIT;a->f56=a->f41c;a->b6++;a->s28=36;func_0c043324(a);func_0c02a0c4(a,22,7);func_0c04c010(a->p1c8,a,1);a->p1c8->b1f6=16;a->p1c8->b1a1=60;a->b1a1=60;a->p1c8->f56=a->f41c+51.42857f;a->p1c8->b12c=1;func_0c04b02a(a);PHASE=36;func_0c025762();}}

void func_0c0d075c(struct Actor *a){func_0c02a026(a);if(--a->s28<0)func_0c0437b8(a);}

void func_0c0d0782(struct Actor *a){table_0c248304[a->b6](a);}

void func_0c0d0794(struct Actor *a){int zero=0;if(a->b255==6){a->b3f0=255;a->b3f1=16;}a->b6++;a->s28=128;func_0c0cfebe(a);func_0c02a684(a,7,a->b37+3,1);a->b1a1=56;RECORD;func_0c02a0c4(a,22,8);func_0c1af524(a,5,0);}

void func_0c0d080e(struct Actor *a){struct LinkedActorVec3 point;HITFLAGS;a->b3f1=a->b255==6?2:0;a->b6++;a->b3f0=0;a->b3f1=0;point.x=0;point.y=162.857132f;point.z=0;func_0c0429a4(a,&point,1);}

void func_0c0d0862(struct Actor *a){HITFLAGS;a->s28--;if(a->b141){a->b6++;a->b141=0;func_0c1af524(a,6,0);}func_0c02a026(a);}

void func_0c0d08d8(struct Actor *a){int zero=0;HITFLAGS;if(--a->s28<0){a->b6++;func_0c02a0c4(a,22,9);func_0c1af524(a,7,0);CLEAR_HIT;}else{if(a->b141==1){a->b141=zero;func_0c1630dc(a,0);func_0c1630dc(a,3);}if(a->b141==2){a->b141=zero;func_0c1630dc(a,1);func_0c1630dc(a,2);}}func_0c02a026(a);}

void func_0c0d096a(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}

void func_0c0d098c(struct Actor *a){if(a->b1f9==2)func_0c0438de(a);else func_0c0ce574(a);}

void func_0c0d09cc(struct Actor *a){int zero=0;float stopped=0;struct LinkedActorVec3 point;if(!a->b7){if(a->b255==6){a->b3f0=255;a->b3f1=16;}a->b7++;func_0c0cfebe(a);a->f92=-5.0f;a->f104=stopped;if(a->w130)a->f92=-a->f92;a->b1a1=61;RECORD;func_0c02a0c4(a,22,10);}else{HITFLAGS;a->b3f1=a->b255==6?2:0;func_0c02a026(a);if(a->b141){a->b6++;a->b7=zero;a->b141=zero;a->b3f0=zero;a->b3f1=zero;point.x=stopped;point.y=162.857132f;point.z=stopped;func_0c0429a4(a,&point,1);}}}
