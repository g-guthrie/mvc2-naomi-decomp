#include "objects.h"
extern struct ActorGlobalRoot *dat_0c2d9678;
extern struct Vec3_tu5_03 table_0c230b48[];
extern int table_0c231dc0[];
extern struct Vec3_tu5_03 *table_0c260a7c[];
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c1cd180(struct Obj_tu5_03 *);
void func_0c1ccf2c(void);
void func_0c1ccfb2(struct Obj_tu5_03 *);
void func_0c1cd0f8(int);
void func_0c1ccf0c(void) {
 int i;func_0c1ccf2c();for(i=0;i<7;i++)func_0c1cd0f8(i);
}
void func_0c1ccf2c(void) {
 struct Obj_tu5_03 *q;struct Vec3_tu5_03 *angles=&table_0c230b48[0];
 if((q=func_0c0374da(0,5,1))!=0) {
 q->b12c=1;q->p16=func_0c1ccfb2;q->l84=((int *)dat_0c2d9678->p0)[0];q->lcc=0x80e;q->b32=0;
 q->angles.scalar.first=(int)(angles->x*65536.0f/360.0f+0.5f)&65535;
 q->angles.scalar.l44=(int)(angles->y*65536.0f/360.0f+0.5f)&65535;
 q->angles.scalar.l48=(int)(angles->z*65536.0f/360.0f+0.5f)&65535;
 }
}
void func_0c1ccfb2(struct Obj_tu5_03 *q) {
 int duration;struct Vec3_tu5_03 *previous,*next;
 switch(q->b4) {
 case 0:
 duration=table_0c231dc0[q->w30+1]-table_0c231dc0[q->w30];
 previous=&table_0c230b48[q->w30];next=&table_0c230b48[q->w30+1];
 q->angles.scalar.first+=(int)((next->x-previous->x)/duration*65536.0f/360.0f+0.5f)&65535;
 q->angles.scalar.l44+=(int)((next->y-previous->y)/duration*65536.0f/360.0f+0.5f)&65535;
 q->angles.scalar.l48+=(int)((next->z-previous->z)/duration*65536.0f/360.0f+0.5f)&65535;
 if(++q->w28>=duration) {
 q->w28=0;
 q->angles.scalar.first=(int)(next->x*65536.0f/360.0f+0.5f)&65535;
 q->angles.scalar.l44=(int)(next->y*65536.0f/360.0f+0.5f)&65535;
 q->angles.scalar.l48=(int)(next->z*65536.0f/360.0f+0.5f)&65535;
 if((unsigned int)++q->w30>=49)q->b4++;
 }
 break;
 case 1:break;
 }
}
void func_0c1cd0f8(int index) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,5,1))!=0) {
 q->b12c=1;q->p16=func_0c1cd180;q->l84=((int *)dat_0c2d9678->p0)[index+1];
 q->lcc=0x801;q->b32=index;q->pos=*table_0c260a7c[index];
 }
}
