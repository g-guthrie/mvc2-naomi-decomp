#include "model_1dafa8.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern int **dat_0c2d964c;
extern float func_0c1ec2c0(int);
extern void func_0c1dae48(struct Obj_tu5_03 *),func_0c1dc738(struct Obj_tu5_03 *);
extern int func_0c1d901e(void),func_0c1d912a(float *,float *),func_0c1d917e(float *,float *);
extern void func_0c1d8ff8(int,int);
extern void func_0c1ee3b0(int),func_0c1ee360(int),func_0c1edc40(float *),func_0c1ed310(struct Vec3_tu5_03 *,struct Vec3_tu5_03 *);
extern struct Vec3_tu5_03 dat_0c232d5c;
extern struct Vec3_tu5_03 dat_0c232d44;
extern struct Vec3_tu5_03 dat_0c232a08;
extern struct Vec3_tu5_03 dat_0c232a14;
extern struct Vec3_tu5_03 dat_0c232c80;
extern struct Vec3_tu5_03 dat_0c232c68;
extern struct Vec3_tu5_03 dat_0c232ba4;
extern struct Vec3_tu5_03 dat_0c232ae0;
extern float dat_0c232d68[3];
extern float dat_0c232d50[3];
extern float dat_0c232bb0[3];
extern float dat_0c232a2c[3];
extern float dat_0c232bb4;
extern float dat_0c232af0;
extern float dat_0c232a38[];
extern float dat_0c232c98[];
extern float dat_0c232bbc[];
extern float dat_0c232af8[];
extern short dat_0c232d74[];
extern short dat_0c232a40[];
extern short dat_0c232ca4[];
extern short dat_0c232bc8[];
extern short dat_0c232b04[];
extern void (*table_0c262170[])(struct Obj_tu5_03 *);
extern void (*table_0c26217c[])(struct Obj_tu5_03 *);
extern void (*table_0c262188[])(struct Obj_tu5_03 *);
extern void (*table_0c262194[])(struct Obj_tu5_03 *);
extern void (*table_0c2621a0[])(struct Obj_tu5_03 *);
extern void (*table_0c2621ac[])(struct Obj_tu5_03 *);
void func_0c1dafa8(struct Obj_tu5_03 *);
void func_0c1db04a(struct Obj_tu5_03 *);
void func_0c1db05e(struct Obj_tu5_03 *);
void func_0c1db080(struct Obj_tu5_03 *);
void func_0c1db136(struct Obj_tu5_03 *);
void func_0c1db1b6(struct Obj_tu5_03 *);
void func_0c1db29c(struct Obj_tu5_03 *);
void func_0c1db38c(struct Obj_tu5_03 *);
void func_0c1db40e(struct Obj_tu5_03 *);
void func_0c1db430(struct Obj_tu5_03 *);
void func_0c1db484(struct Obj_tu5_03 *);
void func_0c1db564(struct Obj_tu5_03 *);
unsigned char func_0c1db664(struct Obj_tu5_03 *);
void func_0c1db6c8(struct Obj_tu5_03 *);
void func_0c1db776(struct Obj_tu5_03 *);
void func_0c1db7a8(struct Obj_tu5_03 *);
void func_0c1db7ca(struct Obj_tu5_03 *);
void func_0c1db89a(struct Obj_tu5_03 *);
void func_0c1db8fe(struct Obj_tu5_03 *);
void func_0c1db966(struct Obj_tu5_03 *);
void func_0c1db9bc(struct Obj_tu5_03 *);
void func_0c1db9de(struct Obj_tu5_03 *);
void func_0c1dba6e(struct Obj_tu5_03 *);
void func_0c1dbadc(struct Obj_tu5_03 *);
void func_0c1dbb30(struct Obj_tu5_03 *);
void func_0c1dbb44(struct Obj_tu5_03 *);
void func_0c1dbb96(struct Obj_tu5_03 *);
void func_0c1dbc74(struct Obj_tu5_03 *);
unsigned char func_0c1dbcb8(struct Obj_tu5_03 *);
void func_0c1dbd20(struct Obj_tu5_03 *);
void func_0c1dbdb0(struct Obj_tu5_03 *);
void func_0c1dbdc4(struct Obj_tu5_03 *);
void func_0c1dbe14(struct Obj_tu5_03 *);
void func_0c1dbef4(struct Obj_tu5_03 *);
unsigned char func_0c1dbf36(struct Obj_tu5_03 *);
void func_0c1dbf9c(void);
void func_0c1dc010(void);
void func_0c1dafa8(struct Obj_tu5_03 *a)
{
 struct Obj_tu5_03 *parent=a;
 a=func_0c0374da(0,5,1);
 if(a){
  a->b12c=1;a->p16=func_0c1dae48;a->l84=(*dat_0c2d964c)[26];a->lcc=0x80f;
  a->pos=dat_0c232d5c;
  a->angles.array[0]=(int)(dat_0c232d68[0]*65536.0f/360.0f+0.5f)&0xffff;
  a->angles.array[1]=(int)(dat_0c232d68[1]*65536.0f/360.0f+0.5f)&0xffff;
  a->angles.array[2]=(int)(dat_0c232d68[2]*65536.0f/360.0f+0.5f)&0xffff;
  a->p20=parent;a->p200=&parent->f136;
 }
}
void func_0c1db04a(struct Obj_tu5_03 *a)
{
 table_0c262170[a->b5](a);
}
void func_0c1db05e(struct Obj_tu5_03 *a)
{
 short *record=dat_0c232d74;int i;
 for(i=0;i<a->b4;i++)record+=record[0]*2;
 a->b7=*(unsigned char *)record;a->b5=1;func_0c1db080(a);
}
void func_0c1db080(struct Obj_tu5_03 *a)
{
 short *record;int i;
 if(a->b6>=a->b7-1){
  a->b4++;a->b4=a->b4%6;a->b5=0;a->b6=0;func_0c1db05e(a);return;
 }
 record=dat_0c232d74;
 for(i=0;i<a->b4;i++)record+=record[0]*2;
 record++;a->i208=record[a->b6];record+=a->b7-1+a->b6;
 a->i212=*record;
 a->b5=2;func_0c1db136(a);
}
void func_0c1db136(struct Obj_tu5_03 *a)
{
 a->w28++;if(a->i212)a->w30++;if(a->w30>=360)a->w30=0;
 a->pos.x=dat_0c232d44.x+func_0c1ec2c0((int)((float)a->w30*65536.0f/360.0f+0.5f)&0xffff)*10.0f;
 if(a->w28>a->i208){a->w28=0;a->b5=1;a->b6++;}
}
void func_0c1db1b6(struct Obj_tu5_03 *a)
{
 struct Obj_tu5_03 *parent=a;
 a=func_0c0374da(0,5,1);
 if(a){
  a->b12c=1;a->p16=func_0c1db04a;a->l84=(*dat_0c2d964c)[25];a->lcc=0x80f;
  a->pos=dat_0c232d44;
  a->angles.array[0]=(int)(dat_0c232d50[0]*65536.0f/360.0f+0.5f)&0xffff;
  a->angles.array[1]=(int)(dat_0c232d50[1]*65536.0f/360.0f+0.5f)&0xffff;
  a->angles.array[2]=(int)(dat_0c232d50[2]*65536.0f/360.0f+0.5f)&0xffff;
  a->p20=parent;a->p200=&parent->f136;
 }
}
void func_0c1db29c(struct Obj_tu5_03 *a)
{
 a->i216=a->p20->i216;
 if(a->i216){
  a->i216=a->p20->i212;
  if(a->i216==1)a->pos.y-=1.0f;else if(a->i216==2)a->pos.y+=1.0f;
  if(!a->p200){a->p200=&a->p20->f136;a->pos=*(struct Vec3_tu5_03 *)&a->f92;a->angles.scalar.l44=0;}
 }else if(a->p200){
  struct Vec3_tu5_03 zero,result;
  a->p200=0;*(struct Vec3_tu5_03 *)&a->f92=a->pos;
  func_0c1ee3b0(0);zero.x=zero.y=zero.z=0.0f;func_0c1edc40(&a->f136);func_0c1ed310(&zero,&result);a->pos=result;func_0c1ee360(1);
  a->angles.scalar.l44=a->p20->p20->p20->angles.scalar.l44;
 }
}
void func_0c1db38c(struct Obj_tu5_03 *a)
{
 struct Obj_tu5_03 *parent=a;
 a=func_0c0374da(0,5,1);
 if(a){
  a->b12c=1;a->p16=func_0c1db29c;a->l84=(*dat_0c2d964c)[5];a->lcc=0x80f;
  a->pos=dat_0c232a08;
  a->angles.array[0]=(int)dat_0c232bb0[0];
  a->angles.array[1]=(int)dat_0c232bb0[1];
  a->angles.array[2]=(int)dat_0c232bb0[2];
  a->p20=parent;a->p200=&parent->f136;
  a->i216=parent->i216;
 }
}
void func_0c1db40e(struct Obj_tu5_03 *a)
{
 table_0c26217c[a->b5](a);a->i216=a->p20->i216;
}
void func_0c1db430(struct Obj_tu5_03 *a)
{
 short *record=dat_0c232a40;int i;
 for(i=0;i<a->b4;i++)record+=record[0]*2;
 a->b7=*(unsigned char *)record;record+=a->b7;
 a->angles.scalar.first=(int)(dat_0c232a38[*record]*65536.0f/360.0f+0.5f)&0xffff;
 a->b5++;func_0c1db484(a);
}
void func_0c1db484(struct Obj_tu5_03 *a)
{
 short *record;int i;
 if(a->b6>=a->b7-1){
  a->b4++;a->b4=a->b4%6;a->b5=0;a->b6=0;func_0c1db430(a);return;
 }
 record=dat_0c232a40;
 for(i=0;i<a->b4;i++)record+=record[0]*2;
 record++;a->i208=record[a->b6];record+=a->b7-1+a->b6;
 a->f80=dat_0c232a38[*record++];a->f84=(dat_0c232a38[*record]-a->f80)/(float)a->i208;
 a->b5=2;func_0c1db564(a);
}
void func_0c1db564(struct Obj_tu5_03 *a)
{
 float u,v;
 func_0c1d8ff8((*dat_0c2d964c)[7],a->l84);
 while(func_0c1d901e()==0){func_0c1d912a(&v,&u);u+=(float)a->w30*0.02f;func_0c1d917e(&v,&u);}
 a->i212=a->p20->i212;
 if(a->i212==1){a->w30++;a->w30=a->w30%50;}else if(a->i212==2){a->w30--;if(a->w30<0)a->w30=49;}
 a->angles.scalar.first=(int)(a->f80*65536.0f/360.0f+0.5f)&0xffff;
 if(func_0c1db664(a)){a->b5=1;a->b6++;}
}
unsigned char func_0c1db664(struct Obj_tu5_03 *a)
{
 a->w28++;a->angles.scalar.first+=(int)(a->f84*(float)a->w28*65536.0f/360.0f+0.5f)&0xffff;
 if(a->w28>a->i208){a->w28=0;return 1;}return 0;
}
void func_0c1db6c8(struct Obj_tu5_03 *a)
{
 struct Obj_tu5_03 *parent=a;
 a=func_0c0374da(0,5,1);
 if(a){
  a->b12c=1;a->p16=func_0c1db40e;a->l84=(*dat_0c2d964c)[6];a->lcc=0x803;
  a->pos=dat_0c232a14;
  a->angles.array[0]=(int)(dat_0c232a2c[0]*65536.0f/360.0f+0.5f)&0xffff;
  a->angles.array[1]=(int)(dat_0c232a2c[1]*65536.0f/360.0f+0.5f)&0xffff;
  a->angles.array[2]=(int)(dat_0c232a2c[2]*65536.0f/360.0f+0.5f)&0xffff;
  a->p20=parent;a->p200=&parent->f136;
  a->i216=parent->i216;func_0c1db38c(a);
 }
}
void func_0c1db776(struct Obj_tu5_03 *a)
{
 table_0c262188[a->b5](a);a->f88=a->p20->f88;a->p20->i212=a->i212;a->p20->i216=a->i216;
}
void func_0c1db7a8(struct Obj_tu5_03 *a)
{
 short *record=dat_0c232ca4;int i;
 for(i=0;i<a->b4;i++)record+=record[0]*2;
 a->b7=*(unsigned char *)record;a->b5=1;func_0c1db7ca(a);
}
void func_0c1db7ca(struct Obj_tu5_03 *a)
{
 short *record;int i;
 if(a->b6>=a->b7-1){
  a->b4++;a->b4=a->b4%6;a->b5=0;a->b6=0;func_0c1db7a8(a);return;
 }
 record=dat_0c232ca4;
 for(i=0;i<a->b4;i++)record+=record[0]*2;
 record++;a->i208=record[a->b6];record+=a->b7-1+a->b6;
 a->i212=*record;a->f80=dat_0c232c98[*record];
 a->b5=2;func_0c1db89a(a);
}
void func_0c1db89a(struct Obj_tu5_03 *a)
{
 a->w28++;a->angles.scalar.first+=(int)(a->f80*65536.0f/360.0f+0.5f)&0xffff;
 if(a->w28>a->i208){if(a->f80==-1.0f)a->i216^=1;a->w28=0;a->b5=1;a->b6++;}
}
void func_0c1db8fe(struct Obj_tu5_03 *a)
{
 struct Obj_tu5_03 *parent=a;
 a=func_0c0374da(0,5,1);
 if(a){
  a->b12c=1;a->p16=func_0c1db776;a->l84=(*dat_0c2d964c)[4];a->lcc=0x803;
  a->pos=dat_0c232c80;
  a->p20=parent;a->p200=&parent->f136;
  a->i216=1;a->f88=parent->f88;func_0c1dc738(a);
 }
}
void func_0c1db966(struct Obj_tu5_03 *a)
{
 table_0c262194[a->b5](a);
}
void func_0c1db9bc(struct Obj_tu5_03 *a)
{
 short *record=dat_0c232ca4;int i;
 for(i=0;i<a->b4;i++)record+=record[0]*2;
 a->b7=*(unsigned char *)record;a->b5=1;func_0c1db9de(a);
}
void func_0c1db9de(struct Obj_tu5_03 *a)
{
 short *record;int i;
 if(a->b6>=a->b7-1){
  a->b4++;a->b4=a->b4%6;a->b5=0;a->b6=0;func_0c1db9bc(a);return;
 }
 record=dat_0c232ca4;
 for(i=0;i<a->b4;i++)record+=record[0]*2;
 record++;a->i208=record[a->b6];record+=a->b7-1+a->b6;
 a->i212=*record;a->f80=dat_0c232c98[*record];
 a->b5=2;func_0c1dba6e(a);
}
void func_0c1dba6e(struct Obj_tu5_03 *a)
{
 a->w28++;a->angles.scalar.first+=(int)(a->f80*65536.0f/360.0f+0.5f)&0xffff;
 if(a->w28>a->i208){a->w28=0;a->b5=1;a->b6++;}
}
void func_0c1dbadc(struct Obj_tu5_03 *a)
{
 struct Obj_tu5_03 *parent=a;
 a=func_0c0374da(0,5,1);
 if(a){
  a->b12c=1;a->p16=func_0c1db966;a->l84=(*dat_0c2d964c)[2];a->lcc=0x803;
  a->pos=dat_0c232c68;
  a->p20=parent;a->p200=&parent->f136;
 }
}
void func_0c1dbb30(struct Obj_tu5_03 *a)
{
 table_0c2621a0[a->b5](a);
}
void func_0c1dbb44(struct Obj_tu5_03 *a)
{
 short *record=dat_0c232bc8;int i;
 for(i=0;i<a->b4;i++)record+=record[0]*2;
 a->b7=*(unsigned char *)record;record+=a->b7;
 a->angles.scalar.first=(int)(dat_0c232bbc[*record]*65536.0f/360.0f+0.5f)&0xffff;
 a->b5=1;func_0c1dbb96(a);
}
void func_0c1dbb96(struct Obj_tu5_03 *a)
{
 short *record;int i;
 if(a->b6>=a->b7-1){
  a->b4++;a->b4=a->b4%6;a->b5=0;a->b6=0;func_0c1dbb44(a);return;
 }
 record=dat_0c232bc8;
 for(i=0;i<a->b4;i++)record+=record[0]*2;
 record++;a->i208=record[a->b6];record+=a->b7-1+a->b6;
 a->f80=dat_0c232bbc[*record++];a->f84=(dat_0c232bbc[*record]-a->f80)/(float)a->i208;
 a->b5=2;func_0c1dbc74(a);
}
void func_0c1dbc74(struct Obj_tu5_03 *a)
{
 a->angles.scalar.first=(int)(a->f80*65536.0f/360.0f+0.5f)&0xffff;
 if(func_0c1dbcb8(a)){a->b5=1;a->b6++;}
}
unsigned char func_0c1dbcb8(struct Obj_tu5_03 *a)
{
 a->w28++;a->angles.scalar.first+=(int)(a->f84*(float)a->w28*65536.0f/360.0f+0.5f)&0xffff;
 if(a->w28>a->i208){a->w28=0;return 1;}return 0;
}
void func_0c1dbd20(struct Obj_tu5_03 *a)
{
 struct Obj_tu5_03 *parent=a;
 a=func_0c0374da(0,5,1);
 if(a){
  a->b12c=1;a->p16=func_0c1dbb30;a->l84=(*dat_0c2d964c)[3];a->lcc=0x803;
  a->pos=dat_0c232ba4;
  a->p20=parent;a->p200=&parent->f136;
  a->angles.scalar.first=(int)(dat_0c232bb4*65536.0f/360.0f+0.5f)&0xffff;
  func_0c1db8fe(a);func_0c1db1b6(a);func_0c1dafa8(a);func_0c1db6c8(a);
 }
}
void func_0c1dbdb0(struct Obj_tu5_03 *a)
{
 table_0c2621ac[a->b5](a);
}
void func_0c1dbdc4(struct Obj_tu5_03 *a)
{
 short *record=dat_0c232b04;int i;
 for(i=0;i<a->b4;i++)record+=record[0]*2;
 a->b7=*(unsigned char *)record;record+=a->b7;
 a->angles.scalar.l44=(int)(dat_0c232af8[*record]*65536.0f/360.0f+0.5f)&0xffff;
 a->b5=1;func_0c1dbe14(a);
}
void func_0c1dbe14(struct Obj_tu5_03 *a)
{
 short *record;int i;
 if(a->b6>=a->b7-1){
  a->b4++;a->b4=a->b4%6;a->b5=0;a->b6=0;func_0c1dbdc4(a);return;
 }
 record=dat_0c232b04;
 for(i=0;i<a->b4;i++)record+=record[0]*2;
 record++;a->i208=record[a->b6];record+=a->b7-1+a->b6;
 a->f80=dat_0c232af8[*record++];a->f84=(dat_0c232af8[*record]-a->f80)/(float)a->i208;
 a->b5=2;func_0c1dbef4(a);
}
void func_0c1dbef4(struct Obj_tu5_03 *a)
{
 a->angles.scalar.l44=(int)(a->f80*65536.0f/360.0f+0.5f)&0xffff;
 if(func_0c1dbf36(a)){a->b5=1;a->b6++;}
}
unsigned char func_0c1dbf36(struct Obj_tu5_03 *a)
{
 a->w28++;a->angles.scalar.l44+=(int)(a->f84*(float)a->w28*65536.0f/360.0f+0.5f)&0xffff;
 if(a->w28>a->i208){a->w28=0;return 1;}return 0;
}
void func_0c1dbf9c(void)
{
 struct Obj_tu5_03 *a=func_0c0374da(0,5,1);
 if(a){a->b12c=1;a->p16=func_0c1dbdb0;a->l84=(*dat_0c2d964c)[1];a->lcc=0x805;a->pos=dat_0c232ae0;
 a->angles.scalar.l44=(int)(dat_0c232af0*65536.0f/360.0f+0.5f)&0xffff;a->b32=1;func_0c1dbadc(a);func_0c1dbd20(a);}
}
void func_0c1dc010(void)
{
 func_0c1dbf9c();
}
