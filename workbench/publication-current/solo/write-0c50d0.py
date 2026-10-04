from pathlib import Path
s='''#include "objects.h"
extern unsigned int dat_0c24775c[];
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *),func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c046dd0(struct Actor *,int);
extern int func_0c046d54(struct Actor *);
extern void func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int),func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *),func_0c044cbc(struct Actor *),func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern struct ActorFlags *dat_0c2d6f84;
extern short dat_0c2477cc[];
extern void (*table_0c2477d4[])(struct Actor *),(*table_0c2477e4[])(struct Actor *);
#define RESET a->b5=0;a->b7=0;a->b6=0
#define RECORD a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++
'''
names=['246dec','246dfc','246e0c','246e1c','246e2c','246e3c','246e4c','246e5c','246e6c']+[f'246d{x:02x}' for x in range(0xa4,0xec,4)];s+='extern unsigned char '+','.join('dat_0c'+n+'[]' for n in names)+';\n'
d={}
def add(n,b,t='void'):d[n]=t+' func_0c0c'+n+'(struct Actor *a){'+b+'}\n'
clone=Path('build/tu_0c0c50d0.first_clone.c').read_text();a=clone.index('void func_0c0c50d0(');b=clone.index('\n}',a)+2;d['50d0']=clone[a:b]+'\n'
add('50ec',''.join('if(func_0c'+n+'(a))return;' for n in ['0465cc','046b6c','0469f4','046d3c','0c52cc','0c5334','0c537a','0c51c0','0c5228','0c53e4','0c5488','0c551a','0c5584','0c5612','0c5650'])+'func_0c045f1c(a);func_0c0463fc(a);')
add('51c0','if(!func_0c046e7e(a,dat_0c246dec,a->x364))return 0;if(a->b1f9==2&&!a->b1fc){if(a->b1d4)return 0;a->b1d4++;}func_0c047aac(a,a->x364);RESET;a->b1e9=0;func_0c045248(a,21);return 1;','unsigned char')
add('5228','unsigned char *state=(unsigned char *)&a->sub2a4;if(!func_0c046e7e(a,dat_0c246dfc,a->x36c))return 0;if(a->b1f9!=2){if(state[29])return 0;}else{if(state[29]>2)return 0;if(!a->b1fc){if(a->b1d4)return 0;a->b1d4++;}}func_0c047aac(a,a->x36c);RESET;a->b1e9=2;func_0c045248(a,21);return 1;','unsigned char')
add('52cc','if(!func_0c046e7e(a,dat_0c246e0c,a->x38c)||!*a->p40c)return 0;if(a->b1f9==2){if(a->b1d4&&!a->b1fc)return 0;a->b1d4++;}RESET;a->b1e9=7;func_0c045248(a,29);return 1;','unsigned char')
for n,t,buf,tag in [('5334','246e1c','374',4),('537a','246e2c','37c',5)]:add(n,f'if(!func_0c046e7e(a,dat_0c{t},a->x{buf})||!*a->p40c)return 0;RESET;a->b1e9={tag};func_0c045248(a,29);return 1;','unsigned char')
add('53e4','unsigned char *state=(unsigned char *)&a->sub2a4;if(!state[8]){if(!func_0c046e7e(a,dat_0c246e3c,a->x384)||a->b1f9==2||state[5]||state[6]||state[7])return 0;func_0c047aac(a,a->x384);}else{if(!func_0c046e7e(a,dat_0c246e3c,a->x384))return 0;if(a->b1f9==2){if(a->b1d4 & !a->b1fc)return 0;a->b1d4++;}}RESET;a->b1e9=6;func_0c045248(a,21);return 1;','unsigned char')
for n,t,buf,mode in [('5488','246e4c','394',0),('551a','246e5c','39c',1),('5584','246e6c','3a4',2)]:
 add(n,f'unsigned char *state=(unsigned char *)&a->sub2a4;if(state[3]||!func_0c046e7e(a,dat_0c{t},a->x{buf}))return 0;func_0c047aac(a,a->x{buf});RESET;a->b1e9=12;func_0c045248(a,21);if(!a->b525)state[26]={mode};else state[26]=a->b1fe;return 1;','unsigned char')
add('5612','if(!func_0c046d54(a)||!*a->p40c)return 0;a->b1e9=8;RESET;func_0c045248(a,29);return 1;','int')
add('5650','if(!func_0c046dd0(a,3))return 0;RESET;a->b1e9=3;func_0c045248(a,21);return 1;','unsigned char')
add('5688','if(func_0c0c56b4(a)||func_0c0c56ea(a)||func_0c0c5746(a))return 1;return 0;','int')
for n,t,buf,tag in [('56b4','246e0c','38c',7),('56ea','246e1c','374',4),('5746','246e2c','37c',5)]:add(n,f'if(!func_0c046e7e(a,dat_0c{t},a->x{buf})||!*a->p40c)return 0;a->b258={tag};return 1;','int')
add('577c','unsigned char *state=(unsigned char *)&a->sub2a4;struct Actor *timer=(struct Actor *)state;if(!a->b1a0&&timer->s30)timer->s30--;if(state[13]){if(a->b1a0)a->f52+=dat_0c2477cc[dat_0c2d6f84->flags&3]*1.66666663f;else state[13]=0;}')
for n,t in [('57d2','2477d4'),('5dce','2477e4')]:add(n,f'table_0c{t}[a->b1ff](a);')
add('57e6','func_0c044cbc(a);if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0c5a7a(a);else func_0c0c59d4(a);}else{if(a->b1f9==1)func_0c0c5904(a);else func_0c0c585c(a);}')
for n,base,bank,rows,air in [('585c',0,7,['246da4','246da8','246dac'],False),('5904',6,9,['246da4','246da8','246dac'],False),('59d4',3,8,['246db0','246db4','246db8'],True),('5a7a',9,10,['246db0','246db4','246db8'],True)]:
 body='int zero=0;switch((unsigned char)a->b1e8){'
 for mode,row in enumerate(rows):
  body+=f'case {mode}:a->b158={mode};a->b1a1={base+mode};'
  if not(air and mode==2):body+=f'func_0c0346da(a,{20+mode});'
  body+=f'a->p3f4=dat_0c{row};a->b1a7={mode};break;'
 body+=f'}}RECORD;func_0c02a0c4(a,{bank},a->b158);';add(n,body)
add('5b46','if((a->b1fe==0&&(a->b1d6&15))||(a->b1fe!=0&&(a->b1d6&240))){if((unsigned char)a->b1fe==1)func_0c0c5c96(a);else func_0c0c5b80(a);}')
for n,base,bank,rows in [('5b80',12,11,[('246dbc','246dd4'),('246dc0','246dd8'),('246dc4','246ddc')]),('5c96',15,12,[('246dc8','246de0'),('246dcc','246de4'),('246dd0','246de8')])]:
 body='int zero=0;switch((unsigned char)a->b1e8){'
 for mode,(normal,air) in enumerate(rows):
  body+=f'case {mode}:a->b158={mode};a->b1a1={base+mode};'
  if n=='5c96' and mode==2:body+='if(a->w1fa&0x2000){a->b158=6;a->b1a1=18;}'
  body+=f'func_0c0346da(a,{20+mode});if(!a->b1fc)a->p3f4=dat_0c{normal};else a->p3f4=dat_0c{air};a->b1a7={mode};break;'
 mask=15 if n=='5b80' else 240;body+=f'}}RECORD;func_0c02a0c4(a,{bank},a->b158);if(a->b1d6&{mask})a->b1d6'+('--;' if n=='5b80' else '-=16;');add(n,body)
for n,b in sorted(d.items()):s+=b[:b.index('{')]+';\n'
s+='\n'.join(b for n,b in sorted(d.items()));Path('build/tu_0c0c50d0.manual.c').write_text(s);print(len(d),'functions')
