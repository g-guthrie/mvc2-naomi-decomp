/* Unverified:303/356 complete linked bytes; index extension/scheduling differs. */
/* Table-driven attachment positioning and state dispatch. */
#include "objects.h"
extern char func_0c18f21e(struct LinkedActor *,struct LinkedActor *),func_0c029fc4(struct LinkedActor *);
extern void func_0c18f256(struct LinkedActor *,struct LinkedActor *);
extern struct FollowOffset15e2 dat_0c256d84[][4];
extern void (*table_0c257218[])(struct LinkedActor *,struct LinkedActor *);
#define ROW dat_0c256d84[owner->sdc.b141][(unsigned char)a->b33]
void func_0c18e0d8(struct LinkedActor *a,struct LinkedActor *owner){
 float x,y,offset;
 if(func_0c18f21e(a,owner))return;
 if((unsigned char)a->b33>=4)return;
 if(owner->sdc.b141==128)return;
 x=owner->f52;y=owner->f56;
 offset=(ROW.x<<8)*1.66666663f/256.0f;
 if(!owner->sdc.w130)offset=-offset;
 a->f52=x+offset;
 a->f56=y+(ROW.y<<8)*2.1428571f/256.0f;
 a->sdc.w130=(signed char)ROW.metadata[0]^owner->sdc.w130;
 a->b49=ROW.metadata[1];
 func_0c029fc4(a);func_0c18f256(a,owner);
}
void func_0c18e204(struct LinkedActor *a,struct LinkedActor *owner){table_0c257218[(unsigned char)a->b5](a,owner);}
