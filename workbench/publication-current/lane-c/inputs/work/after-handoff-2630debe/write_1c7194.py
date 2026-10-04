from pathlib import Path
import json,hashlib
p=Path('work/after-handoff-2630debe')
files=[p/'tu_0c1c3854.c',p/'tu_0c1c3854.whole.json',p/'selector_model.h',p/'tu_0c1c3854.first-proof.json',p/'tu_0c1c3854.boundary-review.json',Path('work/tu_0c1c3854.retail.txt')]
(p/'tu_0c1c3854.source-review.json').write_text(json.dumps({'exact_credit':0,'registered':False,'review':'All five functions complete. Native signed byte62 test, signed remainder jitter, NaN-faithful fade condition, unsigned random modulo3, state0 to1 fallthrough. Whole proof inexact; even exact56-byte helper uncredited until whole exact.','sha256':{str(x):hashlib.sha256(x.read_bytes()).hexdigest() for x in files}},indent=2)+'\n')
with (p/'claim.md').open('a') as f:f.write('\nClaim 0c1c7194..7494 768 bytes: eight registry checks clear, full native read, real five entries7194/7278/7368/743c/7450; false7300 continuation omitted. Existing CharacterState selector52c and ActorFlags b41 suffice; no new shared model.\n')
s='''#include "selector_model.h"
extern int **dat_0c2d9658;
extern struct ActorFlags *dat_0c2d6f84;
extern struct Vec3_tu5_03 dat_0c25e730[][3],dat_0c25e778[][2];
extern void (*dat_0c25e8c4[])(struct Obj_tu5_03 *);
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c025fc2(struct Obj_tu5_03 *,void (*)(struct Obj_tu5_03 *));
extern void func_0c1c766a(struct Obj_tu5_03 *);
extern void func_0c1c76bc(struct Obj_tu5_03 *);
extern void func_0c1c756e(struct Obj_tu5_03 *);
void func_0c1c7278(struct Obj_tu5_03 *);
void func_0c1c743c(struct Obj_tu5_03 *);
void func_0c1c7194(struct Obj_tu5_03 *parent)
{
 short i;struct CharacterState5a4 *state=(struct CharacterState5a4 *)parent->p20;
 for(i=0;i<3;i++){
  struct Obj_tu5_03 *a=func_0c0374da(0,5,1);
  if(a==0)break;
  a->p24=parent;a->p200=&parent->f136;a->p20=parent->p20;
  a->b12c=1;a->p16=func_0c1c743c;a->b32=parent->b32;a->b33=i;
  /* Both object layouts expose the native byte at offset 1. */
  ((struct LinkedActor *)a)->b1=state->selector52c;
  a->l84=(*dat_0c2d9658)[99+i];
  a->pos=dat_0c25e730[a->b32][i];
  a->angles.array[0]=8192;a->angles.array[1]=0;a->angles.array[2]=0;
  a->lcc=0x0813;a->f80=1.0f;a->f84=0.00999999978f;a->f88=1.0f;
  func_0c1c7278(a);
 }
}
void func_0c1c7278(struct Obj_tu5_03 *parent)
{
 struct Obj_tu5_03 *a=func_0c0374da(0,5,1);
 if(a!=0){
  a->p24=parent;a->p200=parent->p200;a->p20=parent->p20;
  a->b12c=1;a->p16=func_0c1c766a;a->b32=parent->b32;a->b33=parent->b33;
  ((struct LinkedActor *)a)->b1=((struct LinkedActor *)parent)->b1;
  if(dat_0c2d6f84->b41)a->l84=(*dat_0c2d9658)[108];
  else a->l84=(*dat_0c2d9658)[102];
  a->pos=dat_0c25e730[a->b32][a->b33];
  a->angles.array[0]=8192;a->lcc=0x0813;
  a->f80=1.0f;a->f84=0.00999999978f;a->f88=1.0f;
  func_0c025fc2(a,func_0c1c76bc);
 }
}
void func_0c1c7368(struct Obj_tu5_03 *parent)
{
 short i;
 for(i=0;i<2;i++){
  struct Obj_tu5_03 *a=func_0c0374da(0,5,1);
  if(a==0)break;
  a->p24=parent;a->p200=&parent->f136;a->p20=parent->p20;
  a->b12c=1;a->p16=func_0c1c756e;a->b32=parent->b32;a->b33=i;
  a->l84=(*dat_0c2d9658)[107-i];a->pos=dat_0c25e778[a->b32][i];
  a->angles.array[0]=8192;a->angles.array[1]=0;a->angles.array[2]=0;
  a->lcc=0x0813;a->f80=1.0f;a->f84=0.00999999978f;a->f88=1.0f;
 }
}
void func_0c1c743c(struct Obj_tu5_03 *a)
{
 dat_0c25e8c4[a->p24->b4](a);
}
void func_0c1c7450(struct Obj_tu5_03 *a){a->b12c=a->p24->b12c;}
'''
(p/'tu_0c1c7194.c').write_text(s)
u={'id':'sol_post_1c7194','source':str(p/'tu_0c1c7194.c'),'model_header':str(p/'selector_model.h'),'model_header_name':'selector_model.h','mode':'candidate','sections':[{'section':'P','kind':'code','address':0x0c1c7194,'size':768,'interior':[{'address':a,'size':n,'kind':'data'} for a,n in [(0x0c1c72ce,50),(0x0c1c745a,58)]]}],'exports':{'_func_%08x'%a:a for a in [0x0c1c7194,0x0c1c7278,0x0c1c7368,0x0c1c743c,0x0c1c7450]},'imports':{},'options':'game'}
(p/'tu_0c1c7194.whole.json').write_text(json.dumps(u,indent=2)+'\n')
r=json.loads(Path('work/tu_0c1c7194.boundary-review.json').read_text());r['native_review']={'entries':list(u['exports']),'pools':u['sections'][0]['interior'],'continuation':'7300 is internal7278branch after literal pool','shared_fields':'CharacterState.selector52c,ActorFlags.b41; helper025fc2 native wordstore at40'};(p/'tu_0c1c7194.boundary-review.json').write_text(json.dumps(r,indent=2)+'\n')
