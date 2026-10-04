#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *),func_0c02a0c4(struct Actor *,int,int);
extern struct LinkedActor *func_0c152460(struct Actor *,int);
extern void (*table_0c2448b0[])(struct Actor *);
void func_0c0aedc4(struct Actor *a)
{
 a->b3f8=2;a->b328=5;
 if(a->f108!=0.0f)a->f108-=1.0f;
 a->f80=*(float *)&a->pad10b2[8]+1.0f*(a->f108/a->f104);
 a->f84=*(float *)&a->pad10b2[12]+1.0f*(a->f108/a->f104);
 if(func_0c02a026(a)<0){
  int zero=0;a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;
  *(struct LinkedActorVec3 *)&a->f80=*(struct LinkedActorVec3 *)&a->pad10b2[8];
  func_0c0437b8(a);
 }
}
void func_0c0aee50(struct Actor *a)
{
 if(!a->b6){a->b6++;func_0c02a0c4(a,21,14);}
 else if(func_0c02a026(a)<0)func_0c0437b8(a);
 else if(a->b141){a->b141=0;func_0c152460(a,0);}
}
void func_0c0aeea0(struct Actor *a){table_0c2448b0[a->b6](a);}
