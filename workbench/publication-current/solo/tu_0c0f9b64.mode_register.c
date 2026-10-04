#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *),func_0c043324(struct Actor *),func_0c0442fa(struct Actor *),func_0c02a39a(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern struct LinkedActor *func_0c1b3e6c(struct LinkedActor *,unsigned char);
extern struct MotionGlobal_0c2d9260 dat_0c2d9260;
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c24a84c[])(struct Actor *);
void func_0c0f9b64(struct Actor *a)
{
 register int mode;
 func_0c02a026(a);a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(!(a->f96>0)&&!(a->f56+68.57143f>a->f41c)){
  a->b6++;a->f56=a->f41c;a->f92=0;a->f96=0;a->f104=0;a->f108=0;
  dat_0c2d9260.b5=3;dat_0c2d9260.b6=1;func_0c043324(a);
  if(a->b19e){a->b1f9=1;mode=a->b1a3*2+21;}else{a->b1f9=3;mode=a->b1a3*2+24;}
  func_0c02a0c4(a,21,mode);
 }
}
void func_0c0f9c32(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0f9c54(struct Actor *a)
{
 if(a->b6==0){a->b6++;a->s28=60;a->f92=0;a->f96=0;a->f104=0;a->f108=0;a->f56=a->f41c;func_0c0442fa(a);func_0c02a0c4(a,21,17);return;}
 func_0c02a026(a);
 if(--a->s28==0){func_0c0437b8(a);return;}
 if(a->b141){a->b141=0;func_0c1b3e6c((struct LinkedActor *)a,7);}
}
void func_0c0f9cf6(struct Actor *a){a->b6++;func_0c02a0c4(a,20,3);}
void func_0c0f9d04(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0f9d26(struct Actor *a){table_0c24a84c[a->b6](a);}
void func_0c0f9d38(struct Actor *a)
{
 a->b6++;func_0c02a39a(a,0);a->b1f9=2;a->f92=30;
 if(!a->b1d2)a->f92=-a->f92;
 a->f104=0;a->f96=4.28571415f;a->f108=-0.80357140303f;
 a->b1a1=62;a->w1ac=0;a->b19e=0;*(unsigned int *)&a->p1c4=0;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,20,0);
}
