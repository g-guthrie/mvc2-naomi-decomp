#include "objects.h"
extern struct ActorFlags dat_0c2f8338,*dat_0c2d6f84;
extern unsigned char dat_0c24a780[];
extern void (*table_0c24a788[])(struct Actor *),(*table_0c24a7a8[])(struct Actor *),(*table_0c24a7d0[])(struct Actor *);
extern void func_0c02a39a(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
void func_0c0f9104(struct Actor *a)
{
 if(!a->b6){
  int animation;
  a->b6++;a->b7=0;func_0c02a39a(a,0);
  switch(a->b32){
   case 0:{struct Actor *other=a->p20c;
    if((*(unsigned int *)&other->pad13c[2]&0x04000000u)|(*(unsigned int *)&other->pad13c[6]&0u)){a->b32=6;return;}
    a->b32=dat_0c24a780[(dat_0c2d6f84->flags&3)+(dat_0c2f8338.pad68[2]?4:0)];return;}
   case 1:a->b32=2;animation=2;break;
   case 2:case 3:
    if((signed char)dat_0c2f8338.pad47[15]==a->b2){a->b32=7;return;}
    a->b32=5;animation=5;break;
   case 4:a->b32=3;animation=5;break;
   default:return;
  }
  func_0c02a0c4(a,19,animation);
 }else table_0c24a788[a->b32](a);
}
void func_0c0f91e0(struct Actor *a){table_0c24a7a8[a->b1e9](a);}
void func_0c0f91f4(struct Actor *a){table_0c24a7d0[a->b6](a);}
