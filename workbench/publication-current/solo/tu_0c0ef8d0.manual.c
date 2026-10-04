#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern int func_0c047bbe(struct Actor *);
extern void func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *),func_0c043324(struct Actor *),func_0c0437b8(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c02a684(struct Actor *,int,int,int),func_0c02a39a(struct Actor *,int),func_0c1b2e10(struct Actor *,int);
extern void func_0c0429a4(struct Actor *,struct LinkedActorVec3 *,int);
extern struct Actor *func_0c1b2e9c(struct Actor *,unsigned char),*func_0c16a708(struct Actor *,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
void func_0c0ef8d0(struct Actor *a,unsigned char *state){int zero;
 if(a->b255==6){a->b3f0=255;a->b3f1=16;}a->b7++;func_0c0442fa(a);zero=0;a->f56=a->f41c;a->b1f9=zero;a->f92=0;a->f96=0;a->f104=0;a->f108=0;
 state[8]=zero;state[6]=zero;state[7]=zero;state[9]=zero;func_0c0432ca(a);func_0c02a0c4(a,21,21);}
void func_0c0ef93e(struct Actor *a){struct LinkedActorVec3 point;int zero;
 a->b3f8=2;a->b328=5;a->b3f1=a->b255==6?2:0;
 if(func_0c02a026(a)<0){a->b7++;zero=0;a->b3f0=zero;a->b3f1=zero;point.x=66.666664124f;point.y=154.28571f;point.z=0;func_0c0429a4(a,&point,1);func_0c02a0c4(a,21,40);func_0c1b2e9c(a,8);}}
void func_0c0ef9ba(struct Actor *a,unsigned char *state){int two=2,zero;
 a->b3f8=two;a->b328=5;if(func_0c02a026(a)<0){a->b7++;a->b1f9=two;a->f92=0;a->f96=0;a->f104=0;a->f108=0;a->f92=a->b1d2?15.0f:-15.0f;
 a->b1a1=65;zero=0;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;state[5]=two;a->s28=96;a->s30=7;a->p20=0;func_0c02a684(a,zero,a->b37*2,1);func_0c1b2e10(a,9);func_0c16a708(a,0);func_0c02a0c4(a,21,22);}}
void func_0c0efabe(struct Actor *a,unsigned char *state){int zero=0,one=1,two=2;unsigned char limit;
 a->b3f8=two;a->b328=5;
 if(a->p20 && a->p20->b19f){a->f92-=a->b1d2?-1.25f:1.25f;state[7]=6;}
 if(a->b141)state[4]=one;a->b1f5=one;
 if((!a->b1c0 && (a->b1fd&2)) || (a->b1c0 && (a->b1fd&1)))goto finish;
 if(state[7]){if(--state[7]==0)a->f104+=a->b1d2?0.1041666642f:-0.1041666642f;}
 else{a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;}
 if(func_0c047bbe(a)){a->b142=one;state[9]++;limit=a->b525?6:two;if(state[9]>=limit){state[9]=zero;if(a->s30>=10)state[6]=one;if(!state[6])a->s30++;}}
 func_0c02a026(a);if(--a->s28<0)goto finish;
 if(a->b19e && --state[5]==0){if(++state[8]<10 && --a->s30!=0){a->b1a1=65;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;state[5]=two;}}
 return;
finish:a->b7++;a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;func_0c02a39a(a,0);func_0c043324(a);func_0c02a0c4(a,21,23);}
void func_0c0efcfe(struct Actor *a){int zero;
 if(func_0c02a026(a)>=0){if(((unsigned char *)&a->w150)[1]){zero=0;a->b1f9=zero;((unsigned char *)&a->w150)[1]=zero;}}
 else{a->f92=0;a->f96=0;a->f104=0;a->f108=0;func_0c0437b8(a);}}
