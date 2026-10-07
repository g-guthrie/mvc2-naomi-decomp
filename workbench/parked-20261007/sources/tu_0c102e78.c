#include "objects.h"
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c24b23c[])(struct Actor *);
extern char func_0c02a026(struct Actor*);
extern void func_0c043352(struct Actor*);
extern void func_0c0437b8(struct Actor*);
extern void func_0c0438de(struct Actor*);
extern void func_0c044df4(struct Actor*);
extern void func_0c104946(struct Actor*);
extern void func_0c1049b0(struct Actor*);
extern void func_0c0421f4(struct Actor*),func_0c0420f8(struct Actor*),func_0c042018(struct Actor*),func_0c0421b8(struct Actor*);
extern unsigned char func_0c044e52(struct Actor*);
extern void func_0c044f1c(struct Actor*);
void func_0c102e86(struct Actor *a);
void func_0c102f2e(struct Actor *a);
void func_0c102f50(struct Actor *a);
void func_0c102fd2(struct Actor *a);
void func_0c103034(struct Actor *a);
void func_0c10306c(struct Actor *a);
void func_0c1030e8(struct Actor *a);
void func_0c10311e(struct Actor *a);
void func_0c102e78(struct Actor *a){func_0c043352(a);func_0c102e86(a);}
void func_0c102e86(struct Actor *a)
{
 struct ActorSubMoveBytes *m=(struct ActorSubMoveBytes *)&a->sub2a4;
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 func_0c044df4(a);
 if(m->b9&&a->b1a3){func_0c104946(a);return;}
 if(!a->b1fe){if(!a->b1f9)func_0c102f2e(a);else func_0c102f50(a);}
 else{if(!a->b1f9)func_0c102fd2(a);else func_0c103034(a);}
}
void func_0c102f2e(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c102f50(struct Actor *a)
{
 if(func_0c02a026(a)<0)func_0c0437b8(a);
 else if(a->b1e8!=0&&a->b1e8!=2&&a->b1e8==1){
  if(a->b141){int zero=0;a->b1a1=25;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;a->b141=zero;}
 }
}
void func_0c102fd2(struct Actor *a)
{
 if(func_0c02a026(a)<0)func_0c0437b8(a);
 else if(a->b1e8!=0&&a->b1e8!=1&&a->b1e8==2){
  if(a->b141){int zero=0;a->b141=zero;a->b1a1=5;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;}
 }
}
void func_0c103034(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c103056(struct Actor *a){func_0c0421f4(a);func_0c0420f8(a);func_0c10306c(a);}
void func_0c10306c(struct Actor *a)
{
 struct ActorSubMoveBytes *m=(struct ActorSubMoveBytes *)&a->sub2a4;
 func_0c042018(a);
 func_0c0421b8(a);
 if(m->b9&&a->b1a3){func_0c1049b0(a);return;}
 if(!a->b1fe)func_0c1030e8(a);else func_0c10311e(a);
}
void func_0c1030e8(struct Actor *a)
{
 if(func_0c02a026(a)<0){func_0c0438de(a);return;}
 if(func_0c044e52(a))func_0c044f1c(a);
}
void func_0c10311e(struct Actor *a)
{
 struct ActorSub2a4 *sub=&a->sub2a4;
 switch(a->b1e8){
 case 0:case 1:break;
 case 2:if(sub->byte16){table_0c24b23c[a->b6](a);return;}break;
 default:return;
 }
 if(func_0c02a026(a)<0){func_0c0438de(a);return;}
 if(func_0c044e52(a))func_0c044f1c(a);
}
void func_0c103186(struct Actor *a)
{
 func_0c02a026(a);
 if(a->b14b){a->b6++;a->f92=0;a->f104=0;a->f96=-17.142857f;a->f108=-2.1428571f;}
}
