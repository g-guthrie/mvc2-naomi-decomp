/* Unverified actor-linked display construction, transitions and visibility.
 * Native 0x0c1c1678..0x0c1c21d8; whole-section matching is unfinished.
 * Actor pad13c[2] is the flag word at 0x414; pad1d7[5] is byte 0x1dc.
 * Actor pad7cc[0] is the object-table index at 0x1a4. */
#include "objects.h"
extern struct ActorFlags *dat_0c2d6f84;
extern struct ActorGlobalRoot *dat_0c2d9654;
extern unsigned char dat_0c25c864[];
extern signed char dat_0c2f836e[];
extern struct Vec3_tu5_03 dat_0c25c80c[],dat_0c25c36c[];
extern struct EffectScale4 dat_0c25c6fc,dat_0c25c70c;
extern void (*table_0c25c868[])(struct Obj_tu5_03 *,struct Actor *);
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c1c2550(struct Obj_tu5_03 *);
extern void func_0c1c1b88(struct Obj_tu5_03 *,struct Actor *);
extern float func_0c1ec2c0(int);
void func_0c1c205a(struct Obj_tu5_03 *,struct Actor *);
void func_0c1c20ec(struct Obj_tu5_03 *,struct Actor *);
extern struct Vec3_tu5_03 dat_0c25c54c[],dat_0c25c540,dat_0c25c57c[],dat_0c25c594[];
extern unsigned char dat_0c25c860[],dat_0c25c862[],dat_0c2d7088[];
extern struct EffectScale4 dat_0c25c71c[];
extern struct Obj_tu5_03 *dat_0c2fb470[];
extern void func_0c1c2394(struct Obj_tu5_03 *),func_0c1c2438(struct Obj_tu5_03 *),func_0c1c2460(struct Obj_tu5_03 *),func_0c1c24ac(struct Obj_tu5_03 *);
extern unsigned char dat_0c25c854[],dat_0c25c85a[];
extern struct Vec3_tu5_03 dat_0c25c48c[],dat_0c25c4d4[],dat_0c25c4ec[][3];
extern unsigned int dat_0c25c33c[][4];
extern int dat_0c25c4bc[];
extern struct EffectScale4 dat_0c25c6ec;
extern int func_0c1d8ff8(int,int),func_0c1d901e(void),func_0c1d919c(unsigned int *);
extern void func_0c037688(struct Obj_tu5_03 *);
extern void func_0c1c1674(struct Obj_tu5_03 *),func_0c1c21d8(struct Obj_tu5_03 *),func_0c1c22fa(struct Obj_tu5_03 *),func_0c1c2348(struct Obj_tu5_03 *);
void func_0c1c16c0(int);
void func_0c1c17f0(struct Obj_tu5_03 *,int);
void func_0c1c18e8(int,int);
void func_0c1c1a20(struct Obj_tu5_03 *,int);
void func_0c1c1aac(struct Obj_tu5_03 *,int);
void func_0c1c1c16(struct Obj_tu5_03 *,int);
void func_0c1c1d3a(struct Actor *,short *,int);
void func_0c1c1eae(struct Obj_tu5_03 *);
void func_0c1c216e(struct Obj_tu5_03 *);
void func_0c1c1678(struct Actor *actor,short *counter,int colour){
 if(dat_0c2d6f84->i20!=64)func_0c1c1d3a(actor,counter,colour);
}
void func_0c1c168a(void){
 int i=0;do{func_0c1c16c0(i);i++;}while(i<6);
 i=0;do{func_0c1c18e8(i,0);func_0c1c18e8(i,1);i++;}while(i<2);
}
void func_0c1c16c0(int slot){
 struct Obj_tu5_03 *a;struct Actor *actor;int resource,position;
 if((a=func_0c0374da(0,11,1))){
 a->b12c=1;a->p16=func_0c1c1eae;resource=61;if(slot&1)resource=70;
 a->l84=((int *)dat_0c2d9654->p0)[resource];actor=(struct Actor *)(dat_0c2d7088+slot*0x5a4);
 position=dat_0c25c854[actor->b2*3+actor->b411];
 if(*(unsigned int *)&actor->pad13c[2]&0x07000000)position+=18;
 a->pos=dat_0c25c36c[position];a->lcc=0x10c21;a->pad0[2]=slot&1;a->b32=slot;
 a->b33=actor->b411;a->p24=(struct Obj_tu5_03 *)actor;
 *(struct EffectScale4 *)&a->f116=dat_0c25c6fc;a->w28=0;
 {struct Obj_tu5_03 **p=dat_0c2fb470;*p++=0;*p++=0;*p++=0;*p++=0;*p++=0;*p=0;}
 func_0c1c17f0(a,slot);func_0c1c1a20(a,slot);func_0c1c1aac(a,slot);func_0c1c1c16(a,slot);
 }
}
void func_0c1c17f0(struct Obj_tu5_03 *parent,int slot){
 struct Obj_tu5_03 *a;struct Actor *actor;unsigned int *colour;int count;
 if((a=func_0c0374da(0,11,1))){
 a->b12c=1;a->p16=func_0c1c216e;a->l84=((int *)dat_0c2d9654->p0)[dat_0c25c85a[slot]];
 *(struct Vec3_tu5_03 *)&a->f80=dat_0c25c540;a->lcc=0x10c10;a->p200=&parent->f136;
 a->pad0[2]=parent->pad0[2];a->b32=slot;actor=(struct Actor *)(dat_0c2d7088+slot*0x5a4);
 a->b33=actor->b411;a->w30=actor->w420;a->p24=(struct Obj_tu5_03 *)actor;a->p20=parent;
 func_0c1d8ff8(a->l84,a->l84);colour=dat_0c25c33c[actor->b4c9];count=4;
 do{func_0c1d901e();func_0c1d919c(colour++);}while(--count);
 }
}
void func_0c1c18e8(int side,int variant){
 struct Obj_tu5_03 *a;struct Actor *actor;int resource,zero=0;
 if((a=func_0c0374da(0,11,1))){
 a->b12c=1;a->p16=func_0c1c21d8;resource=63;if(side)resource=72;
 a->l84=((int *)dat_0c2d9654->p0)[resource];a->pos=dat_0c25c48c[side*2+variant];
 *(struct Vec3_tu5_03 *)&a->f80=dat_0c25c540;a->lcc=0x10c11;
 a->b32=side;a->b33=variant;a->pad34=zero;a->p24=(struct Obj_tu5_03 *)(dat_0c2d7088+side*0x5a4);
 a->f120=a->f124=a->f128=1.0f;a->f104=0.0f;a->f108=21845.0f;a->f112=43690.0f;a->w28=zero;a->w30=zero;
 actor=(struct Actor *)a->p24;
 if(*(unsigned int *)&actor->pad13c[2]&0x07000000){
 a->b12c=zero;a->p16=func_0c1c1674;*(struct EffectScale4 *)&a->f116=dat_0c25c6ec;
 if(variant)func_0c037688(a);
 }
 }
}
void func_0c1c1a20(struct Obj_tu5_03 *parent,int slot){
 struct Obj_tu5_03 *a;struct Actor *actor;
 if((a=func_0c0374da(0,11,1))){
 a->b12c=1;a->p16=func_0c1c22fa;a->l84=((int *)dat_0c2d9654->p0)[dat_0c25c4bc[slot]];
 a->pos=dat_0c25c4d4[slot&1];a->lcc=0x10c21;a->b32=slot;
 actor=(struct Actor *)(dat_0c2d7088+slot*0x5a4);a->b33=actor->b411;
 a->p24=(struct Obj_tu5_03 *)actor;a->p20=parent;a->p200=&parent->f136;
 }
}
void func_0c1c1aac(struct Obj_tu5_03 *parent,int slot){
 struct Obj_tu5_03 *a;struct Actor *actor;
 if((a=func_0c0374da(0,11,1))){
 a->b12c=0;a->p16=func_0c1c2348;a->l84=((int *)dat_0c2d9654->p0)[79];
 a->pos=dat_0c25c4ec[slot&1][slot>>1];a->lcc=0x10811;a->f80=5.0f;a->f84=a->f88=1.0f;
 a->b32=slot;actor=(struct Actor *)(dat_0c2d7088+slot*0x5a4);a->b33=actor->b411;
 a->p24=(struct Obj_tu5_03 *)actor;a->p200=&parent->f136;
 }
}
void func_0c1c1b88(struct Obj_tu5_03 *parent,struct Actor *actor){
 struct Obj_tu5_03 *a;struct Vec3_tu5_03 *position;
 if((a=func_0c0374da(0,11,1))){
 a->b12c=1;a->p16=func_0c1c2394;a->l84=((int *)dat_0c2d9654->p0)[80];
 position=&dat_0c25c54c[actor->b411+actor->b2*2-1];
 a->pos=*position;*(struct Vec3_tu5_03 *)&a->f104=*position;
 a->lcc=0x10801;a->b32=parent->b32;a->b33=actor->b411;
 a->p24=(struct Obj_tu5_03 *)actor;a->p20=parent;a->p200=parent->p200;a->w28=0;
 }
}
void func_0c1c1c16(struct Obj_tu5_03 *parent,int slot){
 struct Obj_tu5_03 *a;struct Actor *actor;int resource;
 if((a=func_0c0374da(0,11,1))){
 a->b12c=1;a->p16=func_0c1c2438;resource=106;if(slot&1)resource=107;
 a->l84=((int *)dat_0c2d9654->p0)[resource];*(struct Vec3_tu5_03 *)&a->f80=dat_0c25c540;
 a->lcc=0x10c11;a->pos.x=0.0f;a->pos.y=0.0f;a->pos.z=-0.125f;
 a->p200=&parent->f136;a->b32=slot;actor=(struct Actor *)(dat_0c2d7088+slot*0x5a4);
 a->b33=actor->b411;a->p24=(struct Obj_tu5_03 *)actor;a->p20=parent;
 }
}
void func_0c1c1cdc(struct Obj_tu5_03 *parent){
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da((int)parent,11,2))){
 a->b12c=1;a->p16=func_0c1c2460;a->l84=((int *)dat_0c2d9654->p0)[dat_0c25c860[parent->pad0[2]]];
 a->pos=dat_0c25c57c[parent->pad0[2]];a->lcc=0x10801;a->p24=parent;
 }
}
void func_0c1c1d3a(struct Actor *actor,short *counter,int colour){
 struct Obj_tu5_03 *a;
 if(!*counter)return;
 if((a=func_0c0374da(0,11,1))){
 a->b12c=1;a->p16=func_0c1c24ac;a->l84=((int *)dat_0c2d9654->p0)[dat_0c25c862[actor->b2]];
 a->pos=dat_0c25c594[actor->b2];*(struct Vec3_tu5_03 *)&a->f80=dat_0c25c540;
 a->pad0[2]=actor->b2;a->p24=(struct Obj_tu5_03 *)actor;a->lcc=0x10c11;
 a->i208=(int)counter;a->w28=*counter;*(struct EffectScale4 *)&a->f116=dat_0c25c71c[colour];
 func_0c1c1cdc(a);dat_0c2fb470[actor->pad7cc[0]]=a;
 }
}
void func_0c1c1e30(struct Actor *actor){
 struct Obj_tu5_03 *a;
 if(dat_0c2d6f84->i20==64)return;
 if((a=func_0c0374da(0,11,1))){
 a->b12c=1;a->p16=func_0c1c2550;
 a->l84=((int *)dat_0c2d9654->p0)[dat_0c25c864[actor->b2]];
 a->w30=120;a->lcc=0x10801;a->p24=(struct Obj_tu5_03 *)actor;
 a->pos=dat_0c25c80c[actor->b411*2+actor->b2];a->b7=actor->b411;
 }
}
void func_0c1c1eae(struct Obj_tu5_03 *a){
 struct Actor *actor=(struct Actor *)a->p24;
 if(!(*(unsigned int *)&actor->pad13c[2]&0x07000000))table_0c25c868[a->b4](a,(struct Actor *)a->p24);
 func_0c1c205a(a,(struct Actor *)a->p24);
 func_0c1c20ec(a,(struct Actor *)a->p24);
}
void func_0c1c1eee(struct Obj_tu5_03 *a,struct Actor *actor){
 int mode=actor->b411;struct Vec3_tu5_03 *end;
 if(a->b33!=mode){
 a->b4++;a->b35=32;a->w30=0;a->b33=mode;
 if((unsigned char)mode)a->w30|=0x8000;
 end=&dat_0c25c36c[mode*2+actor->b2];
 a->f92=(end->x-a->pos.x)/32.0f;
 a->f96=(end->y-a->pos.y)/32.0f;
 a->f100=(end->z-a->pos.z)/32.0f;
 *(struct Vec3_tu5_03 *)&a->f104=a->pos;
 }
}
void func_0c1c1fb8(struct Obj_tu5_03 *a,struct Actor *actor){
 float offset=0.0f;
 a->pos.x+=a->f92;a->f108+=a->f96;a->pos.z+=a->f100;
 if(a->w30>=0){offset=func_0c1ec2c0(a->w30)*20.0f;a->w30+=1024;}
 a->pos.y=a->f108+offset;
 if(--a->b35&0x80){struct Vec3_tu5_03 *end;a->b4=0;end=&dat_0c25c36c[actor->b411*2+actor->b2];a->pos=*end;}
}
void func_0c1c205a(struct Obj_tu5_03 *a,struct Actor *actor){
 a->f120=dat_0c25c6fc.f120;a->f124=dat_0c25c6fc.f124;a->f128=dat_0c25c6fc.f128;
 if(actor->w2a0){a->f120=dat_0c25c70c.f120;a->f124=dat_0c25c70c.f124;a->f128=dat_0c25c70c.f128;}
 if(a->w28!=(short)actor->w2a0){if(!actor->w2a0){if(actor->b411)func_0c1c1e30(actor);}}
 a->w28=actor->w2a0;
}
void func_0c1c20ec(struct Obj_tu5_03 *a,struct Actor *actor){
 int zero=0;
 if(!actor->pad1d7[5] && (short)actor->w420<=0)a->b12c=zero;
 if(a->b12c){
 if(actor->pad1d7[5] && !actor->b0){
 if(dat_0c2f836e[actor->b2]<3 || actor->b411){
 a->f116-=0.03125f;
 if(a->f116<0.0f){a->b12c=zero;a->f116=0.0f;}
 }else goto opaque;
 }
 }else if(!actor->pad1d7[5] && (short)actor->w420>0){a->b12c=1;goto opaque;}
 goto done;
 opaque:a->f116=1.0f;
 done:;
}
void func_0c1c216e(struct Obj_tu5_03 *a){
 struct Actor *actor;
 *(struct EffectScale4 *)&a->f116=*(struct EffectScale4 *)&a->p20->f116;
 actor=(struct Actor *)a->p24;
 a->f80=(short)actor->w420/144.0f;
 if(a->w30<(short)actor->w420 && actor->b411)func_0c1c1b88(a,actor);
 a->w30=actor->w420;
}
