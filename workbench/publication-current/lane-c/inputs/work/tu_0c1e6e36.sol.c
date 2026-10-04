#include "objects.h"
extern struct DeviceSlot60 dat_0c312834[8];
extern struct ActorFlags *dat_0c2d6f84;
int func_0c1e6e36(void)
{
 struct DeviceSlot60 *slot;int i,mask;
 if(!dat_0c2d6f84->b47)return -1;
 for(slot=dat_0c312834;slot<dat_0c312834+8;slot++)if(slot->type==18&&slot->id==-65536)return -1;
 mask=0;
 for(i=0;i<8;i++){
 slot=&dat_0c312834[i];
 if(slot->type!=18&&slot->type!=1)continue;
 if(slot->l20==2){if(slot->l28!=2&&slot->l44<6)continue;}
 else if(slot->l28==2){if(slot->l44<5)continue;}
 else if(slot->l44<11)continue;
 mask|=1<<i;
 }
 return mask;
}
