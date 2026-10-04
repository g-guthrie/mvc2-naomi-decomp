/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern void func_0c0437b8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0346da(struct Actor *,int),func_0c1d2a56(struct LinkedActorVec3 *,int);
extern unsigned char func_0c044e52(struct Actor *),func_0c044846(struct Actor *);
extern short dat_0c23b9d0[],dat_0c23ba08[];
extern void (*table_0c2450dc[])(struct Actor *);
extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *),func_0c046030(struct Actor *),func_0c0464c4(struct Actor *);
extern char func_0c02a026(struct Actor *);
extern void func_0c0453c4(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern unsigned char func_0c043d3a(struct Actor *),func_0c044ae4(struct Actor *);
void func_0c03b37a(struct Actor *);
extern void func_0c0437b8(struct Actor *),func_0c0438de(struct Actor *),func_0c048ce6(struct Actor *),func_0c03489c(struct Actor *),func_0c0c201a(struct Actor *);
extern void func_0c025762(void);
extern void func_0c02a0c4(struct Actor *,int,int),func_0c045248(struct Actor *,int),func_0c03edcc(struct Actor *,struct Actor *);
extern void func_0c1d4610(struct Actor *,struct LinkedActorVec3 *);
extern void (*table_0c246d8c[])(struct Actor *),(*table_0c246d94[])(struct Actor *),(*table_0c246d9c[])(struct Actor *);
extern void func_0c0437b8(struct Actor *);
extern int func_0c1ec190(void);
extern short dat_0c2406cc[];
extern void (*table_0c2406c4[])(struct Actor *);
extern void (*table_0c2406d4[])(struct Actor *);
extern void (*table_0c2450f0[])(struct Actor *, struct ActorSub2a4 *);
extern void func_0c02a0c4(struct Actor *, int, int);

/* func_0c0b7358: no verified twin. Ghidra draft:
*/
void func_0c0b7358(void) { }

/* func_0c0b7396: no verified twin. Ghidra draft:
*/
void func_0c0b7396(void) { }

void func_0c0b739c(struct Actor *a){table_0c2450dc[a->b6](a);}

/* func_0c0b73ae: no verified twin. Ghidra draft:
*/
void func_0c0b73ae(void) { }

/* func_0c0b74cc: no verified twin. Ghidra draft:
*/
void func_0c0b74cc(void) { }

/* func_0c0b74ec: no verified twin. Ghidra draft:
*/
void func_0c0b74ec(void) { }

/* func_0c0b755a: no verified twin. Ghidra draft:
*/
void func_0c0b755a(void) { }

void func_0c0b75c8(struct Actor *a)
{
 if(func_0c02a026(a)<0){func_0c0437b8(a);return;}
 if(a->b141){
  a->b141=0;a->b1d2^=1;a->w130=(unsigned char)a->b1d2;
  if(!a->w130)a->f52-=26.666666031f;else a->f52+=26.666666031f;
 }
}

/* func_0c0b75f8: no verified twin. Ghidra draft:
*/
void func_0c0b75f8(void) { }

void func_0c0b7640(struct Actor *a)
{
    table_0c2450f0[a->b7](a, &a->sub2a4);
}

/* func_0c0b7656: no verified twin. Ghidra draft:
*/
void func_0c0b7656(void) { }
