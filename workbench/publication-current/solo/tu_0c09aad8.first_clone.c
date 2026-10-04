/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c0437b8(struct Actor *),func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *);
extern void func_0c02a39a(struct Actor *,int),func_0c048bb0(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int),func_0c1a72d4(struct Actor *,int);
extern struct Actor *func_0c157dcc(struct Actor *,unsigned char,unsigned char),*func_0c158084(struct Actor *,unsigned char),*func_0c1a7302(struct Actor *,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c2450dc[])(struct Actor *),(*table_0c2450f0[])(struct Actor *,struct ActorSub2a4 *);
void func_0c0b743a(struct Actor *),func_0c0b76f8(struct Actor *,struct ActorSub2a4 *);
extern void func_0c0437b8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *),func_0c0346da(struct Actor *,int),func_0c1d2a56(struct LinkedActorVec3 *,int);
extern unsigned char func_0c044e52(struct Actor *),func_0c044846(struct Actor *);
extern short dat_0c23b9d0[],dat_0c23ba08[];
extern void (*table_0c243528[])(struct Actor *);
extern int func_0c043c66(struct Actor *);
extern unsigned char func_0c043a10(struct Actor *),func_0c046030(struct Actor *),func_0c0464c4(struct Actor *);
extern void func_0c0453c4(struct Actor *,int),func_0c02a0c4(struct Actor *,int,int);
extern unsigned char func_0c043d3a(struct Actor *),func_0c044ae4(struct Actor *);
void func_0c03b37a(struct Actor *);
extern void func_0c0437b8(struct Actor *);
extern int func_0c1ec190(void);
extern short dat_0c2406cc[];
extern void (*table_0c2406c4[])(struct Actor *);
extern void (*table_0c2406d4[])(struct Actor *);
extern void (*table_0c243530[])(struct Actor *, struct ActorSub2a4 *);
extern void func_0c02a0c4(struct Actor *, int, int);
extern void (*table_0c243548[])(struct Actor *, struct ActorSub2a4 *);
extern char func_0c02a026(struct Actor*);
extern struct Tbl_ub3_01*dat_0c2f83f8;
extern void func_0c0437b8(struct Actor*),func_0c0438de(struct Actor*),func_0c043324(struct Actor*),func_0c0442fa(struct Actor*),func_0c0432ca(struct Actor*),func_0c02a0c4(struct Actor*,int,int);
extern void (*table_0c2435a0[])(struct Actor*);

/* func_0c09aad8: no verified twin. Ghidra draft:
*/
void func_0c09aad8(void) { }

/* func_0c09ab26: no verified twin. Ghidra draft:
*/
void func_0c09ab26(void) { }

/* func_0c09ab4a: no verified twin. Ghidra draft:
*/
void func_0c09ab4a(void) { }

void func_0c09abee(struct Actor *a){if(func_0c02a026(a)<0){func_0c0437b8(a);return;}if(a->w150){if(!a->w130)a->f52+=*(short *)&a->w150*1.66666663f;else a->f52-=*(short *)&a->w150*1.66666663f;a->w150=0;}}

/* func_0c09ac38: no verified twin. Ghidra draft:
*/
void func_0c09ac38(void) { }

void func_0c09ac72(struct Actor *a){table_0c243528[a->b6](a);}

void func_0c09ac84(struct Actor *a)
{
    table_0c243530[a->b7](a, &a->sub2a4);
}

/* func_0c09ac9a: no verified twin. Ghidra draft:
*/
void func_0c09ac9a(void) { }

/* func_0c09acf2: no verified twin. Ghidra draft:
*/
void func_0c09acf2(void) { }

/* func_0c09ada0: no verified twin. Ghidra draft:
*/
void func_0c09ada0(void) { }

/* func_0c09ada8: no verified twin. Ghidra draft:
*/
void func_0c09ada8(void) { }

/* func_0c09aec4: no verified twin. Ghidra draft:
*/
void func_0c09aec4(void) { }

/* func_0c09af30: no verified twin. Ghidra draft:
*/
void func_0c09af30(void) { }

void func_0c09af70(struct Actor *a)
{
    table_0c243548[a->b7](a, &a->sub2a4);
}

/* func_0c09af86: no verified twin. Ghidra draft:
*/
void func_0c09af86(void) { }

/* func_0c09afea: no verified twin. Ghidra draft:
*/
void func_0c09afea(void) { }

/* func_0c09b040: no verified twin. Ghidra draft:
*/
void func_0c09b040(void) { }

/* func_0c09b08e: no verified twin. Ghidra draft:
*/
void func_0c09b08e(void) { }

/* func_0c09b194: no verified twin. Ghidra draft:
*/
void func_0c09b194(void) { }

void func_0c09b20c(struct Actor*a){a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;if(!(a->f56>a->f41c)){a->b7++;a->f56=a->f41c;a->b1f9=0;func_0c02a0c4(a,1,3);func_0c043324(a);return;}if(func_0c02a026(a)<0)func_0c0438de(a);}

/* func_0c09b29a: no verified twin. Ghidra draft:
*/
void func_0c09b29a(void) { }

/* func_0c09b2c6: no verified twin. Ghidra draft:
*/
void func_0c09b2c6(void) { }
