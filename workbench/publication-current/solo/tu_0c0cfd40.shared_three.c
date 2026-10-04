#include "objects.h"
extern unsigned char dat_0c2f837e,dat_0c2482a0[];
extern unsigned int func_0c02849a(void);
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c02a684(struct Actor *,int,int,int),func_0c0344a0(struct Actor *,int),func_0c1b0b40(struct Actor *,int);
void func_0c0cfd40(struct Actor *a)
{
 int zero;
 if(!a->b6){
  unsigned short keys;int mode;
  zero=0;
  a->b6++;
  if(!dat_0c2f837e)a->b7=zero;
  else{
   keys=a->w4dc&0x360;
   if(keys){
    int three=3;mode=zero;
    if(keys&0x200)mode=zero;
    if(keys&0x100)mode=1;
    if((keys&0x300)==0x300)mode=three;
    if(keys&0x40)mode=zero;
    if(keys&0x20)mode=1;
    if((keys&0x60)==0x60)mode=three;
    a->b7=mode;
   }else a->b7=dat_0c2482a0[func_0c02849a()&7u];
  }
  func_0c02a0c4(a,19,(signed char)a->b7);a->s28=zero;func_0c02a684(a,3,11,1);
 }else{
  zero=0;func_0c02a026(a);
  if(a->b7==1){
   if(a->s28){if(--a->s28<=0){func_0c0344a0(a,19);a->s28=zero;}}
   a->b326=255;
   if(a->b141){a->s28=60;a->b141=zero;func_0c1b0b40(a,14);}
  }
 }
}
