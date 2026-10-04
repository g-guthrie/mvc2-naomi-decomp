#include "objects.h"
extern void func_0c03edcc(struct Actor *,struct Actor *),func_0c045248(struct Actor *,int);
void func_0c05f1b0(struct Actor *a){func_0c03edcc(a->p1c8,a);}
void func_0c05f1be(struct Actor *a)
{
 int four=4;a->b6=a->b7=a->b5=0;
 switch(a->b4c9){case 0:a->b1e9=3;break;case 1:case 2:a->b1e9=four;break;}
 func_0c045248(a,29);
}
void func_0c05f1ee(struct Actor *a)
{
 int four=4;a->b6=a->b7=a->b5=0;
 switch(a->b4c9){case 0:a->b1e9=3;break;case 1:case 2:a->b1e9=four;break;}
 func_0c045248(a,29);
}
void func_0c05f21e(struct Actor *a)
{
 int zero=0,one=1;a->b6=a->b7=a->b5=zero;
 switch(a->b4c9){case 0:a->b1e9=one;goto strength;case 1:a->b1e9=zero;goto strength;case 2:a->b1e9=zero;strength:a->b1a3=one;break;}
 func_0c045248(a,21);
}
void func_0c05f25a(struct Actor *a)
{
 int zero=0,one=1;a->b6=a->b7=a->b5=zero;
 switch(a->b4c9){case 0:a->b1e9=one;goto strength;case 1:a->b1e9=zero;goto strength;case 2:a->b1e9=one;strength:a->b1a3=one;break;}
 func_0c045248(a,21);
}
