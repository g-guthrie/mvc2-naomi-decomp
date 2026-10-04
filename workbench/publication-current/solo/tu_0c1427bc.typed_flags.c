#include "objects.h"
extern unsigned char dat_0c2f8338[];
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern char func_0c02a026(struct Actor *);
extern void func_0c037d0c(struct Actor *),func_0c037688(struct Actor *);
void func_0c1427bc(struct Actor *a,struct Actor *owner)
{
 unsigned char *input=(unsigned char *)&owner->sub2a4;
 struct Actor *parent=a->p20;
 int zero=0;unsigned short bits;unsigned char choice;
 if(owner->b5||owner->b1d0!=21||owner->b1e9!=1)goto cleanup;
 a->b36=owner->b36;((struct LinkedActor *)a)->b49=-8;
 bits=((unsigned short *)dat_0c2f8338)[30];choice=dat_0c2f8338[59];
 if(bits&(1<<choice))return;
 if(a->b19f||func_0c02a026(a)<0)goto cleanup;
 *(struct Vec3_tu5_03 *)&a->f52=*(struct Vec3_tu5_03 *)&parent->f52;
 if(a->b14b){
 a->b1a1=a->b14b;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;
 dat_0c2f83f8->arr[a->b2]++;a->b14b=zero;
 }
 func_0c037d0c(a);return;
 cleanup:a->b4=2;a->b12c=zero;*input=1;
}
void func_0c142886(struct Actor *a){func_0c037688(a);}
