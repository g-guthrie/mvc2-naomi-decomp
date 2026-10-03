/* UNVERIFIED complete C draft. No registration or added coverage. */
#include "objects.h"
#define MODE(a) (((struct LinkedActor *)(a))->wcc.dword_value)
extern char func_0c02a026(struct Actor *);
extern void func_0c0442fa(struct Actor *),func_0c0438de(struct Actor *),func_0c0451f2(struct Actor *),func_0c0432ca(struct Actor *);
extern void func_0c048bb0(struct Actor *,int),func_0c02a39a(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c0344a0(struct Actor *,int);
extern struct Actor *func_0c166704(struct Actor *,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern short table_0c248c6c[][2];
extern unsigned char table_0c248e64[][2];
extern float table_0c248c74[][2];
extern void (*table_0c248e58[])(struct Actor *),(*table_0c248e68[])(struct Actor *);
void func_0c0dcd40(struct Actor *a){table_0c248e58[a->b6](a);}
void func_0c0dcd52(struct Actor *a){int zero=0;
 a->b6++;a->b1a1=a->b1a3+68;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c048bb0(a,4);func_0c0442fa(a);func_0c02a39a(a,zero);
 a->f92/=8.0f;a->f104=0;a->f96/=8.0f;a->f108/=64.0f;
 a->s28=table_0c248c6c[MODE(a)][(unsigned char)a->b1a3];a->b1a1=table_0c248e64[MODE(a)][(unsigned char)a->b1a3];a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,21,a->b1a3+21);}
void func_0c0dce2e(struct Actor *a){unsigned char kind;
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;if(a->f41c>a->f56)a->f56=a->f41c;func_0c02a026(a);
 if(a->b141){a->b141=0;kind=MODE(a)?7:1;func_0c166704(a,kind);func_0c0344a0(a,30);}
 if(--a->s28<=0){a->b6++;func_0c02a0c4(a,21,a->b1a3+23);}}
void func_0c0dcf12(struct Actor *a){a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;if(a->f41c>a->f56)a->f56=a->f41c;if(func_0c02a026(a)<0)func_0c0438de(a);}
void func_0c0dcf80(struct Actor *a){table_0c248e68[a->b6](a);}
void func_0c0dcf92(struct Actor *a){int zero=0;
 a->b6++;a->b1f9=zero;func_0c0442fa(a);if(a->b255==8){a->f92=table_0c248c74[2][0];a->f96=table_0c248c74[2][1];a->b1a1=76;}
 else{a->f92=table_0c248c74[(unsigned char)a->b1a3][0];a->f96=table_0c248c74[(unsigned char)a->b1a3][1];a->b1a1=(unsigned char)a->b1a3*2+75;}
 a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;a->f108=-0.80357140303f;{float velocity=a->b1d2?a->f92:-a->f92;a->f92=velocity;}a->f104=0;func_0c048bb0(a,8);func_0c02a0c4(a,21,a->b1a3+12);}
void func_0c0dd08e(struct Actor *a){func_0c02a026(a);if(!a->b141){a->b6++;func_0c0451f2(a);func_0c0432ca(a);}}
