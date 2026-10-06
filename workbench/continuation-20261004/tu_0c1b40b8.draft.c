/* Unverified frame-event spawning callback:348/356 equal bytes; constant setup and final-call register choices remain. */
#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void func_0c1b3ec4(struct LinkedActor *),func_0c02a18c(struct LinkedActor *,int,int,int),func_0c037688(struct LinkedActor *);
extern char func_0c02a026(struct LinkedActor *);
void func_0c1b40b8(struct LinkedActor *a,struct LinkedActor *owner){
 char frame;struct LinkedActor *child;
 if(!a->b4){
 a->b4++;a->sdc.b141=0;a->b5=0;
 a->sdc=owner->sdc;a->sdc.b12c=1;
 a->b2=owner->b2;a->b1=owner->b1;a->v80.x=owner->v80.x;a->v80.y=owner->v80.y;
 a->b1a3=owner->b1a3;a->b1a4=owner->b1a4;a->b48=owner->b48;a->v80=owner->v80;a->b36=owner->b36;
 a->sdc.b12c=0;a->b49=-1;
 }
 if(!a->b5){
 if((unsigned char)((struct Actor *)owner)->b159!=21)goto remove;
 a->f52=owner->f52;a->f56=owner->f56;a->b36=owner->b36;
 frame=owner->sdc.b141;
 if(!(frame&128))return;
 frame&=127;
 if(frame){
 if(a->sdc.b141==frame)return;
 a->sdc.b12c=1;func_0c02a18c(a,23,3,frame);
 if(!((struct Actor *)a)->b140)return;
 ((struct Actor *)a)->b140=0;
 if((child=func_0c0374da((int)a,3,2))){
 child->p16=func_0c1b3ec4;child->b32=3;child->b33=0;child->p24=owner;child->b1=owner->b1;
 child->f52=owner->f52;child->f56=owner->f56;child->w38=0x2900;
 }return;
 }a->b5++;
 }
 if(func_0c02a026(a)<0){remove:func_0c037688(a);}
}
