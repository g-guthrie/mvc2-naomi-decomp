/* Complete natural C candidate for 16b084..16c3f0; UNVERIFIED. */
#include "objects.h"
#define A(a) ((struct Actor *)(a))
#define FRAME(a) (*(short *)&(a)->sdc.w158)
#define FRAMEBYTE(a) (((signed char *)&A(a)->w150)[1])
/* Per-effect scratch at 0x88 caches the owner frame/id and stage selector.
 * The unsigned 16.16 horizontal offset at 0x9c is converted by native FLOAT
 * plus its unsigned-value correction; keep the stored word unsigned. */
#define STATE(a) ((short *)((char *)(a)+0x88))
#define STATE_BYTES(a) ((unsigned char *)((char *)(a)+0x88))
#define FIXED_X(a) (*(unsigned int *)((char *)(a)+0x9c))
extern struct LinkedActor *func_0c0374da(int,int,int);
extern signed char func_0c02a026(struct LinkedActor *);
extern int func_0c028642(struct LinkedActor *);
extern void func_0c02a0c4(struct LinkedActor *,int,int),func_0c037688(struct LinkedActor *),func_0c037d0c(struct LinkedActor *);
extern void func_0c0344a0(struct LinkedActor *,int),func_0c0346da(struct LinkedActor *,int),func_0c0288a8(struct LinkedActor *,int);
extern void func_0c1d330c(struct LinkedActor *,float *,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern struct Dat_13bb5c dat_0c2f8338;
extern unsigned char dat_0c2f833e;
extern float dat_0c2d926c,dat_0c22f7a8[];
extern signed char dat_0c22f7a0[],dat_0c22f7a5[];
extern unsigned char dat_0c22f7c4[];
extern void (*table_0c252228[])(struct LinkedActor *),(*table_0c252254[])(struct LinkedActor *),(*table_0c25225c[])(struct LinkedActor *),(*table_0c252264[])(struct LinkedActor *),(*table_0c252274[])(struct LinkedActor *),(*table_0c25227c[])(struct LinkedActor *),(*table_0c252288[])(struct LinkedActor *),(*table_0c252290[])(struct LinkedActor *),(*table_0c252298[])(struct LinkedActor *),(*table_0c2522a4[])(struct LinkedActor *),(*table_0c2522b4[])(struct LinkedActor *),(*table_0c2522c4[])(struct LinkedActor *),(*table_0c2522d4[])(struct LinkedActor *),(*table_0c2522e4[])(struct LinkedActor *),(*table_0c2522f0[])(struct LinkedActor *),(*table_0c22f7b8[])(struct LinkedActor *);
struct LinkedActor * func_0c16b084(struct LinkedActor *owner,unsigned char mode);
struct LinkedActor * func_0c16b100(struct LinkedActor *owner);
void func_0c16b15e(struct LinkedActor *a);
void func_0c16b172(struct LinkedActor *a);
void func_0c16b1c0(struct LinkedActor *a);
void func_0c16b256(struct LinkedActor *a);
void func_0c16b2c2(struct LinkedActor *a);
void func_0c16b318(struct LinkedActor *a);
void func_0c16b3a2(struct LinkedActor *a);
void func_0c16b3d2(struct LinkedActor *a);
void func_0c16b3fe(struct LinkedActor *a);
void func_0c16b4c8(struct LinkedActor *a);
void func_0c16b4e6(struct LinkedActor *a);
void func_0c16b4f8(struct LinkedActor *a);
void func_0c16b5a2(struct LinkedActor *a);
void func_0c16b5b4(struct LinkedActor *a);
void func_0c16b614(struct LinkedActor *a);
void func_0c16b656(struct LinkedActor *a);
void func_0c16b664(struct LinkedActor *a);
void func_0c16b676(struct LinkedActor *a);
void func_0c16b700(struct LinkedActor *a);
void func_0c16b72e(struct LinkedActor *a);
void func_0c16b7a0(struct LinkedActor *a);
void func_0c16b7b8(struct LinkedActor *a);
void func_0c16b7c8(struct LinkedActor *a);
void func_0c16b7da(struct LinkedActor *a);
void func_0c16b85a(struct LinkedActor *a);
void func_0c16b86c(struct LinkedActor *a);
void func_0c16b8a0(struct LinkedActor *a);
void func_0c16b908(struct LinkedActor *a);
void func_0c16b916(struct LinkedActor *a);
void func_0c16b928(struct LinkedActor *a);
void func_0c16ba7a(struct LinkedActor *a);
void func_0c16bb1c(struct LinkedActor *a);
void func_0c16bb20(struct LinkedActor *a);
void func_0c16bb24(struct LinkedActor *a);
void func_0c16bb5c(struct LinkedActor *a);
void func_0c16bc6c(struct LinkedActor *a);
void func_0c16bd80(struct LinkedActor *a);
void func_0c16bda6(struct LinkedActor *a);
void func_0c16bdd0(struct LinkedActor *a);
void func_0c16be00(struct LinkedActor *a);
void func_0c16bf3e(struct LinkedActor *a);
void func_0c16bfa2(struct LinkedActor *a);
void func_0c16bfa6(struct LinkedActor *a);
void func_0c16c008(struct LinkedActor *a);
void func_0c16c116(struct LinkedActor *a);
void func_0c16c178(struct LinkedActor *a);
void func_0c16c1bc(struct LinkedActor *a);
void func_0c16c2e6(struct LinkedActor *a);
void func_0c16c340(struct LinkedActor *a);
void func_0c16c3c4(struct LinkedActor *a);
void func_0c16c3d0(struct LinkedActor *a);

struct LinkedActor * func_0c16b084(struct LinkedActor *owner,unsigned char mode)
{struct LinkedActor *a;short *state;
if(A(owner)->b255==6 && mode==9){if(!(a=func_0c0374da(0,2,0)))goto failed;a->p16=func_0c16c340;}
else {if(!(a=func_0c0374da(0,1,0)))goto failed;a->p16=func_0c16b15e;}
a->p24=owner;a->b32=mode;a->w38=0x2800;state=STATE(a);state[1]=a->b1=owner->b1;state[0]=FRAME(owner);return a;failed:return 0;}

struct LinkedActor * func_0c16b100(struct LinkedActor *owner)
{struct LinkedActor *a;short *state;
if((a=func_0c0374da((int)owner,1,2))){a->p16=func_0c16b15e;a->p24=owner;A(a)->b19e=0;A(a)->b19f=0;a->b32=STATE(owner)[8]+5;a->w38=0x2800;state=STATE(a);state[1]=a->b1=owner->p24->b1;state[0]=FRAME(owner);}return a;}

void func_0c16b15e(struct LinkedActor *a)
{table_0c252228[a->b32](a);}

void func_0c16b172(struct LinkedActor *a)
{if(FRAME(a->p24)!=STATE(a)[0]){func_0c16c3c4(a);return;}table_0c252254[a->b4](a);}

void func_0c16b1c0(struct LinkedActor *a)
{a->b4++;a->sdc=a->p24->sdc;a->sdc.b12c=1;a->b2=a->p24->b2;a->b1=a->p24->b1;a->v80.x=a->p24->v80.x;a->v80.y=a->p24->v80.y;a->b1a3=a->p24->b1a3;a->b1a4=a->p24->b1a4;a->b48=a->p24->b48;a->v80=a->p24->v80;a->b36=a->p24->b36;a->sdc.b12c=1;a->s28=-1;func_0c02a0c4(a,23,dat_0c22f7a0[STATE_BYTES(a)[13]]);func_0c16b256(a);}

void func_0c16b256(struct LinkedActor *a)
{unsigned char frame;struct LinkedActor *owner=a->p24;a->f52=owner->f52;a->f56=owner->f56;a->b36=owner->b36;
for(;;){frame=FRAMEBYTE(owner)&254;if(!(signed char)frame){a->sdc.b12c=0;return;}if((signed char)frame<0){func_0c16c3c4(a);return;}if(FRAMEBYTE(a)==(signed char)frame){a->sdc.b12c=1;return;}func_0c02a026(a);}}

void func_0c16b2c2(struct LinkedActor *a)
{if(FRAME(a->p24)!=STATE(a)[0]){func_0c16c3c4(a);return;}table_0c25225c[a->b4](a);}

void func_0c16b318(struct LinkedActor *a)
{a->b4++;a->sdc=a->p24->sdc;a->sdc.b12c=1;a->b2=a->p24->b2;a->b1=a->p24->b1;a->v80.x=a->p24->v80.x;a->v80.y=a->p24->v80.y;a->b1a3=a->p24->b1a3;a->b1a4=a->p24->b1a4;a->b48=a->p24->b48;a->v80=a->p24->v80;a->b36=a->p24->b36;a->sdc.b12c=1;a->f56=a->p24->f56;a->f56+=17.14285659790039f;func_0c02a0c4(a,23,22);}

void func_0c16b3a2(struct LinkedActor *a)
{a->f52=a->p24->f52;a->b36=0;if(func_0c02a026(a)<0)func_0c16c3c4(a);}

void func_0c16b3d2(struct LinkedActor *a)
{if(FRAME(a->p24)!=STATE(a)[0]){func_0c16c3c4(a);return;}table_0c252264[a->b4](a);}

void func_0c16b3fe(struct LinkedActor *a)
{a->b4++;a->sdc=a->p24->sdc;a->sdc.b12c=1;a->b2=a->p24->b2;a->b1=a->p24->b1;a->v80.x=a->p24->v80.x;a->v80.y=a->p24->v80.y;a->b1a3=a->p24->b1a3;a->b1a4=a->p24->b1a4;a->b48=a->p24->b48;a->v80=a->p24->v80;a->b36=a->p24->b36;a->sdc.b12c=1;if(!STATE_BYTES(a)[13])a->s28=0;else a->s28=7;a->b36=a->s28;func_0c02a0c4(a,23,dat_0c22f7a5[STATE_BYTES(a)[13]]);func_0c16b4c8(a);}

void func_0c16b4c8(struct LinkedActor *a)
{a->f52=a->p24->f52;a->f56=a->p24->f56;a->b36=a->s28;func_0c02a026(a);}

void func_0c16b4e6(struct LinkedActor *a)
{table_0c252274[(unsigned char)a->b5](a);}

void func_0c16b4f8(struct LinkedActor *a)
{struct LinkedActor *owner=a->p24->p24;float offset;a->b4++;a->sdc=owner->sdc;a->sdc.b12c=1;a->b2=owner->b2;a->b1=owner->b1;a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;a->v80=owner->v80;a->b36=owner->b36;a->sdc.b12c=1;a->b36=0;a->f56=A(owner)->f41c;a->f52=dat_0c2d926c;offset=dat_0c22f7a8[a->b34];if(a->sdc.w130)offset-=213.3333282470703f;a->f52+=offset;func_0c02a0c4(a,23,20);func_0c0344a0(a,31);}

void func_0c16b5a2(struct LinkedActor *a)
{table_0c25227c[(unsigned char)a->b5](a);}

void func_0c16b5b4(struct LinkedActor *a)
{if(func_0c02a026(a)<0){a->b5++;A(a->p24)->b19e--;}}

void func_0c16b614(struct LinkedActor *a)
{if(A(a->p24)->b19f){a->b5++;func_0c02a026(a);func_0c1d330c(a,&a->f52,1,8);func_0c0346da(a,73);}}

void func_0c16b656(struct LinkedActor *a)
{A(a->p24)->b19f--;func_0c16c3c4(a);}

void func_0c16b664(struct LinkedActor *a)
{table_0c252288[a->b4](a);}

void func_0c16b676(struct LinkedActor *a)
{a->b4++;a->sdc=a->p24->sdc;a->sdc.b12c=1;a->b2=a->p24->b2;a->b1=a->p24->b1;a->v80.x=a->p24->v80.x;a->v80.y=a->p24->v80.y;a->b1a3=a->p24->b1a3;a->b1a4=a->p24->b1a4;a->b48=a->p24->b48;a->v80=a->p24->v80;a->b36=a->p24->b36;a->sdc.b12c=0;a->s28=6;a->s30=4;a->b34=0;A(a)->b19e=a->s30;A(a)->b19f=0;}

void func_0c16b700(struct LinkedActor *a)
{func_0c02a026(a);table_0c22f7b8[(unsigned char)a->b5](a);}

void func_0c16b72e(struct LinkedActor *a)
{struct LinkedActor *child;if(--a->s28<0 && (child=func_0c16b084(a,1))){a->s28=6;child->b34=a->b34;a->b34++;if(--a->s30<1){a->b5++;if(!A(a)->b19e){A(a)->b19f=4;a->b5++;}}}}

void func_0c16b7a0(struct LinkedActor *a)
{if(!A(a)->b19e){A(a)->b19f=4;a->b5++;}}

void func_0c16b7b8(struct LinkedActor *a)
{if(!A(a)->b19f)func_0c16c3c4(a);}

void func_0c16b7c8(struct LinkedActor *a)
{table_0c252290[a->b4](a);}

void func_0c16b7da(struct LinkedActor *a)
{a->b4++;a->sdc=a->p24->sdc;a->sdc.b12c=1;a->b2=a->p24->b2;a->b1=a->p24->b1;a->v80.x=a->p24->v80.x;a->v80.y=a->p24->v80.y;a->b1a3=a->p24->b1a3;a->b1a4=a->p24->b1a4;a->b48=a->p24->b48;a->v80=a->p24->v80;a->b36=a->p24->b36;a->sdc.b12c=0;a->s28=5;a->s30=0;A(a)->b19e=0;}

void func_0c16b85a(struct LinkedActor *a)
{table_0c252298[(unsigned char)a->b5](a);}

void func_0c16b86c(struct LinkedActor *a)
{if(!func_0c16b100(a))a->b5++;else{a->s30++;if(!--a->s28)a->b5++;}func_0c16b8a0(a);}

void func_0c16b8a0(struct LinkedActor *a)
{struct LinkedActor *child;short remaining;
if(!a->s30){func_0c16c3c4(a);return;}child=(struct LinkedActor *)A(a)->p12;remaining=a->s30-1;
for(;;){if(child->w38!=0x2800)return;if(A(child)->b19e || A(child)->b19f){a->b5++;A(a)->b19e=1;return;}if(--remaining<0)return;child=(struct LinkedActor *)A(child)->p12;}}

void func_0c16b908(struct LinkedActor *a)
{if(!a->s30)func_0c16c3c4(a);}

void func_0c16b916(struct LinkedActor *a)
{table_0c2522a4[a->b4](a);}

void func_0c16b928(struct LinkedActor *a)
{struct LinkedActor *owner=a->p24->p24;a->b4++;a->sdc=owner->sdc;a->sdc.b12c=1;a->b2=owner->b2;a->b1=owner->b1;a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;a->v80=owner->v80;a->b36=owner->b36;a->sdc.b12c=0;a->f52=owner->f52;a->f56=owner->f56;a->f56+=102.85713958740234f;A(a)->b13f=32;A(a)->b13e=32;A(a)->pad6bb=32;A(a)->b13c=32;A(a)->b19c=66;A(a)->b19d=66;a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;if(a->b32==7){a->f96=51.42856979370117f;a->f56+=68.57142639160156f;}a->f92=a->sdc.w130?53.33333206176758f:-53.33333206176758f;a->f52+=a->f92;A(a)->b1a1=a->b1a3?50:48;A(a)->w1ac=0;A(a)->b19e=0;A(a)->p1c4=0;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,20,0);}

void func_0c16ba7a(struct LinkedActor *a)
{if(A(a->p24)->b19e){func_0c16bd80(a);return;}a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;if(!func_0c028642(a)){func_0c16bd80(a);return;}func_0c037d0c(a);}

void func_0c16bb1c(struct LinkedActor *a)
{func_0c16c3c4(a);}

void func_0c16bb20(struct LinkedActor *a)
{func_0c16b916(a);}

void func_0c16bb24(struct LinkedActor *a)
{table_0c2522b4[a->b4](a);}

void func_0c16bb5c(struct LinkedActor *a)
{struct LinkedActor *owner=a->p24->p24;a->b4++;a->sdc=owner->sdc;a->sdc.b12c=1;a->b2=owner->b2;a->b1=owner->b1;a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;a->v80=owner->v80;a->b36=owner->b36;a->sdc.b12c=0;a->f52=owner->f52;a->f56=owner->f56;a->f56+=205.7142791748047f;A(a)->b13f=32;A(a)->b13e=32;A(a)->pad6bb=32;A(a)->b13c=32;A(a)->b19c=66;A(a)->b19d=66;a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;a->f96=-51.42856979370117f;a->f92=a->sdc.w130?53.33333206176758f:-53.33333206176758f;a->f52+=-26.66666603088379f;A(a)->b1a1=a->b1a3?50:48;A(a)->w1ac=0;A(a)->b19e=0;A(a)->p1c4=0;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,20,0);}

void func_0c16bc6c(struct LinkedActor *a)
{struct LinkedActor *owner=a->p24;struct LinkedActor *parent=owner->p24;
if(a->b5){if(func_0c02a026(a)<0)func_0c16bda6(a);return;}
if(A(owner)->b19e){func_0c16bd80(a);return;}a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;if(!func_0c028642(a)){func_0c16bd80(a);return;}if(!(A(parent)->f41c>a->f56)){func_0c037d0c(a);return;}a->f56=A(parent)->f41c;if(!--owner->s30){a->b5++;func_0c02a0c4(a,20,1);return;}func_0c16c3c4(a);}

void func_0c16bd80(struct LinkedActor *a)
{a->p24->s30--;if(!A(a)->b19f && (!A(a)->b19e || !(A(a)->b19e&1))){func_0c16c3c4(a);return;}func_0c16bda6(a);}

void func_0c16bda6(struct LinkedActor *a)
{a->b4++;func_0c1d330c(a,&a->f52,1,8);func_0c0346da(a,73);func_0c16c3c4(a);}

void func_0c16bdd0(struct LinkedActor *a)
{table_0c2522c4[a->b4](a);}

void func_0c16be00(struct LinkedActor *a)
{a->b4++;a->sdc=a->p24->sdc;a->sdc.b12c=1;a->b2=a->p24->b2;a->b1=a->p24->b1;a->v80.x=a->p24->v80.x;a->v80.y=a->p24->v80.y;a->b1a3=a->p24->b1a3;a->b1a4=a->p24->b1a4;a->b48=a->p24->b48;a->v80=a->p24->v80;a->b36=a->p24->b36;a->sdc.b12c=0;a->f52=a->p24->f52;a->f56=a->p24->f56;a->f56+=102.85713958740234f;A(a)->b13f=32;A(a)->b13e=32;A(a)->pad6bb=32;A(a)->b13c=32;A(a)->b19c=66;A(a)->b19d=66;a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;A(a)->b1a1=a->b33?64:63;A(a)->w1ac=0;A(a)->b19e=0;A(a)->p1c4=0;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,20,0);a->b34=dat_0c22f7c4[a->b34];if(a->sdc.w130){a->b34=-a->b34;a->b34&=31;}func_0c16bf3e(a);}

void func_0c16bf3e(struct LinkedActor *a)
{func_0c0288a8(a,0x960);if(A(a)->b19e){if(!(A(a)->b19e&1)){func_0c16c3c4(a);return;}goto impact;}if(A(a)->b19f)goto impact;if(!func_0c028642(a)){func_0c16c3c4(a);return;}func_0c037d0c(a);return;
impact:a->b4++;a->sdc.b12c=0;func_0c1d330c(a,&a->f52,1,8);func_0c0346da(a,73);}

void func_0c16bfa2(struct LinkedActor *a)
{func_0c16c3d0(a);}

void func_0c16bfa6(struct LinkedActor *a)
{if(a->p24->b5 || A(a->p24)->b1d0!=29){func_0c16c3c4(a);return;}table_0c2522d4[a->b4](a);}

void func_0c16c008(struct LinkedActor *a)
{a->b4++;a->sdc=a->p24->sdc;a->sdc.b12c=1;a->b2=a->p24->b2;a->b1=a->p24->b1;a->v80.x=a->p24->v80.x;a->v80.y=a->p24->v80.y;a->b1a3=a->p24->b1a3;a->b1a4=a->p24->b1a4;a->b48=a->p24->b48;a->v80=a->p24->v80;a->b36=a->p24->b36;a->sdc.b12c=1;A(a)->b1a1=71;A(a)->w1ac=0;A(a)->b19e=0;A(a)->p1c4=0;dat_0c2f83f8->arr[a->b2]++;a->f52=a->p24->f52;a->f56=a->p24->f56;a->f56+=222.8571319580078f;A(a)->b19c=68;
if(!A(a->p24)->b1d2){FIXED_X(a)=0x00180000;a->f92=40.0f;a->f52+=40.0f;a->f92=-0.8333333134651184f;}else{FIXED_X(a)=0xffe80000;a->f92=-40.0f;a->f52+=-40.0f;a->f92=0.8333333134651184f;}a->f96=25.714284896850586f;a->f108=-0.5357142686843872f;func_0c02a0c4(a,22,2);}

void func_0c16c116(struct LinkedActor *a)
{a->f52=a->p24->f52;table_0c2522e4[(unsigned char)a->b5](a);}

void func_0c16c178(struct LinkedActor *a)
{a->f52+=((float)FIXED_X(a)*1.6666666269302368f)/65536.0f;if((signed char)A(a->p24)->b14b<0){a->b5++;func_0c16c1bc(a);}}

void func_0c16c1bc(struct LinkedActor *a)
{float floor;if(!(dat_0c2f8338.w3c&(1<<dat_0c2f8338.b3b))){func_0c02a026(a);a->f56+=a->f96;a->f96+=a->f108;}a->f52+=a->f92;a->f92+=a->f104;floor=a->p24->f56+188.57142639160156f;
if(!(a->f56>floor)){a->b5++;a->f56=floor;a->f52=a->p24->f52;FIXED_X(a)=A(a)->b1d2?0x00290000:0xffd70000;a->f52+=((float)FIXED_X(a)*1.6666666269302368f)/65536.0f;a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;func_0c02a0c4(a,22,4);}
if(!(0.0f>a->f96) && a->f56>a->p24->f56+702.8571166992188f)func_0c037d0c(a);}

void func_0c16c2e6(struct LinkedActor *a)
{a->f52=a->p24->f52;a->f52+=((float)FIXED_X(a)*1.6666666269302368f)/65536.0f;if(A(a->p24)->b14b){if((signed char)A(a->p24)->b14b<0){func_0c16c3c4(a);return;}A(a->p24)->b142=8;A(a->p24)->b14b=0;}}

void func_0c16c340(struct LinkedActor *a)
{struct LinkedActor *owner=a->p24;if(owner->b5 || A(owner)->b1d0!=29){func_0c16c3c4(a);return;}
if(dat_0c2f833e&(1<<(owner->b2^1)))return;if((dat_0c2f833e&(1<<owner->b2)) && (!A(owner)->b3f0 || !A(owner)->b3f1))return;table_0c2522f0[a->b4](a);}

void func_0c16c3c4(struct LinkedActor *a)
{a->sdc.b12c=0;func_0c037688(a);}

void func_0c16c3d0(struct LinkedActor *a)
{a->sdc.b12c=0;func_0c037688(a);}
