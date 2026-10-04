#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern struct LinkedActor *func_0c148d54(struct Actor *,unsigned char,unsigned char);
extern void func_0c19d2ac(struct Actor *,int,int);
void func_0c09bdf0(struct Actor *a)
{
 a->b3f8=2;a->b328=5;func_0c02a026(a);
 if(a->b141){a->b6++;a->b141=0;func_0c148d54(a,1,(a->s30&3)+128);func_0c19d2ac(a,6,a->s30&3);a->s30++;}
}
void func_0c09be48(struct Actor *a)
{
 a->b3f8=2;a->b328=5;func_0c02a026(a);
 if(a->b141){
  register int zero=0;
  a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;
  a->b6++;a->b141=zero;a->b1f9=2;
  if(a->b1d2)a->f92=-10.0f;else a->f92=10.0f;
  a->f104=0;a->f96=9.642857f;a->f108=-0.80357140303f;
  func_0c19d2ac(a,14,0);
 }
}
