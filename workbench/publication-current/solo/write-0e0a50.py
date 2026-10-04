from pathlib import Path
import json
fl=json.loads(Path('build/0e0a50-floats.json').read_text())
def f(a):return fl[hex(a)]['literal']
s='''#include "objects.h"
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
'''
d={}
def add(n,b):d[n]='void func_0c0e'+n+'(struct Actor *a){'+b+'}\n'
add('0a50',f'int zero=0;float acceleration={f(0xc0e0b94)};struct ActorSub2a4 *state=&a->sub2a4;a->b6++;func_0c0442fa(a);func_0c048bb0(a,13);func_0c0432ca(a);if(!a->b1a3){{a->b1a1=51;RECORD;a->f92={f(0xc0e0ba8)};a->f104=acceleration;a->f96={f(0xc0e0bac)};}}else{{if(a->b255==3)a->b1a1=87;else a->b1a1=55;RECORD;a->f92={f(0xc0e0bb0)};a->f104=acceleration;a->f96={f(0xc0e0bb4)};}}a->f108={f(0xc0e0bb8)};if(a->w130){{a->f92=-a->f92;a->f104=-a->f104;}}func_0c02a0c4(a,21,dat_0c22f3aa[(unsigned char)a->b1a3]);state->b1++;state->b1&=3;if(state->b1)func_0c02a0c4(a,21,dat_0c22f3a8[(unsigned char)a->b1a3]);else{{func_0c02a0c4(a,21,dat_0c22f3a8[(unsigned char)a->b1a3+2]);func_0c02a39a(a,8);}}')
add('0bda','func_0c02a026(a);if(!a->b141){a->b6++;func_0c02a39a(a,0);func_0c0451f2(a);}')
add('0c0a',f'VERTICAL;if(a->f96*a->f108>0)a->f108={f(0xc0e0d28)};')
add('0c42','func_0c0e0c0a(a);HORIZONTAL;if(a->f92*a->f104>0)a->b6++;func_0c02a026(a);')
add('0c86','func_0c0e0c0a(a);if(a->f41c>a->f56){a->b6++;a->f56=a->f41c;a->b1f9=0;func_0c043324(a);}else if(!a->b141)func_0c02a026(a);')
for n in ['0cd0','0ed4','10d0','15a0','19c8']:add(n,'if(func_0c02a026(a)<0){CLEAR_SPEED;func_0c0437b8(a);}')
for n,t in [('0d02','2491e8'),('0f06','2491f8'),('1120','249208'),('12ce','249218'),('15d2','249234'),('19fa','249250')]:add(n,f'table_0c{t}[a->b6](a);')
add('0d38','a->b6++;func_0c0442fa(a);func_0c0432ca(a);func_0c048bb0(a,13);func_0c02a0c4(a,21,a->b1a3?8:6);')
loadrow='row=dat_0c22f3ac[(unsigned char)a->b1a3];a->f92=*row++;a->f104=*row++;a->f96=*row++;a->f108=*row;'
add('0d72','float *row;func_0c02a026(a);if(a->b141>=0){a->b6++;func_0c0451f2(a);'+loadrow+'if(a->w130){a->f92=-a->f92;a->f104=-a->f104;}}')
landing='a->b6++;a->f56=a->f41c;a->b1f9=1;func_0c02a0c4(a,21,a->b1a3?42:40);func_0c043324(a);'
add('0dd4','int zero=0;MOTION;func_0c02a026(a);if(a->b14b){a->b1a1=a->b255==3?a->b14b+28:a->b14b;RECORD;a->b14b=zero;}if(a->f41c>a->f56){'+landing+'}')
add('0f18','a->b6++;func_0c0442fa(a);func_0c048bb0(a,13);func_0c02a0c4(a,21,a->b1a3?45:44);a->b1f9=2;')
add('0f54','float *row;char reverse;func_0c02a026(a);if(a->b141>=0){a->b6++;row=dat_0c22f3ac[(unsigned char)a->b1a3];if(a->b1d3<0)reverse=a->w130!=0;else reverse=a->f92>0;a->f92=*row++;a->f104=*row++;a->f96=*row++;a->f108=*row;if(reverse){a->f92=-a->f92;a->f104=-a->f104;}}')
add('1004','int zero=0;MOTION;if(a->f41c>a->f56){'+landing+'return;}if(func_0c02a026(a)<0){func_0c0438de(a);return;}if(a->b14b){a->b1a1=a->b14b;RECORD;a->b14b=zero;}')
add('1132','int zero=0;CPUFLAGS;a->b6++;func_0c02a39a(a,0);a->b1f9=zero;func_0c0442fa(a);func_0c0432ca(a);a->b1a1=63;RECORD;func_0c02a0c4(a,22,zero);a->b142+=8;')
for n,test,x,y in [('11ae','a->b141!=0',0xc0e128c,0xc0e1290),('1372','a->b141<0',0xc0e1534,0xc0e1538),('1666','a->b141<0',0xc0e180c,0xc0e1810)]:
 prefix='a->b3f0=0;a->b3f1=0;a->b6++;a->b141=0;' if n=='1372' else 'a->b6++;a->b141=0;a->b3f0=0;a->b3f1=0;'
 add(n,f'struct LinkedActorVec3 point;HITFLAGS;a->b3f1=a->b255==6?2:0;func_0c02a026(a);if({test}){{{prefix}point.x={f(x)};point.y={f(y)};point.z=0;func_0c0429a4(a,&point,1);}}')
add('121e','HITFLAGS;func_0c02a026(a);if(a->b141){a->b141=0;a->b6++;func_0c167a38(a,1);}')
add('129c','int zero=0;if(func_0c02a026(a)<0){CLEAR_HIT;func_0c0437b8(a);}')
add('12e0',f'int zero=0;a->b6++;CPUFLAGS;func_0c02a39a(a,0);func_0c0442fa(a);func_0c0432ca(a);CLEAR_SPEED;a->f92=a->w130?{f(0xc0e13c0)}:{f(0xc0e13c4)};a->b1a1=64;RECORD;func_0c02a0c4(a,22,1);')
add('141e','int zero=0;HITFLAGS;HORIZONTAL;func_0c02a026(a);if(a->b141){a->b6++;a->b141=zero;a->b1a1=65;RECORD;}')
add('1490',f'HITFLAGS;func_0c02a026(a);if(!a->b141){{a->b6++;a->b141=0;a->f92=0;a->f104=0;a->f96={f(0xc0e1544)};a->f108={f(0xc0e1548)};func_0c0451f2(a);}}')
add('14e6',f'VERTICAL;if(a->f96*a->f108>0){{a->b6++;a->f108={f(0xc0e1550)};}}func_0c02a026(a);')
add('1554','VERTICAL;if(a->f41c>a->f56){a->b6++;a->f56=a->f41c;func_0c043324(a);}else if(!a->b141)func_0c02a026(a);')
add('15e4','int zero=0;struct ActorSub2a4 *state=&a->sub2a4;a->b6++;CPUFLAGS;func_0c02a39a(a,0);func_0c0442fa(a);func_0c0432ca(a);state->b0=zero;a->b1a1=66;RECORD;func_0c02a0c4(a,22,2);a->b142+=8;')
add('170e',f'int zero=0;struct ActorSub2a4 *state=&a->sub2a4;HITFLAGS;if(!state->b0&&a->b19e&&!a->p1b0->b3&&!a->p1b0->b411&&!(*(unsigned int *)((char *)a->p1b0+0x414)&0x07000000)){{state->b0=1;a->p20c->b1f9=zero;a->p20c->f56=a->f41c;a->p20c->f52=a->f52;if(a->w130)a->p20c->f52-={f(0xc0e181c)};else a->p20c->f52-={f(0xc0e1820)};}}if(func_0c02a026(a)>=0){{if(a->b14b){{a->b1a1=a->b14b;RECORD;a->b14b=zero;}}}}else{{a->b6++;a->f92={f(0xc0e198c)};a->f104={f(0xc0e1990)};a->f96={f(0xc0e1994)};a->f108={f(0xc0e1998)};if(a->w130){{a->f92=-a->f92;a->f104=-a->f104;}}a->b1a1=75;RECORD;func_0c02a0c4(a,22,3);}}')
add('18a2','HITFLAGS;func_0c02a026(a);if(!a->b141){a->b6++;func_0c0451f2(a);}')
add('18d8','HITFLAGS;func_0c0e0c0a(a);HORIZONTAL;if(a->f92*a->f104>0)a->b6++;func_0c02a026(a);')
add('192a','int zero=0;HITFLAGS;func_0c0e0c0a(a);if(a->f41c>a->f56){a->b6++;CLEAR_HIT;a->f56=a->f41c;a->b1f9=zero;func_0c043324(a);}else if(!a->b141)func_0c02a026(a);')
add('1a0c','a->b6++;a->s28=72;func_0c0442fa(a);func_0c048bb0(a,dat_0c22f3cd[a->b1f9*2]);func_0c02a0c4(a,21,dat_0c22f3cc[a->b1f9*2]);if(a->b1f9==2)a->b6++;else{CLEAR_SPEED;}')
add('1a74','func_0c02a026(a);a->s28--;if(a->s28<=0)func_0c0437b8(a);')
for n,b in sorted(d.items()):s+=b[:b.index('{')]+';\n'
s+='\n'.join(b for n,b in sorted(d.items()));Path('build/tu_0c0e0a50.manual.c').write_text(s);print(len(d),'functions')
