/* Unverified placement/scale callbacks:352 linked bytes against356 native; index and float temporary scheduling unresolved. */
#include "objects.h"
extern struct Vec3_tu5_03 dat_0c25c4ec[][3],dat_0c25c54c[];
extern int **dat_0c2d9654;
extern unsigned char dat_0c2f8338[];
extern void func_0c037688(struct Obj_tu5_03 *);
void func_0c1c2348(struct Obj_tu5_03 *a){
 struct Actor *owner;
 a->b12c=0;owner=(struct Actor *)a->p24;
 if(owner->w2a0){a->b12c=1;a->pos=dat_0c25c4ec[owner->b2][owner->b411];}
}
void func_0c1c2394(struct Obj_tu5_03 *a){
 struct Actor *owner;float scaled,offset;int position;
 a->b12c=1;owner=(struct Actor *)a->p24;
 position=owner->b411+owner->b2*2-1;
 a->pos=dat_0c25c54c[position];
 scaled=a->p20->f80*56.0f;offset=(a->b32&1)?scaled:-scaled;
 a->pos.x=offset+a->f104;
 a->l84=(*dat_0c2d9654)[(a->w28>>3)+80];
 a->w28++;
 if(a->w28>40 || !owner->b411 || dat_0c2f8338[0]!=4){a->b12c=0;func_0c037688(a);}
}
void func_0c1c2438(struct Obj_tu5_03 *a){
 struct Actor *owner;
 *(struct EffectScale4 *)&a->f116=*(struct EffectScale4 *)&a->p20->f116;
 owner=(struct Actor *)a->p24;a->f80=(short)owner->w424/144.0f;
}
void func_0c1c2460(struct Obj_tu5_03 *a){
 struct Obj_tu5_03 *owner=a->p24;
 a->b12c=owner->b12c;if(!owner->w28){a->b12c=0;func_0c037688(a);}
}
