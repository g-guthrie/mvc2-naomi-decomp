#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c043352(struct Actor *),func_0c044df4(struct Actor *),func_0c0437b8(struct Actor *),func_0c0438de(struct Actor *),func_0c0421f4(struct Actor *),func_0c0420f8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c044cbc(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c0346da(struct Actor *,int),func_0c048bb0(struct Actor *,int);
extern void (*table_0c244804[])(struct Actor *);
void func_0c0add2a(struct Actor *),func_0c0addac(struct Actor *),func_0c0ade44(struct Actor *),func_0c0adea0(struct Actor *),func_0c0adec2(struct Actor *),func_0c0adefa(struct Actor *),func_0c0adf3c(struct Actor *),func_0c0adf90(struct Actor *);
void func_0c0add1c(struct Actor *a){func_0c043352(a);func_0c0add2a(a);}
void func_0c0add2a(struct Actor *a){
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c044df4(a);
 if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0adec2(a);else func_0c0adea0(a);}
 else{if(a->b1f9==1)func_0c0ade44(a);else func_0c0addac(a);}
}
void func_0c0addac(struct Actor *a){int zero;unsigned char mode=a->b1e8;
 if(mode==2){if(func_0c02a026(a)<0){func_0c0437b8(a);return;}if(a->b14b){a->b1a1=2;zero=0;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;a->b14b=zero;}}
 else if(mode==0 || mode==1){if(func_0c02a026(a)<0)func_0c0437b8(a);}
}
void func_0c0ade44(struct Actor *a){int zero;
 if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
 if(a->b1e8==2 && a->b14b){a->b1a1=8;zero=0;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;a->b14b=zero;}
}
void func_0c0adea0(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0adec2(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0adee4(struct Actor *a){func_0c0421f4(a);func_0c0420f8(a);func_0c0adefa(a);}
void func_0c0adefa(struct Actor *a){func_0c042018(a);func_0c0421b8(a);if((unsigned char)a->b1fe==1)func_0c0adf90(a);else func_0c0adf3c(a);if(func_0c044e52(a))func_0c044f1c(a);}
void func_0c0adf3c(struct Actor *a){if(func_0c02a026(a)<0)func_0c0438de(a);}
void func_0c0adf90(struct Actor *a){int zero;unsigned char mode=a->b1e8;
 if(mode==2){if(func_0c02a026(a)<0){func_0c0438de(a);return;}if(a->b14b){a->b1a1=17;zero=0;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;a->b14b=zero;}}
 else if(mode==0 || mode==1){if(func_0c02a026(a)<0)func_0c0438de(a);}
}
void func_0c0ae008(struct Actor *a){int zero;
 if(!a->b6){func_0c044cbc(a);a->b6++;a->b1f9=1;
 if(!a->b1fe){func_0c02a0c4(a,20,3);a->b1a1=64;}else{func_0c02a0c4(a,20,4);a->b1a1=68;}
 zero=0;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c0346da(a,21);func_0c048bb0(a,5);}
 if(a->b1ff==3)func_0c043352(a);
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c044df4(a);if(func_0c02a026(a)<0)func_0c0437b8(a);
}
void func_0c0ae106(struct Actor *a){table_0c244804[a->b6](a);}
void func_0c0ae118(struct Actor *a){func_0c02a026(a);if(!a->b141){a->b6++;a->f92=0;a->f96=0;a->f104=0;a->f108=0;a->f92=a->b1d2?13.33333302f:-13.33333302f;a->s28=16;}}
