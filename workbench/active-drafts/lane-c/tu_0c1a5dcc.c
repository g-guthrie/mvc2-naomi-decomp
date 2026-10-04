#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(struct Obj_tu5_03 *,int,int);
extern void func_0c029e70(struct Obj_tu5_03 *,int,int),func_0c029f0e(struct Obj_tu5_03 *,int,int,int),func_0c037688(struct Obj_tu5_03 *);
extern int func_0c029fc4(struct Obj_tu5_03 *);
extern short *dat_0c2fb408;
extern void (*dat_0c25913c[])(struct Obj_tu5_03 *,struct Actor *);
extern void (*dat_0c25914c[])(struct Obj_tu5_03 *,struct Actor *);
extern void (*dat_0c25915c[])(struct Obj_tu5_03 *,struct Actor *);
extern void (*dat_0c25916c[])(struct Obj_tu5_03 *,struct Actor *);
extern void (*dat_0c25917c[])(struct Obj_tu5_03 *,struct Actor *);
void func_0c1a5e24(struct Obj_tu5_03 *);
void func_0c1a6296(struct Obj_tu5_03 *,struct Actor *);
struct Obj_tu5_03 *func_0c1a5dcc(struct Actor *owner,unsigned char variant){struct Obj_tu5_03 *a;if((a=func_0c0374da(0,3,0))!=0){a->p16=func_0c1a5e24;a->p24=(struct Obj_tu5_03 *)owner;a->w130=owner->w130;((struct LinkedActor *)a)->w38=0x1700;dat_0c2fb408=&((struct LinkedActor *)a)->wcc.short_value;((struct LinkedActor *)a)->wcc.short_value=((struct LinkedActor *)owner)->sdc.w158.short_value;((struct LinkedActor *)a)->b35=variant;}return a;}
void func_0c1a5e24(struct Obj_tu5_03 *a){dat_0c25913c[((struct LinkedActor *)a)->b35](a,(struct Actor *)a->p24);}
void func_0c1a5e3a(struct Obj_tu5_03 *a,struct Actor *owner){dat_0c25914c[a->b4](a,owner);}
void func_0c1a5e4c(struct Obj_tu5_03 *a,struct Actor *owner){
a->b4++;a->b12c=1;((struct LinkedActor *)a)->sdc=((struct LinkedActor *)owner)->sdc;a->b12c=1;
((struct LinkedActor *)a)->b2=owner->b2;((struct LinkedActor *)a)->b1=owner->b1;a->f80=owner->f80;a->f84=owner->f84;
((struct LinkedActor *)a)->b1a3=((struct LinkedActor *)owner)->b1a3;((struct LinkedActor *)a)->b1a4=((struct LinkedActor *)owner)->b1a4;
((struct LinkedActor *)a)->b48=((struct LinkedActor *)owner)->b48;((struct LinkedActor *)a)->v80=((struct LinkedActor *)owner)->v80;
((struct Actor *)a)->b36=0;a->pos=*(struct Vec3_tu5_03 *)&owner->f52;
func_0c029e70(a,27,2);}
void func_0c1a5ec0(struct Obj_tu5_03 *a,struct Actor *owner){int phase;a->b5++;phase=(unsigned char)a->b5;if(phase%2)((struct Actor *)a)->f264=1.0f;else ((struct Actor *)a)->f264=0.800000011921f;a->pos=*(struct Vec3_tu5_03 *)&owner->f52;if(((struct LinkedActor *)a)->b1!=owner->b1){func_0c1a6296(a,owner);return;}if((char)func_0c029fc4(a)<0){a->b4=2;a->b12c=0;}else if(((struct Actor *)a)->b141==2)((struct Actor *)a)->b36=owner->b36;}
void func_0c1a5f7e(struct Obj_tu5_03 *a,struct Actor *owner){dat_0c25915c[a->b4](a,owner);}
void func_0c1a5f90(struct Obj_tu5_03 *a,struct Actor *owner){
a->b4++;a->b12c=1;((struct LinkedActor *)a)->sdc=((struct LinkedActor *)owner)->sdc;a->b12c=1;
((struct LinkedActor *)a)->b2=owner->b2;((struct LinkedActor *)a)->b1=owner->b1;a->f80=owner->f80;a->f84=owner->f84;
((struct LinkedActor *)a)->b1a3=((struct LinkedActor *)owner)->b1a3;((struct LinkedActor *)a)->b1a4=((struct LinkedActor *)owner)->b1a4;
((struct LinkedActor *)a)->b48=((struct LinkedActor *)owner)->b48;((struct LinkedActor *)a)->v80=((struct LinkedActor *)owner)->v80;
((struct Actor *)a)->b36=0;a->pos=*(struct Vec3_tu5_03 *)&owner->f52;
func_0c029e70(a,27,4);}
void func_0c1a6004(struct Obj_tu5_03 *a,struct Actor *owner){a->pos=*(struct Vec3_tu5_03 *)&owner->f52;if(((struct LinkedActor *)a)->b1!=owner->b1){func_0c1a6296(a,owner);return;}if((char)func_0c029fc4(a)<0){a->b4=2;a->b12c=0;}}
void func_0c1a6046(struct Obj_tu5_03 *a,struct Actor *owner){dat_0c25916c[a->b4](a,owner);}
void func_0c1a6078(struct Obj_tu5_03 *a,struct Actor *owner){
a->b4++;a->b12c=1;((struct LinkedActor *)a)->sdc=((struct LinkedActor *)owner)->sdc;a->b12c=1;
((struct LinkedActor *)a)->b2=owner->b2;((struct LinkedActor *)a)->b1=owner->b1;a->f80=owner->f80;a->f84=owner->f84;
((struct LinkedActor *)a)->b1a3=((struct LinkedActor *)owner)->b1a3;((struct LinkedActor *)a)->b1a4=((struct LinkedActor *)owner)->b1a4;
((struct LinkedActor *)a)->b48=((struct LinkedActor *)owner)->b48;((struct LinkedActor *)a)->v80=((struct LinkedActor *)owner)->v80;
((struct Actor *)a)->b36=0;a->pos=*(struct Vec3_tu5_03 *)&owner->f52;
func_0c029e70(a,27,5);((struct Actor *)a)->f264=1.0f;}
void func_0c1a60fc(struct Obj_tu5_03 *a,struct Actor *owner){a->pos=*(struct Vec3_tu5_03 *)&owner->f52;if(((struct LinkedActor *)a)->b1!=owner->b1){func_0c1a6296(a,owner);return;}if((char)func_0c029fc4(a)<0){a->b4=2;a->b12c=0;}((struct Actor *)a)->f264-=0.03125f;}
void func_0c1a614c(struct Obj_tu5_03 *a,struct Actor *owner){dat_0c25917c[a->b4](a,owner);}
void func_0c1a615e(struct Obj_tu5_03 *a,struct Actor *owner){
a->b4++;a->b12c=1;((struct LinkedActor *)a)->sdc=((struct LinkedActor *)owner)->sdc;a->b12c=1;
((struct LinkedActor *)a)->b2=owner->b2;((struct LinkedActor *)a)->b1=owner->b1;a->f80=owner->f80;a->f84=owner->f84;
((struct LinkedActor *)a)->b1a3=((struct LinkedActor *)owner)->b1a3;((struct LinkedActor *)a)->b1a4=((struct LinkedActor *)owner)->b1a4;
((struct LinkedActor *)a)->b48=((struct LinkedActor *)owner)->b48;((struct LinkedActor *)a)->v80=((struct LinkedActor *)owner)->v80;
((struct Actor *)a)->b36=0;a->pos=*(struct Vec3_tu5_03 *)&owner->f52;
func_0c029e70(a,27,3);}
void func_0c1a61f4(struct Obj_tu5_03 *a,struct Actor *owner){a->pos=*(struct Vec3_tu5_03 *)&owner->f52;if(((struct LinkedActor *)a)->b1!=owner->b1){func_0c1a6296(a,owner);return;}if((unsigned short)((struct LinkedActor *)owner)->sdc.w158.short_value!=0x0f01){a->b4=2;a->b12c=0;}if(((char *)&owner->w150)[1]){if(((char *)&owner->w150)[1]==16)a->b12c=0;else{a->b12c=1;func_0c029f0e(a,27,(unsigned char)((struct LinkedActor *)a)->sdc.w158.bytes[0],((char *)&owner->w150)[1]-1);}((char *)&owner->w150)[1]=0;}}
void func_0c1a6288(struct Obj_tu5_03 *a){a->b4++;a->b12c=0;}
void func_0c1a6296(struct Obj_tu5_03 *a,struct Actor *owner){func_0c037688(a);}
