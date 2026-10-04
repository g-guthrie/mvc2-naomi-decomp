#include "selector_model.h"
extern struct Vec3_tu5_03 table_0c232014[];
extern struct Vec3_tu5_03 dat_0c232020, dat_0c23202c;
extern struct ActorGlobalRoot *dat_0c2d9680;
extern struct ActorFlags *dat_0c2d6f84;
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *);
extern void func_0c1d91a8(int);
extern void (*dat_0c260a98[])(struct Obj_tu5_03 *);
void func_0c1cd8fa(struct Obj_tu5_03 *);
void func_0c1cd7fc(struct Obj_tu5_03 *a)
{
 struct Vec3_tu5_03 *from=&table_0c232014[0],*to=&table_0c232014[1];
 a->pos.x=from->x+(to->x-from->x)*a->w28/30.0f;
 a->pos.y=from->y+(to->y-from->y)*a->w28/30.0f;
 a->pos.z=from->z+(to->z-from->z)*a->w28/30.0f;
}
void func_0c1cd85a(void)
{
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,11,1))!=0){
 a->b12c=1;a->p16=func_0c1cd8fa;
 a->l84=((int *)dat_0c2d9680->p0)[6];a->pos=table_0c232014[0];
 a->angles.array[0]=(int)(dat_0c23202c.x*65536.0f/360.0f+0.5f)&65535;
 a->angles.array[1]=(int)(dat_0c23202c.y*65536.0f/360.0f+0.5f)&65535;
 a->angles.array[2]=(int)(dat_0c23202c.z*65536.0f/360.0f+0.5f)&65535;
 a->lcc=0x080f;a->w28=0;a->w30=0;func_0c1d91a8(a->l84);
 }
}
void func_0c1cd8fa(struct Obj_tu5_03 *a)
{
 if(dat_0c2d6f84->b2!=3){func_0c037688(a);return;}
 dat_0c260a98[a->b4](a);
}
void func_0c1cd920(struct Obj_tu5_03 *a)
{
 a->w28++;func_0c1cd7fc(a);
 if(a->w28==30){a->b4++;a->w28=0;a->pos=dat_0c232020;}
}
