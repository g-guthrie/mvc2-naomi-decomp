/* Unverified resource/rotation family:316/392 equal bytes at correct total size; rotation assignment/test lowering unresolved. */
#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern unsigned char dat_0c2d7088[];
extern int **dat_0c2d9658;
extern struct Vec3_tu5_03 dat_0c25e69c[];
extern int dat_0c25e6b4[][3];
extern void func_0c1c7024(struct Obj_tu5_03 *),func_0c1c7090(struct Obj_tu5_03 *,int),func_0c1c7368(struct Obj_tu5_03 *),func_0c034a1c(char);
extern void (*table_0c25e6cc[])(struct Obj_tu5_03 *);
void func_0c1c6df8(struct Actor *parent){
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,5,1))){
 a->b12c=1;a->p16=func_0c1c7024;a->p24=(struct Obj_tu5_03 *)parent;
 a->p20=(struct Obj_tu5_03 *)(dat_0c2d7088+(parent->s30*2+parent->b524)*0x5a4);
 a->b32=parent->b524;a->b33=parent->s30;
 if(a->b32)a->l84=(*dat_0c2d9658)[105];else a->l84=(*dat_0c2d9658)[98];
 a->pos=dat_0c25e69c[a->b32];
 a->angles.array[0]=dat_0c25e6b4[a->b32][0];a->angles.scalar.l44=dat_0c25e6b4[a->b32][1];a->angles.scalar.l48=dat_0c25e6b4[a->b32][2];
 a->lcc=0x80f;func_0c1c7090(a,1);func_0c1c7368(a);func_0c034a1c(a->b32+76);
 }
}
void func_0c1c6ef0(struct Obj_tu5_03 *a){table_0c25e6cc[a->b4](a);}
void func_0c1c6f02(struct Obj_tu5_03 *a){
 if(a->b32){if((a->angles.scalar.l48=a->angles.scalar.l48-512)<=0)goto finish;}
 else if((a->angles.scalar.l48=a->angles.scalar.l48+512)>=65536){finish:a->b4++;a->angles.scalar.l48=0;}
}
