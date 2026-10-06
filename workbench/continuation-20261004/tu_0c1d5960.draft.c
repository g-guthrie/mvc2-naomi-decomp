/* Unverified resource/UV callback family: full424-byte span,428 linked bytes; use accompanying descriptor for both pools. */
#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *),func_0c1d58d0(struct Obj_tu5_03 *),func_0c025fc2(struct Obj_tu5_03 *,void (*)(struct Obj_tu5_03 *));
extern unsigned int func_0c02849a(void);
extern int func_0c1d8ff8(int,int),func_0c1d901e(void),func_0c1d912a(float *,float *),func_0c1d917e(float *,float *);
extern int **dat_0c2d9650;
extern float dat_0c232270[][2];
void func_0c1d5960(struct Obj_tu5_03 *a){func_0c025fc2(a,0);a->b12c=0;a->b4++;}
void func_0c1d597e(struct Obj_tu5_03 *a){func_0c037688(a);}
void func_0c1d5984(struct Obj_tu5_03 *a){
 float *offset=dat_0c232270[a->w28];float *vertical;int **resources=dat_0c2d9650;float u,v;
 if(*(int *)&a->pad8[4])func_0c1d8ff8((*resources)[30],a->l84);
 else func_0c1d8ff8((*resources)[26],a->l84);
 vertical=offset+1;
 while(!func_0c1d901e()){
 func_0c1d912a(&u,&v);u+=*offset;v-=*vertical;func_0c1d917e(&u,&v);
 }
}
void func_0c1d5a0a(struct Vec3_tu5_03 *position,char mirror){
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,5,1))){
 a->b12c=0;a->p16=func_0c1d58d0;a->lcc=53;a->f80=10.0f;a->f84=10.0f;
 a->angles.scalar.l44=mirror?0:0x8000;
 *(int *)&a->pad8[4]=(int)func_0c02849a();{int value=*(int *)&a->pad8[4];*(int *)&a->pad8[4]=value<0?-(int)((0u-(unsigned int)value)&1u):value&1;}
 if(*(int *)&a->pad8[4])a->l84=(*dat_0c2d9650)[29];else a->l84=(*dat_0c2d9650)[25];
 a->pos=*position;a->w28=2;func_0c025fc2(a,func_0c1d5984);
 }
}
