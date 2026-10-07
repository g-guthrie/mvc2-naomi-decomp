#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void (*table_0c250694[])(struct LinkedActor *);
extern short *dat_0c2fb358;
extern void func_0c02a0c4(struct LinkedActor *,int,int);
void func_0c154980(struct LinkedActor *);
struct LinkedActor *func_0c154954(struct LinkedActor *parent)
{
 struct LinkedActor *a;
 if((a=func_0c0374da(0,1,0))!=0){a->p16=func_0c154980;a->p24=parent;a->w38=0x1603;}
 return a;
}
void func_0c154980(struct LinkedActor *a)
{
 dat_0c2fb358=&a->wcc.short_value;
 table_0c250694[a->b4](a);
}
void func_0c15499c(struct LinkedActor *a)
{
 a->b4++;a->sdc=a->p24->sdc;a->sdc.b12c=1;
 a->b2=a->p24->b2;a->b1=a->p24->b1;a->v80.x=a->p24->v80.x;a->v80.y=a->p24->v80.y;
 a->b1a3=a->p24->b1a3;a->b1a4=a->p24->b1a4;a->b48=a->p24->b48;a->v80=a->p24->v80;
 a->b36=a->p24->b36;a->pad11[0]=67;a->pad11[1]=0;a->b36=0;
 a->f52=a->p24->f52;
 if(a->sdc.w130);
 a->f52+=6.66666651f;
 a->f56=a->p24->f56;
 a->f56-=12.85714245f;
 a->v80.x=1.25f;a->v80.y=1.1f;
 *dat_0c2fb358=a->p24->sdc.w158.short_value;
 a->s28=0;
 func_0c02a0c4(a,23,4);
}
