/* Candidate: func_0c09d7b8 stores case 2 through r2 and the shared b1a3 through r3 (retail r3/r2, 6 bytes); the other four functions match. */
#include "objects.h"
extern void *func_0c1fba00(void *,int,unsigned int);
extern void func_0c045248(struct Actor*,int);
void func_0c09d758(struct Actor *a);
void func_0c09d788(struct Actor *a);
void func_0c09d7b8(struct Actor *a);
void func_0c09d7fa(struct Actor *a);

void func_0c09d840(struct Actor *a);
void func_0c09d758(struct Actor *a)
{
 int zero=0;a->b5=zero;a->b7=zero;a->b6=zero;
 switch(a->b4c9){case 0:a->b1e9=8;break;case 1:a->b1e9=6;break;case 2:a->b1e9=8;break;}
 func_0c045248(a,29);
}

void func_0c09d788(struct Actor *a)
{
 int zero=0;a->b5=zero;a->b7=zero;a->b6=zero;
 switch(a->b4c9){case 0:a->b1e9=8;break;case 1:a->b1e9=6;break;case 2:a->b1e9=8;break;}
 func_0c045248(a,29);
}

void func_0c09d7b8(struct Actor *a)
{
 int zero=0;a->b5=zero;a->b7=zero;a->b6=zero;
 switch(a->b4c9){case 0:a->b1e9=9;goto light;case 1:a->b1e9=4;goto light;case 2:a->b1e9=5;light:a->b1a3=1;break;}
 func_0c045248(a,21);
}

void func_0c09d7fa(struct Actor *a)
{
 int zero=0,one=1;a->b5=zero;a->b7=zero;a->b6=zero;
 switch(a->b4c9){case 0:a->b1e9=one;break;case 1:a->b1e9=4;break;case 2:goto two;two:a->b1e9=5;break;default:goto call;}
 a->b1a3=one;
call:goto tail;
tail:func_0c045248(a,21);
}
void func_0c09d840(struct Actor *a)
{
 struct ActorSub2a4 *sub=&a->sub2a4;
 unsigned char keep=sub->b2;
 func_0c1fba00(sub,0,128);
 sub->b2=keep;
}

