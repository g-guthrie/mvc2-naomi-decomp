#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern int func_0c1ec190(void);
extern int **dat_0c2d964c;
extern int dat_0c263f38[];
extern struct Vec3_tu5_03 dat_0c263f58[][4];
extern int dat_0c263fb8[][4];
void func_0c1e3a18(struct Obj_tu5_03 *);
void func_0c1e397e(int selector) {
 struct Obj_tu5_03 *a;int index;
 if((a=func_0c0374da(0,5,1))!=0) {a->p16=func_0c1e3a18;a->b12c=1;a->lcc=0x805;index=func_0c1ec190()%4;
 a->l84=(*dat_0c2d964c)[dat_0c263f38[0]];a->pos=dat_0c263f58[selector][index];a->angles.scalar.l44=dat_0c263fb8[selector][index];a->b32=selector;}
}
void func_0c1e3a18(struct Obj_tu5_03 *a) {
 int index;
 if(++a->w30>=2) {
  a->w30=0;
  if((unsigned)++a->w28>=8) {a->w28=0;index=func_0c1ec190()%4;a->pos=dat_0c263f58[a->b32][index];a->angles.scalar.l44=dat_0c263fb8[a->b32][index];}
  a->l84=(*dat_0c2d964c)[dat_0c263f38[a->w28]];
 }
}
