#include "objects.h"
extern void func_0c02a0c4(struct LinkedActor *,int,int);
extern void func_0c02a026(struct LinkedActor *);
extern void func_0c037688(struct LinkedActor *);
extern short dat_0c25b8e4[][2];
extern void (*table_0c25b8ec[])(struct LinkedActor *);
void func_0c1ba662(struct LinkedActor *,struct LinkedActor *);
void func_0c1ba782(struct LinkedActor *,struct LinkedActor *);
void func_0c1ba5d4(struct LinkedActor *a,struct LinkedActor *parent) {
 a->b4++;
 a->sdc=parent->sdc; a->sdc.b12c=1;
 a->b2=parent->b2; a->b1=parent->b1;
 a->v80.x=parent->v80.x; a->v80.y=parent->v80.y;
 a->b1a3=parent->b1a3; a->b1a4=parent->b1a4;
 a->b48=parent->b48; a->v80=parent->v80;
 a->b36=parent->b36; a->sdc.b12c=1;
 a->f92=0; a->f96=0; a->f104=0; a->f108=0; a->b49=-1;
 func_0c02a0c4(a,23,7); func_0c1ba662(a,parent);
}
void func_0c1ba662(struct LinkedActor *a,struct LinkedActor *parent) {
 struct ActorSub2a4 *state=&((struct Actor *)parent)->sub2a4;
 a->b36=parent->b36;
 if(a->wcc.short_value!=parent->sdc.w158.short_value) { a->b4++; func_0c1ba782(a,parent); return; }
 func_0c02a026(a);
 a->f52=parent->f52; a->f56=parent->f56; a->f60=parent->f60;
 if(!a->sdc.w130) a->f52+=dat_0c25b8e4[(unsigned char)a->b33][0]*1.66666663f;
 else a->f52-=dat_0c25b8e4[(unsigned char)a->b33][0]*1.66666663f;
 a->f56+=dat_0c25b8e4[(unsigned char)a->b33][1]*2.1428571f;
 if(state->b0) a->b4++;
}
void func_0c1ba770(struct LinkedActor *a) { table_0c25b8ec[a->b4](a); }
void func_0c1ba782(struct LinkedActor *a,struct LinkedActor *parent) { a->b4++; a->sdc.b12c=0; }
void func_0c1ba790(struct LinkedActor *a) { a->sdc.b12c=0; func_0c037688(a); }
