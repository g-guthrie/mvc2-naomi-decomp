/* Unverified four-callback family. Expected 304 bytes; currently links 300. Animation callback caches its helper in R13 unlike retail. */
#include "objects.h"
extern void (*table_0c258dc8[])(struct LinkedActor *),(*table_0c258dd0[])(struct LinkedActor *);
extern void func_0c0346da(struct LinkedActor *,int),func_0c1ce660(struct LinkedActorVec3 *,int);
extern struct LinkedActor *func_0c19fb0a(struct LinkedActor *,char);
extern char func_0c029fc4(struct LinkedActor *);
void func_0c1a0e68(struct LinkedActor *a){table_0c258dc8[(unsigned char)a->b5](a);}
void func_0c1a0e7a(struct LinkedActor *a)
{
 struct LinkedActorVec3 position;
 a->f56+=a->f96;a->f96+=a->f108;
 if(a->s28-->0)a->f52+=a->f92;
 if(a->f56<a->p24->f56){
 a->b5++;a->f56=a->p24->f56;
 position.x=a->f52;position.y=a->f56;position.z=a->f60;
 func_0c0346da(a,52);func_0c1ce660(&position,0);
 }
}
void func_0c1a0efc(struct LinkedActor *a)
{
 if(a->p24->b1d0!=22){a->b4++;return;}
 if(a->sdc.b141==1){a->sdc.b141=0;func_0c19fb0a(a,9);func_0c19fb0a(a,8);}
 if(a->sdc.b141==2){a->sdc.b141=0;func_0c19fb0a(a,11);}
 if(((struct Actor *)a)->b143>=0)func_0c029fc4(a);
}
void func_0c1a0f66(struct LinkedActor *a){table_0c258dd0[(unsigned char)a->b5](a);}
