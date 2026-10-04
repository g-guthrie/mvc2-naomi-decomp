#include "objects.h"
extern struct LinkedActor *func_0c0374da(int,int,int);
extern void func_0c037688(struct LinkedActor *);
extern void func_0c029e70(struct LinkedActor *,int,int);
extern char func_0c029fc4(struct LinkedActor *);
extern void (*table_0c25b00c[])(struct LinkedActor *,struct LinkedActor *);
void func_0c1b458a(struct LinkedActor *a);
void func_0c1b464e(struct LinkedActor *a,struct LinkedActor *parent);
struct LinkedActor *func_0c1b4548(struct LinkedActor *parent,unsigned char mode,unsigned char variant) {
 struct LinkedActor *a;
 if((a=func_0c0374da(0,3,0))!=0) { a->p16=func_0c1b458a; a->p24=parent; a->b32=mode; a->b33=variant; a->w38=0x2a01; }
 return a;
}
void func_0c1b458a(struct LinkedActor *a) { table_0c25b00c[a->b4](a,a->p24); }
void func_0c1b459e(struct LinkedActor *a,struct LinkedActor *parent) {
 int animation;
 a->b4++;
 a->sdc=parent->sdc; a->sdc.b12c=1;
 a->b2=parent->b2; a->b1=parent->b1;
 a->v80.x=parent->v80.x; a->v80.y=parent->v80.y;
 a->b1a3=parent->b1a3; a->b1a4=parent->b1a4;
 a->b48=parent->b48; a->v80=parent->v80;
 a->b36=parent->b36; a->b49=-1;
 a->wcc.dword_value=(unsigned short)parent->sdc.w158.short_value;
 if(!a->b32) { if(!a->b33) animation=48; else animation=49; }
 else { if(a->b33) a->sdc.w130^=1; animation=50; }
 func_0c029e70(a,27,animation);
 func_0c1b464e(a,parent);
}
void func_0c1b464e(struct LinkedActor *a,struct LinkedActor *parent) {
 if(a->wcc.dword_value!=(unsigned short)parent->sdc.w158.short_value || a->b1!=parent->b1) goto hide;
 a->b36=parent->b36; a->f52=parent->f52;
 if(!a->b32) { a->f56=((struct Actor *)parent)->f41c; a->sdc.w130=parent->sdc.w130; }
 else a->f56=parent->f56;
 if(func_0c029fc4(a)>=0 || a->b32) return;
hide:
 a->b4++; a->sdc.b12c=0;
}
void func_0c1b46e8(struct LinkedActor *a) { a->b4++; a->sdc.b12c=0; }
void func_0c1b46f6(struct LinkedActor *a) { func_0c037688(a); }
