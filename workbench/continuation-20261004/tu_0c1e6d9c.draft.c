/* Unverified paired device-slot eligibility scans:328 linked bytes vs336 native. */
#include "objects.h"
extern struct ActorFlags *dat_0c2d6f84;
extern struct DeviceSlot60 dat_0c312834[];
#define SLOT(index) ((struct DeviceSlot60 *)((char *)dat_0c312834+(unsigned long)(index)*60UL))
#define DEVICE_INFO(out,index) ((*(out)=(struct DeviceSlot60 *)((char *)dat_0c312834+(unsigned long)(index)*60UL)),(*(out))->type)
int func_0c1e6d9c(void){
 struct DeviceSlot60 *scan,*end,*slot;int i,mask,type;
 if(!dat_0c2d6f84->b47)return -1;
 end=dat_0c312834+8;
 for(scan=dat_0c312834;scan<end;scan++){
 if(scan->type==18&&scan->id==(int)0xffff0000u)return -1;
 }
 i=mask=0;
 while(i<8){
 type=DEVICE_INFO(&slot,i);
 if(type==18||type==1){if(SLOT(i)->l44>=50)mask|=1<<i;}
 i++;
 }
 return mask;
}
int func_0c1e6e36(void){
 struct DeviceSlot60 *scan,*end,*slot;int i,mask,type;
 if(!dat_0c2d6f84->b47)return -1;
 end=dat_0c312834+8;
 for(scan=dat_0c312834;scan<end;scan++){
 if(scan->type==18&&scan->id==(int)0xffff0000u)return -1;
 }
 i=mask=0;
 while(i<8){
 type=DEVICE_INFO(&slot,i);
 if(type==18||type==1){
 if(SLOT(i)->l20==2){if(SLOT(i)->l28==2||SLOT(i)->l44>=6)goto eligible;}
 else if(SLOT(i)->l28==2){if(SLOT(i)->l44>=5)goto eligible;}
 else if(SLOT(i)->l44>=11)goto eligible;
 }
 goto next;
 eligible:mask|=1<<i;
 next:i++;
 }
 return mask;
}
