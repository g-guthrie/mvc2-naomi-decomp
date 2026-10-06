/* Unverified roster-indicator allocation: native392 bytes; mask lowering and saved-register layout unresolved. */
#include "objects.h"
extern struct ActorFlags *dat_0c2d6f84;
extern unsigned char *dat_0c2f83f8;
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void func_0c02ccd4(struct Actor *),func_0c02ccf6(struct Actor *);
extern void (*table_0c25d440[])(struct LinkedActor *);
void func_0c1c3d5e(struct LinkedActor *);
void func_0c1c3c00(struct Actor *owner,unsigned char mode){
 int count,i,created;struct Actor *selected;struct LinkedActor *a;
 if(dat_0c2d6f84->i20==64)return;
 if((*(unsigned int *)&owner->pad13c[2])&0x07000000)return;
 count=1;created=0;
 if(mode){count=(signed char)owner->pad10b0[0];if(count==1)mode=0;else count=3;}
 if(!mode)func_0c02ccd4(owner);
 else{
 func_0c02ccf6(((struct Actor *(*)[3])(dat_0c2f83f8+24))[owner->b2][0]);
 func_0c02ccf6(((struct Actor *(*)[3])(dat_0c2f83f8+24))[owner->b2][1]);
 func_0c02ccf6(((struct Actor *(*)[3])(dat_0c2f83f8+24))[owner->b2][2]);
 }
 for(i=0;i<count;i++){
 selected=((struct Actor *(*)[3])(dat_0c2f83f8+24))[owner->b2][i];
 if((count==1 && i==0) || (owner->pad11a[0]&(1<<(selected->pad7cc[0]/2)))){
 if((a=func_0c0374da(0,11,1))){
 a->p16=func_0c1c3d5e;a->p24=(struct LinkedActor *)owner;a->b2=owner->b2;a->b1=selected->b1;
 a->b34=selected->b411;a->b1a4=selected->pad7cc[0];a->p20=(struct LinkedActor *)selected;
 a->sdc.w130=owner->w130;a->b32=mode;a->b33=created;a->w38=6;created++;
 }
 }
 }
}
void func_0c1c3d5e(struct LinkedActor *a){table_0c25d440[a->b4](a);}
