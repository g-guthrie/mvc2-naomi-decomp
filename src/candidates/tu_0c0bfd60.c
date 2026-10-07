/* Special-move checker and stance-state unit for one character (0x0c0bfd60-
 * 0x0c0c0f70). The section links at its native size and most functions match.
 * Open: retail tests the switch cases of 0x0c0c0b1e/0ba4 in the order 2,1,0
 * and those of 0x0c0c0c50/0cf4 in the orders 1,0,2 and 2,0,1, but SHC 5.0R31
 * emits ascending compares for every switch spelling tried (118 retail chains
 * are unsorted; none is reproduced yet). Those four switches use equivalent
 * spellings (dead case 3 labels included) chosen so the four functions keep
 * their combined native length. Other differences are r1/r2/r3 choices. */
#include "objects.h"
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *);
extern void func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *);
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c047664(struct Actor *,unsigned char *,unsigned char *);
extern void func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int);
extern int func_0c046d54(struct Actor *);
extern unsigned char func_0c046dd0(struct Actor *,int);
extern void func_0c044cbc(struct Actor *),func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern unsigned int dat_0c2467ac[];
extern unsigned char dat_0c245da0[],dat_0c245daa[],dat_0c245dba[],dat_0c245dca[],dat_0c245dda[],dat_0c245dea[],dat_0c245dfa[],dat_0c245e0a[],dat_0c245e1a[];
extern unsigned char dat_0c245d58[],dat_0c245d5c[],dat_0c245d60[],dat_0c245d64[],dat_0c245d68[],dat_0c245d6c[];
extern struct ActorFlags *dat_0c2d6f84;
extern short dat_0c24681c[];
extern void (*table_0c246824[])(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern unsigned char dat_0c245d70[],dat_0c245d74[],dat_0c245d78[],dat_0c245d7c[],dat_0c245d80[],dat_0c245d84[],dat_0c245d88[],dat_0c245d8c[],dat_0c245d90[],dat_0c245d94[],dat_0c245d98[],dat_0c245d9c[];
extern void (*table_0c246834[])(struct Actor *);
extern void func_0c043352(struct Actor *),func_0c044df4(struct Actor *),func_0c0437b8(struct Actor *),func_0c0438de(struct Actor *),func_0c15ccc8(struct Actor *,int),func_0c1a9cf0(struct Actor *,int);
extern void func_0c0421f4(struct Actor *),func_0c0420f8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c048bb0(struct Actor *,int);
extern char func_0c02a026(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
unsigned char func_0c0bfe50(struct Actor *),func_0c0bfeae(struct Actor *),func_0c0bff3c(struct Actor *),func_0c0bffa4(struct Actor *),func_0c0bffea(struct Actor *);
unsigned char func_0c0c0076(struct Actor *),func_0c0c011a(struct Actor *),func_0c0c01ae(struct Actor *),func_0c0c0218(struct Actor *),func_0c0c02e4(struct Actor *);
int func_0c0c02a6(struct Actor *),func_0c0c0348(struct Actor *),func_0c0c037e(struct Actor *),func_0c0c03da(struct Actor *);
void func_0c0c04f0(struct Actor *),func_0c0c0592(struct Actor *),func_0c0c065a(struct Actor *),func_0c0c0700(struct Actor *);
void func_0c0c07f6(struct Actor *),func_0c0c0808(struct Actor *),func_0c0c091e(struct Actor *),func_0c0c0a64(struct Actor *),func_0c0c0b1e(struct Actor *),func_0c0c0ba4(struct Actor *),func_0c0c0c50(struct Actor *),func_0c0c0cf4(struct Actor *),func_0c0c0d8e(struct Actor *),func_0c0c0e08(struct Actor *),func_0c0c0e52(struct Actor *);

void func_0c0bfd60(struct Actor *a)
{
 register unsigned int i;
 register unsigned int limit=112;
 register unsigned int *out=*((unsigned int **)((char *)a+0x428));
 register unsigned int *in=dat_0c2467ac;
 i=0;
copy_next:
 *(unsigned int *)((char *)out+i)=*(unsigned int *)((char *)in+i);
 i+=4;
 if(i<limit)goto copy_next;
}
void func_0c0bfd7c(struct Actor *a)
{
 if(func_0c0465cc(a))return;
 if(func_0c046b6c(a))return;
 if(func_0c0469f4(a))return;
 if(func_0c046d3c(a))return;
 if(func_0c0bff3c(a))return;
 if(func_0c0bffa4(a))return;
 if(func_0c0bffea(a))return;
 if(func_0c0bfe50(a))return;
 if(func_0c0bfeae(a))return;
 if(func_0c0c0076(a))return;
 if(func_0c0c01ae(a))return;
 if(func_0c0c011a(a))return;
 if(func_0c0c0218(a))return;
 if(func_0c0c02a6(a))return;
 if(func_0c0c02e4(a))return;
 func_0c045f1c(a);func_0c0463fc(a);
}
unsigned char func_0c0bfe50(struct Actor *a)
{
 if(!func_0c047664(a,dat_0c245da0,a->x364))goto fail;
 if(a->b1f9==2 && !a->b1fc){if(a->b1d4){fail:return 0;}a->b1d4++;}
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=0;
 func_0c045248(a,21);return 1;
}
unsigned char func_0c0bfeae(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c245daa,a->x36c))goto fail;
 if(a->b1f9==2){if(a->b1d4 && !a->b1fc){fail:return 0;}a->b1d4++;}
 func_0c047aac(a,a->x36c);
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=2;
 func_0c045248(a,21);return 1;
}
unsigned char func_0c0bff3c(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c245dba,a->x38c)||!*a->p40c)goto fail;
 if(a->b1f9==2){if(a->b1d4 && !a->b1fc){fail:return 0;}a->b1d4++;}
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=7;
 func_0c045248(a,29);return 1;
}
unsigned char func_0c0bffa4(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c245dca,a->x374))return 0;
 else if(!*a->p40c)return 0;
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=4;
 func_0c045248(a,29);return 1;
}
unsigned char func_0c0bffea(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c245dda,a->x37c)||!*a->p40c)goto fail;
 if(a->b1f9==2){if(a->b1d4 && !a->b1fc){fail:return 0;}a->b1d4++;}
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=5;
 func_0c045248(a,29);return 1;
}
unsigned char func_0c0c0076(struct Actor *a)
{
 struct ActorSubMoveBytes *sub=(struct ActorSubMoveBytes *)&a->sub2a4;unsigned char *cmd=dat_0c245dea;
 if(!sub->b8){
  if(!func_0c046e7e(a,cmd,a->x384)||a->b1f9==2||sub->b5||sub->b6||sub->b7)goto fail;
  func_0c047aac(a,a->x384);
 }else{
  if(!func_0c046e7e(a,cmd,a->x384))goto fail;
  if(a->b1f9==2){if(a->b1d4 && !a->b1fc){fail:return 0;}a->b1d4++;}
 }
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=6;
 func_0c045248(a,21);return 1;
}
unsigned char func_0c0c011a(struct Actor *a)
{
 struct ActorSubMoveBytes *sub=(struct ActorSubMoveBytes *)&a->sub2a4;int zero;
 if(sub->b3||!func_0c046e7e(a,dat_0c245dfa,a->x394))return 0;
 func_0c047aac(a,a->x394);
 zero=0;a->b5=zero;a->b7=zero;a->b6=zero;a->b1e9=12;
 func_0c045248(a,21);
 if(!a->b525)sub->b26=zero;else sub->b26=a->b1fe;
 return 1;
}
unsigned char func_0c0c01ae(struct Actor *a)
{
 struct ActorSubMoveBytes *sub=(struct ActorSubMoveBytes *)&a->sub2a4;
 if(sub->b3||!func_0c046e7e(a,dat_0c245e0a,a->x39c))return 0;
 func_0c047aac(a,a->x39c);
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=12;
 func_0c045248(a,21);
 if(!a->b525)sub->b26=1;else sub->b26=a->b1fe;
 return 1;
}
unsigned char func_0c0c0218(struct Actor *a)
{
 struct ActorSubMoveBytes *sub=(struct ActorSubMoveBytes *)&a->sub2a4;
 if(sub->b3||!func_0c046e7e(a,dat_0c245e1a,a->x3a4))return 0;
 func_0c047aac(a,a->x3a4);
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=12;
 func_0c045248(a,21);
 if(!a->b525)sub->b26=2;else sub->b26=a->b1fe;
 return 1;
}
int func_0c0c02a6(struct Actor *a)
{
 if(!func_0c046d54(a))goto fail;
 if(!*a->p40c){fail:return 0;}
 a->b1e9=8;a->b5=0;a->b7=0;a->b6=0;
 func_0c045248(a,29);return 1;
}
unsigned char func_0c0c02e4(struct Actor *a)
{
 if(!func_0c046dd0(a,3))return 0;
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=3;
 func_0c045248(a,21);return 1;
}
int func_0c0c031c(struct Actor *a)
{
 if(func_0c0c0348(a)||func_0c0c037e(a)||func_0c0c03da(a))return 1;
 return 0;
}
int func_0c0c0348(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c245dba,a->x38c))return 0;
 else if(!*a->p40c)return 0;
 a->b258=7;return 1;
}
int func_0c0c037e(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c245dca,a->x374))return 0;
 else if(!*a->p40c)return 0;
 a->b258=4;return 1;
}
int func_0c0c03da(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c245dda,a->x37c))return 0;
 else if(!*a->p40c)return 0;
 a->b258=5;return 1;
}
void func_0c0c0410(struct Actor *a)
{
 struct ActorSubMoveBytes *sub=(struct ActorSubMoveBytes *)&a->sub2a4;
 if(!a->b1a0 && sub->s30)sub->s30=sub->s30-1;
 if(sub->b13){
  if(a->b1a0)a->f52+=(float)dat_0c24681c[dat_0c2d6f84->flags&3]*1.66666663f;
  else sub->b13=0;
 }
}
void func_0c0c0466(struct Actor *a){table_0c246824[a->b1ff](a);}
void func_0c0c047a(struct Actor *a){func_0c044cbc(a);if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0c0700(a);else func_0c0c065a(a);}else if(a->b1f9==1)func_0c0c0592(a);else func_0c0c04f0(a);}
void func_0c0c04f0(struct Actor *a){int zero=0;switch(a->b1e8){case 0:a->b158=zero;a->b1a1=zero;func_0c0346da(a,20);a->p3f4=dat_0c245d58;a->b1a7=zero;break;case 1:{int mode=1;a->b158=mode;a->b1a1=mode;func_0c0346da(a,21);a->p3f4=dat_0c245d5c;a->b1a7=mode;break;}case 2:{int mode=2;a->b158=mode;a->b1a1=mode;a->p3f4=dat_0c245d60;a->b1a7=mode;break;}}a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,7,a->b158);}
void func_0c0c0592(struct Actor *a){int zero=0;switch(a->b1e8){case 0:a->b158=zero;a->b1a1=6;func_0c0346da(a,20);a->p3f4=dat_0c245d58;a->b1a7=zero;break;case 1:a->b158=1;a->b1a1=7;func_0c0346da(a,21);a->p3f4=dat_0c245d5c;a->b1a7=1;break;case 2:a->b158=2;a->b1a1=8;a->p3f4=dat_0c245d60;a->b1a7=2;break;}a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,9,a->b158);}
void func_0c0c065a(struct Actor *a){int zero=0;switch(a->b1e8){case 0:a->b158=zero;a->b1a1=3;func_0c0346da(a,20);a->p3f4=dat_0c245d64;a->b1a7=zero;break;case 1:a->b158=1;a->b1a1=4;func_0c0346da(a,21);a->p3f4=dat_0c245d68;a->b1a7=1;break;case 2:a->b158=2;a->b1a1=5;a->p3f4=dat_0c245d6c;a->b1a7=2;break;}a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,8,a->b158);}
void func_0c0c0700(struct Actor *a){int zero=0;switch(a->b1e8){case 0:a->b158=zero;a->b1a1=9;func_0c0346da(a,20);a->p3f4=dat_0c245d64;a->b1a7=zero;break;case 1:a->b158=1;a->b1a1=10;func_0c0346da(a,21);a->p3f4=dat_0c245d68;a->b1a7=1;break;case 2:a->b158=2;a->b1a1=11;a->p3f4=dat_0c245d6c;a->b1a7=2;break;}a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,10,a->b158);}
void func_0c0c07ce(struct Actor *a)
{
 if(!a->b1fe){if(a->b1d6&15)goto call;}
 if(a->b1fe){if(!(a->b1d6&0xf0))return;call:func_0c0c07f6(a);}
}
void func_0c0c07f6(struct Actor *a){if((unsigned char)a->b1fe==1)func_0c0c091e(a);else func_0c0c0808(a);}
void func_0c0c0808(struct Actor *a){int zero=0;switch(a->b1e8){case 0:a->b158=zero;a->b1a1=12;func_0c0346da(a,20);if(!a->b1fc)a->p3f4=dat_0c245d70;else a->p3f4=dat_0c245d88;a->b1a7=zero;break;case 1:a->b158=1;a->b1a1=13;func_0c0346da(a,21);if(!a->b1fc)a->p3f4=dat_0c245d74;else a->p3f4=dat_0c245d8c;a->b1a7=1;break;case 2:a->b158=2;a->b1a1=14;if(!a->b1fc)a->p3f4=dat_0c245d78;else a->p3f4=dat_0c245d90;a->b1a7=2;break;}a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,11,a->b158);
 if(a->b1d6&15)a->b1d6=a->b1d6-1;
}
void func_0c0c091e(struct Actor *a){int zero=0;switch(a->b1e8){case 0:a->b158=zero;a->b1a1=15;func_0c0346da(a,20);if(!a->b1fc)a->p3f4=dat_0c245d7c;else a->p3f4=dat_0c245d94;a->b1a7=zero;break;case 1:a->b158=1;a->b1a1=16;func_0c0346da(a,21);if(!a->b1fc)a->p3f4=dat_0c245d80;else a->p3f4=dat_0c245d98;a->b1a7=1;break;case 2:a->b158=2;a->b1a1=17;func_0c0346da(a,22);if(!a->b1fc)a->p3f4=dat_0c245d84;else a->p3f4=dat_0c245d9c;a->b1a7=2;break;}a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,12,a->b158);
 if(a->b1d6&0xf0)a->b1d6=a->b1d6-16;
}
void func_0c0c0a42(struct Actor *a){table_0c246834[a->b1ff](a);}
void func_0c0c0a56(struct Actor *a){func_0c043352(a);func_0c0c0a64(a);}
void func_0c0c0a64(struct Actor *a)
{
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c044df4(a);
 if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0c0cf4(a);else func_0c0c0c50(a);}
 else{if(a->b1f9==1)func_0c0c0ba4(a);else func_0c0c0b1e(a);}
}
void func_0c0c0b1e(struct Actor *a)
{
 int zero;
 if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
 zero=0;
 switch(a->b1e8){
 case 2:if(a->b141){a->b141=zero;func_0c15ccc8(a,0);func_0c1a9cf0(a,0);}break;
 case 1:if(a->b141){a->b141=zero;if(!a->w130){a->f92=-5.0f;a->f104=0.3125f;}else{a->f92=5.0f;a->f104=-0.3125f;}}break;
 case 0:break;
 }
}
void func_0c0c0ba4(struct Actor *a)
{
 int zero;
 if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
 zero=0;
 switch(a->b1e8){
 case 2:if(a->b141){a->b141=zero;func_0c15ccc8(a,1);func_0c1a9cf0(a,1);}break;
 case 1:if(a->b141){a->b141=zero;if(!a->w130){a->f92=-5.0f;a->f104=0.3125f;}else{a->f92=5.0f;a->f104=-0.3125f;}}break;
 case 0:break;
 case 3:break;
 }
}
void func_0c0c0c50(struct Actor *a)
{
 switch(a->b1e8){
 case 1:
  if(func_0c02a026(a)<0)goto die;
  if(!a->b6 && a->b141){float d;a->b141=0;a->b6++;d=-53.3333321f;if(!a->w130)a->f52=a->f52+d;else a->f52=a->f52-d;}
  break;
 case 0:case 2:
  if(func_0c02a026(a)<0)die:func_0c0437b8(a);
  break;
 case 3:break;
 }
}
void func_0c0c0cf4(struct Actor *a)
{
 switch(a->b1e8){
 case 2:
  if(func_0c02a026(a)<0)goto die;
  if(!a->b6 && a->b141){a->b141=0;a->b6++;if(!a->w130){a->f92=-14.166666031f;a->f104=0.41666666f;}else{a->f92=14.166666031f;a->f104=-0.41666666f;}}
  break;
 case 0:case 1:
  if(func_0c02a026(a)<0)die:func_0c0437b8(a);
  break;
 }
}
void func_0c0c0d78(struct Actor *a){func_0c0421f4(a);func_0c0420f8(a);func_0c0c0d8e(a);}
void func_0c0c0d8e(struct Actor *a)
{
 func_0c042018(a);func_0c0421b8(a);
 if((unsigned char)a->b1fe==1)func_0c0c0e52(a);else func_0c0c0e08(a);
 if(func_0c044e52(a))func_0c044f1c(a);
}
void func_0c0c0e08(struct Actor *a)
{
 if(func_0c02a026(a)<0){func_0c0438de(a);return;}
 if(a->b1e8==2 && a->b141){a->b141=0;func_0c15ccc8(a,2);func_0c1a9cf0(a,2);}
}
void func_0c0c0e52(struct Actor *a){if(func_0c02a026(a)<0)func_0c0438de(a);}
void func_0c0c0e74(struct Actor *a){if(!a->b6){int zero;func_0c044cbc(a);zero=0;a->b6++;a->b1a1=22;a->b1f9=zero;func_0c02a0c4(a,20,3);a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;func_0c048bb0(a,5);}if(a->b1ff==3)func_0c043352(a);a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c044df4(a);if(func_0c02a026(a)<0)func_0c0437b8(a);}
