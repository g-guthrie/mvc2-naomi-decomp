#include "objects.h"
extern struct LinkedActor *func_0c0374da(struct LinkedActor *,int,int);
extern void func_0c037688(struct LinkedActor *),func_0c034a1c(int);
extern void func_0c04c638(unsigned int *,unsigned int *),func_0c04c5d6(unsigned int *,unsigned int *),func_0c04c592(unsigned int *,unsigned int *),func_0c04c428(unsigned int *,unsigned int *);
extern struct NumericHudSource dat_0c2f8338;
extern struct ActorFlags *dat_0c2d6f84;
extern unsigned short dat_0c2d6f24,dat_0c2d6f38;
extern short dat_0c25dad4[];
extern const char *dat_0c25dab8[];
extern char dat_0c22ff0c[],dat_0c22ff10[],dat_0c22ff18[],dat_0c22ff1c[],dat_0c22ff20[];
extern int func_0c1fba18(char *,const char *,...);
extern void (*dat_0c25dae4[])(struct LinkedActor *),(*dat_0c25daf4[])(struct LinkedActor *);
struct LinkedActor *func_0c1c43ee(struct LinkedActor *,int);
void func_0c1c4464(struct LinkedActor *),func_0c1c44a0(struct LinkedActor *),func_0c1c4524(struct LinkedActor *),func_0c1c45b2(struct LinkedActor *),func_0c1c45d4(struct LinkedActor *),func_0c1c465a(struct LinkedActor *),func_0c1c46aa(struct LinkedActor *);
void func_0c1c4294(int group)
{
 struct LinkedActor *root,*a;struct NumericHudActor *n;
 func_0c034a1c(63);
 if(!group){
 root=func_0c1c43ee(0,3);if(!root)return;
 n=(struct NumericHudActor *)root;root->f56=-10.0f;func_0c04c638(&n->leading,&n->value);func_0c1c45d4(root);
 a=func_0c1c43ee(root,2);if(!a)goto end;n=(struct NumericHudActor *)a;a->f56=0.0f;func_0c04c5d6(&n->leading,&n->value);func_0c1c45d4(a);
 a=func_0c1c43ee(a,1);if(!a)goto end;n=(struct NumericHudActor *)a;a->f56=5.0f;func_0c04c592(&n->leading,&n->value);func_0c1c45d4(a);
 a=func_0c1c43ee(a,0);if(!a)goto end;n=(struct NumericHudActor *)a;a->f56=10.0f;func_0c04c428(&n->leading,&n->value);func_0c1c45d4(a);
 }else{
 root=func_0c1c43ee(0,6);if(!root)return;root->f56=0.0f;((struct NumericHudActor *)root)->value=dat_0c2f8338.seconds;func_0c1c46aa(root);
 a=func_0c1c43ee(root,5);if(!a)goto end;a->f56=5.0f;((struct NumericHudActor *)a)->value=dat_0c2f8338.counts[dat_0c2f8338.selector];func_0c1c465a(a);
 a=func_0c1c43ee(a,4);if(!a)goto end;a->f56=10.0f;((struct NumericHudActor *)a)->value=dat_0c2f8338.counts8[dat_0c2f8338.selector];func_0c1c465a(a);
 }
end:a->b33=1;
}
struct LinkedActor *func_0c1c43ee(struct LinkedActor *parent,int variant)
{
 struct LinkedActor *a;int mode=parent?3:1;
 a=func_0c0374da(parent,12,mode);
 if(a){a->sdc.b12c=0;a->p16=func_0c1c4464;a->p84=0;a->wcc.dword_value=0;((struct MeActor *)a)->w26=8;a->b32=variant;a->f52=0.0f;a->f56=0.0f;a->f60=-40.0f;a->p20=parent;a->s28=dat_0c25dad4[variant];a->s30=120-a->s28;}return a;
}
void func_0c1c4464(struct LinkedActor *a){dat_0c25dae4[a->b4](a);}
void func_0c1c4476(struct LinkedActor *a){a->b4++;a->f52=0.0f;a->f60=-40.0f;a->wd4.pointer_value=(struct Actor *)dat_0c25dab8[a->b32];a->id8=0;func_0c1c44a0(a);}
void func_0c1c44a0(struct LinkedActor *a){dat_0c25daf4[(unsigned char)a->b5](a);}
void func_0c1c44dc(struct LinkedActor *a)
{
 if(((dat_0c2d6f84->b24&1)&&(dat_0c2d6f24&0x360))||((dat_0c2d6f84->b24&2)&&(dat_0c2d6f38&0x360))||--a->s28<=0){a->b5++;a->sdc.b12c=1;func_0c1c4524(a);}
}
void func_0c1c4524(struct LinkedActor *a)
{
 int more;
 if(a->b33){
 if((((dat_0c2d6f84->b24&1)&&(dat_0c2d6f24&0x360))||((dat_0c2d6f84->b24&2)&&(dat_0c2d6f38&0x360)))&&a->s30>=30)a->s30=30;
 if(--a->s30<=0){if(a->p20){more=1;do{struct LinkedActor *child=(struct LinkedActor *)((struct Actor *)a)->p12;if(!child->p20)more=0;func_0c1c45b2(child);}while(more);}func_0c1c45b2(a);}
 }
}
void func_0c1c45b2(struct LinkedActor *a){a->sdc.b12c=0;func_0c037688(a);}
void func_0c1c45d4(struct LinkedActor *a)
{
 struct NumericHudActor *n=(struct NumericHudActor *)a;unsigned int leading=n->leading,i;signed char *text=n->glyphs;
 if(leading>9)leading=9;func_0c1fba18((char *)text,dat_0c22ff0c,leading);
 if(leading)func_0c1fba18((char *)text+1,dat_0c22ff10,n->value);else{text[0]=' ';func_0c1fba18((char *)text+1,dat_0c22ff18,n->value);}
 for(i=0;i<9;i++){if((text[i]-='0')<0)text[i]=-1;}
}
void func_0c1c465a(struct LinkedActor *a)
{
 struct NumericHudActor *n=(struct NumericHudActor *)a;unsigned int value=n->value,i;signed char *text=n->glyphs;
 if(value>=1000)value=999;func_0c1fba18((char *)text,dat_0c22ff1c,value);
 for(i=0;i<3;i++){if((text[i]-='0')<0)text[i]=-1;}
}
void func_0c1c46aa(struct LinkedActor *a)
{
 unsigned short seconds=((struct NumericHudActor *)a)->value,hours,rest,part,i;unsigned char *text=(unsigned char *)((struct NumericHudActor *)a)->glyphs;
 hours=seconds/3600;
 if(hours>9){text[0]='9';text[1]='5';text[2]='9';text[3]='9';text[4]='9';}else{ text[0]=hours+'0';rest=seconds%3600;part=rest/60;func_0c1fba18((char *)text+1,dat_0c22ff20,part);part=(rest%60)*100/60;func_0c1fba18((char *)text+3,dat_0c22ff20,part);}
 for(i=0;i<5;i++){if((text[i]-='0')<0)text[i]=255;}
}
