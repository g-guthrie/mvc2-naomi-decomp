from pathlib import Path
import json
p=Path('work/after-handoff-2630debe')
with (p/'claim.md').open('a') as f:f.write('\nClaim 0c1c1678..21d8 2912 bytes: eight registries clear; all native code and pools read. Twenty-one real entries, internal direct calls contained. Four-float copies are table copies, not zeroing; native baseline y at108 preserved. No registration or canonical layout changes.\n')
h=(p/'selector_model.h').read_text().replace('unsigned char pad1d7[0x1dd - 0x1d7];','unsigned char pad1d7[0x1dc - 0x1d7]; unsigned char b1dc;').replace('unsigned char pad13c[0x41c - 0x412];','unsigned char pad13c[2]; unsigned int flags414; unsigned char pad418[4];')
(p/'model_1c1678.h').write_text(h)
s='''#include "model_1c1678.h"
extern struct ActorFlags *dat_0c2d6f84;
extern struct CharacterState5a4 dat_0c2d7088[];
extern int **dat_0c2d9654;
extern struct Obj_tu5_03 *dat_0c2fb470[];
extern signed char dat_0c2f836e[];
extern unsigned char dat_0c25c854[],dat_0c25c85a[],dat_0c25c860[],dat_0c25c862[],dat_0c25c864[];
extern struct Vec3_tu5_03 dat_0c25c36c[],dat_0c25c48c[],dat_0c25c4d4[],dat_0c25c4ec[],dat_0c25c540,dat_0c25c54c[],dat_0c25c57c[],dat_0c25c594[],dat_0c25c80c[];
extern int dat_0c25c4bc[];
extern int dat_0c25c33c[][4];
extern struct EffectScale4 dat_0c25c6ec,dat_0c25c6fc,dat_0c25c70c,dat_0c25c71c[];
extern void (*dat_0c25c868[])(struct Obj_tu5_03 *,struct Actor *);
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *);
extern void func_0c1d8ff8(void *,void *);
extern int func_0c1d901e(void);
extern void func_0c1d919c(int *);
extern float func_0c1ec2c0(int);
extern void func_0c1c1674(struct Obj_tu5_03 *),func_0c1c21d8(struct Obj_tu5_03 *),func_0c1c22fa(struct Obj_tu5_03 *),func_0c1c2348(struct Obj_tu5_03 *),func_0c1c2394(struct Obj_tu5_03 *),func_0c1c2438(struct Obj_tu5_03 *),func_0c1c2460(struct Obj_tu5_03 *),func_0c1c24ac(struct Obj_tu5_03 *),func_0c1c2550(struct Obj_tu5_03 *);
void func_0c1c16c0(int),func_0c1c18e8(int,int);
void func_0c1c17f0(struct Obj_tu5_03 *,int),func_0c1c1a20(struct Obj_tu5_03 *,int),func_0c1c1aac(struct Obj_tu5_03 *,int),func_0c1c1c16(struct Obj_tu5_03 *,int);
void func_0c1c1b88(struct Obj_tu5_03 *,struct Actor *),func_0c1c1cdc(struct Obj_tu5_03 *);
void func_0c1c1d3a(struct Actor *,short *,int),func_0c1c1e30(struct Actor *),func_0c1c1eae(struct Obj_tu5_03 *),func_0c1c216e(struct Obj_tu5_03 *);
void func_0c1c205a(struct Obj_tu5_03 *,struct Actor *),func_0c1c20ec(struct Obj_tu5_03 *,struct Actor *);
void func_0c1c1678(struct Actor *p,short *sequence,int type)
{if(dat_0c2d6f84->i20!=64)func_0c1c1d3a(p,sequence,type);}
void func_0c1c168a(void)
{int i;for(i=0;i<6;i++)func_0c1c16c0(i);for(i=0;i<2;i++){func_0c1c18e8(i,0);func_0c1c18e8(i,1);}}
void func_0c1c16c0(int i)
{
 struct Obj_tu5_03 *a=func_0c0374da(0,11,1);struct Actor *parent;int index;
 if(!a)return;
 a->b12c=1;a->p16=func_0c1c1eae;a->l84=(*dat_0c2d9654)[i&1?70:61];
 parent=(struct Actor *)&dat_0c2d7088[i];
 index=dat_0c25c854[parent->b2*3+parent->b411];if(parent->flags414&0x07000000)index+=18;
 a->pos=dat_0c25c36c[index];a->lcc=0x10c21;((struct LinkedActor *)a)->b2=i&1;
 a->b32=i;a->b33=parent->b411;a->p24=(struct Obj_tu5_03 *)parent;
 *(struct EffectScale4 *)&a->f116=dat_0c25c6fc;a->w28=0;
 dat_0c2fb470[0]=0;dat_0c2fb470[1]=0;dat_0c2fb470[2]=0;dat_0c2fb470[3]=0;dat_0c2fb470[4]=0;dat_0c2fb470[5]=0;
 func_0c1c17f0(a,i);func_0c1c1a20(a,i);func_0c1c1aac(a,i);func_0c1c1c16(a,i);
}
void func_0c1c17f0(struct Obj_tu5_03 *parent,int i)
{
 struct Obj_tu5_03 *a=func_0c0374da(0,11,1);struct Actor *character;void *resource;int j;int *words;
 if(!a)return;
 a->b12c=1;a->p16=func_0c1c216e;a->l84=(*dat_0c2d9654)[dat_0c25c85a[i]];
 *(struct Vec3_tu5_03 *)&a->f80=dat_0c25c540;a->lcc=0x10c10;a->p200=&parent->f136;
 ((struct LinkedActor *)a)->b2=((struct LinkedActor *)parent)->b2;a->b32=i;
 character=(struct Actor *)&dat_0c2d7088[i];a->b33=character->b411;a->w30=character->w420;
 a->p24=(struct Obj_tu5_03 *)character;a->p20=parent;resource=(void *)a->l84;
 func_0c1d8ff8(resource,resource);words=dat_0c25c33c[character->b4c9];
 for(j=0;j<4;j++){func_0c1d901e();func_0c1d919c(words++);}
}
void func_0c1c18e8(int side,int index)
{
 struct Obj_tu5_03 *a=func_0c0374da(0,11,1);struct Actor *parent;
 if(!a)return;
 a->b12c=1;a->p16=func_0c1c21d8;a->l84=(*dat_0c2d9654)[side?72:63];
 a->pos=dat_0c25c48c[side*2+index];*(struct Vec3_tu5_03 *)&a->f80=dat_0c25c540;
 a->lcc=0x10c11;a->b32=side;a->b33=index;((struct Actor *)a)->b34=0;
 parent=(struct Actor *)&dat_0c2d7088[side];a->p24=(struct Obj_tu5_03 *)parent;
 a->f128=1;a->f124=1;a->f120=1;a->f104=0;a->f108=21845.0f;a->f112=43690.0f;a->w28=0;a->w30=0;
 if(parent->flags414&0x07000000){a->b12c=0;a->p16=func_0c1c1674;*(struct EffectScale4 *)&a->f116=dat_0c25c6ec;if(index)func_0c037688(a);}
}
void func_0c1c1a20(struct Obj_tu5_03 *parent,int i)
{
 struct Obj_tu5_03 *a=func_0c0374da(0,11,1);struct Actor *character;if(!a)return;
 a->b12c=1;a->p16=func_0c1c22fa;a->l84=(*dat_0c2d9654)[dat_0c25c4bc[i]];
 a->pos=dat_0c25c4d4[i&1];a->lcc=0x10c21;a->b32=i;character=(struct Actor *)&dat_0c2d7088[i];
 a->b33=character->b411;a->p24=(struct Obj_tu5_03 *)character;a->p20=parent;a->p200=&parent->f136;
}
void func_0c1c1aac(struct Obj_tu5_03 *parent,int i)
{
 struct Obj_tu5_03 *a=func_0c0374da(0,11,1);struct Actor *character;if(!a)return;
 a->b12c=0;a->p16=func_0c1c2348;a->l84=(*dat_0c2d9654)[79];
 a->pos=dat_0c25c4ec[(i&1)*3+(i>>1)];a->lcc=0x10811;a->f80=5;a->f88=1;a->f84=1;
 a->b32=i;character=(struct Actor *)&dat_0c2d7088[i];a->b33=character->b411;a->p24=(struct Obj_tu5_03 *)character;a->p200=&parent->f136;
}
void func_0c1c1b88(struct Obj_tu5_03 *parent,struct Actor *character)
{
 struct Obj_tu5_03 *a=func_0c0374da(0,11,1);if(!a)return;
 a->b12c=1;a->p16=func_0c1c2394;a->l84=(*dat_0c2d9654)[80];
 a->pos=dat_0c25c54c[character->b2*2+character->b411-1];*(struct Vec3_tu5_03 *)&a->f104=a->pos;
 a->lcc=0x10801;a->b32=parent->b32;a->b33=character->b411;a->p24=(struct Obj_tu5_03 *)character;a->p20=parent;a->p200=parent->p200;a->w28=0;
}
void func_0c1c1c16(struct Obj_tu5_03 *parent,int i)
{
 struct Obj_tu5_03 *a=func_0c0374da(0,11,1);struct Actor *character;if(!a)return;
 a->b12c=1;a->p16=func_0c1c2438;a->l84=(*dat_0c2d9654)[i&1?107:106];
 *(struct Vec3_tu5_03 *)&a->f80=dat_0c25c540;a->lcc=0x10c11;a->pos.x=0;a->pos.y=0;a->pos.z=-0.125f;
 a->p200=&parent->f136;a->b32=i;character=(struct Actor *)&dat_0c2d7088[i];a->b33=character->b411;a->p24=(struct Obj_tu5_03 *)character;a->p20=parent;
}
void func_0c1c1cdc(struct Obj_tu5_03 *parent)
{
 struct Obj_tu5_03 *a=func_0c0374da((int)parent,11,2);if(!a)return;
 a->b12c=1;a->p16=func_0c1c2460;a->l84=(*dat_0c2d9654)[dat_0c25c860[((struct LinkedActor *)parent)->b2]];
 a->pos=dat_0c25c57c[((struct LinkedActor *)parent)->b2];a->lcc=0x10801;a->p24=parent;
}
void func_0c1c1d3a(struct Actor *parent,short *sequence,int type)
{
 struct Obj_tu5_03 *a;if(!*sequence)return;a=func_0c0374da(0,11,1);if(!a)return;
 a->b12c=1;a->p16=func_0c1c24ac;a->l84=(*dat_0c2d9654)[dat_0c25c862[parent->b2]];
 a->pos=dat_0c25c594[parent->b2];*(struct Vec3_tu5_03 *)&a->f80=dat_0c25c540;
 ((struct LinkedActor *)a)->b2=parent->b2;a->p24=(struct Obj_tu5_03 *)parent;a->lcc=0x10c11;a->i208=(int)sequence;a->w28=*sequence;
 *(struct EffectScale4 *)&a->f116=dat_0c25c71c[type];func_0c1c1cdc(a);dat_0c2fb470[((struct LinkedActor *)parent)->b1a4]=a;
}
void func_0c1c1e30(struct Actor *parent)
{
 struct Obj_tu5_03 *a;if(dat_0c2d6f84->i20==64)return;a=func_0c0374da(0,11,1);if(!a)return;
 a->b12c=1;a->p16=func_0c1c2550;a->l84=(*dat_0c2d9654)[dat_0c25c864[parent->b2]];a->w30=120;a->lcc=0x10801;a->p24=(struct Obj_tu5_03 *)parent;
 a->pos=dat_0c25c80c[parent->b411*2+parent->b2];a->b7=parent->b411;
}
void func_0c1c1eae(struct Obj_tu5_03 *a)
{
 struct Actor *parent=(struct Actor *)a->p24;
 if(!(parent->flags414&0x07000000))dat_0c25c868[a->b4](a,(struct Actor *)a->p24);
 func_0c1c205a(a,(struct Actor *)a->p24);func_0c1c20ec(a,(struct Actor *)a->p24);
}
void func_0c1c1eee(struct Obj_tu5_03 *a,struct Actor *parent)
{
 unsigned int state=parent->b411;struct Vec3_tu5_03 *target;
 if(a->b33==state)return;
 a->b4++;a->b35=32;a->w30=0;a->b33=state;if(state)a->w30|=0x8000;
 target=&dat_0c25c36c[state*2+parent->b2];a->f92=(target->x-a->pos.x)/32.0f;a->f96=(target->y-a->pos.y)/32.0f;a->f100=(target->z-a->pos.z)/32.0f;
 *(struct Vec3_tu5_03 *)&a->f104=a->pos;
}
void func_0c1c1fb8(struct Obj_tu5_03 *a,struct Actor *parent)
{
 float offset=0;a->pos.x+=a->f92;a->f108+=a->f96;a->pos.z+=a->f100;
 if(a->w30>=0){offset=func_0c1ec2c0(a->w30)*20.0f;a->w30+=0x400;}
 a->pos.y=a->f108+offset;
 if(--a->b35&0x80){a->b4=0;a->pos=dat_0c25c36c[parent->b411*2+parent->b2];}
}
void func_0c1c205a(struct Obj_tu5_03 *a,struct Actor *parent)
{
 a->f120=dat_0c25c6fc.f120;a->f124=dat_0c25c6fc.f124;a->f128=dat_0c25c6fc.f128;
 if(parent->w2a0){a->f120=dat_0c25c70c.f120;a->f124=dat_0c25c70c.f124;a->f128=dat_0c25c70c.f128;}
 if(a->w28!=(short)parent->w2a0&&!parent->w2a0&&parent->b411)func_0c1c1e30(parent);
 a->w28=parent->w2a0;
}
void func_0c1c20ec(struct Obj_tu5_03 *a,struct Actor *parent)
{
 if(!parent->b1dc&&(short)parent->w420>0)a->b12c=0;
 if(a->b12c){
  if(parent->b1dc&&!parent->b0){
   if(dat_0c2f836e[parent->b2]>=3&&!parent->b411)a->f116=1;
   else {a->f116-=0.03125f;if(a->f116<0){a->b12c=0;a->f116=0;}}
  }
 }else if(!parent->b1dc&&(short)parent->w420>0){a->b12c=1;a->f116=1;}
}
void func_0c1c216e(struct Obj_tu5_03 *a)
{
 struct Actor *parent;*(struct EffectScale4 *)&a->f116=*(struct EffectScale4 *)&a->p20->f116;
 parent=(struct Actor *)a->p24;a->f80=(short)parent->w420/144.0f;
 if(a->w30<(short)parent->w420&&parent->b411)func_0c1c1b88(a,parent);a->w30=parent->w420;
}
'''
(p/'tu_0c1c1678.c').write_text(s)
entries=[0x1678,0x168a,0x16c0,0x17f0,0x18e8,0x1a20,0x1aac,0x1b88,0x1c16,0x1cdc,0x1d3a,0x1e30,0x1eae,0x1eee,0x1fb8,0x205a,0x20ec,0x216e]
pools=[(0x16bc,4),(0x17b4,60),(0x18a8,64),(0x19d8,72),(0x1b4a,62),(0x1ca2,58),(0x1dec,68),(0x1f7c,60),(0x20ce,30),(0x21c0,24)]
u={'id':'sol_post_1c1678','source':str(p/'tu_0c1c1678.c'),'model_header':str(p/'model_1c1678.h'),'model_header_name':'model_1c1678.h','mode':'candidate','sections':[{'section':'P','kind':'code','address':0xc1c1678,'size':2912,'interior':[{'address':0xc1c0000+x,'size':n,'kind':'data'} for x,n in pools]}],'exports':{'_func_0c1c%04x'%x:0xc1c0000+x for x in entries},'imports':{},'options':'game'}
(p/'tu_0c1c1678.whole.json').write_text(json.dumps(u,indent=2)+'\n')
