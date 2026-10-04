/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c02a39a(struct Actor *,int),func_0c0437b8(struct Actor *);
extern unsigned int func_0c02849a(void);
extern void func_0c195384(struct Actor *,int);
extern void func_0c02a684(struct Actor *,int,int,int);
extern void (*table_0c24254c[])(struct Actor *,struct MotionContext8a3 *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *),func_0c02a0c4(struct Actor *,int,int);

/* func_0c0ff43c: no verified twin. Ghidra draft:
*/
void func_0c0ff43c(void) { }

/* func_0c0ff4ae: no verified twin. Ghidra draft:
*/
void func_0c0ff4ae(void) { }

void func_0c0ff51c(register struct Actor *a,struct MotionContext8a3 *m)
{
 float stopped=0.0f;
 a->b6++;a->b1f9=0;a->f56=a->f41c;
 a->f92=stopped;a->f96=stopped;a->f104=stopped;a->f108=stopped;
 a->b1a1=67;a->w1ac=0;a->b19e=0;a->p1c4=0;
 dat_0c2f83f8->arr[a->b2]++;
 func_0c0442fa(a);func_0c0432ca(a);func_0c02a0c4(a,21,12);
}
