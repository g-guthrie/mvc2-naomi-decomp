/* Retail effects interval 0x0c18b464..0x0c18b864. Private draft, not exact. */
#include "objects.h"
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern struct ActorFlags *dat_0c2d6f84;
extern struct Dat_13bb5c dat_0c2f8338;
extern float table_0c2561d4[],table_0c2561c4[];
extern char func_0c02a026(struct Actor *);
extern int func_0c028642(struct Actor *);
extern void func_0c037d0c(struct Actor *),func_0c037688(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,char);
extern void func_0c1d330c(struct Actor *,float *,int,int);
extern float func_0c1ec2c0(int);
void func_0c18b58a(struct Actor *,struct Actor *);
void func_0c18b7ca(struct Actor *,struct Actor *);
void func_0c18b7d4(struct Actor *,short);
void func_0c18b464(struct Actor *a,struct Actor *owner)
{
 float offset;int owner_depth;a->b4++;((struct LinkedActor *)a)->sdc=((struct LinkedActor *)owner)->sdc;
 a->b12c=1;a->b2=owner->b2;a->b1=owner->b1;a->f80=owner->f80;a->f84=owner->f84;
 a->b1a3=owner->b1a3;a->pad7cc[0]=owner->pad7cc[0];a->pad3c[8]=owner->pad3c[8];
 *(struct LinkedActorVec3 *)&a->f80=*(struct LinkedActorVec3 *)&owner->f80;
 owner_depth=owner->b36;a->b36=8;a->b19c=68;a->b19d=68;
 offset=table_0c2561d4[a->b32];if((short)a->w130)offset=-offset;
 a->f52=owner->f52+offset;a->f56=owner->f56+0.0f;a->s28=80;a->s30=30;
 if(a->b32>1)a->f80=a->f84=0.5f;
 offset=table_0c2561c4[a->b32];if((short)a->w130)offset=-offset;
 a->f92=offset;a->f104=0;a->f96=0;a->f108=0;a->b34=0;
 a->b13c=a->pad6bb=a->b13e=a->b13f=32;
 a->b1a1=123;a->w1ac=0;a->b19e=0;a->p1c4=0;
 dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,23,34);func_0c18b58a(a,owner);
}
void func_0c18b58a(struct Actor *a,struct Actor *owner)
{
 if(!a->s30){if(!func_0c028642(a)){goto cleanup;}}else a->s30--;
 if(a->b19e){goto cleanup;}
 func_0c02a026(a);a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(dat_0c2d6f84->flags&4){func_0c18b7d4(a,50);a->b34++;}
 if(dat_0c2f8338.pad[0]!=4)return;
 if(!owner->b525 && !(owner->w34a&0x8000) && a->s28>0)a->s28=0;
 if(--a->s28<0){a->b12c=(dat_0c2d6f84->flags&4)>>2;a->f92/=2.0f;
  if(a->s28<-40){a->b4=3;a->b12c=0;a->f56+=17.142857f;func_0c1d330c(a,&a->f52,1,8);func_0c02a0c4(a,23,a->b158+1);}}
 if(owner->w34a&0x2000)a->f56+=1.60714281f;
 if(owner->w34a&0x1000)a->f56-=1.60714281f;
 if(a->b19f || owner->f41c-17.142857f>a->f56){a->b4++;a->f96=4.28571415f;a->f108=-0.80357140303f;}
 func_0c037d0c(a);return;
 cleanup:func_0c18b7ca(a,owner);
}
void func_0c18b78a(struct Actor *a)
{a->f56+=a->f96;a->f96+=a->f108;if((a->f264-=0.050000001f)<0){a->b4++;a->b12c=0;}}
void func_0c18b7ca(struct Actor *a,struct Actor *owner){a->b12c=0;func_0c037688(a);}
void func_0c18b7d4(struct Actor *a,short distance)
{short angle=((40-a->b34)&31)*2048;float offset=distance*256.0f;
 offset*=func_0c1ec2c0(angle);offset*=1000.0f;offset/=125000.0f;offset/=256.0f;a->f56+=offset*2.1428571f;}
