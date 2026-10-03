#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0bbb16(struct Actor *),func_0c0442fa(struct Actor *),func_0c02a0c4(struct Actor *,int,int),func_0c1cf17c(struct Actor *),func_0c045248(struct Actor *,int);
extern struct Actor *func_0c15b85c(struct Actor *);
extern unsigned char dat_0c2f8338[];
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern struct ActorFlags *dat_0c2d6f84;
extern void (*table_0c245500[])(struct Actor *);
void func_0c0b9e80(struct Actor *a)
{
 func_0c02a026(a);a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(a->b141){a->b6++;a->f92=0;a->f96=0;a->f104=0;a->f108=0;a->f92=a->b1d2?1.66666663f:-1.66666663f;}
}
void func_0c0b9efe(struct Actor *a)
{
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;if(func_0c02a026(a)<0)func_0c0bbb16(a);
}
void func_0c0b9f58(struct Actor *a){func_0c0bbb16(a);}
void func_0c0b9f5e(struct Actor *a){a->b1f4=2;table_0c245500[a->b6](a);}
void func_0c0b9f78(struct Actor *a)
{
 a->b12c=0;a->b149=255;
 if(dat_0c2f8338[0]>=2){a->b6++;a->b12c=1;func_0c0442fa(a);func_0c02a0c4(a,18,0);a->f116=0.850000024f;((float *)a)[30]=0;((float *)a)[31]=0;((float *)a)[32]=0;func_0c1cf17c(a);func_0c15b85c(a);}
}
void func_0c0ba016(struct Actor *a){if(func_0c02a026(a)<0)a->b5++;}
void func_0c0ba036(struct Actor *a)
{
 int zero=0;float distance;
 switch(a->b32){
 case 0:case 2:case 4:
  a->b6=a->b7=a->b5=zero;distance=a->p20c->f52-a->f52;if(!a->b1d2)distance=-distance;
  if((float)(unsigned int)(distance-a->f80*160.0f)>a->f80*213.33333f&&((signed char *)dat_0c2f83f8)[62]==a->b2&&!((signed char *)dat_0c2f83f8)[3])a->b1e9=8;
  else a->b1e9=(dat_0c2d6f84->i90&1)?6:7;
  func_0c045248(a,21);break;
 case 1:case 3:a->b6=a->b7=a->b5=zero;a->b1e9=10;func_0c045248(a,21);break;
 }
}
