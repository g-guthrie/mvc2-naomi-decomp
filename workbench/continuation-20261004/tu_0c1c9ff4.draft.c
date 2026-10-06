/* Unverified resource/angle constructor and shrink callback:412 linked bytes against408 native; full descriptor includes both pools. */
#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern int **dat_0c2d966c;
extern unsigned char dat_0c25ec74[];
extern struct Vec3_tu5_03 dat_0c25ec78[],dat_0c25ec9c,dat_0c2306f4,dat_0c230700[];
extern struct ActorFlags *dat_0c2d6f84;
extern void func_0c037688(struct Obj_tu5_03 *);
void func_0c1ca0f8(struct Obj_tu5_03 *);
void func_0c1c9ff4(int index){
 struct Obj_tu5_03 *a;struct Vec3_tu5_03 *angles;
 if((a=func_0c0374da(0,5,1))){
 a->b12c=1;a->b32=index;a->p16=func_0c1ca0f8;a->l84=(*dat_0c2d966c)[dat_0c25ec74[index]];
 a->pos=dat_0c25ec78[index];angles=&dat_0c25ec9c;
 a->angles.array[0]=(int)(angles->x*65536.0f/360.0f+0.5f)&65535;
 a->angles.scalar.l44=(int)(angles->y*65536.0f/360.0f+0.5f)&65535;
 a->angles.scalar.l48=(int)(angles->z*65536.0f/360.0f+0.5f)&65535;
 *(struct Vec3_tu5_03 *)&a->f80=dat_0c2306f4;
 a->lcc=0xc1f;a->f120=1.0f;a->f124=1.0f;a->f128=1.0f;
 if(index==2){
 a->pos=dat_0c230700[(signed char)dat_0c2d6f84->pad143[0]];
 if((signed char)dat_0c2d6f84->pad143[0]==58){a->f80=0.75f;a->f84=0.75f;a->f88=0.75f;}
 }
 }
}
void func_0c1ca0f8(struct Obj_tu5_03 *a){
 struct ActorFlags *state=dat_0c2d6f84;
 if(state->b2>=3){if(a->f120>=0.5f){a->f120-=0.01;a->f124=a->f120;a->f128=a->f120;}}
 else if(state->b8d)func_0c037688(a);
}
