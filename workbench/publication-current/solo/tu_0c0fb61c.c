/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern char func_0c02a026(struct Actor *);
extern void func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *);
extern void func_0c02a0c4(struct Actor *,int,int);
extern void func_0c0429a4(struct Actor *,struct LinkedActorVec3 *,int);
extern void func_0c02a18c(struct Actor *,int,int,int);

/* func_0c0fb61c: no verified twin. Ghidra draft:
*/
void func_0c0fb61c(void) { }

void func_0c0fb6bc(struct Actor *a)
{
 struct LinkedActorVec3 position;
 a->b3f8=2;a->b328=5;a->b3f1=a->b255==6?2:0;
 func_0c02a026(a);
 if(a->b141){
  a->b3f0=0;a->b3f1=0;
  a->b7++;a->b141=0;
  position.x=0.0f;position.y=205.71428f;
  func_0c0429a4(a,&position,1);
 }
}
