#include "selector_model.h"
extern void func_0c1c7ac4(struct Obj_tu5_03 *,unsigned char);
extern struct ActorFlags *dat_0c2d6f84;
extern void (*dat_0c25e8f4[])(struct Obj_tu5_03 *);
void func_0c1c75a0(struct Obj_tu5_03 *a)
{
 switch((unsigned char)a->b5){
 case 0:a->b5++;func_0c1c7ac4(a,1);
 case 1:if(!(1.0f>(a->f84+=0.1000000015f))){a->b5++;a->f84=1.0f;}break;
 case 2:break;
 }
}
void func_0c1c75ec(struct Obj_tu5_03 *a)
{
 ((struct Actor *)a)->i72=((struct Actor *)a->p24)->i72;
 switch(a->b6){
 case 0:if(dat_0c2d6f84->b89==a->b33)a->b6=1;else a->b6=2;break;
 case 1:if(!(1.0f>(a->f84+=0.1000000015f))){a->b6=99;a->f84=1.0f;}break;
 case 2:if(!((a->f84-=0.1000000015f)>0.0f)){a->b6=99;a->f84=0.01f;}break;
 case 99:break;
 }
}
void func_0c1c766a(struct Obj_tu5_03 *a){struct Obj_tu5_03 *parent=a->p24->p24;dat_0c25e8f4[parent->b4](a);}
void func_0c1c7682(struct Obj_tu5_03 *a){a->b12c=a->p24->b12c;((struct LinkedActor *)a)->v80=((struct LinkedActor *)a->p24)->v80;}
