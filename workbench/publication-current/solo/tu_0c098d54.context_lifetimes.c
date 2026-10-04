#include "objects.h"
extern unsigned int dat_0c2433d4[];
extern unsigned char dat_0c243330[],dat_0c243340[],dat_0c243350[],dat_0c243380[],dat_0c243360[],dat_0c243370[],dat_0c243394[],dat_0c2433a4[],dat_0c2433c4[];
extern unsigned char func_0c0465cc(struct Actor *),func_0c046b6c(struct Actor *),func_0c0469f4(struct Actor *),func_0c046d3c(struct Actor *),func_0c046e7e(struct Actor *,unsigned char *,unsigned char *),func_0c046dd0(struct Actor *,int);
extern int func_0c046d54(struct Actor *);
extern void func_0c045f1c(struct Actor *),func_0c0463fc(struct Actor *),func_0c047aac(struct Actor *,unsigned char *),func_0c045248(struct Actor *,int),func_0c19d2ac(struct Actor *,int,int);
unsigned char func_0c098e44(struct Actor *),func_0c098ea2(struct Actor *),func_0c098efe(struct Actor *),func_0c098f7c(struct Actor *),func_0c098fc2(struct Actor *),func_0c09906e(struct Actor *),func_0c0990e0(struct Actor *),func_0c09917e(struct Actor *),func_0c099200(struct Actor *);
int func_0c099266(struct Actor *),func_0c0992a6(struct Actor *);
void func_0c098d54(struct Actor *a)
{
 register unsigned int i;register unsigned int limit=112;register unsigned int *out=(unsigned int *)a->p428;register unsigned int *in=dat_0c2433d4;
 i=0;copy_next:*(unsigned int *)((char *)out+i)=*(unsigned int *)((char *)in+i);i+=4;if(i<limit)goto copy_next;
}
void func_0c098d70(struct Actor *a)
{
 if(func_0c0465cc(a))return;if(func_0c046b6c(a))return;if(func_0c0469f4(a))return;if(func_0c046d3c(a))return;
 if(func_0c098f7c(a))return;if(func_0c09906e(a))return;if(func_0c0990e0(a))return;if(func_0c09917e(a))return;if(func_0c099200(a))return;
 if(func_0c098fc2(a))return;if(func_0c098efe(a))return;if(func_0c098e44(a))return;if(func_0c098ea2(a))return;
 if(func_0c099266(a))return;if(func_0c0992a6(a))return;func_0c045f1c(a);func_0c0463fc(a);
}
unsigned char func_0c098e44(struct Actor *a)
{
 struct ActorSub2a4 *context=&a->sub2a4;
 if(!func_0c046e7e(a,dat_0c243330,a->x36c))goto failed;if(context->b0){failed:return 0;}
 func_0c047aac(a,a->x36c);a->b5=0;a->b7=0;a->b6=0;a->b1e9=0;func_0c045248(a,21);return 1;
}
unsigned char func_0c098ea2(struct Actor *a)
{
 struct ActorSub2a4 *context=&a->sub2a4;
 if(!func_0c046e7e(a,dat_0c243340,a->x374))goto failed;if(context->b1){failed:return 0;}
 func_0c047aac(a,a->x374);a->b5=0;a->b7=0;a->b6=0;a->b1e9=1;func_0c045248(a,21);return 1;
}
unsigned char func_0c098efe(struct Actor *a)
{
 struct ActorSub2a4 *context=&a->sub2a4;
 if(!func_0c046e7e(a,dat_0c243350,a->x37c))goto failed;if(context->b2){failed:return 0;}
 func_0c047aac(a,a->x37c);a->b5=0;a->b7=0;a->b6=0;a->b1e9=2;func_0c045248(a,21);return 1;
}
unsigned char func_0c098f7c(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c243380,a->x384))return 0;
 func_0c047aac(a,a->x384);a->b5=0;a->b7=0;a->b6=0;a->b1e9=3;func_0c045248(a,21);return 1;
}
unsigned char func_0c098fc2(struct Actor *a)
{
 struct ActorSub2a4 *context=&a->sub2a4;int zero=0,one=1;
 if(!func_0c046e7e(a,dat_0c243360,a->x38c))goto failed;
 if(a->b1f9==2){if(a->b1d4!=0)goto failed;a->b1d4++;}
 func_0c047aac(a,a->x38c);
 if(!a->b1a3){
  ((struct ActorSubByteState *)context)->b5=zero;*(unsigned char *)&context->s14=zero;a->b5=zero;
  a->b6=a->b1f9==2?one:zero;a->b7=zero;a->b1e9=4;func_0c045248(a,21);return one;
 }
 if(((struct ActorSubByteState *)context)->b5)goto failed;
 ((struct ActorSubByteState *)context)->b5=one;*(unsigned char *)&context->s14=zero;context->b6=zero;func_0c19d2ac(a,13,0);
failed:return 0;
}
unsigned char func_0c09906e(struct Actor *a)
{
 if(!func_0c046e7e(a,dat_0c243370,a->x394))return 0;
 func_0c047aac(a,a->x394);a->b5=0;a->b7=0;a->b6=0;a->b1e9=5;func_0c045248(a,21);return 1;
}
unsigned char func_0c0990e0(struct Actor *a)
{
 struct ActorSub2a4 *context=&a->sub2a4;int zero;
 if(!func_0c046e7e(a,dat_0c243394,a->x39c))goto failed;if(!*a->p40c)goto failed;
 if(a->b1f9==2){if(a->b1d4){if(!a->b1fc){failed:return 0;}}a->b1d4++;}
 func_0c047aac(a,a->x39c);zero=0;((struct ActorSubByteState *)context)->b5=zero;a->b5=zero;a->b6=a->b1f9==2?1:zero;a->b7=zero;a->b1e9=6;func_0c045248(a,29);return 1;
}
unsigned char func_0c09917e(struct Actor *a)
{
 struct ActorSub2a4 *context=&a->sub2a4;
 if(!func_0c046e7e(a,dat_0c2433a4,a->x3a4))goto failed;if(!*a->p40c)goto failed;if(((unsigned char *)context)[9]){failed:return 0;}
 func_0c047aac(a,a->x3a4);((struct ActorSubByteState *)context)->b5=0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=7;func_0c045248(a,29);return 1;
}
unsigned char func_0c099200(struct Actor *a)
{
 struct ActorSub2a4 *context=&a->sub2a4;
 if(!func_0c046e7e(a,dat_0c2433c4,a->x3ac))goto failed;if(!*a->p40c){failed:return 0;}
 func_0c047aac(a,a->x3ac);((struct ActorSubByteState *)context)->b5=0;a->b5=0;a->b7=0;a->b6=0;a->b1e9=8;func_0c045248(a,29);return 1;
}
int func_0c099266(struct Actor *a)
{
 if(!func_0c046d54(a))goto failed;if(!*a->p40c){failed:return 0;}
 a->b1e9=11;a->b5=0;func_0c045248(a,29);a->b6=a->b7=0;return 1;
}
int func_0c0992a6(struct Actor *a)
{
 if(!func_0c046dd0(a,10))return 0;a->b1e9=10;a->b5=0;func_0c045248(a,21);a->b6=a->b7=0;return 1;
}
