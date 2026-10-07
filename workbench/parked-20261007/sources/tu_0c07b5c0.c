#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0420f8(struct Actor *),func_0c0421f4(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *);
extern void func_0c0438de(struct Actor *),func_0c044f1c(struct Actor *),func_0c13c814(struct Actor *,int);
extern unsigned char func_0c044e52(struct Actor *);
void func_0c07b5d6(struct Actor *a),func_0c07b618(struct Actor *a),func_0c07b684(struct Actor *a);
void func_0c07b5c0(struct Actor *a){func_0c0421f4(a);func_0c0420f8(a);func_0c07b5d6(a);}
void func_0c07b5d6(struct Actor *a)
{
 func_0c042018(a);func_0c0421b8(a);
 if((unsigned char)a->b1fe==1)func_0c07b684(a);else func_0c07b618(a);
 if(func_0c044e52(a))func_0c044f1c(a);
}
void func_0c07b618(struct Actor *a)
{
 struct ActorSub2a4 *s=&a->sub2a4;
 if(s->b0)a->b1ec=1;
 switch(a->b1e8){
 case 2:
  if(func_0c02a026(a)<0){func_0c0438de(a);break;}
  if(a->b141){a->b141=0;func_0c13c814(a,6);}
  break;
 case 0:
 case 1:
  if(func_0c02a026(a)<0)func_0c0438de(a);
  break;
 }
}
void func_0c07b684(struct Actor *a){if(func_0c02a026(a)<0)func_0c0438de(a);}
