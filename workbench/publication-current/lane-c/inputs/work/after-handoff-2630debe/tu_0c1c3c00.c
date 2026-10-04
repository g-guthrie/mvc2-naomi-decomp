#include "model_1c3c00.h"
extern struct ActorFlags *dat_0c2d6f84;
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c02ccd4(struct Actor *);
extern void func_0c02ccf6(struct Actor *);
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void (*dat_0c25d440[])(struct LinkedActor *);
void func_0c1c3d5e(struct LinkedActor *);
void func_0c1c3c00(struct Actor *parent,unsigned char mode)
{
 int count=1,index,created=0;struct Actor *linked;struct LinkedActor *a;
 if(dat_0c2d6f84->i20==64)return;
 if(parent->flags414&0x07000000)return;
 if(mode){if(parent->b259==1)mode=0;else count=3;}
 if(!mode)func_0c02ccd4(parent);
 else {
  func_0c02ccf6(((struct Actor *(*)[3])(dat_0c2f83f8->pad+24))[parent->b2][0]);
  func_0c02ccf6(((struct Actor *(*)[3])(dat_0c2f83f8->pad+24))[parent->b2][1]);
  func_0c02ccf6(((struct Actor *(*)[3])(dat_0c2f83f8->pad+24))[parent->b2][2]);
 }
 for(index=0;index<count;index++){
  linked=((struct Actor *(*)[3])(dat_0c2f83f8->pad+24))[parent->b2][index];
  if((count==1&&index==0)||(parent->b329&(1<<((unsigned char)((struct LinkedActor *)linked)->b1a4/2)))){
   a=func_0c0374da(0,11,1);
   if(a){
    a->p16=func_0c1c3d5e;a->p24=(struct LinkedActor *)parent;a->b2=parent->b2;a->b1=linked->b1;
    a->b34=linked->b411;a->b1a4=((struct LinkedActor *)linked)->b1a4;a->p20=(struct LinkedActor *)linked;
    a->sdc.w130=parent->w130;a->b32=mode;a->b33=created;((struct MeActor *)a)->w26=6;created++;
   }
  }
 }
}
void func_0c1c3d5e(struct LinkedActor *a){dat_0c25d440[a->b4](a);}
