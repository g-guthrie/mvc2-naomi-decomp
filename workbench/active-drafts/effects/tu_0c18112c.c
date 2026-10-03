/* UNVERIFIED DRAFT: complete function bodies; not registered or credited. */
/* Private partial effects group, translated from retail. */
#include "objects.h"
#define EXTRA_PARENT(a) (*(struct LinkedActor **)&((struct Actor *)(a))->pad5ba[8])
extern struct LinkedActor *func_0c0374da(struct LinkedActor *,int,int);
extern void (*table_0c255638[])(struct LinkedActor *,struct LinkedActor *);
extern void func_0c1817ac(struct LinkedActor *,struct LinkedActor *);
void func_0c1811d2(struct LinkedActor *),func_0c1811ee(struct LinkedActor *,struct LinkedActor *);
struct LinkedActor *func_0c18112c(struct LinkedActor *owner)
{
 struct LinkedActor *a;if((a=func_0c0374da(0,1,0))!=0){((struct Actor *)a)->b0=1;a->p16=func_0c1811d2;a->p24=owner;
 a->b1=owner->b1;a->w38=0x3600;a->b32=0;EXTRA_PARENT(a)=0;}return a;
}
struct LinkedActor *func_0c18116c(struct LinkedActor *parent,struct LinkedActor *owner)
{
 struct LinkedActor *a;unsigned char i;
 for(i=0;i<5;i++)if((a=func_0c0374da(parent,1,2))!=0){((struct Actor *)a)->b0=1;a->p16=func_0c1811d2;a->p24=owner;
 EXTRA_PARENT(a)=parent;a->b1=owner->b1;a->w38=0x3600;a->b32=1;a->b33=i;}return a;
}
void func_0c1811d2(struct LinkedActor *a)
{if(!a->b32)func_0c1811ee(a,a->p24);else func_0c1817ac(a,a->p24);}
void func_0c1811ee(struct LinkedActor *a,struct LinkedActor *owner)
{table_0c255638[a->b4](a,owner);}

extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern short table_0c255628[];
extern void func_0c02a0c4(struct Actor *,int,int),func_0c0344a0(struct Actor *,int),func_0c181324(struct Actor *,struct Actor *);
void func_0c181210(struct Actor *a,struct Actor *owner)
{
 float dx,dy;
 a->b4++;((struct LinkedActor *)a)->sdc=((struct LinkedActor *)owner)->sdc;
 a->b12c=1;a->b2=owner->b2;a->b1=owner->b1;a->f80=owner->f80;a->f84=owner->f84;
 a->b1a3=owner->b1a3;a->pad7cc[0]=owner->pad7cc[0];((struct LinkedActor *)a)->b48=((struct LinkedActor *)owner)->b48;
 ((struct LinkedActor *)a)->v80=((struct LinkedActor *)owner)->v80;
 a->b36=owner->b36;a->b36=0;a->i204=6;((struct Obj_tu5_03 *)a)->i208=0;*(unsigned int *)&a->pad5ba[4]=0;
 a->pad178[0x19c-0x178]=66;a->b19d=66;a->b1a1=66;a->w1ac=0;a->b19e=0;a->p1c4=0;
 dat_0c2f83f8->arr[a->b2]++;
 ((struct MeActor *)a)->blk_dc.b13c=((struct MeActor *)a)->blk_dc.b13d=((struct MeActor *)a)->blk_dc.b13e=((struct MeActor *)a)->blk_dc.b13f=240;
 a->f80=a->f84=0.25f;dx=table_0c255628[0];dy=table_0c255628[1];if((short)owner->w130)dx=-dx;
 a->f52=owner->f52+dx*1.66666663f;a->f56=owner->f56+dy*2.1428571f;
 func_0c02a0c4(a,22,13);func_0c18116c((struct LinkedActor *)a,(struct LinkedActor *)owner);
 func_0c0344a0(a,36);func_0c181324(a,owner);
}

#define EFFECT_STATUS(a) (*(int *)&(a)->pad5ba[8])
#define EFFECT_ACCUM(a) (*(unsigned int *)&(a)->pad5ba[4])
extern void func_0c181980(struct Actor *,struct Actor *),func_0c18173c(struct Actor *,struct Actor *);
extern void (*table_0c255648[])(struct Actor *,struct Actor *);
void func_0c181324(struct Actor *a,struct Actor *owner)
{
 *(int *)&owner->pad10b[0]=4;
 if(a->b19e){((struct Obj_tu5_03 *)a)->i208=1;EFFECT_ACCUM(a)+=0x20000000u;
  if(!EFFECT_ACCUM(a)){
   if(--a->i204>0){a->b1a1=66;a->w1ac=0;a->b19e=0;a->p1c4=0;dat_0c2f83f8->arr[a->b2]++;}
   else{EFFECT_STATUS(a)=1;a->f92/=2.0f;a->f96/=2.0f;}
  }
 }
 if(owner->b5){EFFECT_STATUS(a)=1;a->f92/=2.0f;a->f96/=2.0f;}
 if(EFFECT_STATUS(a)){a->b12c^=1;a->f80-=0.050000001f;if(a->f80<0.01f){func_0c181980(a,owner);return;}a->f84=a->f80;}
 if(a->b1a0){func_0c18173c(a,owner);if((signed char)--a->b1a0)return;}
 table_0c255648[a->b5](a,owner);
}

extern short table_0c255624[][2];
extern void func_0c18178c(struct Actor *,struct Actor *);
void func_0c18148c(struct Actor *a,struct Actor *owner)
{
 int fixed_speed,angle,dx,dy;
 if(owner->b5){func_0c181980(a,owner);return;}
 if(owner->b141<0){a->b5++;owner->b141=4;a->f80=1.0f;a->s28=16;
 a->f92=0;a->f96=0;a->f104=0;a->f108=0;fixed_speed=0x71600;angle=8;
 if(!(short)owner->w130){fixed_speed=-0x71600;angle=24;}
 a->f92=fixed_speed*1.66666663f/65536.0f;a->b34=angle;
 }
 a->f80+=0.1000000015f;if(a->f80>1.0f)a->f80=1.0f;a->f84=a->f80;
 dx=table_0c255624[owner->b141][0];dy=table_0c255624[owner->b141][1];if((short)owner->w130)dx=-dx;
 a->f52=(a->f52+owner->f52+dx*1.66666663f)/2.0f;
 a->f56=(a->f56+owner->f56+dy*2.1428571f)/2.0f;
}
void func_0c181556(struct Actor *a,struct Actor *owner)
{
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(--a->s28==0){a->b5++;a->s28=48;a->s30=0;}func_0c18178c(a,owner);
}

extern int func_0c02887e(struct LinkedActorVec3 *,struct LinkedActorVec3 *),func_0c028642(struct Actor *),func_0c028708(struct Actor *);
extern void func_0c0288a8(struct Actor *,int);
void func_0c1815cc(struct Actor *a,struct Actor *owner)
{
 struct LinkedActorVec3 point;unsigned char angle;
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(--a->s28==0)a->b5++;
 if(!((struct Obj_tu5_03 *)a)->i208 && (a->s30+=0x4000)==0){
 point=*(struct LinkedActorVec3 *)&owner->p20c->f52;point.y+=137.142853f;
 angle=(unsigned char)func_0c02887e((struct LinkedActorVec3 *)&a->f52,&point)>>3;
 if(angle!=a->b34){a->b34++;if(((a->b34-angle)&31)<16)a->b34-=2;a->b34&=31;func_0c0288a8(a,0x2bc);}
 }
 func_0c18178c(a,owner);
}
void func_0c1816b2(struct Actor *a,struct Actor *owner)
{a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(!func_0c028642(a) || !func_0c028708(a))a->b4++;func_0c18178c(a,owner);}

extern char func_0c02a026(struct Actor *),func_0c029fc4(struct Actor *);
extern void func_0c02a684(struct Actor *,int,int,int),func_0c037d0c(struct Actor *),func_0c037688(struct Actor *),func_0c029e70(struct Actor *,int,int);
extern void (*table_0c255658[])(struct LinkedActor *,struct LinkedActor *);
extern short table_0c255668[][4];
void func_0c1818d6(struct Actor *,struct Actor *);
void func_0c18173c(struct Actor *a,struct Actor *owner)
{if(func_0c02a026(a)<0){a->b36=0;func_0c02a684(owner,3,8,1);}if(a->b141){a->b36=15;func_0c02a684(owner,3,5,1);}}
void func_0c18178c(struct Actor *a,struct Actor *owner)
{func_0c18173c(a,owner);if(!EFFECT_STATUS(a))func_0c037d0c(a);}
void func_0c1817ac(struct LinkedActor *a,struct LinkedActor *owner)
{table_0c255658[a->b4](a,owner);}
void func_0c1817d4(struct Actor *a,struct Actor *owner)
{
 short *row=table_0c255668[a->b33];int dx,dy;struct Actor *parent=(struct Actor *)EXTRA_PARENT(a);
 a->b4++;((struct LinkedActor *)a)->sdc=((struct LinkedActor *)owner)->sdc;a->b12c=1;a->b2=owner->b2;a->b1=owner->b1;
 a->f80=owner->f80;a->f84=owner->f84;a->b1a3=owner->b1a3;a->pad7cc[0]=owner->pad7cc[0];((struct LinkedActor *)a)->b48=((struct LinkedActor *)owner)->b48;
 ((struct LinkedActor *)a)->v80=((struct LinkedActor *)owner)->v80;a->b36=owner->b36;a->pad178[0x19c-0x178]=0;a->b19d=0;
 dx=*row++;a->i204=dx;dy=*row++;((struct Obj_tu5_03 *)a)->i208=dy;if((short)a->w130)dx=-dx;
 *(struct LinkedActorVec3 *)&a->f80=*(struct LinkedActorVec3 *)&parent->f80;
 a->f52=parent->f52+((short)dx*parent->f80)*1.66666663f;a->f56=parent->f56+((short)dy*parent->f84)*2.1428571f;
 if(*row++)a->w130^=1;a->b36=*(signed char *)row;func_0c029e70(a,27,a->b33);func_0c1818d6(a,owner);
}
void func_0c1818d6(struct Actor *a,struct Actor *owner)
{
 struct Actor *parent=(struct Actor *)EXTRA_PARENT(a);int dx=a->i204;
 if(parent->b4>1){func_0c181980(a,owner);return;}
 a->b12c=parent->b12c;if((short)a->w130)dx=-dx;
 *(struct LinkedActorVec3 *)&a->f80=*(struct LinkedActorVec3 *)&parent->f80;
 a->f52=parent->f52+((short)dx*parent->f80)*1.66666663f;a->f56=parent->f56+(((struct Obj_tu5_03 *)a)->i208*parent->f84)*2.1428571f;
 if(!parent->b1a0)func_0c029fc4(a);
}
void func_0c181980(struct Actor *a,struct Actor *owner){a->b4++;a->b12c=0;}
void func_0c18198e(struct Actor *a,struct Actor *owner){a->b0=0;a->b12c=0;func_0c037688(a);}
