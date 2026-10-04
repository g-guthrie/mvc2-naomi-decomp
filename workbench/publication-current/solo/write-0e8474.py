from pathlib import Path
s='''#include "objects.h"
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *),func_0c0462a0(struct Actor *),func_0c046dd0(struct Actor *,int),func_0c046e7e(struct Actor *,unsigned char *,unsigned char *);
extern int func_0c046d54(struct Actor *),func_0c0435ce(struct Actor *,float);
extern struct Actor *func_0c037d54(struct Actor *);
extern void func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int),func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *),func_0c1fba00(void *,int,int),func_0c044450(struct Actor *,struct Actor *),func_0c0eb5ea(struct Actor *,int),func_0c044cbc(struct Actor *),func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern float dat_0c2499f0[];
extern void (*table_0c249a40[])(struct Actor *);
#define RESET a->b5=0;a->b7=0;a->b6=0
#define RECORD a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++
'''
names=['2498c4','2498d4','2498e8','2498fc','24990c','24991c','24992c','24993c','24994c','24995c','24996c','24987c','249880','249884','249888','24988c','249890'];s+='extern unsigned char '+','.join('dat_0c'+n+'[]' for n in names)+';\n'
d={}
def add(n,b,t='void'):d[n]=t+' func_0c0e'+n+'(struct Actor *a){'+b+'}\n'
add('8474',''.join('if(func_0c'+n+'(a))return;' for n in ['0465cc','046b6c','0469f4','046d3c','0e8698','0e8714','0e87b4','0e882e','0e88cc','0e8952','0e8a10','0e89a2','0e8564','0e85e2','0e8628','0e8a8e','0e8a54','0462a0'])+'func_0c045f1c(a);func_0c0463fc(a);')
add('8564','struct ActorSub2a4 *state=&a->sub2a4;if(!func_0c046e7e(a,dat_0c2498c4,a->x36c))return 0;if(a->b1f9==2&&!a->b1fc){if(a->b1d4)return 0;a->b1d4++;}if(state->b6)return 0;func_0c047aac(a,a->x36c);RESET;a->b1e9=0;func_0c045248(a,21);return 1;','unsigned char')
for n,t,buf,tag in [('85e2','2498d4','374',1),('8628','2498e8','37c',2)]:add(n,f'if(!func_0c046e7e(a,dat_0c{t},a->x{buf}))return 0;func_0c047aac(a,a->x{buf});RESET;a->b1e9={tag};func_0c045248(a,21);return 1;','unsigned char')
for n,t,buf,mode in [('8698','2498fc','384',0),('8714','24990c','38c',1),('87b4','24991c','394',2),('882e','24992c','39c',3)]:
 add(n,f'if(!func_0c046e7e(a,dat_0c{t},a->x{buf}))return 0;if(a->b1f9==2&&!a->b1fc){{if(a->b1d4)return 0;a->b1d4++;}}a->b1a3={mode};RESET;a->b1e9=3;func_0c045248(a,29);func_0c1fba00(a->x3a4,0,8);func_0c1fba00(a->x3ac,0,8);return 1;','unsigned char')
add('88cc','if(!func_0c046e7e(a,dat_0c24993c,a->x3a4)||!*a->p40c)return 0;if(a->b1f9==2&&!a->b1fc){if(a->b1d4)return 0;a->b1d4++;}func_0c047aac(a,a->x3a4);RESET;a->b1e9=a->b1f9==2?12:5;func_0c045248(a,29);return 1;','unsigned char')
add('8952','if(!func_0c046e7e(a,dat_0c24994c,a->x3ac)||!*a->p40c)return 0;func_0c047aac(a,a->x3ac);RESET;a->b1e9=6;func_0c045248(a,29);return 1;','unsigned char')
add('89a2','if(!func_0c046e7e(a,dat_0c24995c,a->x3b4))return 0;func_0c047aac(a,a->x3b4);RESET;a->b1e9=4;func_0c045248(a,21);return 1;','unsigned char')
add('8a10','struct Actor *target;if(!func_0c046e7e(a,dat_0c24996c,a->pad3bc))return 0;if(!(target=func_0c037d54(a)))return 0;a->b1f7=195;func_0c044450(a,target);return 1;','unsigned char')
add('8a54','if(!func_0c046dd0(a,9))return 0;a->b1e9=9;a->b5=0;func_0c045248(a,21);a->b7=0;a->b6=0;return 1;','int')
add('8a8e','if(!func_0c046d54(a)||!*a->p40c)return 0;a->b1e9=13;a->b5=0;func_0c045248(a,29);a->b7=0;a->b6=0;return 1;','int')
add('8ace','if(func_0c0e8b20(a)||func_0c0e8b56(a))return 1;return 0;','int')
for n,t,buf,tag in [('8b20','24993c','3a4',5),('8b56','24994c','3ac',6)]:add(n,f'if(!func_0c046e7e(a,dat_0c{t},a->x{buf})||!*a->p40c)return 0;a->b258={tag};return 1;','int')
add('8b8c','struct ActorSub2a4 *state=&a->sub2a4;if(a->b201&&!a->b5){if((short)--state->w8<=0){unsigned char mode=a->b1d0;if(mode!=29&&mode!=21)func_0c0eb5ea(a,mode);}}')
add('8bc8','table_0c249a40[a->b1ff](a);')
add('8bdc','func_0c044cbc(a);if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0e8fcc(a);else func_0c0e8ea8(a);}else{if(a->b1f9==1)func_0c0e8d84(a);else func_0c0e8c50(a);}')
for n,base,special,bank,rangestart,rows in [('8c50',0,48,7,0,['24987c','249880','249884']),('8d84',6,54,9,3,['24987c','249880','249884']),('8ea8',3,51,8,6,['249888','24988c','249890']),('8fcc',9,57,10,9,['249888','24988c','249890'])]:
 body='int zero=0;float *ranges=dat_0c2499f0;switch((unsigned char)a->b1e8){'
 for mode,row in enumerate(rows):
  body+=f'case {mode}:if(func_0c0435ce(a,ranges[{rangestart+mode}])){{'
  if n=='8fcc':body+='a->b6++;'
  body+=f'a->b158={mode+3};a->b1a1={special+mode};}}else{{a->b158={mode};a->b1a1={base+mode};}}func_0c0346da(a,{20+mode});a->p3f4=dat_0c{row};a->b1a7={mode};'
  if n=='8c50' and mode==0:body+='a->pad2a2[0]=1;'
  body+='break;'
 body+=f'}}RECORD;func_0c02a0c4(a,{bank},a->b158);';add(n,body)
for n,b in sorted(d.items()):s+=b[:b.index('{')]+';\n'
s+='\n'.join(b for n,b in sorted(d.items()));Path('build/tu_0c0e8474.manual.c').write_text(s);print(len(d),'functions')
