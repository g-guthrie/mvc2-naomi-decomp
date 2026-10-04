/* UNVERIFIED complete C draft. No registration or added coverage. */
#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c043352(struct Actor *),func_0c0437b8(struct Actor *),func_0c044df4(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c24825c[])(struct Actor *);
void func_0c0cf314(struct Actor *),func_0c0cf3b0(struct Actor *),func_0c0cf520(struct Actor *),func_0c0cf5b8(struct Actor *),func_0c0cf690(struct Actor *);
void func_0c0cf268(struct Actor *a){table_0c24825c[a->b1ff](a);}
void func_0c0cf27c(struct Actor *a){register float previous;
 func_0c043352(a);previous=a->f92;if(a->b6==2){
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
 if(a->f92!=0.0f && a->f92*previous<0.0f){a->f104=0;a->f92=0;}}
 else func_0c0cf314(a);}
void func_0c0cf314(struct Actor *a){
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c044df4(a);
 if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0cf690(a);else func_0c0cf5b8(a);}
 else{if(a->b1f9==1)func_0c0cf520(a);else func_0c0cf3b0(a);}}
void func_0c0cf3b0(struct Actor *a){int zero,two;struct Tbl_ub3_01 *statistics;
 switch(a->b1e8){case 2:zero=0;if(!a->b6){statistics=dat_0c2f83f8;two=2;
 if(a->b141&1){a->b141=zero;a->b1a1=two;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;statistics->arr[a->b2]++;}
 if(a->b141&two){a->b141=zero;a->b1a1=25;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;statistics->arr[a->b2]++;}
 goto animate;
 }else{func_0c02a026(a);if(!a->b7){if(a->b141){a->b7++;a->f96=6.428571224213f;a->f108=-0.5357143f;a->f92=8.33333302f;a->f104=-0.15625f;
 if(!(a->w1fa&0x800)){a->f92=-a->f92;a->f104=-a->f104;}if(!a->w130){a->f92=-a->f92;a->f104=-a->f104;}}}
 else if(!a->b141){a->b6=zero;a->b7=zero;a->f56=a->f41c;a->f92=0;a->f96=0;a->f104=0;a->f108=0;}}
 break;
 case 0:case 1:animate:if(func_0c02a026(a)<0)func_0c0437b8(a);break;default:break;}}
void func_0c0cf520(struct Actor *a){int zero;struct Tbl_ub3_01 *statistics;
 switch(a->b1e8){case 2:statistics=dat_0c2f83f8;zero=0;
 if(a->b141&1){a->b141=zero;a->b1a1=8;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;statistics->arr[a->b2]++;}
 if(a->b141&2){a->b141=zero;a->b1a1=26;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;statistics->arr[a->b2]++;}
 case 0:case 1:if(func_0c02a026(a)<0)func_0c0437b8(a);break;default:break;}}
void func_0c0cf5b8(struct Actor *a){
 switch(a->b1e8){case 2:if(!a->b6)goto animate;func_0c02a026(a);
 if(!a->b7){if(a->b141){a->b7++;a->f92=13.33333302f;a->f104=-0.78125f;if(!a->w130){a->f92=-a->f92;a->f104=-a->f104;}}}
 else if(!a->b141){a->b6=0;a->f56=a->f41c;a->f92=0;a->f96=0;a->f104=0;a->f108=0;}
 else if(a->b141==2){a->b141=1;a->f96=8.5714283f;a->f108=-1.07142854f;}
 break;
 case 0:case 1:animate:if(func_0c02a026(a)<0)func_0c0437b8(a);break;default:break;}}
void func_0c0cf690(struct Actor *a){switch(a->b1e8){case 0:case 1:case 2:if(func_0c02a026(a)<0)func_0c0437b8(a);break;default:break;}}
