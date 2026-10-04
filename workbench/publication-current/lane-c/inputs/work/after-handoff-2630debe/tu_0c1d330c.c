#include "model_1d330c.h"
extern struct NumericHudSource dat_0c2f8338;
extern int func_0c1ec190(void);
extern void func_0c1d3172(struct Obj_tu5_03 *,struct Vec3_tu5_03 *,int,int,unsigned short,float);
extern void func_0c1d2ff6(struct Obj_tu5_03 *,struct Vec3_tu5_03 *,int,int,unsigned short,float);
extern void func_0c1d2e60(struct Obj_tu5_03 *,struct Vec3_tu5_03 *,int,int,unsigned short,float);
extern void func_0c1d2c1c(struct Obj_tu5_03 *,struct Vec3_tu5_03 *,int,int,unsigned short,float);
void func_0c1d330c(struct Obj_tu5_03 *parent,struct Vec3_tu5_03 *point,unsigned char requested,unsigned short flags)
{
 int i;int count;float scale;unsigned short controls=flags;
 if(dat_0c2f8338.activeEffects119>6)return;
 if(dat_0c2f8338.activeEffects119+requested>6)requested=6-dat_0c2f8338.activeEffects119;
 dat_0c2f8338.activeEffects119+=requested;
 count=requested;
 for(i=0;i<count;i++){
  if(controls&2){
   struct Vec3_tu5_03 position;
   int random,width;
   position=parent->pos;
   random=func_0c1ec190();
   width=(int)(((struct MeActor *)parent)->blk_dc.b13e*parent->f80*1.66666663f);
   if(random%2)position.x+=(float)(random%width);
   else position.x+=(float)(-(random%width));
   random=func_0c1ec190();
   width=(int)(((struct MeActor *)parent)->blk_dc.b13c*parent->f84*2.14285707f);
   position.y+=(float)(random%width);
   if(controls&4){if(func_0c1ec190()%2)scale=1.0f;else scale=1.5f;}
   else if(controls&256)scale=1.5f;
   else if(controls&1024)scale=0.600000024f;
   else scale=1.0f;
   if(controls&512)scale*=10.0f;
   func_0c1d3172(parent,&position,count,i,flags,scale);
   func_0c1d2ff6(parent,&position,count,i,flags,scale);
   func_0c1d2e60(parent,&position,count,i,flags,scale);
   func_0c1d2c1c(parent,&position,count,i,flags,scale);
  }else{
   if(controls&4){if(func_0c1ec190()%2)scale=1.0f;else scale=1.5f;}
   else if(controls&256)scale=1.5f;
   else if(controls&1024)scale=0.600000024f;
   else scale=1.0f;
   if(controls&512)scale*=10.0f;
   func_0c1d3172(parent,point,count,i,flags,scale);
   func_0c1d2ff6(parent,point,count,i,flags,scale);
   func_0c1d2e60(parent,point,count,i,flags,scale);
   func_0c1d2c1c(parent,point,count,i,flags,scale);
  }
 }
}
void func_0c1d357a(struct Vec3_tu5_03 *point,unsigned char larger)
{
 float scale;
 if(dat_0c2f8338.activeEffects119>=6)return;
 dat_0c2f8338.activeEffects119++;
 if(larger)scale=1.5f;else scale=1.0f;
 func_0c1d3172(0,point,1,0,121,scale);
 func_0c1d2ff6(0,point,1,0,121,scale);
 func_0c1d2e60(0,point,1,0,121,scale);
 func_0c1d2c1c(0,point,1,0,121,scale);
}
