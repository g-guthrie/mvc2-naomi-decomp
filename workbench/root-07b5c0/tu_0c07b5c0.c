#include "objects.h"
extern void func_0c0421f4(struct Actor *),func_0c0420f8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0438de(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c13c814(struct Actor *,int);
void func_0c07b5d6(struct Actor *);
void func_0c07b618(struct Actor *);
void func_0c07b684(struct Actor *);
void func_0c07b5c0(struct Actor *a){func_0c0421f4(a);func_0c0420f8(a);func_0c07b5d6(a);}
void func_0c07b5d6(struct Actor *a){func_0c042018(a);func_0c0421b8(a);if((unsigned char)a->b1fe==1)func_0c07b684(a);else func_0c07b618(a);if(func_0c044e52(a))func_0c044f1c(a);}
void func_0c07b618(struct Actor *a){struct ActorSub2a4 *sub=&a->sub2a4;if(sub->b0)((unsigned char *)a)[0x1ec]=1;{int mode=a->b1e8;if(mode==2){if(func_0c02a026(a)<0)goto finish;if(a->b141){a->b141=0;func_0c13c814(a,6);}}else if(mode==0 || mode==1){if(func_0c02a026(a)<0)goto finish;}}return;finish:func_0c0438de(a);}
void func_0c07b684(struct Actor *a){if(func_0c02a026(a)<0)func_0c0438de(a);}
