/* Unverified:298/336 linked bytes; register and field-store scheduling differ. */
/* Timed strength/facing animation selection and follow-up attack state. */
#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c0437b8(struct Actor *),func_0c167a38(struct Actor *,int),func_0c02a39a(struct Actor *,int),func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c2492e0[])(struct Actor *);
void func_0c0e22f8(struct Actor *a){
 func_0c02a026(a);a->s28--;
 if(a->s28<=0){a->b6++;
 if(!a->b1a3){if(a->w130)func_0c02a0c4(a,21,31);else func_0c02a0c4(a,21,28);}
 else{if(a->w130)func_0c02a0c4(a,21,33);else func_0c02a0c4(a,21,30);}
 }
}
void func_0c0e2354(struct Actor *a){
 if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
 if(a->b141<0){
 int zero=0;a->b141=zero;
 a->b1a1=a->b1a3?79:79;
 a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
 func_0c167a38(a,2);
 }
}
void func_0c0e23b6(struct Actor *a){table_0c2492e0[a->b6](a);}
void func_0c0e23c8(struct Actor *a){
 a->b6++;if(a->b255==6){a->b3f0=255;a->b3f1=16;}
 func_0c02a39a(a,0);a->b1f9=0;func_0c0442fa(a);func_0c0432ca(a);func_0c02a0c4(a,22,6);
}
