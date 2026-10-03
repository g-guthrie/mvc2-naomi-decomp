#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0442fa(struct Actor *),func_0c02a0c4(struct Actor *,int,int),func_0c025900(struct Actor *,char,char);
extern struct LinkedActor *func_0c19715c(struct LinkedActor *,int,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
void func_0c090910(struct Actor *a)
{
 int two=2,zero;
 a->b3f8=two;a->b328=5;a->b1f5=two;func_0c02a026(a);
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if(--a->s28==0){a->b7++;a->b1a1=56;zero=0;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;func_0c0442fa(a);func_0c02a0c4(a,22,2);}
}
void func_0c0909b6(struct Actor *a,struct ActorSub2a4 *state)
{
 int zero;register float gravity, fzero;float offset;
 a->b3f8=2;a->b328=5;func_0c02a026(a);gravity=-0.9375f;fzero=0;
 if(a->b14b){zero=0;if(a->b19e){a->b1a1=a->b14b;a->w1ac=zero;a->b19e=zero;*(void **)&a->p1c4=(void *)zero;dat_0c2f83f8->arr[a->b2]++;a->w1ac|=16;a->b14b=zero;}
 else{a->b3f9=zero;a->b3f8=zero;a->b327=zero;a->b328=zero;a->b6++;a->b7=1;state->b3=zero;func_0c025900(a,0,13);a->f92=fzero;a->f96=fzero;a->f104=fzero;a->f108=gravity;func_0c02a0c4(a,22,6);}}
 if(a->b141){a->b7++;func_0c025900(a,0,13);a->f92=-10;a->f104=fzero;a->f96=4.28571415f;a->f108=gravity;if(a->b1d2)a->f92=-a->f92;offset=53.3333321f;if(a->b1d2)offset=-53.3333321f;a->f52+=offset;func_0c19715c((struct LinkedActor *)a,0,0);}
}
