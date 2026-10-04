#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern struct Actor *func_0c15ba0c(struct Actor *,int,int);
extern void func_0c0437b8(struct Actor *),func_0c0451f2(struct Actor *),func_0c048bb0(struct Actor *,int),func_0c0442fa(struct Actor *),func_0c0344a0(struct Actor *,int),func_0c0432ca(struct Actor *),func_0c043324(struct Actor *),func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern struct ActorFlags *dat_0c2d6f84;
extern const struct F3_0c0268b8 dat_0c245c34[],dat_0c245c38[];
extern const float dat_0c245c78[][2],dat_0c245c7c[][2];
extern const unsigned int dat_0c245c54[];
extern void (*table_0c245c24[])(struct Actor *),(*table_0c245c6c[])(struct Actor *);
extern void (*table_0c245c88[])(struct Actor *,struct ActorSub2a4 *);
void func_0c0bde74(struct Actor *);

void func_0c0bdc00(struct Actor *a)
{
 if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
 if(((char *)&a->w150)[1]&1){
  int zero=0;
  ((char *)&a->w150)[1]=zero;func_0c15ba0c(a,zero,zero);
 }
}
void func_0c0bdc40(struct Actor *a){table_0c245c24[a->b6](a);}
void func_0c0bdc52(struct Actor *a)
{
 int zero=0;
 a->b6++;a->b1a1=a->b1a3?55:52;
 a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;
 func_0c048bb0(a,12);func_0c0442fa(a);a->b1f9=zero;a->f56=a->f41c;
 if(dat_0c2d6f84->pad68[1])func_0c0344a0(a,20);else func_0c0344a0(a,26);
 a->f92=a->b1d2?dat_0c245c34[(unsigned char)a->b1a3].pad0:-dat_0c245c34[(unsigned char)a->b1a3].pad0;
 a->f104=a->b1d2?dat_0c245c38[(unsigned char)a->b1a3].pad0:-dat_0c245c38[(unsigned char)a->b1a3].pad0;
 a->f96=dat_0c245c34[(unsigned char)a->b1a3].f8;a->f108=dat_0c245c34[(unsigned char)a->b1a3].f12;
 func_0c0432ca(a);func_0c15ba0c(a,4,2);a->b158=a->b1a3?3:1;func_0c02a0c4(a,21,a->b158);
}
void func_0c0bddb8(struct Actor *a)
{
 func_0c02a026(a);
 if(((char *)&a->w150)[1]&1){
  a->b6++;func_0c0451f2(a);
  a->f52+=a->b1d2?40.0f:-40.0f;
  func_0c0bde74(a);
 }
}
void func_0c0bde0c(struct Actor *a){func_0c02a026(a);func_0c0bde74(a);}
void func_0c0bde1c(struct Actor *a)
{
 if(func_0c02a026(a)<0){a->b1f9=1;func_0c0437b8(a);}
}
void func_0c0bde74(struct Actor *a)
{
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if((!a->b1d2&&a->f92>0.0f)||(a->b1d2&&a->f92<0.0f)){a->f92=0;a->f104=0;}
 if(a->b141){
  unsigned int tag=dat_0c245c54[(a->b141>>1)-1];a->b1a1=tag;a->w1ac=0;a->b19e=0;*(void **)&a->p1c4=0;
  dat_0c2f83f8->arr[a->b2]++;a->b141=0;
 }
 if(!(a->f56>a->f41c)){
  a->b6++;a->f56=a->f41c;a->b1f9=0;a->f92=0;a->f96=0;a->f104=0;a->f108=0;
  func_0c043324(a);func_0c02a0c4(a,21,26);
 }
}
void func_0c0bdf64(struct Actor *a){table_0c245c6c[a->b6](a);}
void func_0c0bdf76(struct Actor *a)
{
 int zero=0;
 a->b6++;a->b1a1=a->b1a3?59:57;
 a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;
 func_0c048bb0(a,12);func_0c0442fa(a);a->b1f9=zero;a->f56=a->f41c;
 a->f92=0;a->f96=0;a->f104=0;a->f108=0;a->s30=zero;
 a->f92=a->b1d2?dat_0c245c78[(unsigned char)a->b1a3][0]:-dat_0c245c78[(unsigned char)a->b1a3][0];
 a->f96=dat_0c245c7c[(unsigned char)a->b1a3][0];a->f108=-2.1428571f;
 func_0c0432ca(a);func_0c15ba0c(a,4,1);a->b158=a->b1a3?6:4;func_0c02a0c4(a,21,a->b158);
}
void func_0c0be082(struct Actor *a)
{
 if(a->b19e&&!a->s30)a->s30=1;
 if(!a->b14b)func_0c02a026(a);
 if(a->b141==0)return;
 if(0<=a->b141){a->f52+=a->f92;a->f92+=a->f104;return;}
 func_0c0451f2(a);
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(!(a->f56>a->f41c)){
  a->b6++;a->f56=a->f41c;a->b1f9=0;a->f92=0;a->f96=0;a->f104=0;a->f108=0;
  func_0c043324(a);func_0c0346da(a,52);
 }
}
void func_0c0be19c(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0be1be(struct Actor *a){table_0c245c88[a->b6](a,&a->sub2a4);}
void func_0c0be1d4(struct Actor *a)
{
 int zero=0;
 if(a->b255==6){a->b3f0=255;a->b3f1=16;}
 a->b6++;a->b1a1=64;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;
 dat_0c2f83f8->arr[a->b2]++;func_0c0442fa(a);a->b1f9=zero;a->f56=a->f41c;
 a->f92=0;a->f96=0;a->f104=0;a->f108=0;
 func_0c15ba0c(a,2,zero);func_0c0432ca(a);func_0c02a0c4(a,22,zero);
}
