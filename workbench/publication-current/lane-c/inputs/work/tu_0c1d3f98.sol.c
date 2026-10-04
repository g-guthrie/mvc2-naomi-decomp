#include "objects.h"
struct EffectFrame_261474 {int texture;float intensity;};
extern char dat_0c2f8398;
extern struct ActorGlobalRoot *dat_0c2d9650;
extern struct EffectFrame_261474 *table_0c261474[];
extern int table_0c26148c[];
extern float table_0c261294[],table_0c2612a4[],table_0c2612b4[],table_0c2612c4[],table_0c2612dc[],table_0c2612ec[],table_0c261304[],table_0c261314[],table_0c26132c[],table_0c26133c[],table_0c26134c[],table_0c26135c[];
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern void func_0c037688(struct Obj_tu5_03 *);
extern float func_0c1ce8c4(void *,void *,int);
void func_0c1d4010(struct Obj_tu5_03 *),func_0c1d413c(struct Obj_tu5_03 *),func_0c1d4214(struct Obj_tu5_03 *),func_0c1d42ba(struct Obj_tu5_03 *),func_0c1d4398(struct Obj_tu5_03 *),func_0c1d443e(struct Obj_tu5_03 *),func_0c1d457c(struct Obj_tu5_03 *);
void func_0c1d40f8(struct Obj_tu5_03 *,char),func_0c1d419e(struct Obj_tu5_03 *,char),func_0c1d4276(struct Obj_tu5_03 *,char),func_0c1d431c(struct Obj_tu5_03 *,char),func_0c1d43fa(struct Obj_tu5_03 *,char),func_0c1d4534(struct Obj_tu5_03 *,int,char);
void func_0c1d3f98(struct Vec3_tu5_03 *point,int unused,int unused2,unsigned char angle,char category) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,category,1))!=0) {
 dat_0c2f8398++;q->b12c=0;q->p16=func_0c1d4010;q->pos=*point;q->b35=category;
 q->angles.scalar.l48=((int)(angle*737280.0f/360.0f+0.5f)&65535)+0xc000;q->lcc=0x189;
 }
}
void func_0c1d4010(struct Obj_tu5_03 *q) {
 switch(q->w28) {
 case 0:func_0c1d40f8(q,(char)q->b35);func_0c1d43fa(q,(char)q->b35);break;
 case 3:func_0c1d419e(q,(char)q->b35);break;
 case 4:func_0c1d4534(q,0,(char)q->b35);break;
 case 6:func_0c1d4276(q,(char)q->b35);func_0c1d4534(q,1,(char)q->b35);break;
 case 7:func_0c1d4534(q,3,(char)q->b35);break;
 case 9:func_0c1d431c(q,(char)q->b35);break;
 case 10:func_0c1d4534(q,2,(char)q->b35);break;
 case 12:func_0c1d4534(q,5,(char)q->b35);break;
 case 14:func_0c1d4534(q,4,(char)q->b35);break;
 }
 if(q->w28>18){func_0c037688(q);dat_0c2f8398--;return;}q->w28++;
}
void func_0c1d40f8(struct Obj_tu5_03 *parent,char category) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,category,1))!=0) {
 q->b12c=1;q->p16=func_0c1d413c;q->l84=((int *)dat_0c2d9650->p0)[124];q->lcc=1040;q->p200=&parent->f136;
 }
}
void func_0c1d413c(struct Obj_tu5_03 *q) {
 float value;
 if(q->w28>6){func_0c037688(q);return;}
 value=func_0c1ce8c4(table_0c261294,&q->b4,q->w28);q->f80=value;q->f84=value;q->f88=q->f80;
 value=func_0c1ce8c4(table_0c2612a4,&q->b5,q->w28);q->f120=value;q->f124=value;q->f128=q->f120;q->w28++;
}
void func_0c1d419e(struct Obj_tu5_03 *parent,char category) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,category,1))!=0) {
 q->b12c=1;q->p16=func_0c1d4214;q->l84=((int *)dat_0c2d9650->p0)[125];q->lcc=1040;q->p200=&parent->f136;
 }
}
void func_0c1d4214(struct Obj_tu5_03 *q) {
 float value;
 if(q->w28>4){func_0c037688(q);return;}
 value=func_0c1ce8c4(table_0c2612b4,&q->b4,q->w28);q->f80=value;q->f84=value;q->f88=q->f80;
 value=func_0c1ce8c4(table_0c2612c4,&q->b5,q->w28);q->f120=value;q->f124=value;q->f128=q->f120;q->w28++;
}
void func_0c1d4276(struct Obj_tu5_03 *parent,char category) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,category,1))!=0) {
 q->b12c=1;q->p16=func_0c1d42ba;q->l84=((int *)dat_0c2d9650->p0)[126];q->lcc=1040;q->p200=&parent->f136;
 }
}
void func_0c1d42ba(struct Obj_tu5_03 *q) {
 float value;
 if(q->w28>4){func_0c037688(q);return;}
 value=func_0c1ce8c4(table_0c2612dc,&q->b4,q->w28);q->f80=value;q->f84=value;q->f88=q->f80;
 value=func_0c1ce8c4(table_0c2612ec,&q->b5,q->w28);q->f120=value;q->f124=value;q->f128=q->f120;q->w28++;
}
void func_0c1d431c(struct Obj_tu5_03 *parent,char category) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,category,1))!=0) {
 q->b12c=1;q->p16=func_0c1d4398;q->l84=((int *)dat_0c2d9650->p0)[127];q->lcc=1040;q->p200=&parent->f136;
 }
}
void func_0c1d4398(struct Obj_tu5_03 *q) {
 float value;
 if(q->w28>6){func_0c037688(q);return;}
 value=func_0c1ce8c4(table_0c261304,&q->b4,q->w28);q->f80=value;q->f84=value;q->f88=q->f80;
 value=func_0c1ce8c4(table_0c261314,&q->b5,q->w28);q->f120=value;q->f124=value;q->f128=q->f120;q->w28++;
}
void func_0c1d43fa(struct Obj_tu5_03 *parent,char category) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,category,1))!=0) {
 q->b12c=1;q->p16=func_0c1d443e;q->l84=((int *)dat_0c2d9650->p0)[128];q->lcc=1043;q->p200=&parent->f136;
 }
}
void func_0c1d443e(struct Obj_tu5_03 *q) {
 float value;
 if(q->w28>15){func_0c037688(q);return;}
 value=func_0c1ce8c4(table_0c26132c,&q->b4,q->w28);q->f80=value;q->f84=value;q->f88=q->f80;
 q->angles.scalar.first=(int)(func_0c1ce8c4(table_0c26133c,&q->b5,q->w28)*65536.0f/360.0f+0.5f)&65535;
 q->pos.x=func_0c1ce8c4(table_0c26134c,&q->b6,q->w28);
 value=func_0c1ce8c4(table_0c26135c,&q->b7,q->w28);q->f120=value;q->f124=value;q->f128=q->f120;q->w28++;
}
void func_0c1d4534(struct Obj_tu5_03 *parent,int mode,char category) {
 struct Obj_tu5_03 *q;
 if((q=func_0c0374da(0,category,1))!=0) {
 q->b12c=1;q->p16=func_0c1d457c;q->lcc=0x400;q->p200=&parent->f136;q->b32=mode;
 }
}
void func_0c1d457c(struct Obj_tu5_03 *q) {
 float value;
 if(q->w28>=table_0c26148c[q->b32]){func_0c037688(q);return;}
 q->l84=((int *)dat_0c2d9650->p0)[table_0c261474[q->b32][q->w28].texture];
 value=table_0c261474[q->b32][q->w28].intensity;q->f120=value;q->f124=value;q->f128=q->f120;q->w28++;
}
