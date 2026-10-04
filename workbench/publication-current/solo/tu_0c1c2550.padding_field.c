#include "objects.h"
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern short dat_0c2f891a;
extern void func_0c037688(struct Actor *);
void func_0c1c2550(struct Actor *a)
{
 struct Actor *owner=(struct Actor *)((struct LinkedActor *)a)->p24;
 struct Actor *(*actors)[3];
 if((char)a->b7!=(char)owner->b411)goto cleanup;
 a->b7=owner->b411;
 if(!a->b7||owner->b0)goto cleanup;
 a->b12c=0;
 actors=(struct Actor *(*)[3])((char *)dat_0c2f83f8+24);
 if(actors[owner->b2^1][0]->pad10b0b[0x277-0x25e])return;
 if(actors[owner->b2^1][1]->pad10b0b[0x277-0x25e])return;
 if(actors[owner->b2^1][2]->pad10b0b[0x277-0x25e])return;
 if(dat_0c2f891a>=0)a->b12c=1;
 if(--a->s30>0)return;
 cleanup:a->b12c=0;func_0c037688(a);
}
