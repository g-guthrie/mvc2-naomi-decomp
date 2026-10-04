#include "selector_model.h"
extern int **dat_0c2d9658;
extern struct ActorFlags *dat_0c2d6f84;
extern struct Vec3_tu5_03 dat_0c25e730[][3],dat_0c25e778[][2];
extern void (*dat_0c25e8c4[])(struct Obj_tu5_03 *);
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c025fc2(struct Obj_tu5_03 *,void (*)(struct Obj_tu5_03 *));
extern void func_0c1c766a(struct Obj_tu5_03 *);
extern void func_0c1c76bc(struct Obj_tu5_03 *);
extern void func_0c1c756e(struct Obj_tu5_03 *);
void func_0c1c7278(struct Obj_tu5_03 *);
void func_0c1c743c(struct Obj_tu5_03 *);
void func_0c1c7194(struct Obj_tu5_03 *parent)
{
 short i;struct CharacterState5a4 *state=(struct CharacterState5a4 *)parent->p20;
 for(i=0;i<3;i++){
  struct Obj_tu5_03 *a=func_0c0374da(0,5,1);
  if(a==0)break;
  a->p24=parent;a->p200=&parent->f136;a->p20=parent->p20;
  a->b12c=1;a->p16=func_0c1c743c;a->b32=parent->b32;a->b33=i;
  /* Both object layouts expose the native byte at offset 1. */
  ((struct LinkedActor *)a)->b1=state->selector52c;
  a->l84=(*dat_0c2d9658)[99+i];
  a->pos=dat_0c25e730[a->b32][i];
  a->angles.array[0]=8192;a->angles.array[1]=0;a->angles.array[2]=0;
  a->lcc=0x0813;a->f80=1.0f;a->f84=0.00999999978f;a->f88=1.0f;
  func_0c1c7278(a);
 }
}
void func_0c1c7278(struct Obj_tu5_03 *parent)
{
 struct Obj_tu5_03 *a=func_0c0374da(0,5,1);
 if(a!=0){
  a->p24=parent;a->p200=parent->p200;a->p20=parent->p20;
  a->b12c=1;a->p16=func_0c1c766a;a->b32=parent->b32;a->b33=parent->b33;
  ((struct LinkedActor *)a)->b1=((struct LinkedActor *)parent)->b1;
  if(dat_0c2d6f84->b41)a->l84=(*dat_0c2d9658)[108];
  else a->l84=(*dat_0c2d9658)[102];
  a->pos=dat_0c25e730[a->b32][a->b33];
  a->angles.array[0]=8192;a->lcc=0x0813;
  a->f80=1.0f;a->f84=0.00999999978f;a->f88=1.0f;
  func_0c025fc2(a,func_0c1c76bc);
 }
}
void func_0c1c7368(struct Obj_tu5_03 *parent)
{
 short i;
 for(i=0;i<2;i++){
  struct Obj_tu5_03 *a=func_0c0374da(0,5,1);
  if(a==0)break;
  a->p24=parent;a->p200=&parent->f136;a->p20=parent->p20;
  a->b12c=1;a->p16=func_0c1c756e;a->b32=parent->b32;a->b33=i;
  a->l84=(*dat_0c2d9658)[107-i];a->pos=dat_0c25e778[a->b32][i];
  a->angles.array[0]=8192;a->angles.array[1]=0;a->angles.array[2]=0;
  a->lcc=0x0813;a->f80=1.0f;a->f84=0.00999999978f;a->f88=1.0f;
 }
}
void func_0c1c743c(struct Obj_tu5_03 *a)
{
 dat_0c25e8c4[a->p24->b4](a);
}
void func_0c1c7450(struct Obj_tu5_03 *a){a->b12c=a->p24->b12c;}
