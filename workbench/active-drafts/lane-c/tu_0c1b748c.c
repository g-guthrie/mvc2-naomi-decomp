#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(struct Obj_tu5_03 *,int,int);
extern void func_0c02a0c4(struct Obj_tu5_03 *,int,int);
extern int func_0c02a026(struct Obj_tu5_03 *);
extern void (*dat_0c25b548[])(struct Obj_tu5_03 *,struct Actor *);
extern void (*dat_0c25b568[])(struct Obj_tu5_03 *,struct Actor *);
extern void (*dat_0c25b57c[])(struct Obj_tu5_03 *,struct Actor *);
extern void (*dat_0c25b58c[])(struct Obj_tu5_03 *,struct Actor *);
void func_0c1b74e0(struct Obj_tu5_03 *);
void func_0c1b7764(struct Obj_tu5_03 *,struct Actor *);
void func_0c1b748c(struct Actor *owner,unsigned char variant,unsigned char flag) {
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,3,0))!=0){
  a->p16=func_0c1b74e0;((struct LinkedActor *)a)->w38=0x2e00;
  a->p24=(struct Obj_tu5_03 *)owner;((struct LinkedActor *)a)->b1=owner->b1;
  a->b32=variant;a->b33=flag;((struct LinkedActor *)a)->wcc.short_value=((struct LinkedActor *)owner)->sdc.w158.short_value;
 }
}
void func_0c1b74e0(struct Obj_tu5_03 *a){dat_0c25b548[a->b32](a,(struct Actor *)a->p24);}
void func_0c1b74f6(struct Obj_tu5_03 *a,struct Actor *owner){
 a->b4++;
 ((struct LinkedActor *)a)->sdc=((struct LinkedActor *)owner)->sdc;
 a->b12c=1;((struct LinkedActor *)a)->b2=owner->b2;((struct LinkedActor *)a)->b1=owner->b1;
 a->f80=owner->f80;a->f84=owner->f84;((struct LinkedActor *)a)->b1a3=((struct LinkedActor *)owner)->b1a3;((struct LinkedActor *)a)->b1a4=((struct LinkedActor *)owner)->b1a4;
 ((struct LinkedActor *)a)->b48=((struct LinkedActor *)owner)->b48;((struct LinkedActor *)a)->v80=((struct LinkedActor *)owner)->v80;((struct Actor *)a)->b36=owner->b36;
 a->b12c=1;((struct LinkedActor *)a)->b49=1;a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;a->pos.x=owner->f52;a->pos.y=owner->f56;a->pos.z=owner->f60;
 func_0c02a0c4(a,18,4);a->w28=60;func_0c1b7764(a,owner);
}
void func_0c1b759a(struct Obj_tu5_03 *a){
 func_0c02a026(a);if(--a->w28==0){a->b5++;func_0c02a0c4(a,18,5);}
}
void func_0c1b75f4(struct Obj_tu5_03 *a){
 if((char)func_0c02a026(a)<0){a->b5++;a->w28=16;a->f96=2.14285707474f;func_0c02a0c4(a,18,6);}
}
void func_0c1b762a(struct Obj_tu5_03 *a,struct Actor *owner){
 a->pos.y+=a->f96;a->f96+=a->f108;func_0c02a026(a);
 if(--a->w28==0){a->b5++;a->pos.y=owner->f41c;a->w28=16;func_0c02a0c4(a,18,7);}
}
void func_0c1b768e(struct Obj_tu5_03 *a,struct Actor *owner){
 struct ActorSub2a4 *state=&owner->sub2a4;
 a->pos.y+=a->f96;a->f96+=a->f108;func_0c02a026(a);
 if(--a->w28==0){a->b5++;a->pos.y=owner->f41c;a->w28=30;a->f96=4.28571414948f;a->f108=0.535714268684f;func_0c02a0c4(a,18,8);state->b1=1;}
}
void func_0c1b770a(struct Obj_tu5_03 *a){
 a->pos.y+=a->f96;a->f96+=a->f108;func_0c02a026(a);if(--a->w28==0)a->b4++;
}
void func_0c1b7764(struct Obj_tu5_03 *a,struct Actor *owner){
 ((struct Actor *)a)->b36=owner->b36;dat_0c25b568[(unsigned char)a->b5](a,owner);
}
void func_0c1b777e(struct Obj_tu5_03 *a,struct Actor *owner){dat_0c25b57c[a->b4](a,owner);}
void func_0c1b7790(struct Obj_tu5_03 *a,struct Actor *owner){
 a->b4++;
 ((struct LinkedActor *)a)->sdc=((struct LinkedActor *)owner)->sdc;
 a->b12c=1;((struct LinkedActor *)a)->b2=owner->b2;((struct LinkedActor *)a)->b1=owner->b1;
 a->f80=owner->f80;a->f84=owner->f84;((struct LinkedActor *)a)->b1a3=((struct LinkedActor *)owner)->b1a3;((struct LinkedActor *)a)->b1a4=((struct LinkedActor *)owner)->b1a4;
 ((struct LinkedActor *)a)->b48=((struct LinkedActor *)owner)->b48;((struct LinkedActor *)a)->v80=((struct LinkedActor *)owner)->v80;((struct Actor *)a)->b36=owner->b36;
 a->b12c=1;((struct LinkedActor *)a)->b49=2;a->f92=0.0f;a->f96=0.0f;a->f104=0.0f;a->f108=0.0f;a->pos.x=owner->f52;a->pos.y=owner->f56;a->pos.z=owner->f60;
 if(!a->w130)a->pos.x+=33.3333320618f;else a->pos.x-=33.3333320618f;
 func_0c02a0c4(a,18,10);a->w28=60;
 ((struct Actor *)a)->b36=owner->b36;func_0c02a026(a);if(owner->sub2a4.b1)a->b4++;
}
void func_0c1b7850(struct Obj_tu5_03 *a,struct Actor *owner){
 struct ActorSub2a4 *state=&owner->sub2a4;
 ((struct Actor *)a)->b36=owner->b36;func_0c02a026(a);if(state->b1)a->b4++;
}
void func_0c1b7880(struct Obj_tu5_03 *a,struct Actor *owner){dat_0c25b58c[a->b4](a,owner);}
