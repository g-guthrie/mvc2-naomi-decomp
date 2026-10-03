/* UNVERIFIED DRAFT: complete function bodies; not registered or credited. */
/* Private partial C translation, enclosing effects group incomplete. */
#include "objects.h"
extern struct LinkedActor *func_0c0374da(struct LinkedActor *,int,int);
extern void (*table_0c257720[])(struct LinkedActor *);
void func_0c1911a8(struct LinkedActor *);
struct LinkedActor *func_0c1910d0(struct LinkedActor *owner,char kind)
{struct LinkedActor *a;if((a=func_0c0374da(0,3,0))!=0){a->p16=func_0c1911a8;a->p24=owner;a->b32=kind;a->w38=0x601;a->wcc.short_value=owner->sdc.w158;}return a;}
struct LinkedActor *func_0c191114(struct LinkedActor *owner,char kind)
{struct LinkedActor *a;unsigned short tag;if((a=func_0c0374da(owner,3,2))!=0){a->p16=func_0c1911a8;a->p24=owner->p24;a->p20=owner;
 *(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&owner->f52;tag=0x601;a->b32=kind;a->w38=tag;}return a;}
struct LinkedActor *func_0c19115e(struct LinkedActor *owner,char kind)
{struct LinkedActor *a;unsigned short tag;if((a=func_0c0374da(0,3,1))!=0){a->p16=func_0c1911a8;a->p24=owner->p24;a->p20=owner;
 *(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&owner->f52;tag=0x601;a->b32=kind;a->w38=tag;}return a;}
void func_0c1911a8(struct LinkedActor *a){table_0c257720[a->b4](a);}

extern void (*table_0c257730[])(struct Actor *,struct Actor *);
extern void func_0c029e70(struct Actor *,int,int);
extern void func_0c191436(struct Actor *);
void func_0c1911ba(struct Actor *a)
{
 struct Actor *owner;
 a->b4++;owner=(struct Actor *)((struct LinkedActor *)a)->p24;((struct LinkedActor *)a)->sdc=((struct LinkedActor *)owner)->sdc;a->b12c=1;
 a->b2=owner->b2;a->b1=owner->b1;a->f80=owner->f80;a->f84=owner->f84;
 a->b1a3=owner->b1a3;a->pad7cc[0]=owner->pad7cc[0];
 ((struct LinkedActor *)a)->b48=((struct LinkedActor *)owner)->b48;
 ((struct LinkedActor *)a)->v80=((struct LinkedActor *)owner)->v80;a->b36=owner->b36;
 table_0c257730[a->b32](a,owner);func_0c191436(a);
}
void func_0c191254(struct Actor *a,struct Actor *owner)
{
 a->b12c=1;*(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&owner->f52;
 if((short)owner->w130)a->f52+=65.0f;else a->f52-=65.0f;
 if(!a->b32)a->f56+=190.71428f;else a->f56+=135.0f;
 ((struct LinkedActor *)a)->b49=-1;func_0c029e70(a,27,2);
}
void func_0c1912b6(struct Actor *a,struct Actor *owner)
{((struct LinkedActor *)a)->b49=-1;func_0c029e70(a,27,3);}
void func_0c1912c4(struct Actor *a,struct Actor *owner)
{
 ((struct LinkedActor *)a)->b49=-1;*(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&owner->f52;
 if((short)a->w130)a->f52+=30.0f;else a->f52-=30.0f;
 a->f56+=212.142853f;func_0c029e70(a,27,4);
}

extern unsigned char table_0c257754[];
extern unsigned short table_0c257764[];
extern void (*table_0c257770[])(struct Actor *,struct Actor *),(*table_0c257794[])(struct Actor *,struct Actor *);
extern char func_0c029fc4(struct Actor *);
void func_0c19130e(struct Actor *a,struct Actor *owner)
{
 float offset;((struct LinkedActor *)a)->b49=-1;
 *(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&owner->f52;
 a->f96=12.85714245f;a->f108=-0.5357143f;a->f92=3.3333333f;a->f104=0;a->f56+=188.57143f;offset=80.0f;
 if((short)a->w130){a->f92=-a->f92;offset=-80.0f;}a->f52+=offset;func_0c029e70(a,27,5);
}
void func_0c19137a(struct Actor *a,struct Actor *owner)
{((struct LinkedActor *)a)->b49=-16;func_0c029e70(a,27,6);}
void func_0c1913c0(struct Actor *a,struct Actor *owner)
{((struct LinkedActor *)a)->b49=-120;a->w130^=1;a->i72=table_0c257764[table_0c257754[a->p20->b34]];func_0c029e70(a,27,7);}
void func_0c1913f2(struct Actor *a,struct Actor *owner)
{((struct LinkedActor *)a)->b49=-1;*(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&owner->f52;
 a->f96=207.857132f;a->f56+=a->f96;func_0c029e70(a,27,4);}
void func_0c191428(struct Actor *a,struct Actor *owner)
{((struct LinkedActor *)a)->b49=-16;func_0c029e70(a,27,8);}
void func_0c191436(struct Actor *a)
{struct Actor *owner=(struct Actor *)((struct LinkedActor *)a)->p24;a->b36=owner->b36;table_0c257770[a->b32](a,owner);}
void func_0c191454(struct Actor *a,struct Actor *owner)
{if(func_0c029fc4(a)<0){a->b4++;a->b12c=0;}}
void func_0c191476(struct Actor *a,struct Actor *owner)
{table_0c257794[a->b5](a,owner);}

void func_0c191488(struct Actor *a,struct Actor *owner)
{
 float offset=0;a->b12c=1;
 switch(owner->b141){
 case 0:a->b12c=0;break;
 case 3:a->b5++;a->f104=offset;a->f92=1.66666663f;if(!(short)a->w130)a->f92=-a->f92;
 a->f96=12.85714245f;a->f108=-0.5357143f;break;
 default:
 *(struct LinkedActorVec3 *)&a->f52=*(struct LinkedActorVec3 *)&owner->f52;
 if(owner->b141==1)a->f56+=240.0f;else{offset=-13.33333302f;a->f56+=274.28571f;}
 if(!(short)a->w130)offset=-offset;a->f52+=offset;
 break;
 }
}
void func_0c191556(struct Actor *a,struct Actor *owner)
{
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(a->f96>0)goto done;
 {a->b5++;a->f92=0;a->f104=0;a->f96=-2.1428571f;a->f108=-0.2678571343422f;func_0c029fc4(a);a->s28=0;}
 done:return;
}
void func_0c1915ca(struct Actor *a,struct Actor *owner)
{
 func_0c029fc4(a);a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(!a->s28 && owner->f41c+205.71428f>a->f56){a->s28=1;func_0c191114((struct LinkedActor *)a,3);}
 if(!(a->f56>owner->f41c)){a->b4++;a->b12c=0;}
}
