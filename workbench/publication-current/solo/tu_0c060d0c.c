#include "objects.h"
struct MotionChoice_060d0c { signed char motion,status; };
extern int table_0c23fd8c[];
extern struct MotionChoice_060d0c table_0c23ffac[];
extern unsigned char dat_0c2f837e;
extern struct ActorFlags *dat_0c2d6f84;
extern char func_0c02a026(struct Actor *);
extern void func_0c02a684(struct Actor *,int,int,int),func_0c02a0c4(struct Actor *,int,int),func_0c02a39a(struct Actor *,int),func_0c18f420(struct Actor *,int);
extern int func_0c043628(struct Actor *),func_0c1ec190(void);
extern void (*table_0c23ffa4[])(struct Actor *),(*table_0c23ffcc[])(struct Actor *);
void func_0c060d0c(struct Actor *a)
{
 func_0c02a026(a);
 if(a->b140){
 a->b140=0;func_0c02a684(a,0,table_0c23fd8c[a->b37]+a->b14b,1);
 if(!a->s28--){func_0c02a684(a,0,table_0c23fd8c[a->b37]+4,1);a->b6++;func_0c02a0c4(a,18,2);}
 }
}
void func_0c060d80(struct Actor *a)
{
 if(func_0c02a026(a)<0){a->b5++;func_0c02a39a(a,0);return;}
 if(a->b140){
 if(a->b140==96)func_0c02a39a(a,0);
 else func_0c02a684(a,0,table_0c23fd8c[a->b37]+(signed char)a->b140,1);
 a->b140=0;
 }
}
void func_0c060de4(struct Actor *a){table_0c23ffa4[a->b6](a);}
void func_0c060df6(struct Actor *a)
{
 signed char index;int random;struct MotionChoice_060d0c *choice;
 signed char *sub=(signed char *)&a->sub2a4;
 if(a->w340&0x3f0){
 if(a->w340&0x200){index=0;goto selected;}
 if(a->w340&0x100){index=4;goto selected;}
 if(a->w340&0x80){index=6;goto selected;}
 if(a->w340&0x40){index=8;goto selected;}
 if(a->w340&0x20){index=10;goto selected;}
 if(dat_0c2f837e&&func_0c043628(a)==1){index=12;goto selected;}
 }else if(dat_0c2f837e&&func_0c043628(a)==1){
 random=func_0c1ec190();random+=dat_0c2d6f84->flags;index=random&15;goto selected;
 }
 random=func_0c1ec190();random+=dat_0c2d6f84->flags;index=random&7;
 selected:choice=&table_0c23ffac[index];
 a->b158=choice->motion;a->b33=choice->motion;sub[12]=choice->status;
 func_0c02a0c4(a,19,a->b158);
 if(a->b33==5)func_0c18f420(a,2);
}
void func_0c060f14(struct Actor *a){((signed char *)&a->sub2a4)[12]=9;func_0c02a0c4(a,19,7);}
void func_0c060f24(struct Actor *a){((signed char *)&a->sub2a4)[12]=9;func_0c02a0c4(a,19,8);}
void func_0c060f34(struct Actor *a){a->b6++;a->b7=0;table_0c23ffcc[a->b32](a);}
