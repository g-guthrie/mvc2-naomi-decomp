from pathlib import Path
s='''#include "objects.h"
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
'''
d={}
def add(n,b):d[n]='void func_0c'+n+'(struct Actor *a){'+b+'}\n'
for n,anim in [('0cfe70',5),('0cfe8a',4),('0cfea4',6)]:add(n,f'if(!a->b6){{a->b6++;func_0c02a0c4(a,19,{anim});}}else func_0c02a026(a);')
add('0cfebe','func_0c0344a0(a,43);CLEAR_SPEED(a);a->b1fc=0;a->b1f9=0;a->f56=a->f41c;func_0c0442fa(a);func_0c02a39a(a,0);func_0c0432ca(a);')
for n,table,index in [('0cff06','2482a8','b1e9'),('0cff1a','2482dc','b6'),('0d0782','248304','b6')]:add(n,f'table_0c{table}[a->{index}](a);')
add('0cff2c','int zero=0;if(a->b255==6){a->b3f0=255;a->b3f1=16;}a->b6++;a->s28=15;func_0c0cfebe(a);a->b1a1=57;RECORD;a->w1ac|=0x200;func_0c02a0c4(a,22,0);')
for n in ['0cffcc','0d080e']:
 add(n,'struct LinkedActorVec3 point;HITFLAGS;a->b3f1=a->b255==6?2:0;a->b6++;a->b3f0=0;a->b3f1=0;point.x=0;point.y=162.857132f;point.z=0;func_0c0429a4(a,&point,1);')
add('0d0020','HITFLAGS;func_0c02a026(a);if(a->s28==15){func_0c1b0b40(a,4);func_0c02a684(a,3,2,1);}if(--a->s28<0){a->b6++;a->s28=15;func_0c02a0c4(a,22,1);a->f96=0;a->f108=0;a->f92=-13.33333302f;a->f104=0.1041666642f;if(a->w130){a->f92=-a->f92;a->f104=-a->f104;}}')
add('0d00d8','int zero=0;HITFLAGS;MOTION;func_0c02a026(a);if(a->b19e){if(func_0c0447bc(a)){func_0c025900(a,13,7);a->b6=6;a->s28=47;a->s30=zero;func_0c02a0c4(a,22,4);a->b1f7=194;func_0c044548(a,a->p1b0);}else{CLEAR_HIT;a->b1f9=2;a->b6=4;a->f92=-1.66666663f;a->f104=0.00651041651145f;a->f96=12.85714245f;a->f108=-0.5357143f;if(!a->w130){a->f92=-a->f92;a->f104=-a->f104;}func_0c02a0c4(a,22,2);}a->b1a0=10;}else if(--a->s28<0){a->b6=5;func_0c02a0c4(a,22,3);CLEAR_HIT;}')
add('0d0244','func_0c02a026(a);MOTION;if(a->f41c>a->f56){CLEAR_SPEED(a);a->f56=a->f41c;a->b1f9=0;func_0c043324(a);func_0c0437b8(a);}')
add('0d02c8','if(func_0c02a026(a)<0)func_0c0ce574(a);')
add('0d02ea','struct LinkedActorVec3 point;unsigned char variant;float height=120.0f;HITFLAGS;PAIRFLAGS;func_0c02a026(a);if(--a->s28<0){if(!a->s30){a->s28=63;a->s30++;func_0c02a0c4(a,22,5);func_0c1b0b40(a,3);PHASE=33;}else{PHASE=34;a->b6++;a->s28=63;func_0c02a0c4(a,22,6);a->f92=0;a->f104=0;a->f96=6.428571224213f;a->f108=-0.066964284f;}}else if(a->b141){a->b141=0;a->p1c8->p1b4=a;if(!a->s30)a->p1c8->b1a1=58;else a->p1c8->b1a1=59;func_0c04b02a(a);func_0c04c010(a->p1c8,a,1);if(a->s30){point.x=-60.0f;point.y=height;func_0c1cea66(a,&point,3);}else{variant=func_0c02849a()&7;point.x=-123.33333f;point.y=height;func_0c1cea66(a,&point,variant+9);}}func_0c03edcc(a,a->p1c8);')
add('0d0470','struct Actor *other=a->p1c8;HITFLAGS;PAIRFLAGS;func_0c02a026(a);if(!a->b141){func_0c03edcc(a,a->p1c8);return;}MOTION;if(a->b141<0){PHASE=35;a->b141=0;a->b6++;a->f92=-3.3333333f;a->f104=0.0520833321f;a->f96=4.28571415f;a->f108=-0.2678571343422f;CLEAR_SPEED(other);other->f92=(a->f52-other->f52)/16.0f;other->f96=(other->f41c-other->f56)/8.0f;if(!a->w130){a->f92=-a->f92;a->f104=-a->f104;}return;}func_0c03edcc(a,a->p1c8);')
add('0d05ac','int zero=0;HITFLAGS;PAIRFLAGS;func_0c02a026(a);MOTION;a->p1c8->f52+=a->p1c8->f92;a->p1c8->f92+=a->p1c8->f104;a->p1c8->f56+=a->p1c8->f96;a->p1c8->f96+=a->p1c8->f108;if(a->p1c8->f41c>a->p1c8->f56){a->p1c8->f92=0;a->p1c8->f96=0;a->p1c8->f104=0;a->p1c8->f108=0;a->p1c8->f56=a->p1c8->f41c;a->p1c8->b12c=zero;}if(a->f41c>a->f56){CLEAR_HIT;a->f56=a->f41c;a->b6++;a->s28=36;func_0c043324(a);func_0c02a0c4(a,22,7);func_0c04c010(a->p1c8,a,1);a->p1c8->b1f6=16;a->p1c8->b1a1=60;a->b1a1=60;a->p1c8->f56=a->f41c+51.42857f;a->p1c8->b12c=1;func_0c04b02a(a);PHASE=36;func_0c025762();}')
add('0d075c','func_0c02a026(a);if(--a->s28<0)func_0c0437b8(a);')
add('0d0794','int zero=0;if(a->b255==6){a->b3f0=255;a->b3f1=16;}a->b6++;a->s28=128;func_0c0cfebe(a);func_0c02a684(a,7,a->b37+3,1);a->b1a1=56;RECORD;func_0c02a0c4(a,22,8);func_0c1af524(a,5,0);')
add('0d0862','HITFLAGS;a->s28--;if(a->b141){a->b6++;a->b141=0;func_0c1af524(a,6,0);}func_0c02a026(a);')
add('0d08d8','int zero=0;HITFLAGS;if(--a->s28<0){a->b6++;func_0c02a0c4(a,22,9);func_0c1af524(a,7,0);CLEAR_HIT;}else{if(a->b141==1){a->b141=zero;func_0c1630dc(a,0);func_0c1630dc(a,3);}if(a->b141==2){a->b141=zero;func_0c1630dc(a,1);func_0c1630dc(a,2);}}func_0c02a026(a);')
add('0d096a','if(func_0c02a026(a)<0)func_0c0437b8(a);')
add('0d098c','if(a->b1f9==2)func_0c0438de(a);else func_0c0ce574(a);')
add('0d09cc','int zero=0;float stopped=0;struct LinkedActorVec3 point;if(!a->b7){if(a->b255==6){a->b3f0=255;a->b3f1=16;}a->b7++;func_0c0cfebe(a);a->f92=-5.0f;a->f104=stopped;if(a->w130)a->f92=-a->f92;a->b1a1=61;RECORD;func_0c02a0c4(a,22,10);}else{HITFLAGS;a->b3f1=a->b255==6?2:0;func_0c02a026(a);if(a->b141){a->b6++;a->b7=zero;a->b141=zero;a->b3f0=zero;a->b3f1=zero;point.x=stopped;point.y=162.857132f;point.z=stopped;func_0c0429a4(a,&point,1);}}')
for n,b in sorted(d.items()):s+=b[:b.index('{')]+';\n'
s+='\n'.join(b for n,b in sorted(d.items()));Path('build/tu_0c0cfe70.manual.c').write_text(s);print(len(d),'functions')
