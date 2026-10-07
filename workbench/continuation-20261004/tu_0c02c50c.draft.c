/* Unverified:352 linked bytes against360 retail bytes; stack/register layout differs. */
/* Character graphics transfer through two permutation tables. */
#include "objects.h"
extern signed char dat_0c2d75b4[],dat_0c22cffc[],dat_0c23b044[],dat_0c22cfec[],dat_0c22d078[],dat_0c22d03c[],dat_0c23b04a[];
extern unsigned char dat_0cdb0000[],dat_0c2d7088[];
extern struct ActorFlags *dat_0c2d6f84;
void func_0c02c50c(int side){
 int slot_offset=side*0x5a4;
 int source_code=dat_0c22cffc[dat_0c2d75b4[slot_offset]];
 int destination_code=dat_0c23b044[side],row,count;
 unsigned char *source_base=(unsigned char *)dat_0c2d6f84->p94+(source_code&252)*32768;
 unsigned char *destination_base=dat_0cdb0000+(destination_code&252)*32768;
 signed char *source_order=dat_0c22cfec+(source_code&3),*destination_order=dat_0c22cfec+(destination_code&3),*end;
 unsigned int *source,*destination;
 struct Actor *actor;
 for(row=0;row<4;row++,source_order+=4,destination_order+=4){
 destination=(unsigned int *)(destination_base+*destination_order*8192);
 source=(unsigned int *)(source_base+*source_order*8192);
 count=2048;while(count){*destination++=*source++;count--;}
 }
 actor=(struct Actor *)(dat_0c2d7088+slot_offset);
 if(dat_0c2d6f84->b41)source_code=dat_0c22d078[actor->b52c];
 else source_code=dat_0c22d03c[actor->b52c];
 source_base=(unsigned char *)dat_0c2d6f84->p94+(source_code&248)*16384+dat_0c23b04a[source_code&7]*1024+0x1e0000;
 destination_base=dat_0cdb0000+(side&1)*131072;
 source_order=dat_0c23b04a;destination_order=dat_0c23b04a;end=source_order+8;
 for(;source_order<end;source_order++,destination_order++){
 destination=(unsigned int *)(destination_base+*destination_order*2048);
 source=(unsigned int *)(source_base+*source_order*2048);
 count=512;while(count){*destination++=*source++;count--;}
 }
}
