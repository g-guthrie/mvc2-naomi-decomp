/* Unverified:342/352 bytes; previous-row register and index scheduling differ. */
/* Resource construction and three-point position interpolation. */
#include "objects.h"
extern struct Obj_tu5_03 *func_0c0374da(int,int,int);
extern struct ActorGlobalRoot *dat_0c2d964c;
struct TimedPosition28 {float time;struct Vec3_tu5_03 position;unsigned char pad16[12];};
extern struct TimedPosition28 dat_0c2629ec[];
extern void func_0c1da38c(float,float *,float *,float *);
void func_0c1e16fc(struct Obj_tu5_03 *);
void func_0c1e16c0(void){
 struct Obj_tu5_03 *a;
 if((a=func_0c0374da(0,5,1))){a->b12c=1;a->p16=func_0c1e16fc;a->l84=((int *)dat_0c2d964c->p0)[36];a->lcc=0x80f;a->w30=1;}
}
void func_0c1e16fc(struct Obj_tu5_03 *a){
 float left,middle,right,fraction;struct TimedPosition28 *previous,*current,*next;int frame;
 switch(a->b4){
 case 0:
 fraction=(float)a->w28/((dat_0c2629ec+a->w30)[1].time-(dat_0c2629ec+a->w30)[0].time);
 func_0c1da38c(fraction,&left,&middle,&right);
 frame=a->w30;previous=&dat_0c2629ec[frame-1];current=&dat_0c2629ec[frame];next=current+1;
 a->pos.x=previous->position.x*left+current->position.x*middle+next->position.x*right;
 a->pos.y=previous->position.y*left+current->position.y*middle+next->position.y*right;
 a->pos.z=previous->position.z*left+current->position.z*middle+next->position.z*right;
 a->w28++;
 if(!((float)a->w28<(dat_0c2629ec+a->w30)[1].time-(dat_0c2629ec+a->w30)[0].time)){a->w28=0;a->w30++;if(a->w30+1>=3U)a->w30=1;}
 break;
 case 1:break;
 }
}
