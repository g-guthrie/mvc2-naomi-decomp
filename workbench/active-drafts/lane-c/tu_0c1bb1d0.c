#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(struct Obj_tu5_03 *,int,int);
extern int func_0c02849a(void),func_0c02850e(struct Obj_tu5_03 *),func_0c02a026(struct Obj_tu5_03 *);
extern void func_0c02a18c(struct Obj_tu5_03 *,int,int,int);
extern float dat_0c25b964[],dat_0c25ba34[][4],dat_0c25bac4[];
extern short dat_0c25b9d8[];
extern char dat_0c25b9ea[][8];
extern struct ActorVec2 dat_0c25bae8[],dat_0c25bb18[],dat_0c25bb58[];
extern void (*dat_0c25b988[])(struct Obj_tu5_03 *);
extern void (*dat_0c25b998[])(struct Obj_tu5_03 *);
extern void (*dat_0c25b9b8[])(struct Obj_tu5_03 *);
extern void (*dat_0c25bb08[])(struct Obj_tu5_03 *);
void func_0c1bb224(struct Obj_tu5_03 *);
void func_0c1bb4ae(struct Obj_tu5_03 *);
void func_0c1bb4fc(struct Obj_tu5_03 *);
void func_0c1bb548(struct Obj_tu5_03 *);
void func_0c1bb590(struct Obj_tu5_03 *);
void func_0c1bb5ee(struct Obj_tu5_03 *);
void func_0c1bb640(struct Obj_tu5_03 *);
void func_0c1bb676(struct Obj_tu5_03 *);
struct Obj_tu5_03 *func_0c1bb1d0(struct Actor *owner){struct Obj_tu5_03 *a;if((a=func_0c0374da(0,3,0))!=0){a->p16=func_0c1bb224;a->p24=(struct Obj_tu5_03 *)owner;((struct LinkedActor *)a)->b1=owner->b1;((struct LinkedActor *)a)->w38=0x3502;a->pos.x=owner->f52;a->pos.y=owner->f56;a->b32=(func_0c02849a()&3)+4;a->b33=0;}return a;}
void func_0c1bb224(struct Obj_tu5_03 *a){dat_0c25b988[a->b4](a);}
void func_0c1bb236(struct Obj_tu5_03 *a){struct Actor *owner=(struct Actor *)a->p24;a->b4++;((struct LinkedActor *)a)->sdc=((struct LinkedActor *)owner)->sdc;a->b12c=1;((struct LinkedActor *)a)->b2=owner->b2;((struct LinkedActor *)a)->b1=owner->b1;a->f80=owner->f80;a->f84=owner->f84;((struct LinkedActor *)a)->b1a3=((struct LinkedActor *)owner)->b1a3;((struct LinkedActor *)a)->b1a4=((struct LinkedActor *)owner)->b1a4;((struct LinkedActor *)a)->b48=((struct LinkedActor *)owner)->b48;((struct LinkedActor *)a)->v80=((struct LinkedActor *)owner)->v80;((struct Actor *)a)->b36=owner->b36;dat_0c25b998[a->b32](a);a->b5=0;a->b6=0;}
void func_0c1bb2ae(struct Obj_tu5_03 *a){struct Actor *owner=(struct Actor *)a->p24;a->pos.x=owner->f52;a->pos.y=owner->f41c;((struct Actor *)a)->b36=10;func_0c1bb5ee(a);a->w28=0;((struct Actor *)a)->b141=0;a->w30=1;func_0c1bb590(a);}
void func_0c1bb2e6(struct Obj_tu5_03 *a){struct Actor *owner=(struct Actor *)a->p24;a->pos.x=owner->f52;a->pos.y=owner->f41c;((struct Actor *)a)->b36=12;func_0c1bb5ee(a);func_0c1bb640(a);a->w28=0;((struct Actor *)a)->b141=0;a->w30=1;func_0c1bb590(a);}
void func_0c1bb34c(struct Obj_tu5_03 *a){struct Actor *owner=(struct Actor *)a->p24;a->pos.x=owner->f52;a->pos.y=owner->f41c;((struct Actor *)a)->b36=0;func_0c1bb5ee(a);a->w28=0;((struct Actor *)a)->b141=0;a->w30=1;func_0c1bb590(a);}
void func_0c1bb386(struct Obj_tu5_03 *a){dat_0c25b9b8[a->b32](a);}
void func_0c1bb39a(struct Obj_tu5_03 *a){if(!a->b5){func_0c1bb676(a);func_0c1bb4ae(a);return;}if(!func_0c02850e(a))a->b4++;func_0c1bb676(a);func_0c1bb548(a);}
void func_0c1bb3d0(struct Obj_tu5_03 *a){if(!a->b5){a->pos.x+=a->f92;a->f92+=a->f104;a->pos.y+=a->f96;a->f96+=a->f108;func_0c1bb4fc(a);return;}if(!func_0c02850e(a))a->b4++;a->pos.x+=a->f92;a->f92+=a->f104;a->pos.y+=a->f96;a->f96+=a->f108;func_0c1bb548(a);}
void func_0c1bb46c(struct Obj_tu5_03 *a){if(!a->b5){func_0c1bb676(a);func_0c1bb4fc(a);return;}if(!func_0c02850e(a))a->b4++;func_0c1bb676(a);func_0c1bb548(a);}
void func_0c1bb4ae(struct Obj_tu5_03 *a){float delta=((struct Actor *)a->p24)->f41c+dat_0c25b964[a->b32]-a->pos.y+17.1428565979f;int frames;if(delta<0.0f)delta=-delta;frames=(int)(delta/2.14285707474f)/8;if(a->w28>frames){func_0c1bb548(a);return;}a->w28=frames;func_0c1bb590(a);}
void func_0c1bb4fc(struct Obj_tu5_03 *a){float delta=((struct Actor *)a->p24)->f41c+dat_0c25b964[a->b32]-a->pos.y+17.1428565979f;int frames;if(delta<0.0f)delta=-delta;frames=(int)(delta/2.14285707474f)/16;if(a->w28>frames){func_0c1bb548(a);return;}a->w28=frames;func_0c1bb590(a);}
void func_0c1bb548(struct Obj_tu5_03 *a){func_0c02a026(a);a->w30=((struct Actor *)a)->b142;if(((struct Actor *)a)->b141<0)a->b12c=0;else a->b12c=1;}
void func_0c1bb590(struct Obj_tu5_03 *a){if(a->w28>=dat_0c25b9d8[a->b32]){a->w28=dat_0c25b9d8[a->b32];a->b5++;}func_0c02a18c(a,18,dat_0c25b9ea[a->b32][a->w28],((struct Actor *)a)->b141&127);((struct Actor *)a)->b142=a->w30;}
void func_0c1bb5ee(struct Obj_tu5_03 *a){float x=dat_0c25ba34[a->b32][func_0c02849a()&3];if(a->w130)x=-x;a->pos.x+=x;a->pos.y-=dat_0c25bac4[a->b32];}
void func_0c1bb640(struct Obj_tu5_03 *a){unsigned char i;struct ActorVec2 *row;a->f104=0.0f;a->f92=0.0f;i=func_0c02849a()&3;row=&dat_0c25bae8[i];a->f96=row->x;a->f108=row->y;}
void func_0c1bb676(struct Obj_tu5_03 *a){dat_0c25bb08[a->b6](a);}
void func_0c1bb688(struct Obj_tu5_03 *a){unsigned char i;struct ActorVec2 *row;a->b6++;i=func_0c02849a()&7;row=&dat_0c25bb18[i];a->f92=row->x;a->f104=row->y;i=func_0c02849a()&7;row=&dat_0c25bb58[i];a->f96=row->x;a->f108=row->y;}
