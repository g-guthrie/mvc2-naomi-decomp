#include "objects.h"
extern void func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *),func_0c02a0c4(struct Actor *,int,int),func_0c1ba7a4(struct Actor *,int),func_0c048bb0(struct Actor *,int);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
void func_0c11aa4c(struct Actor *a,struct ActorSub2a4 *sub)
{
 int zero,command;
 a->b6++;func_0c0442fa(a);zero=0;
 if(!a->b7){float stopped=0.0f;
  a->f92=stopped;a->f96=stopped;a->f104=stopped;a->f108=stopped;a->b1f9=zero;a->f56=a->f41c;func_0c0432ca(a);
  a->b1a1=a->b1a3;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
  func_0c02a0c4(a,21,0);command=a->b1a3;
 }else{
  a->f92/=16.0f;goto horizontal;horizontal:a->f104/=16.0f;goto speed;speed:a->f96/=16.0f;goto vertical;vertical:a->f108/=16.0f;
  a->b1a1=a->b1a3;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
  func_0c02a0c4(a,21,14);command=a->b1a3+3;
 }
 func_0c1ba7a4(a,command);((unsigned char *)sub)[4]=zero;func_0c048bb0(a,5);
 a->b1a1=48;a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++;
}
