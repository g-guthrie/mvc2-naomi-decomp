#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern unsigned int func_0c02849a(void);
extern int func_0c0c4f82(struct Actor *);
extern void func_0c0442fa(struct Actor *),func_0c02a39a(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c0437b8(struct Actor *),func_0c0432ca(struct Actor *),func_0c0c4f04(struct Actor *,int *),func_0c0429a4(struct Actor *,struct LinkedActorVec3 *,int),func_0c1c1678(struct Actor *,unsigned short *,int),func_0c0344a0(struct Actor *,int);
extern struct LinkedActor *func_0c15f7a8(struct LinkedActor *,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern int dat_0c246204[],dat_0c246254[];
extern unsigned int dat_0c246a4c[];
extern void (*table_0c246a34[])(struct Actor *);
void func_0c0c27e2(struct Actor *),func_0c0c28ac(struct Actor *);
void func_0c0c2794(struct Actor *a)
{
 a->b6++;func_0c0442fa(a);func_0c02a39a(a,0);a->f92=0;a->f96=0;a->f104=0;a->f108=0;a->f56=a->f41c;a->b1fc=0;a->b1f9=0;func_0c02a0c4(a,20,2);func_0c0c27e2(a);
}
void func_0c0c27e2(struct Actor *a){if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0c2804(struct Actor *a){a->x364[0]=0;table_0c246a34[a->b6](a);}
void func_0c0c281e(struct Actor *a)
{
 struct ActorSub2a4 *state=&a->sub2a4;int zero=0;
 if(a->b255==6){a->b3f0=255;a->b3f1=16;}
 a->b6++;((unsigned char *)state)[24]=zero;((unsigned char *)state)[4]=255;a->b1f9=zero;a->f56=a->f41c;a->b1fc=zero;a->f92=0;a->f96=0;a->f104=0;a->f108=0;
 a->b1a1=69;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;func_0c02a0c4(a,22,7);func_0c0432ca(a);func_0c0c28ac(a);
}
void func_0c0c28ac(struct Actor *a)
{
 struct ActorSub2a4 *state=&a->sub2a4;struct LinkedActorVec3 p;int zero=0;
 a->b3f8=2;a->b328=5;a->b3f1=a->b255==6?2:0;func_0c02a026(a);
 if(!a->b141){a->b6++;a->b3f0=zero;a->b3f1=zero;((unsigned char *)state)[11]=2;((unsigned char *)state)[10]=255;func_0c0c4f04(a,dat_0c246204);p.x=-13.33333302f;p.y=105;p.z=0;func_0c0429a4(a,&p,1);}
}
void func_0c0c2968(struct Actor *a)
{
 struct ActorSub2a4 *state=&a->sub2a4;unsigned short *timer=(unsigned short *)((char *)state+30);
 a->b3f8=2;a->b328=5;if(func_0c0c4f82(a))return;
 a->b6++;((unsigned char *)state)[10]=0;((unsigned char *)state)[25]=0;*timer=180;func_0c1c1678(a,timer,6);
 *(unsigned int *)&state->b20=dat_0c246a4c[func_0c02849a()&3];((unsigned char *)state)[27]=1;
 func_0c0442fa(a);func_0c02a39a(a,0);func_0c15f7a8((struct LinkedActor *)a,0);func_0c15f7a8((struct LinkedActor *)a,1);func_0c15f7a8((struct LinkedActor *)a,3);func_0c15f7a8((struct LinkedActor *)a,4);
 func_0c0c4f04(a,dat_0c246254);func_0c02a0c4(a,22,8);func_0c0344a0(a,30);
}
