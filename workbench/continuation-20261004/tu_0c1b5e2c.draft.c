/* Unverified frame-following effect family:337/352 equal bytes; five functions and pools exact. */
#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void (*table_0c25b124[])(struct LinkedActor *);
extern void func_0c029e70(struct LinkedActor *,int,int),func_0c037688(struct LinkedActor *);
extern char func_0c029fc4(struct LinkedActor *);
void func_0c1b5e5a(struct LinkedActor *),func_0c1b5eca(struct LinkedActor *);
struct LinkedActor *func_0c1b5e2c(struct LinkedActor *owner,char mode){
 struct LinkedActor *a;if((a=func_0c0374da(0,3,0))){a->p16=func_0c1b5e5a;a->p24=owner;a->b32=mode;}return a;
}
void func_0c1b5e5a(struct LinkedActor *a){table_0c25b124[a->b4](a);}
void func_0c1b5e6c(struct LinkedActor *a){
 struct LinkedActor *owner;
 a->b4++;owner=a->p24;a->sdc=owner->sdc;a->sdc.b12c=1;
 a->b2=owner->b2;a->b1=owner->b1;a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;
 a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;a->v80=owner->v80;a->b36=owner->b36;
 a->s28=-1;func_0c1b5eca(a);
}
void func_0c1b5eca(struct LinkedActor *a){
 struct LinkedActor *owner=a->p24;
 a->sdc.b12c=0;a->b36=owner->b36;
 if(a->b1!=owner->b1){a->b4=2;return;}
 if(owner->sdc.b12c){
 *(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&owner->f52;
 a->sdc.w130=((short *)owner)[0x130/2];
 {char frame=((char *)&((struct Actor *)owner)->w150)[1];
 if((unsigned char)frame){
 a->sdc.b12c=1;
 if(a->s28!=(unsigned char)frame){a->s28=(unsigned char)frame;func_0c029e70(a,27,(unsigned char)frame-1);}
 else func_0c029fc4(a);return;
 }a->s28=-1;}
 }
}
void func_0c1b5f4c(struct LinkedActor *a){a->b4++;a->sdc.b12c=0;}
void func_0c1b5f5a(struct LinkedActor *a){func_0c037688(a);}
