/* Exact 0x0c063dd4..0x0c063ed0: update motion, stop horizontal movement on a sign reversal, process animation feedback, and advance the action state. */
#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0346da(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern int func_0c047b98(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
void func_0c063dd4(struct Actor *a)
{
 float old_speed;
 int zero;
 func_0c02a026(a);
 old_speed=a->f92;
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;
 if((a->f92>0.0f&&old_speed<0.0f)||(a->f92<0.0f&&old_speed>0.0f)){
 float stopped=0.0f;a->f92=stopped;a->f104=stopped;
 }
 zero=0;
 if(a->b14b){a->b14b=zero;func_0c0346da(a,22);}
 if(func_0c047b98(a)){
 if(!a->b525){if(a->b141){a->b141=zero;a->b142=1;}}
 else if(a->b141){a->b141=zero;if(a->b142!=1)a->b142--;}
 }
 if(func_0c044e52(a)){a->b6++;func_0c02a0c4(a,15,3);}
}
