from pathlib import Path
s='''#include "objects.h"
extern unsigned int dat_0c244774[];
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *),func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c046dd0(struct Actor *,int);
extern int func_0c046d54(struct Actor *);
extern void func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int),func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *),func_0c044cbc(struct Actor *),func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c2447e4[])(struct Actor *),(*table_0c2447f4[])(struct Actor *);
#define RESET a->b5=0;a->b6=0;a->b7=0
#define RECORD a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++
'''
names=['2446cc','2446dc','2446ec','2446fc','24470c','24471c']+[f'2447{x:02x}' for x in range(0x2c,0x74,4)]
s+='extern unsigned char '+','.join('dat_0c'+n+'[]' for n in names)+';\n'
d={}
def add(n,b,t='void'):d[n]=t+' func_0c0ad'+n+'(struct Actor *a){'+b+'}\n'
clone=Path('build/tu_0c0ad270.first_clone.c').read_text();a=clone.index('void func_0c0ad270(');b=clone.index('\n}',a)+2;d['270']=clone[a:b]+'\n'
add('28c',''.join('if(func_0c'+n+'(a))return;' for n in ['0465cc','046b6c','0469f4','046d3c','0ad4dc','0ad522','0ad40e','0ad454','0ad324','0ad3b0','0ad654','0ad61a'])+'func_0c045f1c(a);func_0c0463fc(a);')
for n,t,buf,tag in [('324','2446cc','36c',0),('3b0','2446dc','394',8)]:
 add(n,f'struct ActorSub2a4 *state=&a->sub2a4;if(!func_0c046e7e(a,dat_0c{t},a->x{buf})||state->b0>=2)return 0;func_0c047aac(a,a->x{buf});RESET;a->b1e9={tag};func_0c045248(a,21);return 1;','unsigned char')
add('40e','if(!func_0c046e7e(a,dat_0c2446ec,a->x374))return 0;func_0c047aac(a,a->x374);RESET;a->b1e9=1;func_0c045248(a,21);return 1;','unsigned char')
add('454','if(!func_0c046e7e(a,dat_0c2446fc,a->x37c))return 0;if(a->b1f9==2){if(a->b1d4)return 0;a->b1d4++;}func_0c047aac(a,a->x37c);RESET;a->b1e9=2;func_0c045248(a,21);return 1;','unsigned char')
for n,t,buf,tag in [('4dc','24470c','384',3),('522','24471c','38c',5)]:add(n,f'if(!func_0c046e7e(a,dat_0c{t},a->x{buf})||!*a->p40c)return 0;RESET;a->b1e9={tag};func_0c045248(a,29);return 1;','unsigned char')
add('568','if(func_0c0ad5e4(a)||func_0c0ad592(a))return 1;return 0;','unsigned char')
for n,t,buf,tag in [('592','24470c','384',3),('5e4','24471c','38c',5)]:add(n,f'if(!func_0c046e7e(a,dat_0c{t},a->x{buf})||!*a->p40c)return 0;a->b258={tag};return 1;','unsigned char')
add('61a','if(!func_0c046dd0(a,6))return 0;a->b1e9=6;a->b5=0;func_0c045248(a,21);a->b7=0;a->b6=0;return 1;','unsigned char')
add('654','if(!func_0c046d54(a)||!*a->p40c)return 0;a->b1e9=7;a->b5=0;func_0c045248(a,29);a->b7=0;a->b6=0;return 1;','int')
add('694','if(a->b1d1==29&&a->b1e9==3)*(struct Vec3_tu5_03 *)&a->f80=*(struct Vec3_tu5_03 *)((char *)a+0x284);')
add('6be','table_0c2447e4[a->b1ff](a);')
add('6d2','func_0c044cbc(a);if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0ad9a4(a);else func_0c0ad8ca(a);}else{if(a->b1f9==1)func_0c0ad7f8(a);else func_0c0ad74e(a);}')
for n,tagbase,bank,rows in [('74e',0,7,['24472c','244730','244734']),('7f8',6,9,['24472c','244730','244734']),('8ca',3,8,['244738','24473c','244740']),('9a4',9,10,['244738','24473c','244740'])]:
 body='int zero=0;switch((unsigned char)a->b1e8){'
 for mode,row in enumerate(rows):
  body+=f'case {mode}:a->b158={mode};a->b1a1={tagbase+mode};'
  if mode<2:body+=f'func_0c0346da(a,{20+mode});a->p3f4=dat_0c{row};a->b1a7={mode};'
  else:body+=f'a->p3f4=dat_0c{row};a->b1a7=2;func_0c0346da(a,22);'
  body+='break;'
 body+=f'}}RECORD;func_0c02a0c4(a,{bank},a->b158);';add(n,body)
add('a52','if((a->b1fe==0&&(a->b1d6&15))||(a->b1fe!=0&&(a->b1d6&240))){if((unsigned char)a->b1fe==1)func_0c0adbe0(a);else func_0c0adab4(a);}')
for n,base,bank,rows in [('ab4',12,11,[('244744','24475c'),('244748','244760'),('24474c','244764')]),('be0',15,12,[('244750','244768'),('244754','24476c'),('244758','244770')])]:
 body='int zero=0;switch((unsigned char)a->b1e8){'
 for mode,(normal,air) in enumerate(rows):
  body+=f'case {mode}:a->b158={mode};a->b1a1={base+mode};func_0c0346da(a,{20+mode});if(!a->b1fc)a->p3f4=dat_0c{normal};else a->p3f4=dat_0c{air};a->b1a7={mode};'
  if n=='ab4' and mode==2:body+='func_0c0346da(a,22);'
  body+='break;'
 mask=15 if n=='ab4' else 240;body+=f'}}RECORD;func_0c02a0c4(a,{bank},a->b158);if(a->b1d6&{mask})a->b1d6'+('--;' if n=='ab4' else '-=16;');add(n,body)
add('cce','table_0c2447f4[a->b1ff](a);')
for n,b in sorted(d.items()):s+=b[:b.index('{')]+';\n'
s+='\n'.join(b for n,b in sorted(d.items()))
Path('build/tu_0c0ad270.manual.c').write_text(s);print(len(d),'functions')
