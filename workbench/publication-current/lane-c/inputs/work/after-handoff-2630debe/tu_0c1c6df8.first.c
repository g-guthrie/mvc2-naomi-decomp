#include "selector_model.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern struct CharacterState5a4 dat_0c2d7088[];
extern int **dat_0c2d9658;
extern struct Vec3_tu5_03 dat_0c25e69c[];
extern int dat_0c25e6b4[][3];
extern void (*dat_0c25e6cc[])(struct Obj_tu5_03 *);
extern void func_0c1c7024(struct Obj_tu5_03 *);
extern void func_0c1c7090(struct Obj_tu5_03 *,unsigned char);
extern void func_0c1c7368(struct Obj_tu5_03 *);
extern void func_0c034a1c(int);
void func_0c1c6df8(struct Actor *parent)
{
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,5,1))!=0){
 a->b12c=1;a->p16=func_0c1c7024;a->p24=(struct Obj_tu5_03 *)parent;
 a->p20=(struct Obj_tu5_03 *)&dat_0c2d7088[parent->b524+parent->s30*2];
 a->b32=parent->b524;a->b33=parent->s30;
 if(a->b32)a->l84=(*dat_0c2d9658)[105];else a->l84=(*dat_0c2d9658)[98];
 a->pos=dat_0c25e69c[a->b32];
 a->angles.array[0]=dat_0c25e6b4[a->b32][0];
 a->angles.array[1]=dat_0c25e6b4[a->b32][1];
 a->angles.array[2]=dat_0c25e6b4[a->b32][2];
 a->lcc=0x080f;func_0c1c7090(a,1);func_0c1c7368(a);func_0c034a1c(a->b32+76);
 }
}
void func_0c1c6ef0(struct Obj_tu5_03 *a)
{
 dat_0c25e6cc[a->b4](a);
}
void func_0c1c6f02(struct Obj_tu5_03 *a)
{
 if(a->b32){if((a->angles.array[2]-=512)>0)return;}
 else if((a->angles.array[2]+=512)<65536)return;
 a->b4++;a->angles.array[2]=0;
}
