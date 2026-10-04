#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern struct Actor *func_0c037d54(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c025900(struct Actor *,char,char),func_0c044548(struct Actor *,struct Actor *),func_0c03efea(struct Actor *,struct Actor *),func_0c04b02a(struct Actor *),func_0c034946(struct Actor *,int),func_0c04c010(struct Actor *,struct Actor *,int);
extern void func_0c1ce916(struct LinkedActorVec3 *,int,int,int),func_0c1cea66(struct Actor *,struct LinkedActorVec3 *,int);
void func_0c0d0ae4(struct Actor *a){
 a->b3f8=2;a->b328=5;a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(func_0c02a026(a)<0){a->b6++;a->s28=24;a->f104=0.20833333f;if(a->w130)a->f104=-a->f104;func_0c02a0c4(a,22,17);}}
void func_0c0d0b70(register struct Actor *a){
 struct Actor *target;struct LinkedActorVec3 point;register float previous,zero_float,old_x,old_y;int zero;
 a->b3f8=2;a->b328=5;previous=a->f92;a->f52+=previous;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;zero_float=0;
 if(a->f92*previous<0.0f){a->f92=zero_float;a->f96=zero_float;a->f104=zero_float;a->f108=zero_float;}
 zero=0;if(--a->s28<0){a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;a->b6=7;a->s28=4;return;}
 if(!(target=func_0c037d54(a)))return;
 func_0c025900(a,13,1);a->b6++;a->b141=zero;a->s30=zero;a->b1f7=195;target->b1f7=195;func_0c044548(a,target);
 *(int *)&a->pad10c[24]=zero;*(int *)&a->pad10c[28]=zero;a->b1a0=10;
 point.x=-133.33333f;if(a->w130)point.x=-point.x;point.x+=a->f52;point.y=a->f56+17.142857f;func_0c1ce916(&point,a->b1d2,2,0);
 old_x=a->f52;old_y=a->f56;a->b15a=-1;((unsigned char *)&a->w150)[0]=32;func_0c03efea(a,a->p1c8);
 *(float *)&a->sub2a4.b0=a->f52;*(float *)&a->sub2a4.w4=a->f56;
 a->f92=(a->f52-old_x)/40.0f;a->f104=zero_float;a->f96=(a->f56-old_y)/40.0f+16.07143f;a->f108=-0.80357140303f;a->s28=40;func_0c02a0c4(a,22,16);
 a->b15a=-1;((unsigned char *)&a->w150)[0]=zero;a->f52=old_x;a->f56=old_y;
 a->p1c8->s28=1;a->p1c8->f56=a->p1c8->f41c;func_0c02a0c4(a->p1c8,13,9);
 if(((*(unsigned int *)&a->p1c8->pad13c[2]&0x90001010u)|(*(unsigned int *)&a->p1c8->pad13c[6]&1u))){a->p1c8->b1d2^=1;a->p1c8->w130=(unsigned char)a->p1c8->b1d2;}
 a->p1c8->p1b4=a;((unsigned char *)&a->p1c8->p1c4)[1]=61;func_0c04b02a(a);func_0c034946(a->p1c8,3);
}
void func_0c0d0e04(struct Actor *a){
 a->b3f8=2;a->b328=5;a->b1ea=1;a->b1ed=2;func_0c02a026(a);if(!a->b141){a->b6++;a->b7=0;}}
void func_0c0d0e3e(struct Actor *a,struct Actor *target){struct LinkedActorVec3 point;
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c02a026(a);
 if(--a->s28<=0){a->b7++;a->f92=0;a->f104=0;a->f96=8.5714283f;a->f108=-0.80357140303f;func_0c02a0c4(a,22,11);
 a->b15a=-1;((unsigned char *)&a->w150)[0]=34;func_0c03efea(a,a->p1c8);a->b15a=-1;((unsigned char *)&a->w150)[0]=0;
 target->p1b4=a;((unsigned char *)&target->p1c4)[1]=62;func_0c04b02a(a);func_0c04c010(target,a,1);func_0c034946(target,3);
 point.x=-53.3333321f;point.y=34.2857132f;func_0c1cea66(a,&point,3);}}
