/* Unverified:341/348 linked bytes. Mask-store/call scheduling differs. */
/* Command operand evaluation, team-value comparison and control flags. */
#include "objects.h"
extern void func_0c04e6b2(struct Actor *,void *,int);
extern int func_0c050792(struct Actor *,void *,int),func_0c04e788(struct Actor *,int);
extern struct PlayerSlotScore dat_0c2d7088[];
#define MASK(a) ((struct MaskObject *)(a))
#define TESTED(a) (*(short *)&MASK(a)->pad9[0])
int func_0c0517f8(struct Actor *a,void *command){
 struct PlayerSlotScore *slot;int i,sum,other,own;
 func_0c04e6b2(a,command,0);func_0c04e6b2(a,command,2);
 slot=&dat_0c2d7088[a->b2^1];sum=0;
 for(i=0;i<3;i++,slot+=2)sum+=(short)slot->actor.w420;
 other=sum*144/200;own=a->parameter4b4.integer*144/200;
 return func_0c050792(a,command,other<=own);
}
int func_0c051886(struct Actor *a,void *command){
 unsigned short mask;
 func_0c04e6b2(a,command,0);func_0c04e6b2(a,command,1);
 a->w1fa=0;MASK(a)->w4ac=0;
 mask=0x240>>a->parameter4b4.integer;
 if(a->b440==74){mask&=0x380;MASK(a)->b4ab=0;}
 else{mask=mask&0x70;MASK(a)->b4ab=1;}
 if(!(TESTED(a)&mask)){
 TESTED(a)|=mask;
 if(func_0c04e788(a,2)){
 a->w4dc|=mask;MASK(a)->b4ab|=0x80;MASK(a)->b4aa=*(unsigned char *)&a->parameter4b4;
 }
 }
 return 0;
}
int func_0c051918(struct Actor *a,void *command){func_0c04e6b2(a,command,0);return 0;}
