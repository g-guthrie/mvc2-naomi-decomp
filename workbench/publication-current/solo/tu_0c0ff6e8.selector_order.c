#include "objects.h"
extern void func_0c045248(struct Actor *,int),func_0c02a39a(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c0437b8(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c24ae00[])(struct Actor *);
void func_0c0ff6e8(struct Actor *a)
{
 int four=4,three=3;a->b7=a->b6=a->b5=0;a->b1e9=three;
 switch(a->b4c9){case 0:a->b1e9=three;break;case 1:case 2:a->b1e9=four;break;}
 func_0c045248(a,29);
}
void func_0c0ff71c(struct Actor *a)
{
 int four=4;a->b7=a->b6=a->b5=0;
 switch(a->b4c9){case 0:a->b1e9=3;break;case 1:case 2:a->b1e9=four;break;}
 func_0c045248(a,29);
}
void func_0c0ff74c(struct Actor *a)
{
 int zero=0,one=1;a->b7=a->b6=a->b5=zero;
 switch(a->b4c9){case 0:a->b1e9=zero;goto strength;case 1:a->b1e9=one;a->b1a3=zero;break;case 2:a->b1e9=7;strength:a->b1a3=one;break;}
 func_0c045248(a,21);
}
void func_0c0ff78e(struct Actor *a)
{
 int zero=0,one=1;a->b7=a->b6=a->b5=zero;
 switch(a->b4c9){case 0:a->b1e9=zero;goto strength;case 1:a->b1e9=one;goto strength;case 2:a->b1e9=7;strength:a->b1a3=one;break;}
 func_0c045248(a,21);
}
void func_0c0ff7d8(struct Actor *a){table_0c24ae00[a->b6](a);}
void func_0c0ff7ea(struct Actor *a)
{
 a->b6++;a->b1f9=2;func_0c02a39a(a,0);a->f92=-30;a->f96=-9.642857f;a->f104=0;a->f108=0;
 if(a->b1d2){a->f92=-a->f92;a->f104=-a->f104;}
 a->b1a1=66;a->w1ac=0;a->b19e=0;*(unsigned int *)&a->p1c4=0;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,20,0);
}
void func_0c0ff86a(struct Actor *a)
{
 func_0c02a026(a);a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(a->f56<a->f41c+-85.71428f){a->b6++;a->b1f9=0;a->f56=a->f41c;a->s28=6;a->f92=0;a->f96=0;a->f104=0;a->f108=0;func_0c02a0c4(a,20,1);}
}
void func_0c0ff8fc(struct Actor *a){if(func_0c02a026(a)<0&&--a->s28==0)func_0c0437b8(a);}
