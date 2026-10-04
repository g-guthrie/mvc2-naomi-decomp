/* Assembled by tools/clone.py from verified twins. */
#include "objects.h"
typedef void (*ActorHandler)(struct Actor *);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void func_0c02a39a(struct Actor *, int);
extern void func_0c02a0c4(struct Actor *, int, int);
extern char func_0c02a026(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern void func_0c043324(struct Actor *);
extern void func_0c0439c4(struct Actor *);
extern void func_0c0437b8(struct Actor *);
extern ActorHandler table_0c240e8c[];
extern int (*table_0c240e7c[])(struct Actor *);
extern void func_0c1910d0(struct Actor *, int);
extern int func_0c037d54(struct Actor *);
extern void func_0c025900(struct Actor *, int, int);
extern void func_0c1d4610(struct Actor *, struct LinkedActorVec3 *);
extern void func_0c048ce6(struct Actor *);
extern ActorHandler table_0c24123c[];
extern ActorHandler table_0c241220[],table_0c24122c[];
extern void func_0c0442fa(struct Actor *),func_0c0432ca(struct Actor *);
extern void func_0c042ad2(struct Actor *,struct LinkedActorVec3 *,int);
extern void func_0c1c1678(struct Actor *,unsigned short *,int);
extern void func_0c191980(struct Actor *,int);

/* func_0c05ae74: no verified twin. Ghidra draft:
*/
void func_0c05ae74(struct Actor *a)
{
 func_0c02a39a(a,0);a->b6++;a->b1f9=2;
 a->f92=14.166666031f;a->f104=0.8333333135f;
 if(!a->b1d2){a->f92=-a->f92;a->f104=-a->f104;}
 a->f96=4.28571415f;a->f108=-0.80357140303f;
 a->b1a1=54;a->w1ac=0;a->b19e=0;a->p1c4=0;
 dat_0c2f83f8->arr[a->b2]++;
 func_0c02a0c4(a,21,6);
}

void func_0c05aef8(struct Actor *a)
{
    func_0c02a026(a);
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (func_0c044e52(a)) {
        a->b6++;
        func_0c02a0c4(a, 20, 0);
        func_0c043324(a);
    }
}

void func_0c05af66(struct Actor *a)
{
    if (func_0c02a026(a) < 0) {
        func_0c02a39a(a, 0);
        func_0c0439c4(a);
    }
}

int func_0c05af8e(struct Actor *a)
{
 unsigned short *input=(unsigned short *)&a->sub2a4;
 int result;
 switch(a->b1f9){case 2:
 if((a->w1fa&0x1c00)&&!a->b1fe&&a->b1a3){
 if((result=func_0c037d54(a))){a->b1f7=8;goto accepted;}
 }
 case 1:
 if(!(a->w1fa&0x800)||!a->b1fe||!a->b1a3)return 0;
 if((result=func_0c037d54(a))){a->b1f7=2;goto accepted;}
 default:break;}
 if(!(a->w1fa&0xc00)||!a->b1a3)return 0;
 if(!a->b1fe){
 if(!(result=func_0c037d54(a)))return 0;
 a->b1f7=0;
 }else{
 if(!(result=func_0c037d54(a)))return 0;
 a->b1f7=1;
 }
 accepted:*input=a->w1fa;return result;
}
