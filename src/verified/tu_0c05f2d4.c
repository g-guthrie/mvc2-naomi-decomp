#include "objects.h"
extern unsigned char dat_0c23fe1c[],dat_0c23fe2c[],dat_0c23fe3c[],dat_0c23fe4c[],dat_0c23fe5c[],dat_0c23fe70[],dat_0c23fe80[],dat_0c23fe90[],dat_0c23fea0[];
extern unsigned char func_0c0465cc(struct Actor*),func_0c046b6c(struct Actor*),func_0c0469f4(struct Actor*),func_0c046d3c(struct Actor*),func_0c046dd0(struct Actor*,int),func_0c04608a(struct Actor*,unsigned char*);
extern int func_0c046d54(struct Actor*);
extern unsigned char func_0c046e7e(struct Actor*,unsigned char*,unsigned char*);
extern void func_0c047aac(struct Actor*,unsigned char*),func_0c045248(struct Actor*,int),func_0c045f1c(struct Actor*),func_0c0463fc(struct Actor*);
unsigned char func_0c05f3b8(struct Actor*);
unsigned char func_0c05f416(struct Actor*);
unsigned char func_0c05f490(struct Actor*);
unsigned char func_0c05f504(struct Actor*);
unsigned char func_0c05f580(struct Actor*);
unsigned char func_0c05f5c6(struct Actor*);
unsigned char func_0c05f638(struct Actor*);
unsigned char func_0c05f67e(struct Actor*);
unsigned char func_0c05f6f2(struct Actor*);
unsigned char func_0c05f790(struct Actor*);
int func_0c05f72a(struct Actor*);
int func_0c05f7ec(struct Actor*);
int func_0c05f822(struct Actor*);
int func_0c05f858(struct Actor*);
void func_0c05f2d4(struct Actor*a){
 if(func_0c0465cc(a))return;
 if(func_0c046b6c(a))return;
 if(func_0c0469f4(a))return;
 if(func_0c046d3c(a))return;
 if(func_0c05f638(a))return;
 if(func_0c05f67e(a))return;
 if(func_0c05f5c6(a))return;
 if(func_0c05f504(a))return;
 if(func_0c05f490(a))return;
 if(func_0c05f416(a))return;
 if(func_0c05f3b8(a))return;
 if(func_0c05f580(a))return;
 if(func_0c05f790(a))return;
 if(func_0c05f72a(a))return;
 if(func_0c05f6f2(a))return;
 if(func_0c04608a(a,a->x3b4))return;
 func_0c045f1c(a);func_0c0463fc(a);
}
unsigned char func_0c05f3b8(struct Actor*a){struct ActorSub2a4 *sub=&a->sub2a4;if(!func_0c046e7e(a,dat_0c23fe1c,a->x36c))return 0;else if(((unsigned char*)sub)[26])return 0;func_0c047aac(a,a->x36c);a->b5=0;a->b7=0;a->b6=0;a->b1e9=1;func_0c045248(a,21);return 1;}
unsigned char func_0c05f416(struct Actor*a){int one;if(!func_0c046e7e(a,dat_0c23fe2c,a->x374))goto fail;if(a->f56<a->f41c+137.142853f)goto fail;if(a->b1d4){if(!a->b1fc){fail:return 0;}}one=1;a->b1d4=one;func_0c047aac(a,a->x374);a->b5=0;a->b6=one;a->b7=0;a->b1e9=one;func_0c045248(a,21);return one;}
unsigned char func_0c05f490(struct Actor*a){if(!func_0c046e7e(a,dat_0c23fe3c,a->x37c))return 0;func_0c047aac(a,a->x37c);a->b5=0;a->b7=0;a->b6=0;a->b1e9=2;func_0c045248(a,21);return 1;}
unsigned char func_0c05f504(struct Actor*a){int one;if(!func_0c046e7e(a,dat_0c23fe4c,a->x384))goto fail;if(a->f56<a->f41c+137.142853f)goto fail;if(a->b1d4){if(!a->b1fc){fail:return 0;}}one=1;a->b1d4=one;func_0c047aac(a,a->x384);a->b5=0;a->b6=one;a->b7=0;a->b1e9=2;func_0c045248(a,21);return one;}
unsigned char func_0c05f580(struct Actor*a){if(!func_0c046e7e(a,dat_0c23fe5c,a->x38c))return 0;func_0c047aac(a,a->x38c);a->b5=0;a->b7=0;a->b6=0;a->b1e9=3;func_0c045248(a,21);return 1;}
unsigned char func_0c05f5c6(struct Actor*a){if(!func_0c046e7e(a,dat_0c23fe70,a->x394))return 0;else if(!*a->p40c)return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=7;func_0c045248(a,29);return 1;}
unsigned char func_0c05f638(struct Actor*a){if(!func_0c046e7e(a,dat_0c23fe80,a->x39c))return 0;else if(!*a->p40c)return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=9;func_0c045248(a,29);return 1;}
unsigned char func_0c05f67e(struct Actor*a){int zero=0;if(!func_0c046e7e(a,dat_0c23fe90,a->x3a4)||!*a->p40c)return 0;if(a->b1f9==2){if(a->b1d4&&!a->b1fc)return 0;a->b1d4=1;a->b32=1;}else a->b32=zero;a->b5=zero;a->b7=zero;a->b6=zero;a->b1e9=6;func_0c045248(a,29);return 1;}
unsigned char func_0c05f6f2(struct Actor*a){if(!func_0c046dd0(a,8))return 0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=8;func_0c045248(a,21);return 1;}
int func_0c05f72a(struct Actor*a){if(!func_0c046d54(a))return 0;else if(!*a->p40c)return 0;a->b1e9=14;a->b5=0;func_0c045248(a,29);a->b6=(((char*)a)[7]=0);return 1;}
unsigned char func_0c05f790(struct Actor*a){if(!func_0c046e7e(a,dat_0c23fea0,a->x3ac))return 0;else if(a->b1d4&&!a->b1fc)return 0;a->b1d4=1;func_0c047aac(a,a->x3ac);a->b5=0;a->b7=0;a->b6=0;a->b1e9=15;func_0c045248(a,21);return 1;}
int func_0c05f7ec(struct Actor*a){if(!func_0c046e7e(a,dat_0c23fe70,a->x394))return 0;else if(!*a->p40c)return 0;a->b258=7;return 1;}
int func_0c05f822(struct Actor*a){if(!func_0c046e7e(a,dat_0c23fe80,a->x39c))return 0;else if(!*a->p40c)return 0;a->b258=9;return 1;}
int func_0c05f858(struct Actor*a){if(!func_0c046e7e(a,dat_0c23fe90,a->x3a4))return 0;else if(!*a->p40c)return 0;a->b32=0;a->b258=6;return 1;}
int func_0c05f8c4(struct Actor*a){if(func_0c05f822(a)||func_0c05f858(a)||func_0c05f7ec(a))return 1;return 0;}
