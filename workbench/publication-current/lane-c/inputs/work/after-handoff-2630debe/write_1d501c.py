from pathlib import Path
import json
p=Path('work/after-handoff-2630debe')
with (p/'claim.md').open('a') as f:f.write('\nClaim0c1d501c..53e4 968bytes eight registryclear fullnative read, callbacktable261690 proves50be standalone and5066fallthrough; entries501c5032506650be510a5128513251e653ce. Renderer binding native read8ff8/901e/912a/917e, no newlayout.\n')
s='''#include "selector_model.h"
extern void (*dat_0c261690[])(struct Actor *,struct Obj_tu5_03 *);
extern float dat_0c232210[][8],dat_0c232190[][2];
extern short dat_0c232250[][8];
extern int **dat_0c2d9650;
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *);
extern unsigned int func_0c02849a(void);
extern int func_0c1ec190(void);
extern void func_0c025fc2(struct Obj_tu5_03 *,void (*)(struct Obj_tu5_03 *));
extern void func_0c1d8ff8(void *,void *);
extern int func_0c1d901e(void);
extern void func_0c1d912a(float *,float *),func_0c1d917e(float *,float *);
void func_0c1d5132(struct Obj_tu5_03 *);
void func_0c1d50be(struct Actor *,struct Obj_tu5_03 *);
void func_0c1d501c(struct Obj_tu5_03 *a)
{dat_0c261690[a->b4]((struct Actor *)a->p24,a);}
void func_0c1d5032(struct Actor *parent,struct Obj_tu5_03 *a)
{
 if((unsigned char)parent->b22a!=1)((struct LinkedActor *)a)->wd4.integer=0;
 if(((struct LinkedActor *)a)->wd4.integer--==0){a->b4=1;func_0c025fc2(a,func_0c1d5132);}
}
void func_0c1d5066(struct Actor *parent,struct Obj_tu5_03 *a)
{
 short *timing=dat_0c232250[((struct LinkedActor *)a)->id8];
 float *alpha=dat_0c232210[((struct LinkedActor *)a)->id8];
 a->b12c=1;a->w30=timing[a->w28];a->f116=alpha[a->w28];a->b4=2;
 if(a->b7){a->pos.x=parent->f52+a->f92;a->pos.y=parent->f56+a->f96;}
 func_0c1d50be(parent,a);
}
void func_0c1d50be(struct Actor *parent,struct Obj_tu5_03 *a)
{
 if(a->b7){a->b7=0;a->pos.x=parent->f52+a->f92;a->pos.y=parent->f56+a->f96;}
 if(--a->w30==0){a->b4=1;
  if(++a->w28>=8){a->b4=3;a->w28=7;}
 }
}
void func_0c1d510a(struct Actor *parent,struct Obj_tu5_03 *a)
{func_0c025fc2(a,0);a->b12c=0;a->b4=4;}
void func_0c1d5128(struct Actor *parent,struct Obj_tu5_03 *a){func_0c037688(a);}
void func_0c1d5132(struct Obj_tu5_03 *a)
{
 float *offset=dat_0c232190[a->w28];float x,y;
 if(((struct LinkedActor *)a)->id8)func_0c1d8ff8((void *)(*dat_0c2d9650)[102],(void *)a->l84);
 else func_0c1d8ff8((void *)(*dat_0c2d9650)[103],(void *)a->l84);
 while(func_0c1d901e()==0){func_0c1d912a(&x,&y);x+=offset[0];y-=offset[1];func_0c1d917e(&x,&y);}
}
void func_0c1d51e6(struct Obj_tu5_03 *parent)
{
 unsigned char i;
 for(i=0;i<5;i++){
  struct Obj_tu5_03 *a=func_0c0374da(0,7,1);
  int random,width;
  if(a==0)break;
  a->b12c=0;a->p16=func_0c1d501c;a->lcc=37;a->b35=i;
  a->f80=1.0f;a->f84=1.0f;
  ((struct LinkedActor *)a)->wd4.integer=a->b35*8;a->p24=parent;
  if(parent->w130)a->angles.scalar.first=0;else a->angles.scalar.first=32768;
  ((struct LinkedActor *)a)->id8=func_0c02849a();
  ((struct LinkedActor *)a)->id8%=2;
  if(((struct LinkedActor *)a)->id8)a->l84=(*dat_0c2d9650)[101];
  else a->l84=(*dat_0c2d9650)[99];
  random=func_0c1ec190();
  width=(int)(((struct MeActor *)parent)->blk_dc.b13e*parent->f80*1.66666663f);
  if(random%2)a->f92+=(float)(random%width);else a->f92+=(float)(-(random%width));
  random=func_0c1ec190();
  width=(int)(((struct MeActor *)parent)->blk_dc.b13c*parent->f84*2.14285707f);
  a->f96+=(float)(random%width);
  a->pos.x=parent->pos.x+a->f92;a->pos.y=parent->pos.y+a->f96;
  if(a->w130)a->angles.scalar.first=0;else a->angles.scalar.first=32768;
  a->b7=4;
 }
}
void func_0c1d53ce(struct Obj_tu5_03 *parent){func_0c1d51e6(parent);}
'''
(p/'tu_0c1d501c.c').write_text(s)
u={'id':'sol_post_1d501c','source':str(p/'tu_0c1d501c.c'),'model_header':str(p/'selector_model.h'),'model_header_name':'selector_model.h','mode':'candidate','sections':[{'section':'P','kind':'code','address':0x0c1d501c,'size':968,'interior':[{'address':a,'size':n,'kind':'data'} for a,n in [(0x0c1d5162,46),(0x0c1d529e,62),(0x0c1d53d2,18)]]}],'exports':{'_func_%08x'%a:a for a in [0x0c1d501c,0x0c1d5032,0x0c1d5066,0x0c1d50be,0x0c1d510a,0x0c1d5128,0x0c1d5132,0x0c1d51e6,0x0c1d53ce]},'imports':{},'options':'game'}
(p/'tu_0c1d501c.whole.json').write_text(json.dumps(u,indent=2)+'\n')
r=json.loads(Path('work/tu_0c1d501c.boundary-review.json').read_text());r['native_review']={'entries':list(u['exports']),'pools':u['sections'][0]['interior'],'callback_table':'261690:5032/5066/50be/510a/5128;5066falls50be;53cewrappercalls51e6','semantics':'5032tests oldcounter after decrement; width/height read MeActor b13e/b13c; id8 signedremainder2; renderer x/y pointarguments reviewed'};(p/'tu_0c1d501c.boundary-review.json').write_text(json.dumps(r,indent=2)+'\n')
