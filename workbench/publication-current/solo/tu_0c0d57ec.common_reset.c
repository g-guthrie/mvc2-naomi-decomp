#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c0344a0(struct Actor *,int),func_0c0437b8(struct Actor *);
extern struct LinkedActor *func_0c1b1050(struct Actor *,unsigned char,unsigned char);
void func_0c0d57ec(struct Actor *a,struct ActorSub2a4 *context)
{
 a->b3f8=2;a->b328=5;func_0c02a026(a);
 switch((signed char)context->w8){
  case 0:return;
  case 1:a->b7+=2;a->s28=23;func_0c02a0c4(a,22,5);return;
  case 2:func_0c0344a0(a,23);break;
 }
 a->b7++;a->b3f9=0;a->b3f8=0;a->b327=0;a->b328=0;
}
void func_0c0d585e(struct Actor *a,struct ActorSub2a4 *context)
{
 func_0c02a026(a);
 if(((signed char *)context)[8]<0){a->f92=0;a->f96=0;a->f104=0;a->f108=0;func_0c0437b8(a);}
}
void func_0c0d589c(struct Actor *a,struct ActorSub2a4 *context)
{
 a->b3f8=2;a->b328=5;
 if(--a->s28==0){a->b7++;a->s28=60;((unsigned char *)context)[9]=1;a->s30=0;a->b34=5;func_0c1b1050(a,2,0);}
}
