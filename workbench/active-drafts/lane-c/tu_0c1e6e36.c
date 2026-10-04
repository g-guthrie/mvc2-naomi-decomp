#include "objects.h"
extern struct ActorFlags *dat_0c2d6f84;
extern struct DeviceSlot60 dat_0c312834[];
int func_0c1e6e36(void) {
 struct DeviceSlot60 *scan,*end,*slot;
 int i,mask;
 if(!dat_0c2d6f84->b47)return -1;
 scan=dat_0c312834;end=dat_0c312834+8;
 while(scan<end){
  if(scan->type==18&&scan->id==(int)0xffff0000u)return -1;
  scan++;
 }
 mask=0;
 for(i=0;i<8;i++){
  slot=&dat_0c312834[i];
  if(slot->type==18||slot->type==1){
   if(slot->l20==2){
    if(slot->l28!=2&&slot->l44<6)continue;
   }else if(slot->l28==2){
    if(slot->l44<5)continue;
   }else if(slot->l44<11)continue;
   mask|=1<<i;
  }
 }
 return mask;
}
