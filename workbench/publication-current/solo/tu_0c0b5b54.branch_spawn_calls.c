#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern unsigned int func_0c02849a(void);
extern unsigned char func_0c0b4a70(struct Actor *);
extern void func_0c0b4aa0(struct Actor *),func_0c0442fa(struct Actor *),func_0c0437b8(struct Actor *),func_0c0438de(struct Actor *),func_0c0432ca(struct Actor *);
extern void func_0c048bb0(struct Actor *,int),func_0c02a39a(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c0344a0(struct Actor *,int),func_0c043014(struct Actor *,struct LinkedActorVec3 *);
extern struct Actor *func_0c155740(struct Actor *,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c244f18[])(struct Actor *),(*table_0c244f28[])(struct Actor *);
extern int (*table_0c244f30[])(struct Actor *);
void func_0c0b5c02(struct Actor *),func_0c0b5d48(struct Actor *),func_0c0b5e1e(struct Actor *);
void func_0c0b5b54(struct Actor *a){int zero;
 a->b6++;func_0c048bb0(a,5);a->b1a1=55;zero=0;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
 if(a->b1f9==2){func_0c0442fa(a);func_0c02a39a(a,0);a->b158=1;a->f92/=16.0f;a->f96/=8.0f;a->f108/=64.0f;a->f104=0;}
 else{a->b158=zero;func_0c0b4aa0(a);}
 func_0c02a0c4(a,21,a->b158);func_0c0344a0(a,5);func_0c0b5c02(a);
}
void func_0c0b5c02(struct Actor *a){int zero;
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c0b4a70(a);
 if(func_0c02a026(a)<0){if(a->b1f9!=2)func_0c0437b8(a);else func_0c0438de(a);return;}
 if(a->b141){zero=0;a->b141=zero;(*(int *)&a->sub2a4.byte16)=1;if((*(int *)&a->sub2a4.s12))(*(int *)&a->sub2a4.byte16)=zero;if(a->b1f9==2)func_0c155740(a,2);else func_0c155740(a,0);(*(int *)&a->sub2a4.b20)=1;}
}
void func_0c0b5cf0(struct Actor *a){table_0c244f18[a->b6](a);}
void func_0c0b5d02(struct Actor *a){int zero;
 a->b6++;func_0c0442fa(a);a->f92=0;a->f96=0;a->f104=0;a->f108=0;zero=0;a->f56=a->f41c;a->b1fc=zero;a->b1f9=zero;func_0c02a0c4(a,20,2);func_0c0b5d48(a);
}
void func_0c0b5d48(struct Actor *a){if(func_0c02a026(a)<0){a->b6++;func_0c02a0c4(a,20,3);}}
void func_0c0b5d72(struct Actor *a){int one,action;
 func_0c0b5e1e(a);if(func_0c02a026(a)<0){one=1;if(a->b525){if((int)func_0c02849a()&one)(*(int *)&a->sub2a4.w8)=one;else (*(int *)&a->sub2a4.w8)=0;}
 if((*(int *)&a->sub2a4.w8)>=one)action=3;else{a->b6++;action=4;}func_0c02a0c4(a,20,action);(*(int *)&a->sub2a4.w8)=0;}}
void func_0c0b5dfc(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0b5e1e(struct Actor *a){if(a->w348&0x8000)(*(int *)&a->sub2a4.w8)++;}
void func_0c0b5e36(struct Actor *a){table_0c244f28[a->b6](a);}
void func_0c0b5e48(struct Actor *a){int zero=0;
 a->b6++;a->f92=0;a->f96=0;a->f104=0;a->f108=0;a->b1f9=zero;a->f56=a->f41c;func_0c0442fa(a);func_0c0432ca(a);a->b1a1=63;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,21,23);}
void func_0c0b5eb6(struct Actor *a){struct LinkedActorVec3 point;
 if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
 if(a->b141==15){a->b141=0;point.x=26.666666031f;point.y=85.71428f;func_0c043014(a,&point);}}
int func_0c0b5f02(struct Actor *a){return table_0c244f30[a->b1f9](a);}
