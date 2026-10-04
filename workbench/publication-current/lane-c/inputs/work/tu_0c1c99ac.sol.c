#include "objects.h"
extern struct Vec3_tu5_03 table_0c230620[][2],table_0c2306e0;
extern unsigned char table_0c2306ec[];
extern struct ActorGlobalRoot *dat_0c2d9664;
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c1d91a8(int),func_0c1d8ff8(void *,void *);
extern int func_0c1d901e(void);
extern void func_0c1d912a(float *,float *),func_0c1d917e(float *,float *);
void func_0c1c9b28(struct Obj_tu5_03 *);
void func_0c1c99ac(struct Obj_tu5_03 *q) {
 struct Vec3_tu5_03 *from=&table_0c230620[q->b32][0],*to=&table_0c230620[q->b32][1];
 q->pos.x=from->x+(to->x-from->x)/30.0f*q->w28;
 q->pos.y=from->y+(to->y-from->y)/30.0f*q->w28;
 q->pos.z=from->z+(to->z-from->z)/30.0f*q->w28;
}
void func_0c1c9a16(int selector) {
 struct Obj_tu5_03 *q;struct Vec3_tu5_03 *angles=&table_0c2306e0;
 if((q=func_0c0374da(0,11,1))!=0) {
 q->b12c=1;q->b32=selector;q->p16=func_0c1c9b28;
 ((struct Actor *)q)->b34=table_0c2306ec[selector];
 q->l84=((int *)dat_0c2d9664->p0)[((struct Actor *)q)->b34];
 q->pos=table_0c230620[selector][0];
 q->angles.scalar.first=(int)(angles->x*65536.0f/360.0f+0.5f)&65535;
 q->angles.scalar.l44=(int)(angles->y*65536.0f/360.0f+0.5f)&65535;
 q->angles.scalar.l48=(int)(angles->z*65536.0f/360.0f+0.5f)&65535;
 q->lcc=3;q->w28=0;q->w30=0;
 if(selector<2)func_0c1d91a8(q->l84);
 }
}
void func_0c1c9b28(struct Obj_tu5_03 *q) {
 float x,y;
 if(q->w28!=30){q->w28++;func_0c1c99ac(q);}
 if(q->b32<2) {
 q->w30++;if(q->w30>=200)q->w30=0;
 func_0c1d8ff8(((void **)dat_0c2d9664->p0)[((struct Actor *)q)->b34+1],(void *)q->l84);
 while(!func_0c1d901e()) {
 func_0c1d912a(&x,&y);
 if(q->b32&1)x+=q->w30*0.005f;
 else x+=-(q->w30*0.005f)+1.0f;
 func_0c1d917e(&x,&y);
 }
 }
}
