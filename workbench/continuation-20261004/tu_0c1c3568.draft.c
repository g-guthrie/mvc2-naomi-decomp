/* Unverified paired UI setup/allocation:344 linked bytes against352 native; owner guard/local layout unresolved. */
#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern int **dat_0c2d9654;
extern unsigned char dat_0c2d7088[];
extern struct Vec3_tu5_03 dat_0c25d270[],dat_0c25d288[],dat_0c25d2ac;
extern void func_0c1c36c8(struct Obj_tu5_03 *),func_0c1c3706(struct Obj_tu5_03 *);
void func_0c1c357c(int),func_0c1c35d6(int);
void func_0c1c3568(void){func_0c1c357c(0);func_0c1c357c(1);func_0c1c35d6(0);func_0c1c35d6(1);}
void func_0c1c357c(int index){
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,11,1))){a->b12c=1;a->p16=func_0c1c36c8;a->l84=(*dat_0c2d9654)[85];a->pos=dat_0c25d270[index];a->lcc=0x10801;a->b32=index;}
}
void func_0c1c35d6(int index){
 struct Actor *owner=(struct Actor *)(dat_0c2d7088+index*0x5a4);struct Obj_tu5_03 *a;
 if(((int *)owner)[0x414/4]&0x07000000)return;
 if((a=func_0c0374da(0,11,1))){
 a->b12c=1;a->p16=func_0c1c3706;a->l84=(*dat_0c2d9654)[96];a->pos=dat_0c25d288[index];
 a->lcc=0x10c11;a->b32=index;a->w28=0;a->w30=0;
 *(struct Vec3_tu5_03 *)&a->f80=dat_0c25d2ac;
 a->f120=a->f124=a->f128=1.0f;
 a->f104=0.0f;a->f108=21845.0f;a->f112=43690.0f;
 }
}
