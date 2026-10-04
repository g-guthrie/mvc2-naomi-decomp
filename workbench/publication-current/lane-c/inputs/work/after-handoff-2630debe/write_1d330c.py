from pathlib import Path
import json
p=Path('work/after-handoff-2630debe')
with (p/'claim.md').open('a') as f:f.write('\nClaim 0c1d330c..35f4 744 bytes: all8registries clear; direct outgoing branches are calls to four real standalone constructors3172/2ff6/2e60/2c1c; read each argument prologue. True entries330c/357a, continuation3460/3510 not functions. Private model reveals signed effect counter119 only.\n')
h=(p/'selector_model.h').read_text();old='unsigned char unknown3f[120 - 63]; short counts[18];';new='unsigned char unknown3f[119 - 63]; signed char activeEffects119; short counts[18];';assert old in h;(p/'model_1d330c.h').write_text(h.replace(old,new))
s='''#include "model_1d330c.h"
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
   struct Vec3_tu5_03 position=parent->pos;
   int random=func_0c1ec190();
   int width=(int)(((struct MeActor *)parent)->blk_dc.b13e*parent->f80*1.66666663f);
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
'''
(p/'tu_0c1d330c.c').write_text(s)
u={'id':'sol_post_1d330c','source':str(p/'tu_0c1d330c.c'),'model_header':str(p/'model_1d330c.h'),'model_header_name':'model_1d330c.h','mode':'candidate','sections':[{'section':'P','kind':'code','address':0x0c1d330c,'size':744,'interior':[{'address':a,'size':n,'kind':'data'} for a,n in [(0x0c1d343a,38),(0x0c1d3506,10),(0x0c1d35ea,10)]]}],'exports':{'_func_%08x'%a:a for a in [0x0c1d330c,0x0c1d357a]},'imports':{},'options':'game'}
(p/'tu_0c1d330c.whole.json').write_text(json.dumps(u,indent=2)+'\n')
r=json.loads(Path('work/tu_0c1d330c.boundary-review.json').read_text());r['native_review']={'entries':list(u['exports']),'pools':u['sections'][0]['interior'],'outgoing':'all direct outgoing edges are calls to standalone3172/2ff6/2e60/2c1c; no crossedliteral or branch','arguments':'all four constructors use stack halfword flags and FR4 float scale, R4 parent/R5 point/R6 count/R7 index','new_field':'NumericHudSource signed byte119 at2f83af; size/remaining offsets preserved'};(p/'tu_0c1d330c.boundary-review.json').write_text(json.dumps(r,indent=2)+'\n')
