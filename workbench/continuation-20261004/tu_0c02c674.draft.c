/* Unverified:162/372 linked bytes; pointer registers and loop scheduling differ. */
/* Copy banked graphics pages and prepare per-player character resources. */
#include "objects.h"
extern signed char dat_0c23b052[],dat_0c22cfec[],dat_0c2d75b4[];
extern unsigned char dat_0cdb0000[],dat_0cdf0000[],dat_0c520000[],dat_0c720000[];
extern unsigned int dat_0c228a3c[][2];
extern struct ActorFlags *dat_0c2d6f84;
extern void func_0c02a762(void *,void *);
void func_0c02c674(int selection){
 signed char *codes=dat_0c23b052+selection*3;
 int bank,row,count,code,source_page; signed char *source_order,*destination_order;
 unsigned char *source_base,*destination_base;
 unsigned int *source,*destination;
 for(bank=57;bank<60;bank++){
 source_page=bank;source_base=(unsigned char *)dat_0c2d6f84->p94+((source_page&252)*32768);
 code=*codes++;destination_base=dat_0cdb0000+((code&252)*32768);
 destination_order=dat_0c22cfec+(code&3);source_order=dat_0c22cfec+(source_page&3);
 for(row=0;row<4;row++,source_order+=4,destination_order+=4){
 destination=(unsigned int *)(destination_base+(*destination_order*8192));
 source=(unsigned int *)(source_base+(*source_order*8192));
 count=2048;do{*destination++=*source++;}while(--count);
 }
 }
}
void func_0c02c728(int side){
 int character=dat_0c2d75b4[side*0x5a4],count;
 unsigned int *source,*destination;
 if(character>=27)character-=3;
 source=(unsigned int *)((unsigned char *)dat_0c2d6f84->p94+character*0x4800+0x2e0000);
 destination=(unsigned int *)(dat_0cdf0000+(side&1)*0x4800);
 count=4608;do{*destination++=*source++;}while(--count);
}
void func_0c02c77e(int side,int character){
 unsigned int source;int normalized=character;
 if(character>=27)normalized-=3;
 source=(unsigned int)dat_0c520000+(dat_0c228a3c[normalized][0]-dat_0c228a3c[0][0]);
 func_0c02a762((void *)source,dat_0c720000+(side<<17));
}
