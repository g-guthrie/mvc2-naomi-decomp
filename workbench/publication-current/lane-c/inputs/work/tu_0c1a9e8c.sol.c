#include "objects.h"
extern char func_0c029fc4(struct LinkedActor *);
extern void func_0c029f0e(struct LinkedActor *,int,int,int),func_0c037688(struct LinkedActor *);
extern int func_0c028642(struct LinkedActor *);
extern void (*table_0c2599bc[])(struct LinkedActor *,struct LinkedActor *);
extern void (*table_0c2599c4[])(struct LinkedActor *,struct LinkedActor *);
void func_0c1aa274(struct LinkedActor *,struct LinkedActor *),func_0c1aa2bc(struct LinkedActor *,struct LinkedActor *);
void func_0c1a9fb4(struct LinkedActor *,struct LinkedActor *),func_0c1aa0ea(struct LinkedActor *,struct LinkedActor *);
void func_0c1a9e8c(struct LinkedActor *a,struct LinkedActor *parent){
 func_0c1aa274(a,parent);a->b36=parent->b36;
 if(func_0c029fc4(a)<0){a->b4++;a->sdc.b12c=0;}
}
void func_0c1a9ec2(struct LinkedActor *a,struct LinkedActor *parent){
 func_0c1aa274(a,parent);a->b36=8;
 if(func_0c029fc4(a)<0){a->b4++;a->sdc.b12c=0;}
}
void func_0c1a9eee(struct LinkedActor *a,struct LinkedActor *parent){
 func_0c029fc4(a);func_0c1aa274(a,parent);a->b36=parent->b36;a->sdc.b12c=0;
 if(!parent->sdc.b141)a->b4++;else if(parent->sdc.b141<0)a->sdc.b12c=1;
}
void func_0c1a9f34(struct LinkedActor *a,struct LinkedActor *parent){
 if(!parent->sdc.b141||((struct Actor *)parent)->b1d0!=21||((struct Actor *)parent)->b1e9!=2){a->b4++;a->sdc.b12c=0;}
 else{func_0c029fc4(a);func_0c1aa274(a,parent);a->b36=parent->b36;}
}
void func_0c1a9f80(struct LinkedActor *a,struct LinkedActor *parent){table_0c2599bc[(unsigned char)a->b5](a,parent);}
void func_0c1a9fa4(struct LinkedActor *a,struct LinkedActor *parent){a->b5++;a->s28=0;a->b36=15;func_0c1a9fb4(a,parent);}
void func_0c1a9fb4(struct LinkedActor *a,struct LinkedActor *parent){
 func_0c1aa2bc(a,parent);func_0c029fc4(a);if(!parent->sdc.b141)a->b4++;
 a->sdc.b12c=1;if(++a->s28%4==0)a->sdc.b12c=0;
}
void func_0c1aa00a(struct LinkedActor *a,struct LinkedActor *parent){
 func_0c029fc4(a);func_0c1aa274(a,parent);a->b36=parent->b36;
 if(!parent->sdc.b141)a->b4++;
 else{a->sdc.b12c=0;if(!a->b34)a->sdc.b12c=1;}
}
void func_0c1aa050(struct LinkedActor *a,struct LinkedActor *parent){
 func_0c1aa274(a,parent);a->b36=parent->b36;a->sdc.b12c=0;
 if(func_0c029fc4(a)<0)a->b4++;else if(!parent->b34)a->sdc.b12c=1;
}
void func_0c1aa092(struct LinkedActor *a,struct LinkedActor *parent){table_0c2599c4[(unsigned char)a->b5](a,parent);}
void func_0c1aa0b0(struct LinkedActor *a,struct LinkedActor *parent){
 a->b5++;a->b36=8;((struct MeActor *)a)->blk_dc.b13c=48;((struct MeActor *)a)->blk_dc.b13d=48;
 ((struct MeActor *)a)->blk_dc.b13e=16;((struct MeActor *)a)->blk_dc.b13f=16;
 func_0c1aa274(a,parent);func_0c1aa0ea(a,parent);
}
void func_0c1aa0ea(struct LinkedActor *a,struct LinkedActor *parent){
 if(func_0c029fc4(a)<0){a->b5++;if(!parent->wcc.dword_value)a->f92=-3.3333333f;else a->f92=3.3333333f;a->f104=a->f92;}
}
void func_0c1aa12a(struct LinkedActor *a,struct LinkedActor *parent){
 a->f52+=a->f92;a->f92+=a->f104;if(!func_0c028642(a))a->b4++;
}
void func_0c1aa162(struct LinkedActor *a,struct LinkedActor *parent){
 *(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&parent->f52;
 if((a->sdc.w130=parent->sdc.w130^1))a->f52+=a->f92;else a->f52-=a->f92;
 a->f56+=a->f96;a->b36=parent->b36;
 if(!parent->sdc.b141)a->b4++;else func_0c029f0e(a,27,42,parent->sdc.b141&15);
}
void func_0c1aa200(struct LinkedActor *a,struct LinkedActor *parent){
 ((struct LinkedActorControl4 *)&a->sdc.b12c)->mode=parent->p24->sdc.b12d;((struct LinkedActorControl4 *)&a->sdc.b12c)->counter=parent->p24->sdc.w12e;
 func_0c1aa274(a,parent);a->b36=parent->b36;func_0c029fc4(a);
}
void func_0c1aa232(struct LinkedActor *a,struct LinkedActor *parent){
 ((struct LinkedActorControl4 *)&a->sdc.b12c)->mode=parent->p24->sdc.b12d;((struct LinkedActorControl4 *)&a->sdc.b12c)->counter=parent->p24->sdc.w12e;
 func_0c1aa274(a,parent);a->b36=parent->b36;
}
void func_0c1aa260(struct LinkedActor *a,struct LinkedActor *parent){a->b4++;a->sdc.b12c=0;}
void func_0c1aa26e(struct LinkedActor *a,struct LinkedActor *parent){func_0c037688(a);}
void func_0c1aa274(struct LinkedActor *a,struct LinkedActor *parent){
 short direction;
 *(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&parent->f52;
 direction=parent->sdc.w130;a->sdc.w130=direction;
 if(!direction)a->f52+=a->f92;else a->f52-=a->f92;
 a->f56+=a->f96;
}
void func_0c1aa2bc(struct LinkedActor *a,struct LinkedActor *parent){
 *(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&parent->f52;
 if(!parent->sdc.w130)a->f52+=a->f92;else a->f52-=a->f92;
 a->f56+=a->f96;
}
