#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *),func_0c02a0c4(struct Actor *,int,int),func_0c159424(struct Actor *,int,int);
extern void (*table_0c2452c4[])(struct Actor *);
void func_0c0b8e48(struct Actor *a)
{
 int one=1; a->b1f5=one;
 if(!((a->f264-=0.0250000004f)>0.0f)){a->b6++;a->b12c=0;a->f264=one;a->s28=20;}
}
void func_0c0b8e7c(struct Actor *a){a->b1f5=1;if(--a->s28==0){a->b6++;a->s28=20;func_0c159424(a,0,0);}}
void func_0c0b8ea4(struct Actor *a){a->b1f5=1;if(--a->s28==0){a->b6++;a->s28=20;func_0c159424(a,0,1);}}
void func_0c0b8ecc(struct Actor *a){a->b1f5=1;if(--a->s28==0){a->b6++;a->s28=20;func_0c159424(a,0,2);}}
void func_0c0b8ef4(struct Actor *a){a->b1f5=1;if(--a->s28==0){a->b6++;a->b12c=1;func_0c02a0c4(a,3,2);}}
void func_0c0b8f1c(struct Actor *a){if(func_0c02a026(a)<0){func_0c0437b8(a);return;}if(a->b141)a->b1f5=1;}
void func_0c0b8f4a(struct Actor *a){table_0c2452c4[a->b6](a);}
