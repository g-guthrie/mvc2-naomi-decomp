/* Candidate: func_0c05c59e case 2 and func_0c05c6cc w1fa&0x2000 stance branches differ in register allocation and delay-slot hoisting; everything else matches. */
#include "objects.h"
extern unsigned int dat_0c23fb78[];
extern unsigned char dat_0c23fafc[],dat_0c23fb0a[],dat_0c23fb18[],dat_0c23fb26[],dat_0c23fb36[],dat_0c23fb46[];
extern unsigned char dat_0c23fab4[],dat_0c23fab8[],dat_0c23fabc[],dat_0c23fac0[],dat_0c23fac4[],dat_0c23fac8[];
extern unsigned char dat_0c23facc[],dat_0c23fad0[],dat_0c23fad4[],dat_0c23fad8[],dat_0c23fadc[],dat_0c23fae0[];
extern unsigned char dat_0c23fae4[],dat_0c23fae8[],dat_0c23faec[],dat_0c23faf0[],dat_0c23faf4[],dat_0c23faf8[];
extern float dat_0c23fbe8[];
extern void (*table_0c23fc00[])(struct Actor *),(*table_0c23fc10[])(struct Actor *),(*table_0c23fc20[])(struct Actor *),(*table_0c23fc28[])(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *);
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c047068(struct Actor *,unsigned char *,unsigned char *),func_0c046dd0(struct Actor *,int);
extern int func_0c046d54(struct Actor *),func_0c0435ce(struct Actor *,float);
extern char func_0c02a026(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *),func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int);
extern void func_0c044cbc(struct Actor *),func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern void func_0c043352(struct Actor *),func_0c044df4(struct Actor *),func_0c0437b8(struct Actor *),func_0c0438de(struct Actor *);
extern void func_0c0421f4(struct Actor *),func_0c0420f8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *);
unsigned char func_0c05bcb8(struct Actor *a),func_0c05bd16(struct Actor *a),func_0c05bd5c(struct Actor *a),func_0c05bdf0(struct Actor *a),func_0c05be40(struct Actor *a),func_0c05be90(struct Actor *a);
int func_0c05bf24(struct Actor *a),func_0c05bf5e(struct Actor *a);
int func_0c05bfca(struct Actor *a),func_0c05c000(struct Actor *a),func_0c05c058(struct Actor *a);
void func_0c05c0ee(struct Actor *a),func_0c05c228(struct Actor *a),func_0c05c2fc(struct Actor *a),func_0c05c48e(struct Actor *a);
void func_0c05c58c(struct Actor *a),func_0c05c59e(struct Actor *a),func_0c05c6cc(struct Actor *a);
void func_0c05c848(struct Actor *a),func_0c05c922(struct Actor *a),func_0c05c944(struct Actor *a),func_0c05c966(struct Actor *a),func_0c05c99c(struct Actor *a);
void func_0c05ca14(struct Actor *a),func_0c05ca56(struct Actor *a),func_0c05ca78(struct Actor *a),func_0c05ca9a(struct Actor *a);
void func_0c05bbe8(struct Actor *a)
{
    register unsigned int i;
    register unsigned int limit = 112;
    register unsigned int *out = *((unsigned int **)((char *)a + 0x428));
    register unsigned int *in = dat_0c23fb78;
    i = 0;
copy_next:
    *(unsigned int *)((char *)out + i) = *(unsigned int *)((char *)in + i);
    i += 4;
    if (i < limit) goto copy_next;
}
void func_0c05bc04(struct Actor *a)
{
 if(func_0c0465cc(a))return;
 if(func_0c046b6c(a))return;
 if(func_0c0469f4(a))return;
 if(func_0c046d3c(a))return;
 if(func_0c05bcb8(a))return;
 if(func_0c05be90(a))return;
 if(func_0c05bd16(a))return;
 if(func_0c05bd5c(a))return;
 if(func_0c05bdf0(a))return;
 if(func_0c05be40(a))return;
 if(func_0c05bf5e(a))return;
 if(func_0c05bf24(a))return;
 func_0c045f1c(a);func_0c0463fc(a);
}
unsigned char func_0c05bcb8(struct Actor *a)
{
 struct ActorSub2a4 *sub=&a->sub2a4;
 if(!func_0c047068(a,dat_0c23fafc,a->x36c))goto fail;
 func_0c047aac(a,a->x36c);
 if(sub->b2){fail:return 0;}
 {int zero=0;a->b5=zero;a->b7=zero;a->b6=zero;a->b1e9=zero;}
 func_0c045248(a,21);return 1;
}
unsigned char func_0c05bd16(struct Actor *a)
{
 if(!func_0c047068(a,dat_0c23fb0a,a->x374))return 0;
 func_0c047aac(a,a->x374);
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=1;
 func_0c045248(a,21);return 1;
}
unsigned char func_0c05bd5c(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c23fb18,a->x37c))goto fail;
 if(a->f41c+112.0f>a->f56)goto fail;
 if(a->b1d4){fail:return 0;}
 a->b1d4++;
 func_0c047aac(a,a->x37c);
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=2;
 func_0c045248(a,21);return 1;
}
unsigned char func_0c05bdf0(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c23fb26,a->x384))return 0;
 else if(!*a->p40c)return 0;
 func_0c047aac(a,a->x384);
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=3;
 func_0c045248(a,29);return 1;
}
unsigned char func_0c05be40(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c23fb36,a->x38c))return 0;
 else if(!*a->p40c)return 0;
 func_0c047aac(a,a->x38c);
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=4;
 func_0c045248(a,29);return 1;
}
unsigned char func_0c05be90(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c23fb46,a->x394)||!*a->p40c)goto fail;
 if(a->b1f9==2){if(!a->b1fc){if(a->b1d4){fail:return 0;}}}
 func_0c047aac(a,a->x394);
 a->b5=0;a->b7=0;a->b6=0;a->b1e9=7;
 func_0c045248(a,29);return 1;
}
int func_0c05bf24(struct Actor *a)
{
 if(!func_0c046dd0(a,6))return 0;
 a->b1e9=6;a->b5=0;
 func_0c045248(a,21);
 a->b6=a->b7=0;return 1;
}
int func_0c05bf5e(struct Actor *a)
{
 if(!func_0c046d54(a))return 0;
 else if(!*a->p40c)return 0;
 a->b1e9=5;a->b5=0;
 func_0c045248(a,29);
 a->b6=a->b7=0;return 1;
}
int func_0c05bf9e(struct Actor *a)
{
 if(func_0c05bfca(a)||func_0c05c000(a)||func_0c05c058(a))return 1;
 return 0;
}
int func_0c05bfca(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c23fb36,a->x38c))return 0;
 else if(!*a->p40c)return 0;
 a->b258=4;return 1;
}
int func_0c05c000(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c23fb46,a->x394))return 0;
 else if(!*a->p40c)return 0;
 a->b258=7;return 1;
}
int func_0c05c058(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c23fb26,a->x384))return 0;
 else if(!*a->p40c)return 0;
 a->b258=3;return 1;
}
void func_0c05c08e(void){}
void func_0c05c092(struct Actor *a){table_0c23fc00[a->b1ff](a);}
void func_0c05c0a6(struct Actor *a){func_0c044cbc(a);if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c05c48e(a);else func_0c05c2fc(a);}else if(a->b1f9==1)func_0c05c228(a);else func_0c05c0ee(a);}
void func_0c05c0ee(struct Actor *a)
{
 int zero=0,v;
 switch(a->b1e8){
 case 0:
  if(func_0c0435ce(a,dat_0c23fbe8[0])){a->b158=3;a->b1a1=66;}
  else{a->b158=zero;a->b1a1=zero;}
  func_0c0346da(a,20);a->p3f4=dat_0c23fab4;a->b1a7=zero;a->pad2a2[0]=1;break;
 case 1:a->b158=4;a->b1a1=67;func_0c0346da(a,21);a->p3f4=dat_0c23fab8;a->b1a7=1;break;
 case 2:
  v=2;a->b158=v;a->b1a1=v;
  if(a->w1fa==0x800){a->b158=6;a->b1a1=18;}
  else if(a->w1fa==0x400){a->b158=5;a->b1a1=68;}
  func_0c0346da(a,22);a->p3f4=dat_0c23fabc;a->b1a7=v;break;
 }
 a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,7,a->b158);
}
void func_0c05c228(struct Actor *a){int zero=0;switch(a->b1e8){case 0:a->b158=zero;a->b1a1=6;func_0c0346da(a,20);a->p3f4=dat_0c23fab4;a->b1a7=zero;break;case 1:a->b158=1;a->b1a1=7;func_0c0346da(a,21);a->p3f4=dat_0c23fab8;a->b1a7=1;break;case 2:a->b158=2;a->b1a1=8;func_0c0346da(a,22);a->p3f4=dat_0c23fabc;a->b1a7=2;break;}a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,9,a->b158);}
void func_0c05c2fc(struct Actor *a)
{
 int zero=0;
 switch(a->b1e8){
 case 0:
  if(func_0c0435ce(a,dat_0c23fbe8[3])){a->b158=3;a->b1a1=69;}
  else{a->b158=zero;a->b1a1=3;}
  if(a->w1fa==0x400){a->b158=8;a->b1e8=97;a->b1a1=20;}
  func_0c0346da(a,20);a->p3f4=dat_0c23fac0;a->b1a7=zero;break;
 case 1:a->b158=4;a->b1a1=70;func_0c0346da(a,21);a->p3f4=dat_0c23fac4;a->b1a7=1;break;
 case 2:
  if(func_0c0435ce(a,dat_0c23fbe8[5])){a->b158=5;a->b1a1=71;}
  else{a->b158=2;a->b1a1=5;}
  if(a->w1fa==0x400){a->b158=6;a->b1e8=96;a->b1a1=19;a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;}
  if(a->w1fa==0x800){a->b158=7;a->b1a1=21;a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;}
  func_0c0346da(a,22);a->p3f4=dat_0c23fac8;a->b1a7=2;break;
 }
 a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,8,a->b158);
}
void func_0c05c48e(struct Actor *a){int zero=0;switch(a->b1e8){case 0:a->b158=zero;a->b1a1=9;func_0c0346da(a,20);a->p3f4=dat_0c23fac0;a->b1a7=zero;break;case 1:a->b158=1;a->b1a1=10;func_0c0346da(a,21);a->p3f4=dat_0c23fac4;a->b1a7=1;break;case 2:a->b158=2;a->b1a1=11;func_0c0346da(a,22);a->p3f4=dat_0c23fac8;a->b1a7=2;break;}a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,10,a->b158);}
void func_0c05c564(struct Actor *a)
{
 if((a->b1fe==0&&(a->b1d6&15))||(a->b1fe!=0&&(a->b1d6&0xf0)))func_0c05c58c(a);
}
void func_0c05c58c(struct Actor *a)
{
 if((unsigned char)a->b1fe==1)func_0c05c6cc(a);else func_0c05c59e(a);
}
void func_0c05c59e(struct Actor *a)
{
 int zero=0;
 switch(a->b1e8){
 case 0:
  a->b158=zero;a->b1a1=12;func_0c0346da(a,20);
  if(!a->b1fc)a->p3f4=dat_0c23facc;else a->p3f4=dat_0c23fae4;
  a->b1a7=zero;break;
 case 1:
  a->b158=1;a->b1a1=13;func_0c0346da(a,21);
  if(!a->b1fc)a->p3f4=dat_0c23fad0;else a->p3f4=dat_0c23fae8;
  a->b1a7=1;break;
 case 2:
  {int w=a->w1fa,m=0x2000;if(w&m)a->b158=5;else a->b158=2;}
  a->b1a1=14;func_0c0346da(a,22);
  if(!a->b1fc)a->p3f4=dat_0c23fad4;else a->p3f4=dat_0c23faec;
  a->b1a7=2;break;
 }
 a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,11,a->b158);
 if(a->b1d6&15)a->b1d6--;
}
void func_0c05c6cc(struct Actor *a)
{
 int zero=0;
 switch(a->b1e8){
 case 0:
  if(a->w1fa&0x2000)a->b158=zero;else a->b158=3;
  a->b1a1=15;func_0c0346da(a,20);
  if(!a->b1fc)a->p3f4=dat_0c23fad8;else a->p3f4=dat_0c23faf0;
  a->b1a7=zero;break;
 case 1:
  if(a->w1fa&0x2000)a->b158=4;else a->b158=1;
  a->b1a1=16;func_0c0346da(a,21);
  if(!a->b1fc)a->p3f4=dat_0c23fadc;else a->p3f4=dat_0c23faf4;
  a->b1a7=1;break;
 case 2:
  if(a->w1fa&0x2000)a->b158=5;else a->b158=2;
  a->b1a1=17;func_0c0346da(a,22);
  if(!a->b1fc)a->p3f4=dat_0c23fae0;else a->p3f4=dat_0c23faf8;
  a->b1a7=2;break;
 }
 a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,12,a->b158);
 if(a->b1d6&0xf0)a->b1d6-=16;
}
void func_0c05c826(struct Actor *a){table_0c23fc10[a->b1ff](a);}
void func_0c05c83a(struct Actor *a){func_0c043352(a);func_0c05c848(a);}
void func_0c05c848(struct Actor *a)
{
 if(a->b1e8==96){a->s28=0;func_0c05ca9a(a);return;}
 if(a->b1e8==97){a->s28=1;func_0c05ca9a(a);return;}
 if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c05c99c(a);else func_0c05c966(a);}
 else{if(a->b1f9==1)func_0c05c944(a);else func_0c05c922(a);}
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c044df4(a);
}
void func_0c05c922(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c05c944(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c05c966(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c05c99c(struct Actor *a)
{
 if(func_0c02a026(a)<0)func_0c0437b8(a);
 if(a->b1e8==2&&a->b141){int zero=0;a->b141=zero;func_0c0346da(a,22);a->b1a1=25;a->w1ac=zero;a->b19e=zero;*(unsigned int*)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;}
}
void func_0c05c9fe(struct Actor *a){func_0c0421f4(a);func_0c0420f8(a);func_0c05ca14(a);}
void func_0c05ca14(struct Actor *a)
{
 func_0c042018(a);func_0c0421b8(a);
 if((unsigned char)a->b1fe==1)func_0c05ca78(a);else func_0c05ca56(a);
 if(func_0c044e52(a))func_0c044f1c(a);
}
void func_0c05ca56(struct Actor *a){if(func_0c02a026(a)<0)func_0c0438de(a);}
void func_0c05ca78(struct Actor *a){if(func_0c02a026(a)<0)func_0c0438de(a);}
void func_0c05ca9a(struct Actor *a){table_0c23fc20[a->s28](a);}
void func_0c05caaa(struct Actor *a){table_0c23fc28[a->b6](a);}
