from pathlib import Path
s='''#include "objects.h"
extern unsigned int dat_0c249d3c[];
extern unsigned char dat_0c249c90[],dat_0c249ca4[],dat_0c249cb8[],dat_0c249ccc[],dat_0c249cdc[],dat_0c249cea[],dat_0c249cf8[],dat_0c249d08[],dat_0c249d18[],dat_0c249d28[];
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *),func_0c046dd0(struct Actor *,int),func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c047068(struct Actor *,unsigned char *,unsigned char *);
extern int func_0c046d54(struct Actor *);
extern void func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int),func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *),func_0c0f0426(struct Actor *);
#define RESET a->b5=0;a->b7=0;a->b6=0
'''
d={}
def add(n,body,typ='unsigned char'):d[n]=typ+' func_0c0ec'+n+'(struct Actor *a){'+body+'}\n'
add('18c','register unsigned int i=0,limit=112;register unsigned int *out=a->p428,*in=dat_0c249d3c;do{*(unsigned int *)((char *)out+i)=*(unsigned int *)((char *)in+i);i+=4;}while(i<limit);','void')
add('1a8',''.join('if(func_0c'+f+'(a))return;' for f in ['0465cc','046b6c','0469f4','046d3c','0ec788','0ec742','0ec62e','0ec284','0ec6ba','0ec35a','0ec40a','0ec4c8','0ec568','0ec2f0','0ec7d8','0ec818'])+'func_0c045f1c(a);func_0c0463fc(a);','void')
for n,t,b,f,tag in [('284','249c90','36c','b0',0),('2f0','249ca4','374','b1',7)]:
 add(n,f'struct ActorSub2a4 *state=&a->sub2a4;if(!func_0c046e7e(a,dat_0c{t},a->x{b})||state->{f})return 0;func_0c047aac(a,a->x{b});if(a->b201)func_0c0f0426(a);RESET;a->b1e9={tag};func_0c045248(a,21);return 1;')
for n,t,b,tag,bank in [('35a','249cb8','37c',1,21),('40a','249ccc','384',2,29),('62e','249cf8','39c',6,29)]:
 body=f'if(!func_0c046e7e(a,dat_0c{t},a->x{b}))return 0;'+('if(!*a->p40c)return 0;' if n=='62e' else '')+'if(a->b1f9==2&&!a->b1fc){if(a->b1d4)return 0;a->b1d4++;}'+f'func_0c047aac(a,a->x{b});if(a->b201)func_0c0f0426(a);RESET;a->b1e9={tag};func_0c045248(a,{bank});'
 body+=('if(a->b525)a->b7=a->b1fe*2;else a->b7=a->b1fe*2+a->b1a3;' if n=='40a' else 'if(a->b1f9==2)a->b6=1;')+'return 1;';add(n,body)
for n,t,b,tag in [('4c8','249cdc','38c',3),('568','249cea','394',4)]:
 body=f'struct ActorSub2a4 *state=&a->sub2a4;if(!func_0c047068(a,dat_0c{t},a->x{b}))return 0;if(a->b1f9==2&&!a->b1fc){{if(a->b1d4)return 0;a->b1d4++;}}if(a->b525&&a->b201)return 0;'
 body+=('func_0c047aac(a,a->x38c);' if n=='4c8' else '')+'if(a->b201)func_0c0f0426(a);'+('a->b1a3=1;' if n=='568' else '')+f'RESET;a->b1e9={tag};func_0c045248(a,21);state->b3=(a->b1f9==2);return 1;';add(n,body)
for n,t,b,tag,bank in [('6ba','249d08','3a4',5,29),('742','249d18','3ac',9,21),('788','249d28','3b4',15,29)]:
 add(n,f'if(!func_0c046e7e(a,dat_0c{t},a->x{b}))return 0;'+('if(!*a->p40c)return 0;' if n!='742' else '')+f'func_0c047aac(a,a->x{b});'+('if(a->b201)func_0c0f0426(a);' if n=='6ba' else '')+f'RESET;a->b1e9={tag};func_0c045248(a,{bank});return 1;')
add('7d8','if(!func_0c046d54(a)||!*a->p40c)return 0;a->b1e9=14;a->b5=0;func_0c045248(a,29);a->b7=0;a->b6=0;return 1;','int')
add('818','if(!func_0c046dd0(a,11))return 0;a->b1e9=11;a->b5=0;func_0c045248(a,21);a->b7=0;a->b6=0;return 1;','int')
add('880','if(func_0c0ec92a(a)||func_0c0ec8ac(a)||func_0c0ec8f4(a))return 1;return 0;','int')
for n,t,b,tag in [('8ac','249cf8','39c',6),('8f4','249d08','3a4',5),('92a','249d28','3b4',15)]:
 add(n,f'if(!func_0c046e7e(a,dat_0c{t},a->x{b})||!*a->p40c'+('||a->b1f9==2||a->b201' if n=='8ac' else '')+f')return 0;a->b258={tag};return 1;','int')
for n,body in sorted(d.items()):s+=body[:body.index('{')]+';\n'
s+='\n'.join(v for n,v in sorted(d.items()))
Path('build/tu_0c0ec18c.manual.c').write_text(s)
