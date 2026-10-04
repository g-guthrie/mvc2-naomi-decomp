#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c02a18c(struct Actor *,int,int,int),func_0c043324(struct Actor *),func_0c0437b8(struct Actor *),func_0c02a0c4(struct Actor *,int,int);
extern void (*table_0c2448f8[])(struct Actor *);
void func_0c0af7cc(struct Actor *a)
{
 func_0c02a026(a);a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 a->s28--;if(--a->s30<0)a->b7++;
}
void func_0c0af82c(struct Actor *a)
{
 int zero;struct ActorSubByteState *state;
 a->pad7fb[0]=3;func_0c02a026(a);a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(--a->s28<0){a->b6++;zero=0;a->i72=zero;state=(struct ActorSubByteState *)&a->sub2a4;a->b7=zero;state->b1=1;a->f56=a->f41c;a->b1f9=zero;a->i72=zero;a->f80=1;a->f84=1;func_0c02a18c(a,21,11,5);func_0c043324(a);}
}
void func_0c0af8d2(struct Actor *a)
{
 if(func_0c02a026(a)>=0)return;
 a->f92=0;a->f96=0;a->f104=0;a->f108=0;func_0c0437b8(a);
}
void func_0c0af904(struct Actor *a){table_0c2448f8[a->b6](a);}
void func_0c0af916(struct Actor *a)
{
 a->b6++;a->f56=a->f41c;func_0c02a0c4(a,20,2);a->f92=0;a->f96=0;a->f104=0;a->f108=0;
}
