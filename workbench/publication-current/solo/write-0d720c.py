from pathlib import Path
s='''#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c044cbc(struct Actor *),func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c043352(struct Actor *),func_0c044df4(struct Actor *),func_0c0437b8(struct Actor *),func_0c0438de(struct Actor *),func_0c0421f4(struct Actor *),func_0c0420f8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c24892c[])(struct Actor *),(*table_0c24893c[])(struct Actor *);
'''
names=[f'2488{x:02x}' for x in range(8,0x50,4)];s+='extern unsigned char '+','.join('dat_0c'+n+'[]' for n in names)+';\n'
s+='''#define RECORD a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++
#define MOTION a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108
'''
d={}
def add(n,b):d[n]='void func_0c0d'+n+'(struct Actor *a){'+b+'}\n'
add('720c','func_0c044cbc(a);if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0d7518(a);else func_0c0d73ec(a);}else{if(a->b1f9==1)func_0c0d7340(a);else func_0c0d7254(a);}')
for n,tagbase,bank,records,mode in [('7254',0,7,['248808','24880c','248810'],'ground'),('7340',6,9,['248808','24880c','248810'],'simple'),('73ec',3,8,['248814','248818','24881c'],'special'),('7518',9,10,['248814','248818','24881c'],'simple')]:
 body='int zero=0;switch((unsigned char)a->b1e8){'
 for st,row in enumerate(records):
  body+=f'case {st}:a->b158={st};a->b1a1={tagbase+st};'
  if mode=='ground' and st==2:body+='if(a->w1fa&0x800){a->b158=3;a->b1a1=18;}'
  if mode=='special' and st==2:
   body+='if(a->w1fa&0x800){a->b6=2;a->b158=4;a->b1a1=20;a->f92=a->b1d2?6.66666651f:-6.66666651f;a->f104=0;}else if(a->w1fa&0x400){a->b6=1;a->b158=3;a->b1a1=19;}'
  body+=f'func_0c0346da(a,{20+st});a->p3f4=dat_0c{row};a->b1a7={st};break;'
 body+=f'}}RECORD;func_0c02a0c4(a,{bank},a->b158);';add(n,body)
add('75f4','if((a->b1fe==0&&(a->b1d6&15))||(a->b1fe!=0&&(a->b1d6&240))){if((unsigned char)a->b1fe==1)func_0c0d7748(a);else func_0c0d762e(a);}')
for n,base,bank,rows in [('762e',12,11,[('248820','248838'),('248824','24883c'),('248828','248840')]),('7748',15,12,[('24882c','248844'),('248830','248848'),('248834','24884c')])]:
 body='int zero=0;switch((unsigned char)a->b1e8){'
 for st,(normal,air) in enumerate(rows):
  body+=f'case {st}:a->b158={st if n=="762e" else st+3};a->b1a1={base+st};'
  if n=='7748' and st==0:body+='if(a->w1fa&0x1000){a->b158=zero;a->b1a1=21;}'
  body+=f'func_0c0346da(a,{20+st});if(!a->b1fc)a->p3f4=dat_0c{normal};else a->p3f4=dat_0c{air};a->b1a7={st};break;'
 mask=15 if n=='762e' else 240;body+=f'}}RECORD;func_0c02a0c4(a,{bank},a->b158);if(a->b1d6&{mask})a->b1d6'+('--;' if n=='762e' else '-=16;');add(n,body)
add('7882','table_0c24892c[a->b1ff](a);')
add('7896','func_0c043352(a);func_0c0d78a4(a);')
add('78a4','MOTION;func_0c044df4(a);if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0d7b50(a);else func_0c0d79ce(a);}else{if(a->b1f9==1)func_0c0d7996(a);else func_0c0d795e(a);}')
for n in ['795e','7996','7b50']:add(n,'switch((unsigned char)a->b1e8){case 0:case 1:case 2:if(func_0c02a026(a)<0)func_0c0437b8(a);break;}')
add('79ce','switch((unsigned char)a->b1e8){case 2:if(a->b6==1){func_0c0d7a40(a);return;}if(func_0c02a026(a)<0){func_0c0437b8(a);return;}if(a->b6==2)func_0c0d7b14(a);break;case 0:case 1:if(func_0c02a026(a)<0)func_0c0437b8(a);break;}')
add('7a40','table_0c24893c[a->b7](a);')
add('7a52','func_0c02a026(a);if(a->b141){a->b7++;a->b141=0;a->f92=a->b1d2?5.0f:-5.0f;a->f104=0;a->f96=8.5714283f;a->f108=-1.0044643f;}')
add('7aa2','if(!a->b141)func_0c02a026(a);if(!(a->f56>a->f41c)){a->b7++;a->f56=a->f41c;a->b1fc=0;*((unsigned char *)a+0x210)=0;a->f92=0;a->f96=0;a->f104=0;a->f108=0;}')
add('7af2','if(func_0c02a026(a)<0)func_0c0437b8(a);')
add('7b14','if(a->b141){a->b6=0;a->f92=0;}')
add('7b88','func_0c0421f4(a);func_0c0420f8(a);func_0c0d7b9e(a);')
add('7b9e','func_0c042018(a);func_0c0421b8(a);if((unsigned char)a->b1fe==1)func_0c0d7c02(a);else func_0c0d7be0(a);if(func_0c044e52(a))func_0c044f1c(a);')
for n in ['7be0','7c02']:add(n,'if(func_0c02a026(a)<0)func_0c0438de(a);')
for n,b in sorted(d.items()):s+=b[:b.index('{')]+';\n'
s+='\n'.join(b for n,b in sorted(d.items()))
Path('build/tu_0c0d720c.manual.c').write_text(s)
print(len(d),'functions')
