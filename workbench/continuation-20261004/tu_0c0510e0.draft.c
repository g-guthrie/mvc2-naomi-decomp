/* Unverified:404/604 linked bytes; the222-byte setup function is exact. */
/* Command setup and ongoing directional-input state. */
#include "objects.h"
#define FIELD(type,a,offset) (*(type *)((unsigned char *)(a)+(offset)))
extern int func_0c04e788(struct Actor *,int),func_0c04debe(struct Actor *);
extern unsigned char func_0c044a4a(struct Actor *);
extern void func_0c04e6b2(struct Actor *,void *,int),func_0c0453c4(struct Actor *,int);
int func_0c0510e0(struct Actor *a,void *command){
 unsigned short input,mask,action;
 if(!func_0c04e788(a,1))return 0;
 func_0c04e6b2(a,command,0);func_0c04e6b2(a,command,1);
 a->l44c=a->parameter4b4.integer;
 if(a->b202 || a->pad1f0[0] || !func_0c044a4a(a) || !(input=func_0c04debe(a)))return 1;
 FIELD(unsigned char,a,0x43d)++;mask=0x400;
 if(a->b1f9==2)action=19;
 else{
 if(a->b440==60 || (input&4)){action=5;mask=0x1400;}else action=7;
 func_0c0453c4(a,action);action=18;
 }
 a->l450=mask^(a->b1d2*0xc00);
 a->w4dc=(unsigned short)a->l450;a->w34a=mask;
 func_0c0453c4(a,action);a->w34a=0;return 0;
}
int func_0c0511be(struct Actor *a){
 int input,zero;
 if(a->b411 || (a->b1d0!=18 && a->b1d0!=19)){FIELD(unsigned char,a,0x43d)--;return 1;}
 zero=0;
 if(FIELD(unsigned char,a,0x45f)==1){
 a->b45d=1;a->b448=125;((struct MaskObject *)a)->b4ab=zero;((struct MaskObject *)a)->b4aa=zero;((struct MaskObject *)a)->w4ac=zero;
 }else if(a->b4a7==1){
 /* Retail retains a zero term in the flag test and first subrecord address. */
 unsigned int *flags=(unsigned int *)((unsigned char *)a+0x414);unsigned int extra=0;int blocked=0;
 if((*flags&0x30000000U)|extra){if(a->b1==28){struct ActorSub2a4 *context=&a->sub2a4;blocked=context[extra].b1;}if(a->b1==29){struct ActorSub2a4 *context=&a->sub2a4;blocked=context->b1;}}
 if(!blocked){a->b1dd=-1;a->b4a7=zero;
 a->pad354[0]=zero;a->pad354[1]=zero;a->pad354[2]=zero;a->pad354[3]=zero;a->pad354[4]=zero;a->pad354[5]=zero;*(unsigned short *)&a->pad354[6]=zero;
 }
 }
 if(--a->l44c){
 if((input=func_0c04debe(a))){
 if(a->b1f9==2 || (input&2))a->l450&=~0x1000U;
 if(a->b1f9==1 || (input&4) || a->b440==60)a->l450|=0x1000;
 }
 a->w4dc=(unsigned short)a->l450;
 }
 return 0;
}
