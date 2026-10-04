#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0442fa(struct Actor *),func_0c048bb0(struct Actor *,int),func_0c0432ca(struct Actor *),func_0c02a0c4(struct Actor *,int,int),func_0c02a39a(struct Actor *,int),func_0c0451f2(struct Actor *),func_0c043324(struct Actor *),func_0c0437b8(struct Actor *),func_0c0438de(struct Actor *);
extern void func_0c0429a4(struct Actor *,struct LinkedActorVec3 *,int);
extern struct LinkedActor *func_0c167a38(struct Actor *,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern char dat_0c22f3aa[],dat_0c22f3a8[],dat_0c22f3cc[];
extern unsigned char dat_0c22f3cd[];
extern float dat_0c22f3ac[][4];
extern void (*table_0c2491e8[])(struct Actor *),(*table_0c2491f8[])(struct Actor *),(*table_0c249208[])(struct Actor *),(*table_0c249218[])(struct Actor *),(*table_0c249234[])(struct Actor *),(*table_0c249250[])(struct Actor *);
#define MOTION a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108
#define VERTICAL a->f56+=a->f96;a->f96+=a->f108
#define HORIZONTAL a->f52+=a->f92;a->f92+=a->f104
#define CLEAR_SPEED a->f92=0;a->f96=0;a->f104=0;a->f108=0
#define RECORD a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++
#define HITFLAGS a->b3f8=2;a->b328=5
#define CLEAR_HIT a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero
#define CPUFLAGS if(a->b255==6){a->b3f0=255;a->b3f1=16;}
void func_0c0e0a50(struct Actor *a);
void func_0c0e0bda(struct Actor *a);
void func_0c0e0c0a(struct Actor *a);
void func_0c0e0c42(struct Actor *a);
void func_0c0e0c86(struct Actor *a);
void func_0c0e0cd0(struct Actor *a);
void func_0c0e0d02(struct Actor *a);
void func_0c0e0d38(struct Actor *a);
void func_0c0e0d72(struct Actor *a);
void func_0c0e0dd4(struct Actor *a);
void func_0c0e0ed4(struct Actor *a);
void func_0c0e0f06(struct Actor *a);
void func_0c0e0f18(struct Actor *a);
void func_0c0e0f54(struct Actor *a);
void func_0c0e1004(struct Actor *a);
void func_0c0e10d0(struct Actor *a);
void func_0c0e1120(struct Actor *a);
void func_0c0e1132(struct Actor *a);
void func_0c0e11ae(struct Actor *a);
void func_0c0e121e(struct Actor *a);
void func_0c0e129c(struct Actor *a);
void func_0c0e12ce(struct Actor *a);
void func_0c0e12e0(struct Actor *a);
void func_0c0e1372(struct Actor *a);
void func_0c0e141e(struct Actor *a);
void func_0c0e1490(struct Actor *a);
void func_0c0e14e6(struct Actor *a);
void func_0c0e1554(struct Actor *a);
void func_0c0e15a0(struct Actor *a);
void func_0c0e15d2(struct Actor *a);
void func_0c0e15e4(struct Actor *a);
void func_0c0e1666(struct Actor *a);
void func_0c0e170e(struct Actor *a);
void func_0c0e18a2(struct Actor *a);
void func_0c0e18d8(struct Actor *a);
void func_0c0e192a(struct Actor *a);
void func_0c0e19c8(struct Actor *a);
void func_0c0e19fa(struct Actor *a);
void func_0c0e1a0c(struct Actor *a);
void func_0c0e1a74(struct Actor *a);
void func_0c0e0a50(struct Actor *a){int zero=0;float acceleration=0.5208333135f;struct ActorSub2a4 *state=&a->sub2a4;a->b6++;func_0c0442fa(a);func_0c048bb0(a,13);func_0c0432ca(a);if(!a->b1a3){a->b1a1=51;RECORD;a->f92=-3.3333333f;a->f104=acceleration;a->f96=17.142857f;}else{if(a->b255==3)a->b1a1=87;else a->b1a1=55;RECORD;a->f92=-10.0f;a->f104=acceleration;a->f96=34.2857132f;}a->f108=-1.07142854f;if(a->w130){a->f92=-a->f92;a->f104=-a->f104;}func_0c02a0c4(a,21,dat_0c22f3aa[(unsigned char)a->b1a3]);state->b1++;state->b1&=3;if(state->b1)func_0c02a0c4(a,21,dat_0c22f3a8[(unsigned char)a->b1a3]);else{func_0c02a0c4(a,21,dat_0c22f3a8[(unsigned char)a->b1a3+2]);func_0c02a39a(a,8);}}

void func_0c0e0bda(struct Actor *a){func_0c02a026(a);if(!a->b141){a->b6++;func_0c02a39a(a,0);func_0c0451f2(a);}}

void func_0c0e0c0a(struct Actor *a){VERTICAL;if(a->f96*a->f108>0)a->f108=-1.60714281f;}

void func_0c0e0c42(struct Actor *a){func_0c0e0c0a(a);HORIZONTAL;if(a->f92*a->f104>0)a->b6++;func_0c02a026(a);}

void func_0c0e0c86(struct Actor *a){func_0c0e0c0a(a);if(a->f41c>a->f56){a->b6++;a->f56=a->f41c;a->b1f9=0;func_0c043324(a);}else if(!a->b141)func_0c02a026(a);}

void func_0c0e0cd0(struct Actor *a){if(func_0c02a026(a)<0){CLEAR_SPEED;func_0c0437b8(a);}}

void func_0c0e0d02(struct Actor *a){table_0c2491e8[a->b6](a);}

void func_0c0e0d38(struct Actor *a){a->b6++;func_0c0442fa(a);func_0c0432ca(a);func_0c048bb0(a,13);func_0c02a0c4(a,21,a->b1a3?8:6);}

void func_0c0e0d72(struct Actor *a){float *row;func_0c02a026(a);if(a->b141>=0){a->b6++;func_0c0451f2(a);row=dat_0c22f3ac[(unsigned char)a->b1a3];a->f92=*row++;a->f104=*row++;a->f96=*row++;a->f108=*row;if(a->w130){a->f92=-a->f92;a->f104=-a->f104;}}}

void func_0c0e0dd4(struct Actor *a){int zero=0;MOTION;func_0c02a026(a);if(a->b14b){if(a->b255==3)a->b1a1=a->b14b+28;else a->b1a1=a->b14b;RECORD;a->b14b=zero;}if(a->f41c>a->f56){a->b6++;a->f56=a->f41c;a->b1f9=1;func_0c02a0c4(a,21,a->b1a3?42:40);func_0c043324(a);}}

void func_0c0e0ed4(struct Actor *a){if(func_0c02a026(a)<0){CLEAR_SPEED;func_0c0437b8(a);}}

void func_0c0e0f06(struct Actor *a){table_0c2491f8[a->b6](a);}

void func_0c0e0f18(struct Actor *a){a->b6++;func_0c0442fa(a);func_0c048bb0(a,13);func_0c02a0c4(a,21,a->b1a3?45:44);a->b1f9=2;}

void func_0c0e0f54(struct Actor *a){float *row;char reverse;func_0c02a026(a);if(a->b141>=0){a->b6++;row=dat_0c22f3ac[(unsigned char)a->b1a3];if(a->b1d3<0)reverse=a->w130!=0;else reverse=a->f92>0;a->f92=*row++;a->f104=*row++;a->f96=*row++;a->f108=*row;if(reverse){a->f92=-a->f92;a->f104=-a->f104;}}}

void func_0c0e1004(struct Actor *a){int zero=0;MOTION;if(a->f41c>a->f56){a->b6++;a->f56=a->f41c;a->b1f9=1;func_0c02a0c4(a,21,a->b1a3?42:40);func_0c043324(a);return;}if(func_0c02a026(a)<0){func_0c0438de(a);return;}if(a->b14b){a->b1a1=a->b14b;RECORD;a->b14b=zero;}}

void func_0c0e10d0(struct Actor *a){if(func_0c02a026(a)<0){CLEAR_SPEED;func_0c0437b8(a);}}

void func_0c0e1120(struct Actor *a){table_0c249208[a->b6](a);}

void func_0c0e1132(struct Actor *a){int zero=0;CPUFLAGS;a->b6++;func_0c02a39a(a,0);a->b1f9=zero;func_0c0442fa(a);func_0c0432ca(a);a->b1a1=63;RECORD;func_0c02a0c4(a,22,zero);a->b142+=8;}

void func_0c0e11ae(struct Actor *a){struct LinkedActorVec3 point;HITFLAGS;a->b3f1=a->b255==6?2:0;func_0c02a026(a);if(a->b141!=0){a->b6++;a->b141=0;a->b3f0=0;a->b3f1=0;point.x=53.3333321f;point.y=188.57143f;point.z=0;func_0c0429a4(a,&point,1);}}

void func_0c0e121e(struct Actor *a){HITFLAGS;func_0c02a026(a);if(a->b141){a->b141=0;a->b6++;func_0c167a38(a,1);}}

void func_0c0e129c(struct Actor *a){int zero=0;if(func_0c02a026(a)<0){CLEAR_HIT;func_0c0437b8(a);}}

void func_0c0e12ce(struct Actor *a){table_0c249218[a->b6](a);}

void func_0c0e12e0(struct Actor *a){int zero=0;a->b6++;CPUFLAGS;func_0c02a39a(a,0);func_0c0442fa(a);func_0c0432ca(a);CLEAR_SPEED;a->f92=a->w130?1.66666663f:-1.66666663f;a->b1a1=64;RECORD;func_0c02a0c4(a,22,1);}

void func_0c0e1372(struct Actor *a){struct LinkedActorVec3 point;HITFLAGS;a->b3f1=a->b255==6?2:0;func_0c02a026(a);if(a->b141<0){a->b3f0=0;a->b3f1=0;a->b6++;a->b141=0;point.x=-26.666666031f;point.y=102.85714f;point.z=0;func_0c0429a4(a,&point,1);}}

void func_0c0e141e(struct Actor *a){int zero=0;HITFLAGS;HORIZONTAL;func_0c02a026(a);if(a->b141){a->b6++;a->b141=zero;a->b1a1=65;RECORD;}}

void func_0c0e1490(struct Actor *a){HITFLAGS;func_0c02a026(a);if(!a->b141){a->b6++;a->b141=0;a->f92=0;a->f104=0;a->f96=34.2857132f;a->f108=-1.07142854f;func_0c0451f2(a);}}

void func_0c0e14e6(struct Actor *a){VERTICAL;if(a->f96*a->f108>0){a->b6++;a->f108=-2.1428571f;}func_0c02a026(a);}

void func_0c0e1554(struct Actor *a){VERTICAL;if(a->f41c>a->f56){a->b6++;a->f56=a->f41c;func_0c043324(a);}else if(!a->b141)func_0c02a026(a);}

void func_0c0e15a0(struct Actor *a){if(func_0c02a026(a)<0){CLEAR_SPEED;func_0c0437b8(a);}}

void func_0c0e15d2(struct Actor *a){table_0c249234[a->b6](a);}

void func_0c0e15e4(struct Actor *a){int zero=0;struct ActorSub2a4 *state=&a->sub2a4;a->b6++;CPUFLAGS;func_0c02a39a(a,0);func_0c0442fa(a);func_0c0432ca(a);state->b0=zero;a->b1a1=66;RECORD;func_0c02a0c4(a,22,2);a->b142+=8;}

void func_0c0e1666(struct Actor *a){struct LinkedActorVec3 point;HITFLAGS;a->b3f1=a->b255==6?2:0;func_0c02a026(a);if(a->b141<0){a->b6++;a->b141=0;a->b3f0=0;a->b3f1=0;point.x=-13.33333302f;point.y=158.57143f;point.z=0;func_0c0429a4(a,&point,1);}}

void func_0c0e170e(struct Actor *a){int zero=0;struct ActorSub2a4 *state=&a->sub2a4;HITFLAGS;if(!state->b0&&a->b19e&&!a->p1b0->b3&&!a->p1b0->b411&&!((unsigned long long)*(unsigned int *)((char *)a->p1b0+0x414)&0x07000000ULL)){state->b0=1;a->p20c->b1f9=zero;a->p20c->f56=a->f41c;a->p20c->f52=a->f52;if(a->w130)a->p20c->f52-=-106.666664124f;else a->p20c->f52-=106.666664124f;}if(func_0c02a026(a)>=0){if(a->b14b){a->b1a1=a->b14b;RECORD;a->b14b=zero;}}else{a->b6++;a->f92=-16.666666031f;a->f104=0.72916663f;a->f96=34.2857132f;a->f108=-1.07142854f;if(a->w130){a->f92=-a->f92;a->f104=-a->f104;}a->b1a1=75;RECORD;func_0c02a0c4(a,22,3);}}

void func_0c0e18a2(struct Actor *a){HITFLAGS;func_0c02a026(a);if(!a->b141){a->b6++;func_0c0451f2(a);}}

void func_0c0e18d8(struct Actor *a){HITFLAGS;func_0c0e0c0a(a);HORIZONTAL;if(a->f92*a->f104>0)a->b6++;func_0c02a026(a);}

void func_0c0e192a(struct Actor *a){int zero=0;HITFLAGS;func_0c0e0c0a(a);if(a->f41c>a->f56){a->b6++;CLEAR_HIT;a->f56=a->f41c;a->b1f9=zero;func_0c043324(a);}else if(!a->b141)func_0c02a026(a);}

void func_0c0e19c8(struct Actor *a){if(func_0c02a026(a)<0){CLEAR_SPEED;func_0c0437b8(a);}}

void func_0c0e19fa(struct Actor *a){table_0c249250[a->b6](a);}

void func_0c0e1a0c(struct Actor *a){a->b6++;a->s28=72;func_0c0442fa(a);func_0c048bb0(a,dat_0c22f3cd[a->b1f9*2]);func_0c02a0c4(a,21,dat_0c22f3cc[a->b1f9*2]);if(a->b1f9==2)a->b6++;else{CLEAR_SPEED;}}

void func_0c0e1a74(struct Actor *a){func_0c02a026(a);a->s28--;if(a->s28<=0)func_0c0437b8(a);}
