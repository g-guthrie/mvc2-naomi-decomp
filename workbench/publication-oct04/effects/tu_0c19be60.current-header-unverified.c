#include "objects.h"
#define SAVED_STEP(a) (((struct Obj_tu5_03 *)(a))->i208)
#define SAVE_MODE(a) ((a)->i204=(a)->b6,SAVED_STEP(a)=(a)->b7)
extern struct Actor dat_0c2d9260;
extern unsigned char dat_0c2f8370;
extern struct Dat_13bb5c dat_0c2f8338;
extern unsigned char table_0c258874[];
extern int func_0c028642(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int);
void func_0c19c942(struct Actor *,struct Actor *);
extern float func_0c19c91a(struct Actor *,short);
extern unsigned int func_0c02849a(void);
extern void func_0c0344a0(struct Actor *,int);
extern void (*table_0c258844[])(struct Actor *,struct Actor *),(*table_0c258850[])(struct Actor *,struct Actor *);
extern void func_0c037688(struct Actor *);
void func_0c19c6c6(struct Actor *,struct Actor *);
void func_0c19c37e(struct Actor *),func_0c19c414(struct Actor *,struct Actor *),func_0c19c55c(struct Actor *,struct Actor *),func_0c19c5d6(struct Actor *,struct Actor *),func_0c19c63a(struct Actor *,struct Actor *);
extern void (*table_0c258858[])(struct Actor *,struct Actor *),(*table_0c258860[])(struct Actor *,struct Actor *);
void func_0c19beda(struct Actor *,struct Actor *),func_0c19c028(struct Actor *,struct Actor *),func_0c19c09e(struct Actor *,struct Actor *);
void func_0c19c11c(struct Actor *,struct Actor *),func_0c19c200(struct Actor *,struct Actor *),func_0c19c16e(struct Actor *,struct Actor *),func_0c19c23e(struct Actor *,struct Actor *);
extern void (*table_0c258814[])(struct Actor *,struct Actor *),(*table_0c25881c[])(struct Actor *,struct Actor *),(*table_0c258824[])(struct Actor *,struct Actor *);
/* Partial enclosing unit: retail's bsr calls require the intervening functions
 * and shared pools before this source can be registered. */
void func_0c19be60(struct Actor *a,struct Actor *owner)
{
 a->b7++;a->s28=30;a->w130=owner->w130;
 if(!func_0c028642(a)){
  if(!(short)a->w130){a->f52=dat_0c2d9260.f140+80.0f;a->f92=-7.9166665f;}
  else{a->f52=dat_0c2d9260.f136-80.0f;a->f92=7.9166665f;}
 }
 a->f104=0;a->f56=owner->f41c;func_0c02a0c4(a,23,13);func_0c19beda(a,owner);
}
void func_0c19beda(struct Actor *a,struct Actor *owner)
{func_0c02a026(a);a->f52+=a->f92;a->f92+=a->f104;if(--a->s28==0){a->b7++;a->s28=300;}}
void func_0c19bf1c(struct Actor *a,struct Actor *owner)
{
 float boundary;func_0c02a026(a);a->f52+=a->f92;a->f92+=a->f104;
 boundary=func_0c19c91a(owner,56);
 if(--a->s28==0 || (!(short)a->w130 && !(a->f52>boundary)) || ((short)a->w130 && !(boundary>a->f52))){a->b7++;func_0c02a0c4(a,23,26);}
}
void func_0c19bfc4(struct Actor *a,struct Actor *owner)
{if(func_0c02a026(a)<0)func_0c19c942(a,owner);}

void func_0c19bfea(struct Actor *a,struct Actor *owner){table_0c258814[a->b7](a,owner);}
void func_0c19bffc(struct Actor *a,struct Actor *owner)
{a->b7++;a->w130=owner->w130;func_0c02a0c4(a,23,33);func_0c19c028(a,owner);}
void func_0c19c028(struct Actor *a,struct Actor *owner)
{if(func_0c02a026(a)<0)func_0c19c942(a,owner);}
void func_0c19c04e(struct Actor *a,struct Actor *owner)
{if(owner->b1d0!=22){func_0c19c942(a,owner);return;}table_0c25881c[a->b7](a,owner);}
void func_0c19c072(struct Actor *a,struct Actor *owner)
{a->b7++;a->w130=owner->w130;func_0c02a0c4(a,23,27);func_0c19c09e(a,owner);}
void func_0c19c09e(struct Actor *a,struct Actor *owner){func_0c02a026(a);}
void func_0c19c0a4(struct Actor *a,struct Actor *owner){table_0c258824[a->b7](a,owner);}
void func_0c19c0b6(struct Actor *a,struct Actor *owner)
{float distance=a->f52-func_0c19c91a(owner,56);if(distance<-13.33333302f || distance>13.33333302f){a->b7=1;func_0c19c11c(a,owner);return;}a->b7=3;func_0c19c200(a,owner);}

void func_0c19c11c(struct Actor *a,struct Actor *owner)
{a->b7++;if(!(func_0c19c91a(owner,56)>a->f52)){a->w130=0;a->f92=-6.66666651f;}else{a->w130=1;a->f92=6.66666651f;}a->f104=0;func_0c02a0c4(a,23,12);func_0c19c16e(a,owner);}
void func_0c19c16e(struct Actor *a,struct Actor *owner)
{float boundary;func_0c02a026(a);a->f52+=a->f92;a->f92+=a->f104;boundary=func_0c19c91a(owner,56);
 if((!(short)a->w130 && !(a->f52>boundary)) || ((short)a->w130 && !(boundary>a->f52))){a->b7=3;a->f52=boundary;}
 if(owner->b141){a->b7=3;a->f52=boundary;}}
void func_0c19c200(struct Actor *a,struct Actor *owner)
{a->b7++;a->f92=0;a->f96=0;a->f104=0;a->f108=0;a->w130=owner->w130;func_0c02a0c4(a,23,0);func_0c19c23e(a,owner);}
void func_0c19c23e(struct Actor *a,struct Actor *owner)
{float distance;func_0c02a026(a);if(owner->b1d0!=22)return;distance=a->f52-func_0c19c91a(owner,56);
 if(distance<-13.33333302f || distance>13.33333302f)a->b7=1;
 if(owner->b141){a->b7=5;func_0c02a0c4(a,23,19);}}
void func_0c19c29a(struct Actor *a,struct Actor *owner)
{if(func_0c02a026(a)>=0)return;a->b7++;a->w130^=1;if(!(short)a->w130)a->f92=-6.66666651f;else a->f92=6.66666651f;a->f104=0;a->s28=1;func_0c02a0c4(a,23,20);}

void func_0c19c30c(struct Actor *a,struct Actor *owner)
{func_0c19c37e(a);a->f52+=a->f92;a->f92+=a->f104;
 if((!(short)a->w130 && !(a->f52>dat_0c2d9260.f136+46.666664124f)) || ((short)a->w130 && !(dat_0c2d9260.f140-46.666664124f>a->f52))){a->b7++;func_0c02a0c4(a,23,21);}}
void func_0c19c37e(struct Actor *a)
{func_0c02a026(a);if(--a->s28==0){a->s28=(func_0c02849a()&31)+60;func_0c0344a0(a,26);}}
void func_0c19c3b2(struct Actor *a,struct Actor *owner){table_0c258844[a->b7](a,owner);}
void func_0c19c3c4(struct Actor *a,struct Actor *owner)
{a->b7++;a->f92=0;a->f104=0;a->f96=0;a->f108=0;if(a->f52<owner->f52)a->w130=1;else a->w130=0;func_0c02a0c4(a,23,0);func_0c19c414(a,owner);}
void func_0c19c414(struct Actor *a,struct Actor *owner)
{func_0c02a026(a);if(!owner->b141){a->b7++;func_0c02a0c4(a,23,18);}}
void func_0c19c474(struct Actor *a,struct Actor *owner)
{func_0c02a026(a);if(--a->s30==0)func_0c19c942(a,owner);}
void func_0c19c4a4(struct Actor *a,struct Actor *owner){table_0c258850[a->b7](a,owner);}

void func_0c19c4b6(struct Actor *a,struct Actor *owner)
{float distance;a->b7++;distance=a->f52-func_0c19c91a(owner,56);if(!(distance<0))a->w130=0;else{distance*=-1;a->w130=1;}
 if(!(distance<93.33333f)){a->b6=4;a->b7=0;func_0c19c5d6(a,owner);return;}
 a->f92=owner->w130==a->w130?-6.66666651f:-5.0f;a->f104=0;if(a->w130)a->f92*=-1;
 if(a->b6!=a->i204)func_0c02a0c4(a,23,12);func_0c19c55c(a,owner);}
void func_0c19c55c(struct Actor *a,struct Actor *owner)
{func_0c02a026(a);a->f52+=a->f92;a->f92+=a->f104;if(--a->s30==0)func_0c19c942(a,owner);}
void func_0c19c5c4(struct Actor *a,struct Actor *owner){table_0c258858[a->b7](a,owner);}
void func_0c19c5d6(struct Actor *a,struct Actor *owner)
{float distance;a->b7++;distance=a->f52-func_0c19c91a(owner,56);if(distance<0){a->w130=1;a->f92=7.91666651f;}else{a->w130=0;a->f92=-7.91666651f;}a->f104=0;if(a->b6!=a->i204)func_0c02a0c4(a,23,13);func_0c19c63a(a,owner);}
void func_0c19c63a(struct Actor *a,struct Actor *owner)
{func_0c02a026(a);a->f52+=a->f92;a->f92+=a->f104;if(--a->s30==0)func_0c19c942(a,owner);}
void func_0c19c686(struct Actor *a,struct Actor *owner){table_0c258860[a->b7](a,owner);}

void func_0c19c698(struct Actor *a,struct Actor *owner)
{a->b7++;a->w130=owner->w130;func_0c02a0c4(a,23,owner->b1d3+4);func_0c19c6c6(a,owner);}
void func_0c19c6c6(struct Actor *a,struct Actor *owner)
{if(owner->b1d0==29){switch(owner->b1e9){case 5:SAVE_MODE(a);a->b6=15;a->b7=0;return;case 4:SAVE_MODE(a);a->b6=17;a->b7=0;return;default:return;}}
 func_0c02a026(a);if(a->b141)return;a->b7++;
 if(owner->b1d3==0)a->f92=-5.0f;else if(owner->b1d3==1)a->f92=5.0f;else a->f92=0;
 if(a->w130)a->f92=-a->f92;a->f104=0;a->f96=34.2857132f;a->f108=-0.80357140303f;}
void func_0c19c7aa(struct Actor *a,struct Actor *owner)
{a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(!(owner->f96>2.0f)){a->b7++;func_0c02a0c4(a,23,owner->b1d3+7);}func_0c02a026(a);}
void func_0c19c840(struct Actor *a,struct Actor *owner)
{a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(!(a->f96>-19.2857132f))a->f108=0;
 if(!(a->f56>owner->f41c)){a->b7++;a->f56=owner->f41c;func_0c02a0c4(a,23,owner->b1d3+10);}func_0c02a026(a);}
void func_0c19c8c8(struct Actor *a,struct Actor *owner)
{if(func_0c02a026(a)<0)func_0c19c942(a,owner);}
void func_0c19c8ee(struct Actor *a,struct Actor *owner){a->b4++;a->b12c=0;a->b0=0;}
void func_0c19c8fe(struct Actor *a,struct Actor *owner){func_0c037688(a);}
int func_0c19c904(short mask,short bit)
{if(mask&(1<<bit))return 1;return 0;}
float func_0c19c91a(struct Actor *owner,short displacement)
{float offset=displacement*1.66666663f;if(!owner->w130)return owner->f52+offset;return owner->f52-offset;}

void func_0c19c942(struct Actor *a,struct Actor *owner)
{
 struct ActorVec2 point;int selector=0;a->s30=4;
 if(owner->b1d0==29 && owner->b1e9==5){SAVE_MODE(a);a->b6=15;goto done;}
 if(owner->b1d0==29 && owner->b1e9==4){SAVE_MODE(a);a->b6=17;goto done;}
 if((owner->b411 && !owner->b255) || (func_0c19c904(dat_0c2f8370,owner->b2) && dat_0c2f8338.pad[0]>=5)){SAVE_MODE(a);a->b6=1;goto done;}
 if(owner->b1d0==28 && !owner->b256){SAVE_MODE(a);a->b6=6;goto done;}
 if(!func_0c028642(a)){SAVE_MODE(a);a->b6=4;goto done;}
 if(*(short *)((char *)owner+0x26c)>=3){SAVE_MODE(a);a->b6=16;goto done;}
 if(owner->b1d0==21 && owner->b1e9==3){SAVE_MODE(a);a->b6=10;goto done;}
 if((unsigned short)((struct LinkedActor *)owner)->sdc.w158.short_value==0x1803){SAVE_MODE(a);a->b6=14;goto done;}
 if(*(int *)&owner->pad10c[0x2e4-0x2cc]){SAVE_MODE(a);a->b6=18;goto done;}
 if(owner->b1d0==22){SAVE_MODE(a);switch(owner->b32){case 0:case 2:case 5:case 6:case 7:a->b6=8;break;case 8:case 9:case 10:a->b6=13;break;case 1:case 3:case 4:a->b6=12;break;default:break;}goto done;}
 if((short)owner->w420<=0){SAVE_MODE(a);a->b6=12;goto done;}
 if(owner->b1d0==14 && owner->f96>17.142857f){SAVE_MODE(a);a->b6=9;goto done;}
 point.x=func_0c19c91a(owner,56)-a->f52;point.y=owner->f56;
 if(!(a->f56+102.85714f>point.y))selector=1;
 if(point.x<0)point.x*=-1.0f;
 if(!(point.x<66.666664124f))selector+=2;
 SAVE_MODE(a);a->b6=table_0c258874[(unsigned char)selector*2];
 done:a->b7=0;
}
