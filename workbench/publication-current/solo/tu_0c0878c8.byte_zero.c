#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern unsigned int func_0c02849a(void);
extern int func_0c03916c(struct Actor *);
extern void func_0c02a39a(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c025900(struct Actor *,char,char),func_0c025762(void),func_0c0437b8(struct Actor *);
extern struct LinkedActor *func_0c195384(struct LinkedActor *,int);
extern void (*table_0c242444[])(struct Actor *,struct ActorSub2a4 *),(*table_0c24244c[])(struct Actor *,struct ActorSub2a4 *);
void func_0c0878c8(struct Actor *a)
{
 char zero;
 if(func_0c02a026(a)<0){a->b5++;zero=0;a->b6=zero;a->b7=zero;a->b32=zero;func_0c02a39a(a,1);func_0c02a0c4(a,zero,zero);}
}
void func_0c08790e(struct Actor *a){table_0c242444[a->b6](a,&a->sub2a4);}
void func_0c087924(struct Actor *a,struct ActorSub2a4 *state)
{
 a->b6++;
 switch(a->b32){
 case 0:a->b33=func_0c02849a()&1;if(a->b33){((unsigned char *)state)[57]=0;func_0c02a0c4(a,19,1);func_0c025900(a,1,13);}else func_0c02a0c4(a,19,0);break;
 case 2:func_0c02a0c4(a,19,2);break;
 case 1:case 3:case 4:func_0c02a0c4(a,19,3);break;
 }
}
void func_0c0879a8(struct Actor *a,struct ActorSub2a4 *state)
{
 if(func_0c03916c(a)){if(a->b33){func_0c025762();((unsigned char *)state)[57]=1;}func_0c0437b8(a);return;}
 switch(a->b32){case 0:if(a->b33){table_0c24244c[a->b7](a,state);return;}break;case 2:case 4:case 1:case 3:default:break;}
 func_0c02a026(a);
}
void func_0c087a4c(struct Actor *a)
{
 float offset;
 a->b1f5=2;func_0c02a026(a);
 if(a->b141&1){a->b141^=1;offset=53.3333321f;if(a->b1d2)offset=-53.3333321f;a->f52+=offset;}
 if(a->b141&2){a->b7++;a->b141^=2;func_0c195384((struct LinkedActor *)a,1);}
}
