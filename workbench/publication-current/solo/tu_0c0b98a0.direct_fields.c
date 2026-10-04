#include "objects.h"
extern unsigned int dat_0c245484[];
extern unsigned char func_0c046e7e(struct Actor *,unsigned char *,unsigned char *);
extern void func_0c045248(struct Actor *,int),func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *),func_0c0bbb16(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern struct ActorFlags *dat_0c2d6f84;
extern signed char dat_0c22a81c[];
extern void (*table_0c2454f4[])(struct Actor *);
extern unsigned char dat_0c2453c4[],dat_0c2453d4[],dat_0c2453e4[],dat_0c2453f4[],dat_0c245404[],dat_0c245414[],dat_0c245424[],dat_0c245434[],dat_0c245444[],dat_0c245454[],dat_0c245464[],dat_0c245474[];
int func_0c0b9936(struct Actor *),func_0c0b99a0(struct Actor *),func_0c0b99dc(struct Actor *),func_0c0b9a18(struct Actor *),func_0c0b9a54(struct Actor *),func_0c0b9a90(struct Actor *),func_0c0b9af4(struct Actor *),func_0c0b9b30(struct Actor *),func_0c0b9b6c(struct Actor *),func_0c0b9ba8(struct Actor *),func_0c0b9be4(struct Actor *),func_0c0b9c48(struct Actor *);
void func_0c0b98a0(struct Actor *a){register unsigned int i;register unsigned int limit=112;register unsigned int *out=(unsigned int *)a->p428;register unsigned int *in=dat_0c245484;i=0;copy_next:*(unsigned int *)((char *)out+i)=*(unsigned int *)((char *)in+i);i+=4;if(i<limit)goto copy_next;}
void func_0c0b98bc(struct Actor *a){
if(func_0c0b9936(a))return;
if(func_0c0b99a0(a))return;
if(func_0c0b99dc(a))return;
if(func_0c0b9a18(a))return;
if(func_0c0b9a54(a))return;
if(func_0c0b9a90(a))return;
if(func_0c0b9af4(a))return;
if(func_0c0b9b30(a))return;
if(func_0c0b9b6c(a))return;
if(func_0c0b9ba8(a))return;
if(func_0c0b9be4(a))return;
if(func_0c0b9c48(a))return;
func_0c045f1c(a);func_0c0463fc(a);}
int func_0c0b9936(struct Actor *a){
if(!func_0c046e7e(a,dat_0c2453c4,a->x364))return 0;if(!*a->p40c){failed:return 0;}a->b5=0;a->b7=0;a->b6=0;a->b1e9=0;func_0c045248(a,29);return 1;}
int func_0c0b99a0(struct Actor *a){
if(!func_0c046e7e(a,dat_0c2453d4,a->x36c))return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=1;func_0c045248(a,21);return 1;}
int func_0c0b99dc(struct Actor *a){
if(!func_0c046e7e(a,dat_0c2453e4,a->x374))return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=2;func_0c045248(a,21);return 1;}
int func_0c0b9a18(struct Actor *a){
if(!func_0c046e7e(a,dat_0c2453f4,a->x37c))return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=3;func_0c045248(a,21);return 1;}
int func_0c0b9a54(struct Actor *a){
if(!func_0c046e7e(a,dat_0c245404,a->x384))return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=4;func_0c045248(a,21);return 1;}
int func_0c0b9a90(struct Actor *a){
if(!func_0c046e7e(a,dat_0c245414,a->x38c))return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=5;func_0c045248(a,21);return 1;}
int func_0c0b9af4(struct Actor *a){
if(!func_0c046e7e(a,dat_0c245424,a->x394))return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=6;func_0c045248(a,21);return 1;}
int func_0c0b9b30(struct Actor *a){
if(!func_0c046e7e(a,dat_0c245434,a->x39c))return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=7;func_0c045248(a,21);return 1;}
int func_0c0b9b6c(struct Actor *a){
if(!func_0c046e7e(a,dat_0c245444,a->x3a4))return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=8;func_0c045248(a,21);return 1;}
int func_0c0b9ba8(struct Actor *a){
if(!func_0c046e7e(a,dat_0c245454,a->x3ac))return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=9;func_0c045248(a,21);return 1;}
int func_0c0b9be4(struct Actor *a){
if(!func_0c046e7e(a,dat_0c245464,a->x3b4))return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=10;func_0c045248(a,21);return 1;}
int func_0c0b9c48(struct Actor *a){
if(!func_0c046e7e(a,dat_0c245474,a->x3cc))return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=11;func_0c045248(a,21);return 1;}
#define STATE280(a) (((char *)(a)->pad10b2)[4])
#define STATE281(a) (((char *)(a)->pad10b2)[5])
#define STATE283(a) (((char *)(a)->pad10b2)[7])
#define OUT12D(a) (((char *)(a)->pad6)[0])
#define OUT12E(a) (*(short *)&(a)->pad6[1])
void func_0c0b9c84(struct Actor *a)
{
 union ActorSubEffectState *state=(union ActorSubEffectState *)&a->sub2a4;
 signed char *table;short displacement;float one=1.0f;int one_integer=1;
 if(!a->b1a0){state->bytes[1]=0;state->bytes[0]=0;}
 if(a->b1a0&&STATE281(a)){
  a->f116=0.800000012f;((struct Obj_tu5_03 *)a)->f120=one;if(a->b1a0&one_integer)((struct Obj_tu5_03 *)a)->f120=0.0f;((struct Obj_tu5_03 *)a)->f124=0.0f;((struct Obj_tu5_03 *)a)->f128=0.0f;
 }
 if(!a->b1a0)state->parameter.f4=one;
 a->f264=one;a->b12c=one_integer;a->b1f5=2;a->b1f4=2;OUT12D(a)=-1;
 table=dat_0c22a81c;OUT12E(a)=table[*(unsigned char *)&a->l144];
 if(STATE281(a))goto active;
 if(a->b1a0&&!a->b5&&a->b19f){STATE281(a)++;goto active;}
 if(STATE283(a)&&!a->b1a0){if(!--STATE283(a))STATE280(a)=0;}
 return;
active:
 if(!a->b1a0){STATE281(a)=0;((struct Obj_tu5_03 *)a)->f120=0.0f;return;}
 displacement=4-((*(short *)&dat_0c2d6f84->i90)&1)*8;
 if(a->w130)displacement=-displacement;
 a->f52+=displacement*1.66666663f;
 if(!(a->b1a0&one_integer)&&STATE281(a)){OUT12D(a)=one_integer;OUT12E(a)=table[*(unsigned char *)&a->l144]+3;}
}
void func_0c0b9dee(struct Actor *a){func_0c0bbb16(a);}
void func_0c0b9df4(struct Actor *a){func_0c0bbb16(a);}
void func_0c0b9dfa(struct Actor *a){table_0c2454f4[a->b6](a);}
void func_0c0b9e0c(struct Actor *a)
{
 func_0c02a026(a);if(!a->b141){a->b6++;a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;a->f92=a->b1d2?10.83333302f:-10.83333302f;}
}
