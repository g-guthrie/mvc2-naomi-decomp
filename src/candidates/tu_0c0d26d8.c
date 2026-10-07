/* Candidate: case 2 stores 4 through r2 and the shared b1a3 store uses r1 where retail uses r3/r2 (4 bytes). */
#include "objects.h"
extern void func_0c045248(struct Actor *,int);
void func_0c0d26d8(struct Actor *a)
{
 int zero=0;a->b5=zero;a->b7=zero;a->b6=zero;
 switch(a->b4c9){case 0:a->b1e9=6;goto light;case 1:a->b1e9=5;goto light;case 2:a->b1e9=4;goto light;light:a->b1a3=1;break;}
 func_0c045248(a,21);
}
