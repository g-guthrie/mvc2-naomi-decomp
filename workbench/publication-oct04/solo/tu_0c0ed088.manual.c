#include "objects.h"
extern char func_0c02a026(struct Actor *);
extern void func_0c043352(struct Actor *),func_0c044df4(struct Actor *),func_0c0437b8(struct Actor *),func_0c0438de(struct Actor *),func_0c0344a0(struct Actor *,int),func_0c0421f4(struct Actor *),func_0c0420f8(struct Actor *),func_0c042018(struct Actor *),func_0c0421b8(struct Actor *),func_0c044f1c(struct Actor *);
extern unsigned char func_0c044e52(struct Actor *);
extern struct LinkedActor *func_0c1b2e10(struct LinkedActor *,unsigned char);
extern struct Tbl_ub3_01 *dat_0c2f83f8;
extern void (*table_0c249dcc[])(struct Actor *);
#define HIGH_FRAME (((char *)&a->w150)[1])
#define CLEAR_RECORD a->w1ac=zero;a->b19e=zero;*(unsigned int *)&a->p1c4=zero;dat_0c2f83f8->arr[a->b2]++
#define SIGNAL_SOUND if(!state->b2&&a->b19e){state->b2=1;func_0c0344a0(a,3);}
void func_0c0ed096(struct Actor *),func_0c0ed118(struct Actor *),func_0c0ed190(struct Actor *),func_0c0ed242(struct Actor *),func_0c0ed300(struct Actor *),func_0c0ed340(struct Actor *),func_0c0ed428(struct Actor *),func_0c0ed474(struct Actor *),func_0c0ed53a(struct Actor *);
void func_0c0ed088(struct Actor *a){func_0c043352(a);func_0c0ed096(a);}
void func_0c0ed096(struct Actor *a)
{
 a->f52+=a->f92;a->f92+=a->f104;a->f56+=a->f96;a->f96+=a->f108;func_0c044df4(a);
 if((unsigned char)a->b1fe==1){if(a->b1f9==1)func_0c0ed300(a);else func_0c0ed242(a);}
 else{if(a->b1f9==1)func_0c0ed190(a);else func_0c0ed118(a);}
}
void func_0c0ed118(struct Actor *a)
{
 switch(a->b1e8){
 case 1:if(func_0c02a026(a)<0)goto destroy;if(a->b141){a->b141=0;func_0c1b2e10((struct LinkedActor *)a,0);}break;
 case 0:case 2:if(func_0c02a026(a)<0){destroy:func_0c0437b8(a);return;}break;
 }
}
void func_0c0ed190(struct Actor *a)
{
 struct ActorSub2a4 *state=&a->sub2a4;
 switch(a->b1e8){
 case 0:if(func_0c02a026(a)<0)goto destroy;break;
 case 1:if(func_0c02a026(a)<0)goto destroy;if(a->b141){a->b141=0;func_0c1b2e10((struct LinkedActor *)a,2);}break;
 case 2:if(func_0c02a026(a)<0){destroy:func_0c0437b8(a);return;}SIGNAL_SOUND;if(a->b141){a->b141=0;func_0c1b2e10((struct LinkedActor *)a,3);}break;
 }
}
void func_0c0ed242(struct Actor *a)
{
 struct ActorSub2a4 *state=&a->sub2a4;int zero;
 switch(a->b1e8){
 case 0:case 1:if(func_0c02a026(a)<0)goto destroy;break;
 case 2:
  if(func_0c02a026(a)<0){destroy:func_0c0437b8(a);return;}SIGNAL_SOUND;
  if(HIGH_FRAME){zero=0;HIGH_FRAME=zero;a->b1a1=25;CLEAR_RECORD;}break;
 }
}
void func_0c0ed300(struct Actor *a)
{
 switch(a->b1e8){case 0:case 1:if(func_0c02a026(a)<0)func_0c0437b8(a);break;case 2:func_0c0ed340(a);break;}
}
void func_0c0ed340(struct Actor *a){table_0c249dcc[a->b6](a);}
void func_0c0ed352(struct Actor *a){func_0c02a026(a);if(HIGH_FRAME){a->b6++;a->f92=a->b1d2?14.166666031f:-14.166666031f;a->f104=a->b1d2?-0.72916663f:0.72916663f;}}
void func_0c0ed3c4(struct Actor *a){func_0c043352(a);if(HIGH_FRAME==2){HIGH_FRAME=0;a->f92=0.0f;a->f104=0.0f;}if(func_0c02a026(a)<0)func_0c0437b8(a);}
void func_0c0ed408(struct Actor *a){if(!a->b201){func_0c0421f4(a);func_0c0420f8(a);}func_0c0ed428(a);}
void func_0c0ed428(struct Actor *a)
{
 if(!a->b201)func_0c042018(a);func_0c0421b8(a);if((unsigned char)a->b1fe==1)func_0c0ed53a(a);else func_0c0ed474(a);if(func_0c044e52(a))func_0c044f1c(a);
}
void func_0c0ed474(struct Actor *a)
{
 switch(a->b1e8){
 case 0:if(func_0c02a026(a)<0)goto destroy;break;
 case 1:if(func_0c02a026(a)<0)goto destroy;if(a->b141){a->b141=0;func_0c1b2e10((struct LinkedActor *)a,4);}break;
 case 2:if(func_0c02a026(a)<0){destroy:func_0c0438de(a);return;}if(a->b141){a->b141=0;func_0c1b2e10((struct LinkedActor *)a,5);}break;
 }
}
void func_0c0ed53a(struct Actor *a){if(func_0c02a026(a)<0)func_0c0438de(a);}
