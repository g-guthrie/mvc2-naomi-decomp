#include "objects.h"
extern void func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *),func_0c0437b8(struct Actor *),func_0c15dd00(struct Actor *),func_0c15e32c(struct Actor *);
extern void func_0c02a39a(struct Actor *,int),func_0c048bb0(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern char func_0c02a026(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c247abc[])(struct Actor *),(*table_0c247ac8[])(struct Actor *),(*table_0c247ad4[])(struct Actor *),(*table_0c247ae0[])(struct Actor *);
void func_0c0c8bd8(struct Actor *),func_0c0c8d3e(struct Actor *),func_0c0c8e54(struct Actor *),func_0c0c8d8e(struct Actor *),func_0c0c8ea6(struct Actor *);
void func_0c0c8b54(struct Actor *a){int zero;a->b7++;func_0c0442fa(a);func_0c02a39a(a,1);a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;zero=0;a->f56=a->f41c;a->b1fc=zero;a->b1f9=zero;func_0c048bb0(a,5);a->b1a1=58;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,21,10);func_0c0432ca(a);func_0c0c8bd8(a);}
void func_0c0c8bd8(struct Actor *a){func_0c02a026(a);if(a->b141){a->b7++;a->b141=0;func_0c15dd00(a);}}
void func_0c0c8c06(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0c8c28(struct Actor *a){struct Actor *p=a;table_0c247abc[p->b6](a);}
void func_0c0c8c3a(struct Actor *a){struct Actor *p=a;table_0c247ac8[p->b7](a);}
void func_0c0c8c4c(struct Actor *a){int zero;unsigned char *sub=(unsigned char *)&a->sub2a4;if(sub[8]){((char *)sub)[7]=-1;if(a->b1f9==2){a->b6=2;func_0c0c8ea6(a);return;}a->b6=1;func_0c0c8d8e(a);return;}a->b7++;func_0c0442fa(a);func_0c02a39a(a,1);a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;zero=0;a->f56=a->f41c;a->b1fc=zero;a->b1f9=zero;func_0c048bb0(a,5);a->b1a1=58;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,21,11);func_0c0432ca(a);func_0c0c8d3e(a);}
void func_0c0c8d3e(struct Actor *a){func_0c02a026(a);if(a->b141){a->b7++;a->b141=0;func_0c15e32c(a);}}
void func_0c0c8d6c(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0c8d8e(struct Actor *a){struct Actor *p=a;table_0c247ad4[p->b7](a);}
void func_0c0c8dd0(struct Actor *a){int zero;a->b7++;func_0c0442fa(a);func_0c02a39a(a,1);a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;zero=0;a->f56=a->f41c;a->b1fc=zero;a->b1f9=zero;func_0c048bb0(a,5);a->b1a1=72;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,21,13);func_0c0432ca(a);func_0c0c8e54(a);}
void func_0c0c8e54(struct Actor *a){struct ActorSub2a4 *sub=&a->sub2a4;func_0c02a026(a);if(a->b141){a->b7++;((unsigned char *)sub)[9]=1;}}
void func_0c0c8e84(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0c8ea6(struct Actor *a){struct Actor *p=a;table_0c247ae0[p->b7](a);}
