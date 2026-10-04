#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0442fa(struct Actor *),func_0c0437b8(struct Actor *);
extern void func_0c02a39a(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c1a72d4(struct Actor *,int);
extern void func_0c1e4a92(float *,float *,int),func_0c1ce916(struct LinkedActorVec3 *,int,int,int),func_0c1593e2(struct Actor *,struct LinkedActorVec3 *,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c245120[])(struct Actor *);
void func_0c0b7a1e(struct Actor *),func_0c0b7d02(struct Actor *);
void func_0c0b79ac(struct Actor *a){int zero;
 a->b6++;func_0c0442fa(a);func_0c02a39a(a,0);a->f92=0;a->f96=0;a->f104=0;a->f108=0;zero=0;a->f56=a->f41c;a->b1fc=zero;a->b1f9=zero;
 a->b1a1=51;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,21,6);func_0c0b7a1e(a);}
void func_0c0b7a1e(struct Actor *a){func_0c02a026(a);if(a->b141){a->b6++;func_0c1a72d4(a,2);}if(a->w150){if(!a->w130)a->f52+=*(short *)&a->w150*1.66666663f;else a->f52-=*(short *)&a->w150*1.66666663f;a->w150=0;}}
void func_0c0b7a86(struct Actor *a){
 struct LinkedActorVec3 point;register float lower,first,second;unsigned char i;int bit;float base;register void (*spawn)(struct LinkedActorVec3 *,int,int,int);
 func_0c02a026(a);
 if(a->b141!=1){a->b6++;if(!a->w130){first=a->f52+(-160.0f);second=a->f52+(-186.66666f);}else{first=a->f52+160.0f;second=a->f52+186.66666f;}lower=-40.0f;spawn=func_0c1ce916;
 for(i=0;i<4;i++){register int index=i;bit=1<<index;if(!(a->sub2a4.b1&(unsigned char)bit)){func_0c1e4a92(&point.x,&point.y,index);base=(index==1||index==2)?first:second;
 if(!(base+lower>point.x) && !(point.x>base+40.0f)){a->sub2a4.b1|=bit;spawn(&point,(short)a->w130,3,0);func_0c1593e2(a,&point,i);}}}}
 if(a->w150){if(!a->w130)a->f52+=*(short *)&a->w150*1.66666663f;else a->f52-=*(short *)&a->w150*1.66666663f;a->w150=0;}}
void func_0c0b7be8(struct Actor *a){if(func_0c02a026(a)<0){func_0c0437b8(a);return;}if(a->w150){if(!a->w130)a->f52+=*(short *)&a->w150*1.66666663f;else a->f52-=*(short *)&a->w150*1.66666663f;a->w150=0;}}
void func_0c0b7c78(struct Actor *a){table_0c245120[a->b6](a);}
void func_0c0b7c8a(struct Actor *a){int zero;
 a->b6++;func_0c0442fa(a);func_0c02a39a(a,0);a->f92=0;a->f96=0;a->f104=0;a->f108=0;zero=0;a->s30=zero;a->f56=a->f41c;a->b1fc=zero;a->b1f9=zero;
 a->b1a1=52;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,21,7);func_0c0b7d02(a);}
void func_0c0b7d02(struct Actor *a){func_0c02a026(a);if(!a->b141){a->b6++;a->s28=60;a->f92=a->b1d2?13.33333302f:-13.33333302f;}}
