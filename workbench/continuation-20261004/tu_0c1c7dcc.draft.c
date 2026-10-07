/* Unverified:443/892 complete linked bytes; constructor allocation/indexing differs. */
#include "objects.h"
extern struct ActorGlobalRoot *dat_0c2d9658;
extern struct Vec3_tu5_03 table_0c25e9b8[][3][2];
extern void (*table_0c25ea48[])(struct Obj_tu5_03 *),(*table_0c25ea60[])(struct Obj_tu5_03 *);
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *);
void func_0c1c7fa0(struct Obj_tu5_03 *),func_0c1c8052(struct Obj_tu5_03 *),func_0c1c8128(struct Obj_tu5_03 *);
unsigned char func_0c1c8114(struct Obj_tu5_03 *);
void func_0c1c7dcc(struct Obj_tu5_03 *parent) {
 unsigned char i;struct Obj_tu5_03 *q;
 i=0;again: {
 if((q=func_0c0374da(0,5,1))==0)return;
 q->b12c=0;q->p16=func_0c1c7fa0;q->p24=parent->p24;q->p200=&parent->f136;q->p20=parent->p20;
 q->b32=parent->b32;q->b33=parent->b33;((struct Actor *)q)->b34=i;
 q->pos=table_0c25e9b8[q->b32][q->b33][0];
 q->angles.scalar.first=0xe001;q->angles.scalar.l44=0;
 q->w28=((struct Actor *)q)->b34*3+10;q->lcc=0xc27;q->f116=1;
 switch(i) {
 case 4:q->l84=((int *)dat_0c2d9658->p0)[q->b33+116];break;
 case 5:
 q->p16=func_0c1c8052;q->l84=((int *)dat_0c2d9658->p0)[119];
 q->pos=table_0c25e9b8[q->b32][q->b33][1];q->angles.scalar.first=0;
 if(q->b32)q->angles.scalar.l44=0x8000;
 q->f80=0;q->f84=0;q->f88=0;q->lcc|=16;
 break;
 default:q->l84=((int *)dat_0c2d9658->p0)[i+112];break;
 }
 switch(q->b33) {
 case 0:q->f120=1;q->f124=0.5f;q->f128=1;break;
 case 1:q->f120=0;q->f124=1;q->f128=0;break;
 case 2:q->f120=0.200000003f;q->f124=0.8199999929f;q->f128=1;break;
 }
 }
 if(++i<6)goto again;
}
void func_0c1c7fa0(struct Obj_tu5_03 *q){table_0c25ea48[q->p24->b4](q);}
void func_0c1c7fb4(struct Obj_tu5_03 *q) {
 switch((unsigned char)q->b5) {
 case 0:
 if(func_0c1c8114(q)){q->b5++;q->w28=((struct Actor *)q)->b34*3+10;}
 break;
 case 1:
 if(!func_0c1c8114(q))goto hide;
 q->w28--;if(q->w28<=0){q->b5++;q->b12c=1;}
 break;
 case 2:if(!func_0c1c8114(q)){hide:func_0c1c8128(q);}break;
 }
}
void func_0c1c802c(struct Obj_tu5_03 *q){q->b12c=0;}
void func_0c1c804c(struct Obj_tu5_03 *q){func_0c037688(q);}
void func_0c1c8052(struct Obj_tu5_03 *q){table_0c25ea60[q->p24->b4](q);}
void func_0c1c8066(struct Obj_tu5_03 *q) {
 switch((unsigned char)q->b5) {
 case 0:
 if(func_0c1c8114(q)){
 q->b5++;q->b12c=1;q->f80=0;q->f84=0;q->f88=0;q->w28=10;q->f92=0.1000000015f;
 }
 break;
 case 1:
 if(!func_0c1c8114(q))goto hide;
 q->w28--;
 if(q->w28<=0)q->b5++;
 else {q->f80+=q->f92;q->f84+=q->f92;q->f88+=q->f92;}
 break;
 case 2:if(!func_0c1c8114(q)){hide:func_0c1c8128(q);}break;
 }
}
unsigned char func_0c1c8114(struct Obj_tu5_03 *q){return q->b33==((struct Actor *)q->p20)->b4c9;}
void func_0c1c8128(struct Obj_tu5_03 *q){q->b12c=0;q->b5=0;}
