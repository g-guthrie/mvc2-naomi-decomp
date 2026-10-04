from pathlib import Path
s='''#include "objects.h"
extern unsigned int dat_0c2443b0[];
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *),func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c0471ea(struct Actor *,unsigned char *,unsigned char *),func_0c047886(struct Actor *),func_0c046dd0(struct Actor *,int),func_0c04608a(struct Actor *,unsigned char *),func_0c044e52(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern int func_0c046d54(struct Actor *);
extern void func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int),func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *),func_0c044cbc(struct Actor *),func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c1a286c(struct Actor *,int,int),func_0c043352(struct Actor *),func_0c044df4(struct Actor *),func_0c0437b8(struct Actor *),func_0c0421f4(struct Actor *),func_0c0420f8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0438de(struct Actor *);
extern struct Actor *func_0c1a1a34(struct Actor *,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c244420[])(struct Actor *),(*table_0c244430[])(struct Actor *);
#define RESET a->b5=0;a->b7=0;a->b6=0
#define RECORD a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++
#define MOTION a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108
'''
names=['24431c','24432c','244336','244346','24435a','24436a','24437e','24438e','24439e']+[f'2442{x:02x}' for x in range(0xd4,0x100,4)]+[f'2443{x:02x}' for x in range(0,0x1c,4)];s+='extern unsigned char '+','.join('dat_0c'+n+'[]' for n in names)+';\n'
d={}
def add(n,b,t='void'):d[n]=t+' func_0c0a'+n+'(struct Actor *a){'+b+'}\n'
clone=Path('build/tu_0c0a70f0.first_clone.c').read_text();a=clone.index('void func_0c0a70f0(');b=clone.index('\n}',a)+2;d['70f0']=clone[a:b]+'\n'
add('710c',''.join('if(func_0c'+n+'(a))return;' for n in ['0465cc','046b6c','0469f4','046d3c','0a73f0','0a74e0','0a7550','0a7304','0a71f6','0a7268','0a736a','0a7458','0a75fc','0a7662','0a769c'])+'if(func_0c04608a(a,a->x39c))return;func_0c045f1c(a);func_0c0463fc(a);')
# Each gate keeps its observed target and aerial prerequisites.
for n,t,buf,tag,bank,target,no_flight in [('71f6','24431c','364',0,21,False,False),('7304','244336','374',2,21,False,False),('736a','244346','37c',3,21,False,False),('73f0','24435a','384',4,29,True,True),('7458','24436a','38c',5,21,False,False),('74e0','24437e','394',6,29,True,False),('7550','24438e','3a4',7,29,True,False),('75fc','24439e','3ac',11,21,False,False)]:
 body=f'if(!func_0c046e7e(a,dat_0c{t},a->x{buf}))return 0;'
 if target:body+='if(!*a->p40c)return 0;'
 cond='a->b1f9==2' if no_flight else 'a->b1f9==2&&!a->b1fc'
 body+='if('+cond+'){if(a->b1d4)return 0;a->b1d4++;}'
 if n=='71f6':body+='if(((struct Actor *)&a->sub2a4)->s30)return 0;'
 body+=f'func_0c047aac(a,a->x{buf});RESET;a->b1e9={tag};func_0c045248(a,{bank});'
 if n=='7550':body+='a->sub2a4.s10=240;if(a->b525)a->b1e9=12;'
 body+='return 1;';add(n,body,'unsigned char')
add('7268','if(!func_0c0471ea(a,dat_0c24432c,a->x36c)||!func_0c047886(a))return 0;if(a->b1f9==2&&!a->b1fc){if(a->b1d4)return 0;a->b1d4++;}func_0c047aac(a,a->x36c);RESET;a->b1e9=1;func_0c045248(a,21);return 1;','unsigned char')
add('7662','if(!func_0c046dd0(a,8))return 0;a->b1e9=8;a->b5=0;func_0c045248(a,21);a->b7=0;a->b6=0;return 1;','int')
add('769c','if(!func_0c046d54(a)||!*a->p40c)return 0;a->b1e9=10;a->b5=0;func_0c045248(a,29);a->b7=0;a->b6=0;return 1;','int')
add('76dc','if(func_0c0a772c(a)||func_0c0a7762(a)||func_0c0a7798(a))return 1;return 0;','int')
for n,t,buf,tag in [('772c','24435a','384',4),('7762','24437e','394',6),('7798','24438e','39c',7)]:
 body=f'if(!func_0c046e7e(a,dat_0c{t},a->x{buf})||!*a->p40c)return 0;a->b258={tag};'
 if n=='7798':body+='a->sub2a4.s10=240;'
 add(n,body+'return 1;','int')
add('77d6','if(a->b1d0==29){unsigned int mode=a->b1e9;if(mode!=7||mode!=12){if(!a->b1a0)a->b202=0;}return;}a->b202=0;if(a->b1d0==31&&a->b1f7==195)return;a->f80=1.0f;a->f84=1.0f;a->i72=0;')
for n,t in [('7864','244420'),('7f0a','244430')]:add(n,f'table_0c{t}[a->b1ff](a);')
add('7878','func_0c044cbc(a);if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0a7baa(a);else func_0c0a7ae0(a);}else{if(a->b1f9==1)func_0c0a7a04(a);else func_0c0a78c0(a);}')
add('78c0','int zero=0;switch((unsigned char)a->b1e8){case 0:a->b158=0;a->b1a1=0;func_0c02a0c4(a,7,a->b158);func_0c1a286c(a,0,2);func_0c0346da(a,20);a->p3f4=dat_0c2442d4;a->b1a7=0;break;case 1:a->b158=1;a->b1a1=1;func_0c0346da(a,21);a->p3f4=dat_0c2442d8;a->b1a7=1;func_0c02a0c4(a,7,a->b158);func_0c1a286c(a,0,2);break;case 2:if(a->w1fa&0x800){a->b158=3;a->b1a1=18;func_0c02a0c4(a,7,a->b158);}else{a->b158=2;a->b1a1=2;func_0c02a0c4(a,7,a->b158);func_0c1a1a34(a,4,0);func_0c1a1a34(a,5,0);}func_0c0346da(a,22);a->p3f4=dat_0c2442dc;a->b1a7=2;func_0c1a286c(a,0,2);break;}RECORD;')
for n,base,bank,rows in [('7a04',6,9,['2442d4','2442d8','2442dc']),('7baa',9,10,['2442e0','2442e4','2442e8'])]:
 body='int zero=0;switch((unsigned char)a->b1e8){'
 for mode,row in enumerate(rows):body+=f'case {mode}:a->b158={mode};a->b1a1={base+mode};func_0c0346da(a,{20+mode});a->p3f4=dat_0c{row};a->b1a7={mode};break;'
 body+=f'}}RECORD;func_0c02a0c4(a,{bank},a->b158);';add(n,body)
add('7ae0','int zero=0;switch((unsigned char)a->b1e8){case 0:a->b158=0;a->b1a1=3;func_0c0346da(a,20);a->p3f4=dat_0c2442e0;a->b1a7=0;func_0c02a0c4(a,8,a->b158);break;case 1:a->b158=1;a->b1a1=4;func_0c0346da(a,21);a->p3f4=dat_0c2442e4;a->b1a7=1;func_0c02a0c4(a,8,a->b158);func_0c1a286c(a,0,2);break;case 2:a->b158=2;a->b1a1=5;func_0c0346da(a,22);a->p3f4=dat_0c2442e8;a->b1a7=2;func_0c02a0c4(a,8,a->b158);break;}RECORD;')
add('7c7c','if((a->b1fe==0&&(a->b1d6&15))||(a->b1fe!=0&&(a->b1d6&240))){if((unsigned char)a->b1fe==1)func_0c0a7de6(a);else func_0c0a7cb6(a);}')
for n,base,bank,rows in [('7cb6',12,11,[('2442ec','244304'),('2442f0','244308'),('2442f4','24430c')]),('7de6',15,12,[('2442f8','244310'),('2442fc','244314'),('244300','244318')])]:
 body='int zero=0;switch((unsigned char)a->b1e8){'
 for mode,(normal,air) in enumerate(rows):
  body+=f'case {mode}:a->b158={mode};a->b1a1={base+mode};'
  if n=='7cb6' and mode==0:body+='func_0c02a0c4(a,11,a->b158);func_0c1a286c(a,0,2);'
  body+=f'func_0c0346da(a,{20+mode});if(!a->b1fc)a->p3f4=dat_0c{normal};else a->p3f4=dat_0c{air};a->b1a7={mode};'
  if n=='7cb6' and mode>0:body+='func_0c02a0c4(a,11,a->b158);'
  body+='break;'
 body+='}RECORD;'
 if n=='7de6':body+='func_0c02a0c4(a,12,a->b158);'
 mask=15 if n=='7cb6' else 240;body+=f'if(a->b1d6&{mask})a->b1d6'+('--;' if n=='7cb6' else '-=16;');add(n,body)
add('7f1e','func_0c043352(a);func_0c0a7f2c(a);')
add('7f2c','MOTION;func_0c044df4(a);if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0a8252(a);else func_0c0a815e(a);}else{if(a->b1f9==1)func_0c0a80d0(a);else func_0c0a7fe6(a);}')
move='if(a->b141){float offset=a->b141;offset*=1.66666663f;if(!a->b1d2)offset=-offset;a->f52+=offset;a->b141=zero;}'
add('7fe6','int zero=0;switch((unsigned char)a->b1e8){case 2:if(func_0c02a026(a)<0)goto deleted;'+move+'break;case 1:if(func_0c02a026(a)<0)goto deleted;if(a->b141){a->b141=zero;a->b1a1=25;RECORD;}break;case 0:if(func_0c02a026(a)>=0)break;deleted:func_0c0437b8(a);break;}')
add('80d0','int zero=0;switch((unsigned char)a->b1e8){case 2:if(func_0c02a026(a)<0)goto deleted;'+move+'break;case 1:case 0:if(func_0c02a026(a)>=0)break;deleted:func_0c0437b8(a);break;}')
add('815e','int zero=0;switch((unsigned char)a->b1e8){case 2:if(func_0c02a026(a)<0)goto deleted;'+move+'if(a->b14b){a->b14b=zero;a->b1a1=5;RECORD;}break;case 1:if(func_0c02a026(a)<0)goto deleted;if(a->b141){a->b141=zero;a->b1a1=26;RECORD;}break;case 0:if(func_0c02a026(a)>=0)break;deleted:func_0c0437b8(a);break;}')
add('8252','switch((unsigned char)a->b1e8){case 1:case 0:case 2:if(func_0c02a026(a)<0)func_0c0437b8(a);break;}')
add('828a','func_0c0421f4(a);func_0c0420f8(a);func_0c0a82a0(a);')
add('82a0','func_0c042018(a);func_0c0421b8(a);if((unsigned char)a->b1fe==1)func_0c0a83b8(a);else func_0c0a830c(a);if(func_0c044e52(a))func_0c044f1c(a);')
add('830c','int zero=0;switch((unsigned char)a->b1e8){case 2:if(func_0c02a026(a)<0)goto deleted;if(a->b14b){if((unsigned char)a->b14b==1)a->b1a1=14;RECORD;if((unsigned char)a->b14b==2)a->b1a1=28;RECORD;a->b14b=zero;}break;case 0:case 1:if(func_0c02a026(a)>=0)break;deleted:func_0c0438de(a);break;}')
add('83b8','if(func_0c02a026(a)<0)func_0c0438de(a);')
for n,b in sorted(d.items()):s+=b[:b.index('{')]+';\n'
s+='\n'.join(b for n,b in sorted(d.items()));Path('build/tu_0c0a70f0.manual.c').write_text(s);print(len(d),'functions')
