#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *),func_0c0438de(struct Actor *),func_0c0442fa(struct Actor *),func_0c048bb0(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c0451f2(struct Actor *),func_0c0432ca(struct Actor *),func_0c043324(struct Actor *);
extern struct Actor *func_0c16aa40(struct Actor *,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern unsigned char dat_0c24a1e0[];
extern void (*table_0c24a1e4[])(struct Actor *,struct ActorSub2a4 *),(*table_0c24a220[])(struct Actor *,struct ActorSub2a4 *);
extern void (*table_0c24a1f8[])(struct Actor *),(*table_0c24a210[])(struct Actor *);
#define MOTION a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108
#define RECORD a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++
void func_0c0f21bc(struct Actor *a);
void func_0c0f21f4(struct Actor *a);
void func_0c0f2226(struct Actor *a,struct ActorSub2a4 *state);
void func_0c0f2296(struct Actor *a);
void func_0c0f22d0(struct Actor *a,struct ActorSub2a4 *state);
void func_0c0f23aa(struct Actor *a,struct ActorSub2a4 *state);
void func_0c0f2430(struct Actor *a);
void func_0c0f246c(struct Actor *a);
void func_0c0f24b6(struct Actor *a);
void func_0c0f24d8(struct Actor *a);
void func_0c0f2510(struct Actor *a);
void func_0c0f253c(struct Actor *a);
void func_0c0f25e8(struct Actor *a);
void func_0c0f2688(struct Actor *a);
void func_0c0f272c(struct Actor *a);
void func_0c0f2770(struct Actor *a);
void func_0c0f280e(struct Actor *a);
void func_0c0f2830(struct Actor *a);
void func_0c0f2868(struct Actor *a);
void func_0c0f287a(struct Actor *a);
void func_0c0f2948(struct Actor *a);
void func_0c0f29f0(struct Actor *a);
void func_0c0f2a7e(struct Actor *a);
void func_0c0f2abc(struct Actor *a);
void func_0c0f2b0c(struct Actor *a);
void func_0c0f2b22(struct Actor *a,struct ActorSub2a4 *state);
void func_0c0f2ba8(struct Actor *a,struct ActorSub2a4 *state);
void func_0c0f2bda(struct Actor *a);
void func_0c0f21bc(struct Actor *a){if(func_0c02a026(a)<0){func_0c0437b8(a);return;}if(a->b141){a->b141=0;func_0c16aa40(a,0);}}

void func_0c0f21f4(struct Actor *a){float old=a->f96;a->f56+=old;a->f96+=a->f108;if(old>0&&a->f96<0)a->f108=-1.60714281f;}

void func_0c0f2226(struct Actor *a,struct ActorSub2a4 *state){int zero=0;char tag;if((unsigned char)state->b0>0&&state->b1>0&&a->b140){tag=a->b140;a->b140=zero;if(a->b19e){if(a->b19e&1){if(--state->b1==0)return;}else{state->b0--;if((unsigned char)state->b0==0)return;}}a->b1a1=tag;RECORD;}}

void func_0c0f2296(struct Actor *a){table_0c24a1e4[a->b6](a,&a->sub2a4);}

void func_0c0f22d0(struct Actor *a,struct ActorSub2a4 *state){int zero;float speed,vertical;func_0c0442fa(a);zero=0;a->f56=a->f41c;a->b6++;a->b1fc=zero;a->b1f9=zero;func_0c048bb0(a,10);if(!a->b1a3){speed=13.33333302f;vertical=17.142857f;}else{speed=20.0f;vertical=34.2857132f;}a->f96=vertical;a->f92=a->b1d2?speed:-speed;a->f104=a->b1d2?-0.72916663f:0.72916663f;a->f108=-1.07142854f;a->b1a1=a->b1a3+51;RECORD;state->b0=dat_0c24a1e0[(unsigned char)a->b1a3*2];state->b1=dat_0c24a1e0[(unsigned char)a->b1a3*2+1];func_0c02a0c4(a,21,a->b1a3+2);}

void func_0c0f23aa(struct Actor *a,struct ActorSub2a4 *state){func_0c02a026(a);func_0c0f2226(a,state);if(!a->b141){a->b6++;func_0c0451f2(a);func_0c0432ca(a);}}

void func_0c0f2430(struct Actor *a){float old;func_0c0f21f4(a);old=a->f92;a->f52+=old;a->f92+=a->f104;if(old*a->f92<0)a->b6++;func_0c02a026(a);}

void func_0c0f246c(struct Actor *a){func_0c0f21f4(a);if(a->f56>a->f41c){if(!a->b141)func_0c02a026(a);}else{a->b6++;a->b1f9=0;a->f56=a->f41c;func_0c043324(a);}}

void func_0c0f24b6(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}

void func_0c0f24d8(struct Actor *a){int zero=0;if(a->b141>0){a->b141=zero;a->b1a1=a->b1a3+58;RECORD;}}

void func_0c0f2510(struct Actor *a){table_0c24a1f8[a->b6](a);}

void func_0c0f253c(struct Actor *a){int zero=0;unsigned char mode;float speed;a->b6++;func_0c0442fa(a);func_0c0432ca(a);func_0c048bb0(a,10);a->f56=a->f41c;a->b1a1=a->b1a3+58;RECORD;func_0c0451f2(a);a->f104=0;a->f108=0;mode=a->b1a3;speed=mode?13.33333302f:8.33333302f;a->f96=mode?8.5714283f:2.678571224213f;a->f92=a->b1d2?speed:-speed;func_0c02a0c4(a,21,4);}

void func_0c0f25e8(struct Actor *a){MOTION;if(func_0c02a026(a)<0){a->b6++;a->s28=3;func_0c02a0c4(a,21,6);func_0c0f24d8(a);}}

void func_0c0f2688(struct Actor *a){int zero=0;MOTION;if(a->b140){a->b140=zero;if(--a->s28<=0){a->b6++;if(a->b19e){a->b1a1=87;RECORD;func_0c02a0c4(a,21,25);return;}}}func_0c02a026(a);func_0c0f24d8(a);}

void func_0c0f272c(struct Actor *a){if(func_0c02a026(a)<0){a->b6++;a->f92=0;a->f104=0;a->f96=-2.1428571f;a->f108=-0.80357140303f;func_0c02a0c4(a,21,5);}}

void func_0c0f2770(struct Actor *a){MOTION;if(!(a->f56>a->f41c)){a->b6++;a->f56=a->f41c;a->b1f9=0;func_0c02a0c4(a,21,7);func_0c043324(a);}else func_0c02a026(a);}

void func_0c0f280e(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}

void func_0c0f2830(struct Actor *a){int zero=0;if(a->b141>0){a->b141=zero;a->b1a1=a->b1a3+61;RECORD;}}

void func_0c0f2868(struct Actor *a){table_0c24a210[a->b6](a);}

void func_0c0f287a(struct Actor *a){int zero=0;float speed;a->b6++;func_0c0442fa(a);func_0c048bb0(a,5);a->b1a1=a->b1a3+61;RECORD;speed=a->b1a3?4.16666651f:2.5f;if(a->b1d2){if(a->f92<0)speed=-speed;}else{speed=-speed;if(a->f92>0)speed=-speed;}a->f92+=speed;a->f104=0;a->s28=(unsigned char)a->b1a3*2+1;func_0c02a0c4(a,21,8);}

void func_0c0f2948(struct Actor *a){MOTION;if(!(a->f56>a->f41c)){a->b6=3;a->f56=a->f41c;a->b1f9=0;func_0c043324(a);func_0c02a0c4(a,1,3);return;}if(a->b141<0){a->b141=0;if(--a->s28<0){a->b6++;func_0c02a0c4(a,21,10);return;}}func_0c02a026(a);func_0c0f2830(a);}

void func_0c0f29f0(struct Actor *a){MOTION;if(!(a->f56>a->f41c)){a->b6++;a->f56=a->f41c;a->b1f9=0;func_0c043324(a);func_0c02a0c4(a,1,3);}else if(func_0c02a026(a)<0)func_0c0438de(a);}

void func_0c0f2a7e(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}

void func_0c0f2abc(struct Actor *a){MOTION;if(!(a->f56>a->f41c))a->f56=a->f41c;}

void func_0c0f2b0c(struct Actor *a){table_0c24a220[a->b6](a,&a->sub2a4);}

void func_0c0f2b22(struct Actor *a,struct ActorSub2a4 *state){int zero=0;a->b6++;func_0c0442fa(a);func_0c048bb0(a,2);a->b1a1=a->b1a3+64;RECORD;a->f92/=16.0f;a->f96/=8.0f;a->f108/=64.0f;a->f104=0;func_0c02a0c4(a,21,a->b1a3+14);}

void func_0c0f2ba8(struct Actor *a,struct ActorSub2a4 *state){func_0c0f2abc(a);func_0c02a026(a);if(a->b141){a->b141=0;a->b6++;func_0c16aa40(a,1);}}

void func_0c0f2bda(struct Actor *a){func_0c0f2abc(a);if(func_0c02a026(a)<0){a->f96=0;a->f108=0;func_0c0438de(a);}}
