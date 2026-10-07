/* Unverified:185/304 linked bytes; choice merging and register allocation differ. */
/* Timed paired-actor choice, input masks and facing reversal. */
#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c025900(struct Actor *,char,char),func_0c0437b8(struct Actor *),func_0c02a0c4(struct Actor *,int,int);
extern int func_0c047bbe(struct Actor *),func_0c1ec190(void);
void func_0c05b720(struct Actor *a){
 int zero=0,one=1,choice,animation;
 func_0c02a026(a);
 if(--a->s28<0){
 struct Actor *partner;
 func_0c025900(a,0,0);partner=a->p1c8;
 partner->p1b4=a;partner->b1f6=7;partner->b1a1=39;a->b1a1=39;
 func_0c0437b8(a);return;
 }
 if(a->b525){
 if(!func_0c047bbe(a))return;
 if(a->s30++>10)return;
 if(func_0c1ec190()&one)choice=zero;else choice=one;
 }else{
 if(!(a->w34a&0x120))return;
 if(a->w34a&0x100){
 choice=zero;
 if(a->w34a&0x400){
 struct Actor *partner;
 a->w130^=1;a->b1d2=*(unsigned char *)&a->w130;
 partner=a->p1c8;partner->w130^=1;partner->b1d2=*(unsigned char *)&partner->w130;
 }
 }else choice=one;
 }
 switch(choice){case 0:a->b6=one;animation=52;break;case 1:a->b6=2;a->b7=zero;animation=7;break;default:return;}
 func_0c02a0c4(a,15,animation);
}
