#include "objects.h"
extern struct LinkedActor *func_0c0374da(struct LinkedActor *,int,int);
extern void func_0c037688(struct LinkedActor *),func_0c02a0c4(struct LinkedActor *,int,int),func_0c02a026(struct LinkedActor *),func_0c0346da(struct LinkedActor *,int);
extern void func_0c1d330c(struct Actor *,struct LinkedActorVec3 *,int,int);
extern int func_0c02849a(void);
extern float func_0c1ebd40(int),func_0c1ec2c0(int);
extern void (*dat_0c25afc8[])(struct LinkedActor *);
void func_0c1b3c2e(struct LinkedActor *),func_0c1b3cf8(struct LinkedActor *),func_0c1b3e36(struct LinkedActor *);
void func_0c1b3be8(struct Actor *owner,unsigned char variant){
 struct LinkedActor *a;
 if(owner->b229>=7)return;
 if((a=func_0c0374da(0,3,0))!=0){a->p16=func_0c1b3c2e;a->p24=(struct LinkedActor *)owner;a->b32=variant;a->w38=0x2800;owner->b229++;}
}
void func_0c1b3c2e(struct LinkedActor *a){dat_0c25afc8[a->b4](a);}
void func_0c1b3c40(struct LinkedActor *a){
 struct Actor *target;
 a->b4++;target=((struct Actor *)a->p24)->p1b8;
 if(target->b1!=40){func_0c1b3e36(a);return;}
 a->sdc=((struct LinkedActor *)target)->sdc;a->sdc.b12c=1;a->b2=target->b2;a->b1=target->b1;
 a->v80.x=target->f80;a->v80.y=target->f84;a->b1a3=((struct LinkedActor *)target)->b1a3;a->b1a4=((struct LinkedActor *)target)->b1a4;
 a->b48=((struct LinkedActor *)target)->b48;a->v80=((struct LinkedActor *)target)->v80;a->b36=target->b36;
 a->p20=(struct LinkedActor *)target;a->sdc.w130=target->w130;a->b49=-1;
 func_0c02a0c4(a,23,7);func_0c1b3cf8(a);
}
void func_0c1b3cf8(struct LinkedActor *a){
 struct Actor *owner=(struct Actor *)a->p24;
 int angle;float term,two;float *vertical;
 a->b36=owner->b36;func_0c02a026(a);
 if(owner->b5!=3||owner->b233!=15){
  a->b4++;a->b5=0;a->sdc.b12c=0;if(--owner->b229<0)owner->b229=0;
  if(owner->b229<3){
   /* Retail also evaluates this unused zero test before emission. */
   (void)(owner->b229==0);
   func_0c1d330c(owner,(struct LinkedActorVec3 *)&a->f52,1,8);func_0c0346da(a,73);
  }
  return;
 }
 *(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&owner->f52;
 if(!a->b5){
  two=1.0f;two+=two;a->b5++;a->f96=(float)owner->b13c*2.142857075f/two;a->f108=a->f96/two;
  angle=(int)((unsigned int)func_0c02849a()<<8);
  term=func_0c1ebd40(angle);
  a->f92=a->f108*func_0c1ec2c0(angle)/8.0f+a->f108*term;
  vertical=&a->f96;term=-a->f108*func_0c1ec2c0(angle);term+=a->f108*func_0c1ebd40(angle);*vertical+=term;
 }
 a->f52+=a->f92;a->f56+=a->f96;
}
void func_0c1b3e28(struct LinkedActor *a){a->b4++;a->sdc.b12c=0;}
void func_0c1b3e36(struct LinkedActor *a){func_0c037688(a);}
