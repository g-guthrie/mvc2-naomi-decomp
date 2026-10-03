#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(struct Obj_tu5_03 *,int,int);
extern void func_0c02a0c4(struct Obj_tu5_03 *,int,int);
extern int func_0c02a026(struct Obj_tu5_03 *);
extern short dat_0c25b368[][2];
extern void (*dat_0c25b4bc[])(struct Obj_tu5_03 *,struct Actor *);
extern void (*dat_0c25b4dc[])(struct Obj_tu5_03 *,struct Actor *);
extern void (*dat_0c25b4e8[])(struct Obj_tu5_03 *,struct Actor *);
extern void (*dat_0c25b4f4[])(struct Obj_tu5_03 *,struct Actor *);
extern void (*dat_0c25b500[])(struct Obj_tu5_03 *,struct Actor *);
void func_0c1b6a2a(struct Obj_tu5_03 *);
void func_0c1b6d62(struct Obj_tu5_03 *,struct Actor *);
void func_0c1b69e8(struct Actor *owner,int variant){ struct Obj_tu5_03 *a;if((a=func_0c0374da(0,3,1))!=0){((struct LinkedActor *)a)->w38=0x2d00;a->b32=variant;a->pos=*(struct Vec3_tu5_03 *)&owner->f52;a->p16=func_0c1b6a2a;a->p24=(struct Obj_tu5_03 *)owner;}}
void func_0c1b6a2a(struct Obj_tu5_03 *a){dat_0c25b4bc[a->b32](a,(struct Actor *)a->p24);}
void func_0c1b6a40(struct Obj_tu5_03 *a,struct Actor *owner){dat_0c25b4dc[a->b4](a,owner);}
void func_0c1b6a52(struct Obj_tu5_03 *a,struct Actor *owner){
((struct LinkedActor *)a)->sdc=((struct LinkedActor *)owner)->sdc;
a->b12c=1;((struct LinkedActor *)a)->b2=owner->b2;((struct LinkedActor *)a)->b1=owner->b1;a->f80=owner->f80;a->f84=owner->f84;
((struct LinkedActor *)a)->b1a3=((struct LinkedActor *)owner)->b1a3;((struct LinkedActor *)a)->b1a4=((struct LinkedActor *)owner)->b1a4;
((struct LinkedActor *)a)->b48=((struct LinkedActor *)owner)->b48;((struct LinkedActor *)a)->v80=((struct LinkedActor *)owner)->v80;((struct Actor *)a)->b36=owner->b36;
a->b4++;((struct Actor *)a)->b36=0;func_0c02a0c4(a,23,0);}
void func_0c1b6ab8(struct Obj_tu5_03 *a,struct Actor *owner){struct ActorSub2a4 *state=&owner->sub2a4;
if(!a->b5){if(owner->b1d0!=11){a->b4=2;a->b12c=0;return;}func_0c02a026(a);if(((struct Actor *)a)->b141){a->b5++;((struct Actor *)a)->b141=0;}}
else{((struct Actor *)a)->b36=7;a->pos=*(struct Vec3_tu5_03 *)&owner->f52;if((char)func_0c02a026(a)<0){a->b4=2;a->b12c=0;}else if(((struct Actor *)a)->b141){a->b4=2;a->b12c=0;state->b0=1;}}
}
void func_0c1b6b70(struct Obj_tu5_03 *a,struct Actor *owner){dat_0c25b4e8[a->b4](a,owner);}
void func_0c1b6b82(struct Obj_tu5_03 *a,struct Actor *owner){
((struct LinkedActor *)a)->sdc=((struct LinkedActor *)owner)->sdc;
a->b12c=1;((struct LinkedActor *)a)->b2=owner->b2;((struct LinkedActor *)a)->b1=owner->b1;a->f80=owner->f80;a->f84=owner->f84;
((struct LinkedActor *)a)->b1a3=((struct LinkedActor *)owner)->b1a3;((struct LinkedActor *)a)->b1a4=((struct LinkedActor *)owner)->b1a4;
((struct LinkedActor *)a)->b48=((struct LinkedActor *)owner)->b48;((struct LinkedActor *)a)->v80=((struct LinkedActor *)owner)->v80;((struct Actor *)a)->b36=owner->b36;
a->b4++;((struct Actor *)a)->b36=7;a->pos=*(struct Vec3_tu5_03 *)&owner->f52;func_0c02a0c4(a,23,1);}
void func_0c1b6bf6(struct Obj_tu5_03 *a){if((char)func_0c02a026(a)<0){a->b4=2;a->b12c=0;}}
void func_0c1b6c16(struct Obj_tu5_03 *a,struct Actor *owner){dat_0c25b4f4[a->b4](a,owner);}
void func_0c1b6c28(struct Obj_tu5_03 *a,struct Actor *owner){
((struct LinkedActor *)a)->sdc=((struct LinkedActor *)owner)->sdc;
a->b12c=1;((struct LinkedActor *)a)->b2=owner->b2;((struct LinkedActor *)a)->b1=owner->b1;a->f80=owner->f80;a->f84=owner->f84;
((struct LinkedActor *)a)->b1a3=((struct LinkedActor *)owner)->b1a3;((struct LinkedActor *)a)->b1a4=((struct LinkedActor *)owner)->b1a4;
((struct LinkedActor *)a)->b48=((struct LinkedActor *)owner)->b48;((struct LinkedActor *)a)->v80=((struct LinkedActor *)owner)->v80;((struct Actor *)a)->b36=owner->b36;
a->b4++;((struct Actor *)a)->b36=owner->b36;((struct LinkedActor *)a)->b49=-2;a->b12c=0;a->w130=owner->w130;func_0c1b6d62(a,owner);func_0c02a0c4(a,23,2);}
void func_0c1b6cd0(struct Obj_tu5_03 *a,struct Actor *owner){
((struct Actor *)a)->b36=owner->b36;((struct LinkedActor *)a)->b49=-2;a->w130=owner->w130;func_0c02a026(a);
if(!a->b5){if(owner->b141){a->b5++;a->b12c=1;}func_0c1b6d62(a,owner);return;}
func_0c1b6d62(a,owner);if(owner->b5!=1||((struct LinkedActor *)owner)->sdc.w158.bytes[1]!=15||((struct LinkedActor *)owner)->sdc.w158.bytes[0]!=2){a->b4=2;a->b12c=0;owner->p1c8->w130^=1;owner->p1c8->b1d2^=1;}
}
void func_0c1b6d62(struct Obj_tu5_03 *a,struct Actor *owner){struct Actor *target=owner->p1c8;short *row=dat_0c25b368[target->b1];float x=(float)row[0]*1.66666662693f,y=(float)row[1]*2.14285707474f;if(!owner->b1d2)x=-x;a->pos.x=target->f52+x;a->pos.y=target->f56+y;}
void func_0c1b6dac(struct Obj_tu5_03 *a,struct Actor *owner){struct ActorSub2a4 *state=&owner->sub2a4;if(((struct LinkedActor *)owner)->sdc.w158.bytes[1]!=21||(char)state->b7<0){a->b4=2;a->b12c=0;}dat_0c25b500[a->b4](a,owner);}
