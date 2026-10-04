/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern int func_0c03916c(struct Actor *);
extern unsigned int func_0c02849a(void);
extern void func_0c044cbc(struct Actor *),func_0c043352(struct Actor *),func_0c044df4(struct Actor *),func_0c0437b8(struct Actor *),func_0c02a0c4(struct Actor *,int,int),func_0c0346da(struct Actor *,int),func_0c048bb0(struct Actor *,int),func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *);
extern struct LinkedActor *func_0c1af0ec(struct LinkedActor *,unsigned char),*func_0c161300(struct LinkedActor *,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern signed char dat_0c247f2c[],dat_0c247f30[];
extern void (*table_0c247f08[])(struct Actor *),(*table_0c247f14[])(struct Actor *),(*table_0c247f24[])(struct Actor *),(*table_0c247f38[])(struct Actor *);
extern void (*table_0c247f80[])(struct Actor *,struct ActorSub2a4 *);
#define MOVE a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108
#define CLEAR_RECORD a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++
void func_0c0cb560(struct Actor *),func_0c0cb642(struct Actor *),func_0c0cb67a(struct Actor *);
extern void func_0c0437b8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0346da(struct Actor *,int),func_0c1d2a56(struct LinkedActorVec3 *,int);
extern unsigned char func_0c044e52(struct Actor *),func_0c044846(struct Actor *);
extern short dat_0c23b9d0[],dat_0c23ba08[];
extern void (*table_0c248020[])(struct Actor *);
extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *),func_0c046030(struct Actor *),func_0c0464c4(struct Actor *);
extern void func_0c0453c4(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern unsigned char func_0c043d3a(struct Actor *),func_0c044ae4(struct Actor *);
void func_0c03b37a(struct Actor *);
typedef void (*ActorHandler)(struct Actor *);
extern ActorHandler table_0c24123c[];
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c02a0c4(struct Actor *, int, int);
extern void func_0c02a39a(struct Actor *, int);
extern void func_0c0437b8(struct Actor *);
extern ActorHandler table_0c241220[],table_0c24122c[];
extern void func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *);
extern void func_0c042ad2(struct Actor *,struct LinkedActorVec3 *,int);
extern void func_0c1c1678(struct Actor *,unsigned short *,int);
extern void func_0c191980(struct Actor *,int);
extern int func_0c1ec190(void);
extern short dat_0c2406cc[];
extern void (*table_0c2406c4[])(struct Actor *);
extern void (*table_0c2406d4[])(struct Actor *);
extern void (*table_0c248040[])(struct Actor *, struct ActorSub2a4 *);

/* func_0c0ccd44: no verified twin. Ghidra draft:
*/
void func_0c0ccd44(void) { }

/* func_0c0ccd7c: no verified twin. Ghidra draft:
*/
void func_0c0ccd7c(void) { }

void func_0c0ccdae(struct Actor *a)
{
 int zero;
 if(a->b14b){a->b1a1=a->b14b;zero=0;CLEAR_RECORD;a->b14b=zero;}
}

void func_0c0ccde4(struct Actor *a){table_0c248020[a->b6](a);}

/* func_0c0ccdf6: no verified twin. Ghidra draft:
*/
void func_0c0ccdf6(void) { }

void func_0c0cce6a(struct Actor *a)
{
 struct LinkedActorVec3 position;
 a->b3f8=2;a->b328=5;a->b3f1=a->b255==6?2:0;
 func_0c02a026(a);
 if(a->b141&1){a->b3f0=0;a->b3f1=0;a->b141^=1;
 position.x=10.0f;position.y=145.71428f;func_0c042ad2(a,&position,1);}
 if(a->b141&2){a->b6++;a->b141^=1;a->b200=1;a->w3ea=480;func_0c1c1678(a,&a->w3ea,2);}
}

/* func_0c0ccec0: no verified twin. Ghidra draft:
*/
void func_0c0ccec0(void) { }

/* func_0c0ccf4a: no verified twin. Ghidra draft:
*/
void func_0c0ccf4a(void) { }

/* func_0c0ccfa4: no verified twin. Ghidra draft:
*/
void func_0c0ccfa4(void) { }

/* func_0c0cd0b4: no verified twin. Ghidra draft:
*/
void func_0c0cd0b4(void) { }

/* func_0c0cd10a: no verified twin. Ghidra draft:
*/
void func_0c0cd10a(void) { }

void func_0c0cd1d0(struct Actor *a)
{
    table_0c248040[a->b7](a, &a->sub2a4);
}
